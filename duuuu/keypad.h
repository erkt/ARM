unsigned char lut[4][4]={0x30,0x31,0x32,0x33,
						 0x34,0x35,0x36,0x37,
						 0x38,0x39,0x41,0x42,
						 0x43,0x44,0x45,0x46};
unsigned char search(unsigned char temp){
	unsigned int row,coll;
	IODIR0|=0x0000f000;
	IOCLR0=0xf<<12;
	while((c0&&c1&&c2&&c3)==1)
	di(temp);

	IOSET0=0xe<<12;
	if(!(c0&&c1&&c2&&c3)){
		row=0;
		goto col;
	}
	IOCLR0=0xf<<12;
	IOSET0=0xd<<12;
	if(!(c0&&c1&&c2&&c3)){
		row=1;
		goto col;
	}
	IOCLR0=0xf<<12;
	IOSET0=0xb<<12;
	if(!(c0&&c1&&c2&&c3)){
		row=2;
		goto col;
	}
	IOCLR0=0xf<<12;
	IOSET0=0x7<<12;
	if(!(c0&&c1&&c2&&c3)){
		row=3;
		goto col;
	}
col:
	if(c0==0)coll=0;
	else if(c1==0)coll=1;
    else if(c2==0)coll=2;
	else if(c3==0)coll=3;

	delay(100);
	while(!(c0&&c1&&c2&&c3))	
	di(temp);
	
	IODIR0&=0xffff0fff;
	
	return lut[row][coll]; 
	}

