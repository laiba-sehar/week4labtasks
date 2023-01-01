#include<iostream>
using namespace std;
void greaterNumber(int num1,int num2);
main()
{
int number1,number2;
while(true)
{
cout<<"Enter 1st number :";
cin>>number1;
cout<<"Enter second number :";
cin>>number2;
greaterNumber(number1,number2);
}
}
void greaterNumber(int num1,int num2)
{
if(num1>num2)
{
cout<<"1st number is greater :"<<endl;
}
if(num2>num1)
{
cout<<" 2nd Number is greater :";
}
}
