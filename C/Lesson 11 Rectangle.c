#include<stdio.h>
#include<conio.h>

int main(){

int row;
int i,a,b,c,d,e,f,g,h;

printf("Please enter row number:");
scanf("%d",&row);

for(i=0;i<row;i++){

    for(a=0;a<row*2;a++){
        printf("*");
    }
    printf("\n");
}

getch();
return 0;


}
