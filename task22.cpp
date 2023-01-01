#include<iostream>
using namespace std;
void carspeed(int speed);
main()
{
int speed;
while(true)
{
cout<<"Enter speed";
cin>>speed;
}
}
void carspeed(int speed)
{


if(speed>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
if(speed<100)
{
cout<<"Perfect! You're going good"<<speed;
}


}