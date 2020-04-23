#include<iostream>
using namespace std;

class Dog{
public:


int age=50;
string color;



void dd(){
cout<<"The dog always shouts when it sees a stranger"<<endl;
}


};


int main(){

Dog dog;
dog.age=10;
dog.color = "white and gold";
cout<<dog.age<<endl;
cout<<dog.color<<endl;



dog.dd();


return 0;
}
