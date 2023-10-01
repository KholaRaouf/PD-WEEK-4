#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy (int x , int y);
void movePlayer(int x ,int y);
int main()
{
	int x=4 , y=1;
	system("cls");
	printMaze();
	while(true)
	{
	
	
	movePlayer(x,y);
	y=y+1;
	if(y==6)
	{
		y=1;
	}
}
	gotoxy(0,10);
	
	return 0;
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
	cout<<"*****************"<<endl;
	cout<<"*               *"<<endl;
	cout<<"*               *"<<endl;
	cout<<"*               *"<<endl;
	cout<<"*               *"<<endl; 
	cout<<"*               *"<<endl;
	cout<<"*****************"<<endl;	
}
void movePlayer(int x , int y)
{
	gotoxy(x,y);
	cout<<"p";
	Sleep(400);
	gotoxy(x,y);
	cout<<" ";
}
