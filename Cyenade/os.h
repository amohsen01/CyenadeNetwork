#ifndef os
#define os
#include<iostream>
#include <string>
#include "nwork.h"
#include "Networks.h"
#include<stdlib.h>
using namespace std;


void OSmenu();
void OSmenu() {
	int n;
	cout << "Please enter the specified number according to the list below: " << endl << endl;
	cout << "\t 1. Ping a specific address" << endl;
	cout << "\t 2. Know your addresses on your PC " << endl;
	cout << "\t 3. See what connections are on your PC" << endl;
	cout << "\t 4. Speedtest Your Connection to Nearby Servers. (Windows 10 only)" << endl;
	cout << endl << "Enter your choice:  ";
	cin >> n;
	switch (n) {
	case 1: { 
		Network x;
		x.setIP();
		ping(x);
		system("cls");
		OSmenu();
		break; }
	
	
	case 2: {system("ipconfig");
		system("pause");
		system("cls");
		OSmenu();
	}
	case 3: {
		nstat();
	}
	case 4:
		system("cls");
		speedtest();

	case 101: {
		system("cls");
		system("pause");
		system("matrix.cmd");

			}

	default:
		cout << "Wrong Selection: "; system("pause");
		system("cls");
		OSmenu();
	}
	
}
#endif os