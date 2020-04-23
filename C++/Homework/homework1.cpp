#include<iostream>
#include<stdio.h>
using namespace std;

int own_pushBack(int *arr,int b){
int a=0,c=0;
for(a=0; a<arr[a]!='\0'; a++);
arr[a]=b;

//return *arr;
}

int main(){
int arr[10]={1,2,3,4,5};
int a=7;
int b=0;
own_pushBack(arr,a);
for( b=0; arr[b]!='\0'; b++){
    printf("%d\n",arr[b]);
}
int c=56;
own_pushBack(arr,c);
for( b=0; arr[b]!='\0'; b++){
    printf("%d\n",arr[b]);
}

return 0;
}
