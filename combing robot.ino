#include <Servo.h>

Servo servo1; 
Servo servo2;

int i;
int ii;
int d=30;
int s=130;
int r=4;

void setup() {
  servo1.attach(8); 
  servo2.attach(9); 

servo1.write(150);
delay(5000);

for (i=160;i>=s;i--)
{
   servo1.write(i);  
   delay(d);
}

  
}

void loop() {


for (ii=0;ii<=r;ii++)
{
S1();
S2();
}

delay(1000);

s=130; 
for (ii=(s-(r*10));ii<=s;ii++)
{
   servo1.write(ii);  
   delay(d);
}
 
}




void S1 ()
{

for (i=s;i>=s-10;i--)
{
   servo1.write(i);  
   delay(d);
}
  s=s-10;
}


void S2 ()
{
  for (i=70;i<=90;i++)
{
   servo2.write(i);  
   delay(d);
}

  for (i=90;i>=70;i--)
{
   servo2.write(i);  
   delay(d);
}
  for (i=70;i<=90;i++)
{
   servo2.write(i);  
   delay(d);
}

  for (i=90;i>=70;i--)
{
   servo2.write(i);  
   delay(d);
}

}
