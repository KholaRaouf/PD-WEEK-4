#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x, int y);
void printMaze();
void movePlayer (int x , int y);
main()
{
	system("cls");
	int x=6 , y=3;
	printMaze();
	movePlayer (x , y);
}
void movePlayer (int x , int y)
{
	gotoxy(x, y);
	cout<<"KHOLA BINT ABDUL RAOUF";
	Sleep(500);
	gotoxy (x , y);
	gotoxy(0, 10);
}

void gotoxy(int x , int y)
 {
 	COORD coordinates;
 	coordinates.X = x;
 	coordinates.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
cout<<"    -------------------------     "<<endl;
cout<<"    |                        |     "<<endl;
cout<<"    |                        |     "<<endl;
cout<<"    |                        |     "<<endl;
cout<<"    |                        |     "<<endl; 
cout<<"    |                        |     "<<endl;
cout<<"    --------------------------     "<<endl;

}

