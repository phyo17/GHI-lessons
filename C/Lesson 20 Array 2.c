#include<stdio.h>
#include<conio.h>

int main(){

int array[10];

for(int i=0;i<10;i++){

    printf("Please enter index number:%d\n",i);
    scanf("%d",&array[i]);
}
for(int x=0;x<10;x++){
    printf("%d\n",array[x]);
}


getch();
return 0;
}

