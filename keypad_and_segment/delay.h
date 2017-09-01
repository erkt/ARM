//void delay(unsigned short int i){
//	 unsigned int j;
//      	for(;i>0;i--)
//		for(j=12000;j>0;j--);
//}
		 void delay(unsigned char i){
	for( ; i>0;i--){
		T0PR=15000-1;
		T0TC=0;
		T0PC=0;
		T0TCR=0X01;
		while(T0TC<1);
		T0TCR=0X00;
	}
}
