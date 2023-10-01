#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);	
}

int main()
{
	cout<<"Test";
	gotoxy(15,25);
	cout<<"My name is Khola Bint E Abdul Raouf";
	return 0;
}

