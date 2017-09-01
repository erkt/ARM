#include <LPC214X.H>
#include"delay.h"
#define led (1<<20)
#define sw (IOPIN0&1<<6)
#define sw1 (IOPIN0&1<<7)
main(){
  IODIR0=led;
  while(1){
  if(sw==0&&sw1==0)
  IOCLR0=led;
  else
  IOSET0=led;
  }
}
