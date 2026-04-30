#include <stdio.h>

int main(){
    printf("code a\n");
    int a;
    scanf("%d",&a);
    printf("a = %d",a);
    printf("a = b",2==a);
    int b = 10;
    printf("kiki b = %d",b);
    printf("luu duoc chua b = %d",b);
    //them bien ii
    int n,f;
    scanf("%d%d",&n,&f);
    for(int i = 0;i<n;i++){
        if(i == a){
            f = i;
            break;
        }
    }
    return 0;
}