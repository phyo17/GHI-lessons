/*
static int a (zero)
int a (any garbage value)

static can hold value until the end of program
normal var codeblock

static int mgmg;

*/

#include<stdio.h>
#include<conio.h>

void counter();
int main(){

for(int i=0;i<5;i++){

    counter();
}



getch();
return 0;
}
void counter(){

static int count;
count++;//count=count+1;//1

printf("counting%d\n",count);

}
