#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int main()
{
	int UnitType = 0;
	int BitByte = 0;
	int BitByteAfter = 0;
	Again1:
	cout << "Welcome to unit converter.(Designed by Fairlanders)" << endl;
	cout << "Please choose what unit type you are going to convert into something. \n" << endl;

	cout << "----------------------------" << endl;
	cout << "Bits & Bytes ---> 1" << endl;
	cout << "----------------------------" << endl;
	cout << "Currency ---> 2" << endl;
	cout << "----------------------------" << endl;
	cout << "Energy ---> 3" << endl;
	cout << "----------------------------" << endl;
	cout << "Fuel Consumption ---> 4" << endl;
	cout << "----------------------------" << endl;
	cout << "Lenght ---> 5" << endl;
	cout << "----------------------------" << endl;
	cout << "Mass ---> 6" << endl;
	cout << "----------------------------" << endl;
	cout << "Power ---> 7" << endl;
	cout << "----------------------------" << endl;
	cout << "Speed ---> 8" << endl;
	cout << "----------------------------" << endl;
	cout << "Temperature ---> 9" << endl;
	cout << "----------------------------" << endl;
	cout << "Time ---> 10" << endl;
	cout << "----------------------------" << endl;
	cout << "I choose: ";
	cin >> UnitType;
	system("CLS");
	Sleep(1000);

	cout << "You chose: " << UnitType << " which is ";
	if (UnitType == 1)
	{
		cout << "Bits & Bytes.\n";
		Sleep(1000);
		Again2:
		cout << "Please choose what are you going to convert." << endl << endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Bits --> 1 ----------------------------- Bytes --> 2 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Kilobits[Kb] --> 3 ------------- Kilobytes[KB] --> 4 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Megabits[Mb] --> 5 ------------- Megabytes[MB] --> 6 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Gigabits[Gb] --> 7 ------------- Gigabytes[GB] --> 8 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Terabits[Tb] --> 9 ---------------- Terabytes[TB] --> 10 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Petabit[Pb] --> 11 ---------------- Petabytes[PB] --> 12 "<< endl;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Exabit[Eb] --> 13 ------------------- Exabyte[EB] --> 14 "<< endl;
		cout << "-----------------------------------------------------------" << endl << endl;
		cout << "I choose: ";
		cin >> BitByte;
		cout << "I choose: " << BitByte << "  which is";
		if (BitByte == 1)
		{
			cout << " Bits\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 2)
		{
			cout << " Bytes\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 3)
		{
			cout << " Kilobits[Kb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 4)
		{
			cout << " Kilobytes[KB]\n";
			Sleep(3000); 
			system("CLS");
		}
		else if (BitByte == 5)
		{
			cout << " Megabits[Mb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 6)
		{
			cout << " Megabytes[MB]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 7)
		{
			cout << " Gigabits[Gb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 8)
		{
			cout << " Gigabytes[GB]\n";
			Sleep(3000);
			system("CLS");	
		}
		else if (BitByte == 9)
		{
			cout << " Terabits[Tb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 10)
		{
			cout << " Terabytes[TB]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 11)
		{
			cout << " Petabit[Pb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 12)
		{
			cout << " Petabytes[PB]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 13)
		{
			cout << " Exabit[Eb]\n";
			Sleep(3000);
			system("CLS");
		}
		else if (BitByte == 14)
		{
			cout << " Exabyte[EB]\n";
			Sleep(3000);
			system("CLS");
		}
		else
		{
			cout << "Please input an acceptable value.";
			system("CLS");
			goto Again2;
		}
	}
	else if (UnitType == 2)
	{
		cout << "Currency.\n";
		Sleep(1000);
	}
	else if (UnitType == 3)
	{
		cout << "Energy.\n";
		Sleep(1000);
	}
	else if (UnitType == 4)
	{
		cout << "Fuel Consumption.\n";
		Sleep(1000);
	}
	else if (UnitType == 5)
	{
		cout << "Lenght.\n";
		Sleep(1000);
	}
	else if (UnitType == 6)
	{
		cout << "Mass.\n";
		Sleep(1000);
	}
	else if (UnitType == 7)
	{
		cout << "Power.\n";
		Sleep(1000);
	}
	else if (UnitType == 8)
	{
		cout << "Speed.\n";
		Sleep(1000);
	}
	else if (UnitType == 9)
	{
		cout << "Temperature.\n";
		Sleep(1000);
	}
	else if (UnitType == 10)
	{
		cout << "Time.\n";
		Sleep(1000);
	}
	else
	{
		cout << "Please input an acceptable value.";
		goto Again1;
	}

}

