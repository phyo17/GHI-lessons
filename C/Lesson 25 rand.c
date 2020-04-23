/* Standard library Function Lesson
rand()
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//standard library
#include<time.h>

int main(){

 srand(time(NULL));

for(int i=1;i<=50;i++){

printf("%5d",1+rand()%8);

if(i%5==0){
    puts("");
}

}

getch();
return 0;
}
