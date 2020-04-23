#include<stdio.h>
#include<conio.h>


int add(int x);
int main(){
int data=0;
printf("Please enter your data:");
scanf("%d",&data);

printf("%d",add(data));

getch();
return 0;
}
int add(int x){

int a=5;
int b=5;
int c=a+b+x;
return c;

}
