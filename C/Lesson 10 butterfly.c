#include<stdio.h>
#include<conio.h>

int main(){

int i,a,b,c,d,e,f,g;
int row;
int space;
int real;
int hello;
int aspace=5;


printf("Please enter row number:");
scanf("%d",&row);

space=(row*4)-4;
hello=(row*2)-1;

for(i=0;i<row;i++){

    for(b=0;b<=i*2;b++){
        printf("*");
    }
    for(a=1;a<space+1;a++){
        printf(" ");
    }
    for(c=0;c<=i*2;c++){
        printf("*");
    }
    printf("\n");
    space=space-4;

}
for(g=0;g<row;g++){
    for(d=0;d<hello-2;d++){
        printf("*");
    }
    for(e=1;e<aspace;e++){
        printf(" ");
    }
    for(f=0;f<hello-2;f++){
        printf("*");
    }
    printf("\n");
    hello=hello-2;
    aspace=aspace+4;

}

getch();
return 0;
}
