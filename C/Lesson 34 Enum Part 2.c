//Enumeration Part 2

#include<stdio.h>

enum year{JAN, FEB, MAR, APRIL, MAY, JUNE, JULY, AUNG, SEP, OCT, NOV, DEC};
        // 0    1    2     3     4     5    6     7     8    9    10   11

enum day{SUN=2, MON, TUE, WED=10, THU, FRI, SAT};
int main(){

int i;
for(i=JAN;i<=DEC;i++){
    printf("%d",i);
}printf("\n");

printf("Monday=%d | Friday=%d",MON,FRI);





getch();
return 0;
}
