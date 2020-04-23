/* Random number counting */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int One=0;
int Two=0;
int Three=0;
int Four=0;
int Five=0;

srand(time(NULL));

for(int i=0;i<5000;i++){

    int number=(1+rand()%5);
    switch(number){

case 1:
    ++One;
    break;
case 2:
    ++Two;
    break;
case 3:
    ++Three;
    break;
case 4:
    ++Four;
    break;
case 5:
    ++Five;
    break;

    }
}
printf("%s%20s\n","Number","Frequent");
printf("1%22d\n",One);
printf("2%22d\n",Two);
printf("3%22d\n",Three);
printf("4%22d\n",Four);
printf("5%22d\n",Five);

getch();
return 0;
}
