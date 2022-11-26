#include<reg51.h>

void delay(){
int i;
for(i=0;i<10000;i++);
}


void main(void)
{

P3=0x00; //set as output

while (1){

while(P3!=0xFF){
P3++;
}                          //unlike the program for the trapezoidal wave, since we want a sharp triangular wave, we omit the delay

while(P3!=0x00){           //voltage starts decreasing as soon as it hits the max value of ff
P3--;
}

for (i=0;i<500;i++);

}