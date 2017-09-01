#include <LPC214X.H>
#define led 0x01
#define c0 (IOPIN0 & (1<<8))
#define c1 (IOPIN0 & (1<<9))
#define c2 (IOPIN0 & (1<<10))
#define c3 (IOPIN0 & (1<<11))
#define r0 (IOPIN0 & (1<<12))
#define r1 (IOPIN0 & (1<<13))
#define r2 (IOPIN0 & (1<<14))
#define r3 (IOPIN0 & (1<<15)) 
#include"delay.h"
#define seg (1<<0|1<<1|1<<2|1<<3|1<<4|1<<5|1<<6|1<<7)
#include"segment.h"
#include"key.h"
//#include"keypad.h"

main(){
unsigned char i,j,temp=0x00;
IODIR0=1<<21|1<<20|0x000000ff; 
	while(1){

	temp=search(temp);
		for(i=11;i<99;i++){
		  	for(j=250;j>0;j--) 
				di(temp);
		}

		temp=0x00;
	}
}
