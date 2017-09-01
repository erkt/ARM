unsigned char look[] ={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void di(unsigned char temp){
		IOSET0=1<<21;
		IOCLR0=1<<20;
 		IOSET0=look[temp/10];
		delay(2);
		IOCLR0=look[temp/10];
		IOCLR0=1<<21;
		IOSET0=1<<20;
		IOSET0=look[temp%10];
		delay(2);			
		IOCLR0=look[temp%10];
		IOCLR0=1<<21|1<<20;	
}

