#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void packman(int x,int y);
void printMaze();
main()
{
system("cls");
printMaze();
int x=4,y=1;
while(true)
{
packman(x,y);

if(x<72)
{
  x=x+1;
}
if(x==72)
{
gotoxy(x-1,y);
cout<<" ";
x=4;
}
}



}
void printMaze()
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
void packman(int x,int y)
{
gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"p";
Sleep(200);

}