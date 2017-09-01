void timer_delay(unsigned char i){
	for( ; i>0;i--){
		T0PR=15000000-1;
		T0TC=0;
		T0PC=0;
		T0TCR=0X01;
		while(T0TC<1);
		T0TCR=0X00;
	}
}

void so_delay(unsigned short int j){
	unsigned short int
	i;
	for(;j>0;j--)
		for(i=12000;i>0;i--);
}
