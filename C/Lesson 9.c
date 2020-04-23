#include<stdio.h>
#include<conio.h>

int main(){

int row;

printf("Please enter row number:");
scanf("%d",&row);

int real;
int b;
real=(row*2)-1;

for(int i=0;i<row;i++){

    for(int a=0;a<=(i*2);a++){
        printf("*");
    }
    printf("\n");
}
for( b=0;b<row;b++){

    for(int c=0;c<real;c++){
        printf("*");
    }
    printf("\n");
    real=real-2;
}

getch();
return 0;
}
