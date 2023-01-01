#include<iostream>
#include<windows.h>
using namespace std;
void printmenu();
void aggregate1(float num1,float num2,float num3);
void aggregate2(float num4,float num5,float num6);
void compareMarks(int num3 ,int num6, string name, string name1);
main()
{
	int option;
	string name,name1;
	float  num1,num2,num3,num4,num5,num6; 
	int agg1,agg2;
	char key;
	printmenu();
	cout <<"enter your choice= "<<endl;
	cin >>option;

	if(option == 1)
	{
	system("cls");
	cout <<"you have choosen number 1.."<<endl;
	cout <<"enter 1st students name= "<<endl;
	cin>> name;
	cout <<"enter 1st students matric marks= "<<endl;
	cin >> num1,
	cout <<"enter 1st students inter marks= "<<endl;
	cin >>num2;
	cout <<"enter 1st students ECAT marks= "<<endl; 
	cin >>num3;
	cout <<"press any key to continue= "<<endl;
	cin >>key;
	system("cls");
	printmenu();
	cout <<"enter your choice= "<<endl;
	cin >>option;
	}


	if (option == 2)
	{
	system("cls");
	cout <<"you have choosen number 2.."<<endl;
	cout <<"enter 2nd students name= "<<endl;
	cin>> name;
	cout <<"enter 2nd students matric marks= "<<endl;
	cin >> num1,
	cout <<"enter 2nd students inter marks= "<<endl;
	cin >>num2;
	cout <<"enter 2nd students ECAT marks= "<<endl; 
	cin >>num3;
	cout <<"press any key to continue= "<<endl;
	cin >>key;
	system("cls");
	printmenu();
	cout <<"enter your choice= "<<endl;
	cin >>option;
	}

	if(option == 3)
	{
	system("cls");
	cout <<"you have choosen number 3.."<<endl;
	aggregate1( num1, num2,num3);
	cout <<"to continue enter any key= "<<endl;
	cin >>key;
	system("cls");
	printmenu();
	cout <<"enter your choice= "<<endl;
	cin >>option;
	}

	if(option == 4)
	{
	system("cls");
	cout <<"you have choosen number 4.."<<endl;
	aggregate2( num4, num5,num6);
	cout <<"to continue enter any key= "<<endl;
	cin >>key;
	system("cls");
	printmenu();
	cout <<"enter your choice= "<<endl;
	cin >>option;
	}

	if(option == 5)
	{
	system("cls");
	cout <<"you have choosen number 5.."<<endl;
	compareMarks(num3,num6,name,name1);
	cout <<"to continue enter any key= "<<endl;
	cin >>key;
	printmenu();
	cout <<"enter your choice= ";
	cin >>option;
	}
}
void printmenu()
{ 
cout <<"****************************************************"<<endl;
cout <<"****************************************************"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**   UNIVERSITY OF ENGINEERING AND MANAGEMENT     **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"**                                                **"<<endl;
cout <<"****************************************************"<<endl;
cout <<"****************************************************"<<endl;
cout <<"                                  "<<endl;
cout <<"                                  "<<endl;
cout <<"press key 1 to enter details of student 1.."<<endl;
cout <<"press key 2 to enter details of student 2.."<<endl;
cout <<"press key 3 to see aggregate of first student.."<<endl;
cout <<"press key 4 to see aggregate of second student.."<<endl;
cout <<"press key 5 to see 1st roll number.."<<endl;
}
void aggregate1(float num1,float num2,float num3)
{
	float agg1;
	agg1=num3 *40/400 + num2 * 30/550 +num1 *30/1100;
	cout <<"aggregate of 1st student is= "<<agg1;
}
void aggregate2(float num4,float num5,float num6)
{
	float agg2;
	agg2=num4 *40/400 + num5 * 30/550 +num6 *30/1100;
	cout <<"aggregate of 2nd student is= "<<agg2;
}
void compareMarks(int num3 ,int num6, string name, string name1)
{	 	
	if(num3 > num6)
	{
	cout <<name <<" has 1st roll number..";
	}
	if(num3 < num6)
	{
	cout <<name1 <<" has 1st roll number..";
	}
}