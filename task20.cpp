#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
void move(int x,int y);
void movefromdowntoup(int x,int y);
main()
{
system("cls");
maze();
int x=4;
int y1=2;
int y2=22;

while(true)
{
//move(x,y);
//if(y<23)
//{
//y=y+1;
//}
//if(y==22)
//{
//gotoxy(x,y-1);
//cout<<" ";
//y=2;
if(y1!=22)
{
move(x,y1);
y1=y1+1;
}
if(y1==22)
{


y2=y2-1;
//move(x,y2);
movefromdowntoup(x,y2);
cout<<" ";
if(y2==2)
{
break;
}


}


}






}
void maze()
{

cout<<" ##########################################################################"<<endl;
cout<<" || ..        ..................................................    ....  ||"<<endl;
cout<<" || ..        %%%%%%%%%%%%%%%%     ...       %%%%%%%%%%%%  |%|..    %%%%  ||"<<endl;
cout<<" || ..                |%|  |&|  |%|...       |%|      |%|  |%|..     |%|  ||"<<endl;
cout<<" || ..                |%|  |&|  |%|...       |%|      |%|  |%|..     |%|  ||"<<endl;
cout<<" || ..               %%%%%%%%%..|%|...        %%%%%%%%%%%          %%%%%. ||"<<endl;
cout<<" || ..               |%|      ..|%|...        ...........  |%|..        . ||"<<endl;
cout<<" || ..               %%%%%%%%%..|%|...        %%%%%%%%%%%  |%|..   %%%%%  ||"<<endl;
cout<<" || ..                     |%|.               |%|......    |%|..     |%|. ||"<<endl;
cout<<" || ..            ........ |%|.               |%|.....|%|     ..     |%|. ||"<<endl;
cout<<" || ..|%|         |%|%%|%|.|%|.  |%|             .....|%|     ..     |%|. ||"<<endl;
cout<<" || ..|%|         |%|  |%|..     %%%%%%%%        .....|%|      .  |%|.    ||"<<endl;
cout<<" || ..|%|         |%|  |%|..       ...|%|      %%%%%%%%%%      .  |%|.    ||"<<endl;
cout<<" || ..|%|                  .       ...|%|                  |%|  ..|%|.    ||"<<endl;
cout<<" || ..|%|         %%%%%%%%%%          |%|%%%%%%%           |%|  ..|%|%%%%%||"<<endl;
cout<<" || ............................................           |%|  ..........||"<<endl;
cout<<" ||    .........................................                   .......||"<<endl;
cout<<" || ..|%|  |%|  |%|..  %%%%%%%%%    .........|%|           |%|  ..|%|.    ||"<<endl;
cout<<" || ..|%|  |%|  |%|..        |%|         %%%%%%%           |%|  ..|%|.    ||"<<endl;
cout<<" || ..|%|   %%%%%%%%%%         %%%%%%%                     |%|  ..|%|%%%%%||"<<endl;
cout<<" || ...................................                                   ||"<<endl;
cout<<" || ...................................                     .......       ||"<<endl;
cout<<" ##########################################################################"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 
}
void move(int x,int y)
{
gotoxy(x,y-1);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}
void movefromdowntoup(int x,int y)
{
gotoxy(x,y+1);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}
