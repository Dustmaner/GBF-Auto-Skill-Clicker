// gw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h> 
#include <time.h>       

using namespace std;


void main()
{
	int sleepTime = 10;
	ifstream inFile;
	int counter = 0;
	int x;
	int offset = 0;
	string go = "y";
	string fileChoose = "1.txt";
	/* initialize random seed: */
	srand(time(NULL));
	int variationX;
	int variationY;
	int variantonD;

	inFile.open("Settings.txt");
	if (!inFile) {
		cerr << "Unable to open file " << "Settings.txt" << endl;
		exit(1);   // call system to stop
	}

	inFile >> offset;
	inFile >> sleepTime;

	//Load a file
	while (go != "`" || '\0') {
		cout << "Loop times: " << counter++ << endl;
		cout << "choose your skill file: \n(no \".txt\" needed)" << endl;
		getline(cin, go);
		fileChoose = go + ".txt";

		inFile.close();
		inFile.open(fileChoose);
		if (!inFile) {
			cerr << "Unable to open file "<< fileChoose << endl;
			exit(1);   // call system to stop
		}
		
		//Run all lines of such file
		while (inFile >> x) {

			variationX = rand() % 20 - 10;
			variationY = rand() % 20 - 10;
			variantonD = rand() % 80 - 40;

			//MC
			if (x == 11) {
				SetCursorPos(0 + offset + variationX, 714 + variationY);
			}//1
			if (x == 12) {
				SetCursorPos(36 + offset + variationX, 716 + variationY);
			}//2
			if (x == 13) {
				SetCursorPos(0 + offset + variationX, 752 + variationY);
			}//3
			if (x == 14) {
				SetCursorPos(36 + offset + variationX, 752 + variationY);
			}//4

			//2nd Char
			if (x == 21) {
				SetCursorPos(81 + offset + variationX, 716 + variationY);
			}//1
			if (x == 22) {
				SetCursorPos(118 + offset + variationX, 716 + variationY);
			}//2
			if (x == 23) {
				SetCursorPos(81 + offset + variationX, 752 + variationY);
			}//3
			if (x == 24) {
				SetCursorPos(118 + offset + variationX, 752 + variationY);
			}//4

			//3rd Char
			if (x == 31) {
				SetCursorPos(163 + offset + variationX, 716 + variationY);
			}//1
			if (x == 32) {
				SetCursorPos(199 + offset + variationX, 716 + variationY);
			}//2
			if (x == 33) {
				SetCursorPos(163 + offset + variationX, 752 + variationY);
			}//3
			if (x == 34) {
				SetCursorPos(199 + offset + variationX, 752 + variationY);
			}//4

			//4th Char
			if (x == 41) {
				SetCursorPos(243 + offset + variationX, 716 + variationY);
			}//1
			if (x == 42) {
				SetCursorPos(279 + offset + variationX, 716 + variationY);
			}//2
			if (x == 43) {
				SetCursorPos(243 + offset + variationX, 752 + variationY);
			}//3
			if (x == 44) {
				SetCursorPos(279 + offset + variationX, 752 + variationY);
			}//4

			//Skills for 1 Char
			if (x == 1) {
				SetCursorPos(110 + offset + variationX, 399 + variationY);
				Sleep(100);
			}//1
			if (x == 2) {
				SetCursorPos(202 + offset + variationX, 399 + variationY);
				Sleep(100);
			}//2
			if (x == 3) {
				SetCursorPos(294 + offset + variationX, 399 + variationY);
				Sleep(100);
			}//3
			if (x == 4) {
				SetCursorPos(110 + offset + variationX, 559 + variationY);
				Sleep(100);
			}//4
			if (x == 5) {
				SetCursorPos(202 + offset + variationX, 559 + variationY);
				Sleep(100);
			}//5
			if (x == 6) {
				SetCursorPos(294 + offset + variationX, 559 + variationY);
				Sleep(100);
			}//6

			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(sleepTime + variantonD);
			cout << "(" << variationX << ", " << variationY << ", " << variantonD <<")\n";
			
		}
		SetCursorPos(336 + offset + variationX, 473 + variationY);//Attack
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		Sleep(sleepTime + variantonD);
		SetCursorPos(22 + offset + variationX, 505 + variationY);//AUTO
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		inFile.close();

		//system("pause");

	}
}

