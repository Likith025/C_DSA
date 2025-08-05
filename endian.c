#include<stdio.h>
#include<stdint.h>
void convert_endianess(uint32_t);

int main(){
    uint32_t hex_ip;
    printf("enter a 32bit value to convert\n");
    scanf("%x",&hex_ip);
    convert_endianess(hex_ip);
    return 0;
}
void convert_endianess(uint32_t ip){
    uint32_t result;
    result=((ip>>(4*6))&0x000000ff)|((ip>>(4*2))&0x0000ff00)|((ip<<(4*2))&0x00ff0000)|((ip<<(4*6))&0xff000000);
    printf("printing after conversion\n%X\n",result);
}