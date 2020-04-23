#include<iostream>
#include<stdio.h>

void function2(int &param){
    printf("I've received value %d\n",param);
    param++;
}

int main(void){
    int variable = 10;
    function2(variable);
    printf("pass by value in c++ %d\n",variable);
    return 0;
}
