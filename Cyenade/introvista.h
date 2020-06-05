#ifndef introvista
#define introvista
#include<iostream>
#include <string>
#include<stdlib.h>
#include "login.h"
#include "nwork.h"
using namespace std;

void introduction();
void introduction() {
	int n;
	cout << "Welcome to Cyenade, please enter the specified number according to the list below: " << endl<<endl;
	cout << "\t 1. Login with your account." << endl;
	cout << "\t 2. Register." << endl;
	
	cout << "\t 4. Exit the program."<<endl;
	cout <<endl<< "Enter your choice:  ";
	cin >> n;
	switch (n) {
	case 1: {
		login();
		break;
	}
	case 2: {
		registers();
		system("cls");
		cout << "Registered Successfully" << endl;
		introduction();
		break;
	}
	
	case 3:
	{
		system("exit");
		break;
	}
	default: {
		cout << endl << "Choice not available, please try again." << endl << endl;
		system("pause");
		system("cls");
		introduction();
		break;
	}
	}


}


#endif


