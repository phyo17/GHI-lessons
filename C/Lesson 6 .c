#include<stdio.h>
#include<conio.h>

int main(){

int row=0;
printf("Please enter your row:");
scanf("%d",&row);

for(int i=0;i<row;i++){

    for(int a=0;a<i;a++){

        printf("*");

    }
    printf("\n");


}

getch();
return 0;
}
