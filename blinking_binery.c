#include<LPC21xx.H>
#include"header.h"
#define a1 (1<<10)
#define a2 (1<<11)
#define a3 (1<<12)
main(){
int i;
IODIR0=a1|a2|a3;
while(1)
{
for(i=0;i<8;i++)
{
IOCLR0=(i<<10);
delay_sec(10);
IOSET0=(i<<10);
delay_sec(10);
}
}
}
