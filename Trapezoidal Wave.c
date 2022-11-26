#include<reg51.h>

void delay(){
int i;
for(i=0;i<10000;i++);
}


void main(void)
{

P3=0x00; //set as output

while (1){

while(P3!=0xFF){      //voltage keeps rising till max value of ff
P3++;
}

for (i=0;i<500;i++);  //delay for flat top

while(P3!=0x00){
P3--;
}

for (i=0;i<500;i++);

}