#include<iostream>
#include<stdio.h>

int main(){
struct data{
char *name;
char *father_name;
unsigned int age;
char *gender;
double payment;
//struct data work_name;  //ERROR
//struct data *teamLeaderPtr;    //pointer
}v1;

v1.name="pps";
v1.father_name="myintoo";
v1.age=17;
v1.gender="male";
v1.payment=500;

printf("%s\n%s\n%d\n%s\n%lf\n",v1.name,v1.father_name,v1.age,v1.gender,v1.payment);
return 0;
}
