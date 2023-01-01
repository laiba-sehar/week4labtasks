#include<iostream>
using namespace std;
void discounts(string country,int price);
main()
{
string country;
int price ;
while(true){
cout<<"Enter country name :";
cin>>country;
cout<<"Enter price in dollar :";
cin>>price;
discounts(country,price);
}
}
void discounts(string country,int price)
{
if(country=="pakistan")
{
price=price-(price*0.05);
cout<<(price)<<endl;
}
if(country=="ireland")
{
price=price-(price*0.1);
cout<<(price)<<endl;
}
if(country=="india")
{
price=(price)-(price*0.2);
cout<<price<<endl;
}
if(country=="england")
{
price=(price)-(price*0.3);
cout<<price<<endl;
}
if(country=="canada")
{
price=(price)-(price*0.45);
cout<<price<<endl;
}



}