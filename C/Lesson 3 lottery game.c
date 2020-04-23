#include<stdio.h>
#include<conio.h>


int main(){

int lottery=0;
int i=1;

while(i<10){
printf("Please enter your lottery number:");
scanf("%d",&lottery);

if(lottery==11){


    printf("You are win in lottery\n");
}else{


printf("You are loss in lottery\n");
printf("Try again....\n");
}
i++;
}


getch();
return 0;

}
