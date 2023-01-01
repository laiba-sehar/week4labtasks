#include<iostream>
using namespace std;
void ifPass(int marks);
main()
{
while (true)
{
int marks;
cout<<"Enter marks";
cin>>marks;
ifPass(marks);
}

void ifPass(int marks)
{
if (marks>50)
{
cout<<"you have passed Quiz ";
}
if (marks==50)
{
cout<<"Work Hard";
}
if(marks<50)
{
cout<<"Fail";
}
}