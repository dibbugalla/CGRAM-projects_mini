#include"header.h"
main()
{
	/*int i;
	lcd_init();
	while(1){
		for(i=0;i<16;i++)
	{
		lcd_cmd(0x80+i);
		//lcd_data('A');
		lcd_string("ARUN");
		delay_ms(200);
		lcd_cmd(0x01);
	}
	*/
	/*
	int i,l;
	char s[]="ARUN",*p;
	for(l=0;s[i];i++);
	lcd_init();
	while(1){
		p=s+(l-1);
		for(i=0;i<16;i++)
		{
			lcd_cmd(0x80+i);
			lcd_string(s);
			if(i>16-l)
			{
				lcd_cmd(0x80);
				lcd_string(p);
				p--;
			}
			delay_ms(200);
			lcd_cmd(0x01);
		}
		}
}
*/


int i,l;
char s[]="ARUN";
lcd_init();
for(l=0;s[l];l++);
while(1){
	for(i=0;i<16;i++){
		lcd_cmd(0x80+i);
		lcd_string(s);
		if(i>(16-l))
		{
			lcd_cmd(0x80);
			lcd_string(s+(16-i));
		}
		delay_ms(500);
		lcd_cmd(0x01);
	}
}
}
