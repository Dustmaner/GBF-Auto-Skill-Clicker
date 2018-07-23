// gw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;


void main()
{
	int sleepTime = 10;
	ifstream inFile;
	int counter = 0;
	int x;
	char go = 'y';

	cout << "Loop times: " << counter << endl;
	system("pause");

	while (go == 'y' || '\0') {
		inFile.open("skills.txt");
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
			}//1
			if (x == 43) {
				SetCursorPos(-219, 752);
			}//1
			if (x == 44) {
				SetCursorPos(-183, 752);
			}//1

			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(sleepTime);
		}
		SetCursorPos(-126, 473);//Attack
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		Sleep(sleepTime);
		SetCursorPos(-440, 500);//AUTO
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		inFile.close();
		//cout << "Again? (y/n)" << endl;
		//cin >> go;
		cout << "Loop times: "<< ++counter << endl;
		system("pause");

	}
}

