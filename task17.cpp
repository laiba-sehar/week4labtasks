#include<iostream>
using namespace std;
void compare(int num1,int num2);
int main()
{
int num1;
int num2;
cout<<"Enter 1st number :";
cin>>num1;
cout<<"Enter 2nd number :";
cin>>num2;

compare(num1,num2);

}
void compare(int num1, int num2)
{
if(num1==num2)
{
cout<<"True";
}
if(num1!=num2)
{
cout<<"false";
}

}