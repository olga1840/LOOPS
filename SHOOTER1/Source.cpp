#include<iostream>
#include<conio.h>
using namespace std;

#define Enter  13
#define Escape 27

#define UP_ARROW    72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RIGHT_ARROW 77

//#define IF_SHOOTER

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
#ifdef IF_SHOOTER
		if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else
		{
			if (key != -32 && key != Escape) cout << "Error" << endl;
		}
#endif //IF_SHOOTER

		switch (key)
		{
		case UP_ARROW: 
		case 'w': 
		case 'W': cout << "������" << endl; break;
		case DOWN_ARROW: 
		case 's': 
		case 'S': cout << "�����" << endl; break;
		case LEFT_ARROW: 
		case 'a': 
		case 'A': cout << "�����" << endl; break;
		case RIGHT_ARROW: 
		case 'd': 
		case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape : cout << "Exit" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}