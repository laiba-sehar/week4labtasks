#include<iostream>
using namespace std;
void discount(string day,int amount);
main(){
string day;
int amount;
while(true)
{
cout<<"Enter day";
cin>>day;
cout<<"Enter amount";
cin>>amount;
discount(day,amount);
}
}
void discount(string day,int amount)
{
if(day=="sunday")
{
amount=(amount)-(amount*0.1); 
cout<<amount;

}
if(day!="sunday")
{
amount=(amount)-(amount*0.05);
cout<<amount; 
}

}