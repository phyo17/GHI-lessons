/*
extern storage class
1. global variable
2. we can use by extern
3. extern(zero)
4. extern
5. syntax( extern int var_name; )
6. declaration
7. define

*/
#include<stdio.h>
#include<conio.h>
int ext();
int a;
extern int hello;//declare>> not allocated in memory
int hello;//define>> allocated in memory
int main(){
hello=15;
printf("%d fun call %d",hello,ext());


return 0;
}
int ext(){

a=20;
return a;

}


