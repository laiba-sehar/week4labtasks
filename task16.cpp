#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();
void X();
void Z();
void K();
void S();
void U();
main()
{
system("cls");
int x,y;
gotoxy(10,3);
A();
gotoxy(10,10);
X();
gotoxy(10,18);
Z();
gotoxy(10,27);
K();
gotoxy(10,38);
S();
gotoxy(10,52);
U();
}
void A()
{
cout<<"     *** ";gotoxy(10,4);
cout<<"    *   *";gotoxy(10,5);
cout<<"   *     *";gotoxy(10,6);
cout<<"  * * * * * ";gotoxy(10,7);
cout<<" *         *";gotoxy(10,8);
cout<<"***       ***";gotoxy(10,9);  

}
void X()
{
cout<<"  ***    *** ";gotoxy(10,11);
cout<<"   **    **  ";gotoxy(10,12);
cout<<"     *   *   ";gotoxy(10,13);
cout<<"       *    ";gotoxy(10,14);
cout<<"     *   *    ";gotoxy(10,15);
cout<<"   **    **  ";gotoxy(10,16);
cout<<"  ***    ***  ";gotoxy(10,17);
}
void Z()
{
cout<<"   ********* ";gotoxy(10,19);
cout<<"   *       *   ";gotoxy(10,20);
cout<<"          *   ";gotoxy(10,20);
cout<<"         *    ";gotoxy(10,21);
cout<<"        *     ";gotoxy(10,22);
cout<<"       *      ";gotoxy(10,23);
cout<<"      *        ";gotoxy(10,24);
cout<<"     *       *";gotoxy(10,25);
cout<<"    **********";gotoxy(10,26);
}
void K()
{
cout<<"     ***     ***";gotoxy(10,28);
cout<<"     **     **";gotoxy(10,29);
cout<<"     **   **";gotoxy(10,30);
cout<<"     *   *";gotoxy(10,31);
cout<<"     **** ";gotoxy(10,32);
cout<<"     **** ";gotoxy(10,33);
cout<<"     *   *";gotoxy(10,34);
cout<<"     **   **";gotoxy(10,35);
cout<<"     **     **";gotoxy(10,36);
cout<<"     ***     ***";gotoxy(10,37);
}
void S()
{

cout<< "            **** ";gotoxy(10,39);
cout<<"          ***    **";gotoxy(10,40);
cout<<"         **    ";gotoxy(10,41);
cout<<"         **    ";gotoxy(10,42);
cout<<"         *    ";gotoxy(10,43);
cout<<"          *    ";gotoxy(10,44); 
cout<<"            **** ";gotoxy(10,45);
cout<<"                  *";gotoxy(10,46);
cout<<"                   *";gotoxy(10,47);
cout<<"                    **  ";gotoxy(10,48);
cout<<"                   **    ";gotoxy(10,49);
cout<<"            **   ***     ";gotoxy(10,50);
cout<<"             ****        ";gotoxy(10,51);
}
void U()

{
cout<<"      ****           **** ";gotoxy(10,53);
cout<<"       **             ** ";gotoxy(10,54);
cout<<"       *               * ";gotoxy(10,55);
cout<<"       *               *";gotoxy(10,56);
cout<<"       *               *";gotoxy(10,57);
cout<<"       *               *";gotoxy(10,58);
cout<<"       *               *";gotoxy(10,59);
cout<<"       *               *";gotoxy(10,60);
cout<<"        *             *";gotoxy(10,61);
cout<<"         *           *";gotoxy(10,62);
cout<<"           *********";gotoxy(10,63);
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates); 

}
