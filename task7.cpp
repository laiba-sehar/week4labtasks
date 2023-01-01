#include<iostream>
using namespace std;
void totalamount(string day,float amount);
main()
{
string day;
float amount;
while(true)
{
cout<<"Enter day :";
cin>>day;
cout<<"Enter purchase amount :";
cin>>amount;
totalamount(day,amount);
 }
}
void totalamount(string day,float amount)

{ 

	if(day=="sunday")
	{
	amount=(amount)-(amount*0.1);
	cout<<amount;
	}
	if(day!="sunday")
	{
	amount=amount;
	}
	cout<< " Your bill is :" << amount << endl;
	

}
