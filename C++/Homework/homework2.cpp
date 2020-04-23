#include<iostream>
#include<stdio.h>
using namespace std;

int own_pushFront(int *arr,int b){

int a=0,c=0;
for(a=0; a<arr[a]!='\0'; a++);
int d=a-1;
for(c=0; c<arr[c]!='\0'; c++){
    arr[d+1]=arr[c];
}
arr[0]=b;

}

int main(){

int arr[10]={1,2,3,4,5};
int a=32;
own_pushFront(arr,a);
for(int b=0; b<arr[b]!='\0'; b++){
    printf("%d\n",arr[b]);
}
int c=76;
own_pushFront(arr,c);
for(int d=0; d<arr[d]!='\0'; d++){
    printf("%d\n",arr[d]);
}

return 0;
}
