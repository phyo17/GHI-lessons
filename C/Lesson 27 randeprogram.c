#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){

register int sysnum;
int hunum;



do{
    srand(time(NULL));
    sysnum=(rand()%5);

    printf("Please enter number between 1 to 10: ");
    scanf("%d",&hunum);

    if(sysnum<hunum){
        printf("Sys:%d,  hunum:%d, Sysnum is less than hunum.\n\n",sysnum,hunum);
    }else{
        printf("Sys:%d,  hunum:%d, Sysnum is greater than hunum.\n\n",sysnum,hunum);
    }
}while(sysnum!=hunum);

printf("They have same value......");



getch();
return 0;
}
