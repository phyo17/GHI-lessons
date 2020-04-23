/*Storage class
 -What is Storage?variable or function feature
 -How types of Storage Class? 1.auto 2.extern 3.static 4.register
 -How did they use?
မ
*/
#include<stdio.h>

int main(){//1 Codeblock

auto int a=10; //keyword=auto;>>auto int a(garbage value)
            //automatic variable or local variable

   {//2 Codeblock
    auto int a=50;
    {//3 Codebolck
    auto int a=90;
    printf("third code blocks:%d\n",a);
    }
    printf("second code blocks:%d\n",a);
}printf("first code blocks:%d\n",a);

getch();
return 0;
}
