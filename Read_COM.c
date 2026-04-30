#include <windows.h>
#include <stdio.h>

int main() {
    HANDLE hCOM1, hCOM2;
    DCB dcb1 = {0}, dcb2 = {0};
    COMMTIMEOUTS timeouts1 = {0}, timeouts2 = {0};
    char buffer[256];
    DWORD bytesRead;

    // M? COM3
    hCOM1 = CreateFile("\\\\.\\COM3", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hCOM1 == INVALID_HANDLE_VALUE) { printf("Không m? COM3\n"); return 1; }

    // M? COM4
    hCOM2 = CreateFile("\\\\.\\COM5", GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hCOM2 == INVALID_HANDLE_VALUE) { printf("Không m? COM4\n"); return 1; }

    // C?u hình COM3
    SecureZeroMemory(&dcb1, sizeof(dcb1));
    dcb1.DCBlength = sizeof(dcb1);
    GetCommState(hCOM1, &dcb1);
    dcb1.BaudRate = CBR_9600;
    dcb1.ByteSize = 8;
    dcb1.Parity = NOPARITY;
    dcb1.StopBits = ONESTOPBIT;
    SetCommState(hCOM1, &dcb1);
    SetCommTimeouts(hCOM1, &timeouts1);

    // C?u hình COM4
    SecureZeroMemory(&dcb2, sizeof(dcb2));
    dcb2.DCBlength = sizeof(dcb2);
    GetCommState(hCOM2, &dcb2);
    dcb2.BaudRate = CBR_9600;
    dcb2.ByteSize = 8;
    dcb2.Parity = NOPARITY;
    dcb2.StopBits = ONESTOPBIT;
    SetCommState(hCOM2, &dcb2);
    SetCommTimeouts(hCOM2, &timeouts2);

    // Ð?c d? li?u (ví d? vòng l?p don gi?n)
    while (1) {
        // Ð?c COM3
        if (ReadFile(hCOM1, buffer, sizeof(buffer)-1, &bytesRead, NULL) && bytesRead > 0) {
            buffer[bytesRead] = 0;
            printf("COM3: %s\n", buffer);
        }

        // Ð?c COM4
        if (ReadFile(hCOM2, buffer, sizeof(buffer)-1, &bytesRead, NULL) && bytesRead > 0) {
            buffer[bytesRead] = 0;
            printf("COM4: %s\n", buffer);
        }
    }

    CloseHandle(hCOM1);
    CloseHandle(hCOM2);
    return 0;
}

