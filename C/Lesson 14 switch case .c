#include<stdio.h>
#include<conio.h>


int hello();
int ok();
int shake();
int java();
int main(){


int data=0;

printf("Press 1 for triangle.\nPress 2 for diamond.\nPress 3 for >.\n");
printf("Press 4 for butterfly.\n");
printf("Please enter number:");
scanf("%d",&data);

switch(data){

case 1:
    hello();
    break;

case 2:
    ok();
    break;
case 3:
    shake();
    break;
case 4:
    java();
    break;



}



getch();
return 0;
}
int hello(){

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

}
int ok(){

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

}
int shake(){

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

}
int java(){

int row;
int i,a,b,c,d,e,f,g,h;
int space;
int hi;
int real;

printf("Please enter row number:");
scanf("%d",&row);

space=(row*4)-3;
hi=(row*2)-3;
real=4;

for(i=0;i<row;i++){

    for(a=0;a<=i*2;a++){
        printf("*");
    }
    for(b=1;b<space;b++){
        printf(" ");
    }
    for(c=0;c<=i*2;c++){
        printf("*");
    }
   printf("\n");
   space=space-4;
}
for(d=0;d<row;d++){

    for(e=0;e<hi;e++){
        printf("*");
    }
    for(f=0;f<real;f++){
        printf(" ");
    }
    for(g=0;g<hi;g++){
        printf("*");
    }
    printf("\n");
    hi=hi-2;
    real=real+4;
}

}
