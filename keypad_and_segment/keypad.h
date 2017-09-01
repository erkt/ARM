unsigned char lut[4][4]={0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
unsigned char search(unsigned char temp){
	unsigned int row,coll;
	
	while(c0&&c1&&c2&&c3)
	di(temp);
	delay(100);

	 if((r0==0)&&r1&&r2&&r3)
	 if(!(c0&&c1&&c2&&c3)){
		row=0;
		goto col;
	}
	if((r1==0)&&r0&&r2&&r3)
		  if(!(c0&&c1&&c2&&c3)){
		   		row=1;
				goto col;
			}
			if((r2==0)&&r1&&r0&&r3)
			  if(!(c0&&c1&&c2&&c3)){
		   		row=2;
				goto col;
			}
			if((r3==0)&&r1&&r2&&r0)
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
	return lut[row][coll]; 
	}

