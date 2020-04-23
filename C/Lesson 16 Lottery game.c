#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

int game_status=0;
int age=0;
int i=0;
int lottery;
int money;
int bet;
int improve;
int less;


printf("\t____Welcome to our lottery Game____\n\n");
printf("Press 1 to play game!\n");
printf("Press 2 to quit game\n");
scanf("%d",&game_status);

if(game_status==1){

        printf("Please enter your age; your age must be 18 or over!!!!");
        scanf("%d",&age);
        if(age>=18){
            printf("Show your money:");
            scanf("%d",&money);
            if(money>=20000){
               printf("Welcome and be happy your trip:\n");
            }else{
            printf("Sorry! You can't play... :-) \n");
            }

        }

        if(age<18){
            printf("You can't play game!\n");

        }else{
        printf("You can play game.\n");
        while(i<5){

           printf("How much you bet?");
           scanf("%d",&bet);
           improve=money+bet;
           less=money-bet;

                 if(bet>999){
                    printf("Ok, 'Sir'");
                     printf("Please enter your lottery number:");
                scanf("%d",&lottery);

                 }else{
                     printf("Sorry your bet is very low:\n");}

            if(lottery==77){
                printf("You win in lottery:\n");
                printf("%d",improve);
            }else{
            printf("You loss in lottery  :-( \n");
            printf("%d",less);
            printf("Try again.....\n");
            }

            i++;
        }
        }


}else{
printf("Good Bye\n");
exit(0);
}

getch();
return 0;


}

