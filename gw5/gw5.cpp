// gw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;


void main()
{
	int sleepTime = 10;
	ifstream inFile;
	int counter = 0;
	int x;
	string go = "y";
	string fileChoose = "1.txt";

	while (go != "`" || '\0') {
		cout << "Loop times: " << counter++ << endl;
		cout << "choose your skill file: \n(no \".txt\" needed)" << endl;
		getline(cin, go);
		fileChoose = go + ".txt";

		inFile.open(fileChoose);
		if (!inFile) {
			cerr << "Unable to open file datafile.txt";
			exit(1);   // call system to stop
		}

		inFile >> sleepTime;

		while (inFile >> x) {
			//MC
			if (x == 11) {
				SetCursorPos(-462, 714);
			}//1
			if (x == 12) {
				SetCursorPos(-426, 716);
			}//2
			if (x == 13) {
				SetCursorPos(-462, 752);
			}//3
			if (x == 14) {
				SetCursorPos(-426, 752);
			}//4

			//2nd Char
			if (x == 21) {
				SetCursorPos(-381, 716);
			}//1
			if (x == 22) {
				SetCursorPos(-344, 716);
			}//2
			if (x == 23) {
				SetCursorPos(-381, 752);
			}//3
			if (x == 24) {
				SetCursorPos(-344, 752);
			}//4

			//3rd Char
			if (x == 31) {
				SetCursorPos(-299, 716);
			}//1
			if (x == 32) {
				SetCursorPos(-263, 716);
			}//2
			if (x == 33) {
				SetCursorPos(-299, 752);
			}//3
			if (x == 34) {
				SetCursorPos(-263, 752);
			}//4

			//4th Char
			if (x == 41) {
				SetCursorPos(-219, 716);
			}//1
			if (x == 42) {
				SetCursorPos(-183, 716);
			}//2
			if (x == 43) {
				SetCursorPos(-219, 752);
			}//3
			if (x == 44) {
				SetCursorPos(-183, 752);
			}//4

			//Skills for 1 Char
			if (x == 1) {
				SetCursorPos(-352, 399);
				Sleep(100);
			}//1
			if (x == 2) {
				SetCursorPos(-260, 399);
				Sleep(100);
			}//2
			if (x == 3) {
				SetCursorPos(-168, 399);
				Sleep(100);
			}//3
			if (x == 4) {
				SetCursorPos(-353, 559);
				Sleep(100);
			}//4
			if (x == 5) {
				SetCursorPos(-260, 559);
				Sleep(100);
			}//5
			if (x == 6) {
				SetCursorPos(-168, 559);
				Sleep(100);
			}//6

			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(sleepTime);
		}
		SetCursorPos(-126, 473);//Attack
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		Sleep(sleepTime);
		SetCursorPos(-440, 500);//AUTO
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		inFile.close();

		//system("pause");

	}
}

