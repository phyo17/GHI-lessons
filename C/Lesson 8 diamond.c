#include<stdio.h>
#include<conio.h>

int main(){

int row=0;
int a,b,c,d,e,f,s;
int space;
int aspace=1;
int hello;

printf("Please enter your row number:");
scanf("%d",&row);

space=row;
hello=(row*2)-1;

for(a=0;a<row;a++){

    for(b=0;b<space;b++){

        printf(" ");
    }
    for(c=0;c<=(a*2);c++){

        printf("*");
    }
    printf("\n");
    space--;

}
for(d=0;d<row;d++){

    for(e=0;e<aspace;e++){

        printf(" ");
    }
    for(f=0;f<hello;f++){

        printf("*");
    }
    printf("\n");
   hello=hello-2;
    aspace++;
}

getch();
return 0;
}
