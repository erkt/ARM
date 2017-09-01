#include <LPC214X.H>
#include"delay.h"
#define LED 0x01
main(){
IODIR0=1<<0;

	while(1){
		
		IOSET0=1;

		so_delay(1000);
		IOCLR0=1;
		so_delay(1000);
	}
}
