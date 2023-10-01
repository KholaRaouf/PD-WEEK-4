#include<iostream>
#include<windows.h>
void printMaze();
void gotoxy(int x, int y);
using namespace std;


int main()
{
	int x,y;
	printMaze();
	gotoxy(x,y);
	gotoxy(8,3);
	cout<<"K";
	gotoxy(8,4);
	cout<<"H";
	gotoxy(8,5);
	cout<<"O";
	gotoxy(8,6);
	cout<<"L";
	gotoxy(8,7);
	cout<<"A";
	gotoxy(12,12);
	return 0;
}
void printMaze()
{
cout<<"    ----------     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl;
cout<<"    |         |     "<<endl; 
cout<<"    |         |     "<<endl;
cout<<"    -----------     "<<endl;

}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);	
}


