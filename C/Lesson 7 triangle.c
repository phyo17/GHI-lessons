#include<stdio.h>
#include<conio.h>

int main(){

int row;
int space;
int star;


printf("Plese enter row number:");
scanf("%d",&row);
space=row-1;
for(int i=0;i<row;i++){

    for(int a=0;a<space;a++){

        printf(" ");
    }
    for(star=0;star<=(i*2);star++){
        printf("*");
    }
    printf("\n");
    space--;
}

getch();
return 0;

}
