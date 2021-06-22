#include <reg51.h>
//#include <REGX51.H>

void delay(void);

sbit m1_pin1 = P2^0;

sbit m1_pin2 = P2^1;

sbit m2_pin1 = P2^2;

sbit m2_pin2 = P2^3;

sbit B1 = P0^0;

sbit B2 = P0^1;

void delay()
{


  int i;
  for(i=0;i<1000;i++)
  {
		
  }

}

void main()

{

P2=0x00;   //output port

P0=0x03;   //input port


if (B1==1)
{
    m1_pin1 = 1;
    m1_pin2 = 0;  //Rotates Motor Clockwise
	  delay();
}

else if (B1==0)
{
    m1_pin1 = 0;
   	m1_pin2 = 0;  //Stops Motor
    delay();
}

if (B2==1)
{
    m2_pin1 = 0;
    m2_pin2 = 1;  //Rotates Motor Anticlockwise
	  delay();
}

else if (B2==0)
{
    m2_pin1 = 0;
    m2_pin2 = 0;  //Stops Motor	 
    delay();
}
}
