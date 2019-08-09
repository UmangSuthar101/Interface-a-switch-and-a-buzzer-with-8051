#include <reg51.h>
sbit switch0 = P1^0;
sbit buzzer = P2^0;
sbit led = P2^1;
char counter = 0;
void delay(unsigned int);

void main()
{
 switch0 = 1; //declare as input
 buzzer = 0; //declare as output
	led = 0;
	while(1){
	if(switch0 == 0){
		counter++;
		buzzer = 1;
		delay(50);
	}
	else{
		buzzer = 0;
	}
	if(counter == 5){
			led = 1;
		}
	else{
		led=0;
	}
		if(counter>5){
			counter = 0;
	}
}
}

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<1275;j++);
	}
}