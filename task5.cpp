#include<iostream>
using namespace std;
void isEven(int number);
main()
{
while(true)
{
int number;
cout<<"Enter number";
cin>>number;
isEven(number);
}
}
void isEven(int number)
{
 
if(number%2==0)
{
cout<<"You enter even number";
}
if(number%2!=0)
{
cout<<"You enter odd number";
}


}
