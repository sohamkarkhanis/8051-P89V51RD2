#include<reg51.h>

void mydelay(){

int i;
for(i=0;i<10000;i++);
}


void main(void)
{
P3=0x00;  //sets port 3 as an output port

while (1){
 P3=0x80;    //basically a program to chase 8 leds connected to 8 pins of port 3 of the uC
 mydelay();
 P3=0x40;
 mydelay();
 P3=0x20;
 mydelay();
 P3=0x10;
 mydelay();
 P3=0x08;
 mydelay();
 P3=0x04;
 mydelay();
 P3=0x02;
 mydelay();  
 P3=0x01;
 mydelay();
 }
}