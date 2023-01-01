#include<iostream>
using namespace std;
void add(int num1, int num2);
void multiply(int num1, int num2);
void subtract(int num3,int num4);
main()
{
int num1;
int num2;
char op;
while(true)
{
cout<<"Enter 1st number";
cin>>num1;
cout<<"Enter 2nd number";
cin>>num2;
cout<<"Enter operator";
cin>>op;
if(op=='+')
{
add(num1,num2);
}
if(op=='-')
{
subtract(num1,num2);
}
if(op=='*')
{
multiply(num1,num2);

}
}

}
void add(int num1, int num2)
{
int sum;
sum=num1+num2;
cout<<"Sum is :"<<sum<<endl;
}

void multiply(int num1, int num2)
{
int multiply;
multiply=num1*num2;
cout<<"product is :"<<multiply<<endl;
}
void subtract(int num3,int num4)
{
int subtract=num3-num4;
cout<<"Subtraction is :"<<subtract<<endl;

}