#include<stdio.h>
#include<conio.h>

int main(){

int age;

printf("Please enter your age:");
scanf("%d",&age);
printf("This is your age%d \n",age);

if(age<18){

    printf("You are young!");
}else{

printf("You are adult!");

}

getch();
return 0;
}
