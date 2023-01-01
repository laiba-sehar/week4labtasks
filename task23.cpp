#include<iostream>
using namespace std;
void price(float amount,float discount);
main()
{
int NoOfRedRoses;
int NoOfWhiteRoses;
int NoOfTulip;
int price1;
int price2;
int price3;
float discount;
float amount;
cout<<"No of Red roses :";
cin>>NoOfRedRoses;
cout<<"No of white roses";
cin>>NoOfWhiteRoses;
cout<<"No of tulips :";
cin>>NoOfTulip;
price1=2.00*NoOfRedRoses;
price2=4.10*NoOfWhiteRoses;
price3=2.50*NoOfTulip;
amount=price1+price2+price3;
price(amount,discount);

}
void price(float amount,float discount)
{
if (amount<200)
{
cout<<"original price=" << amount;
}
if(amount>200)
{
discount=amount-(amount*0.2);
cout<<"discount=" <<discount;
}

}