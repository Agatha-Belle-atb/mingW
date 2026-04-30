#include <stdio.h>
#include <stdint.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    if(mode){
        return reg | (1<<pos);
    }
    else{
        return reg & (~(1<<pos));
    }
}

unsigned char toggleBit(unsigned char reg) {
    return reg ^ (1<<5);
}

bool checkBit(unsigned char reg, int pos){
	if(reg & (1<<pos)){
		return 1;
	}
	return 0;
}


uint8_t set_bit(uint8_t reg, uint8_t pos) {
    return reg | (1<<pos);
}

uint8_t clear_bit(uint8_t reg, uint8_t pos) {
    return reg & ~(0<<pos);
}

uint8_t toggle_bit(uint8_t reg, uint8_t pos) {
    return reg;
}

int main() {
    uint8_t reg, pos;
    scanf(" %d %d",&reg,&pos);
    uint8_t result = toggle_bit(reg, pos);
    printf("%d ", reg);
    return 0;
}


