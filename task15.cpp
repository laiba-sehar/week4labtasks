#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name();
main()
{
system("cls");

int x,y;
gotoxy(10,3);
 name();
}
void name()
{

cout<<"   ****           *****     ****** ** **  **       ****";gotoxy(10,4);
cout<<"    **           **   **      **   **       **    **   **";gotoxy(10,5);
cout<<"    **           **    **     **   **         *  **     **";gotoxy(10,6);
cout<<"    **          **      **    **   **       **   **      **";gotoxy(10,7);
cout<<"    **          **********    **   * * ** **     **********";gotoxy(10,8);       
cout<<"    **          **********    **   ** ** ** *    **********";gotoxy(10,9);        
cout<<"    **          **       **   **   **        **  **       **";gotoxy(10,10);
cout<<"    **          **       **   **   **        **  **       **";gotoxy(10,11);
cout<<"    **          **       ** ****** ** **  **     **       **";gotoxy(10,12);
cout<<"   ************** ";gotoxy(10,13);
 
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 
}