
#ifndef loginsetup 
#define loginsetup
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <istream>
#include <fstream>
#include "os.h"

using namespace std;
void registers();
void login();
void login() {
	string username, password, ruser, rpassword;
	int n = 0;
	system("cls");
	cout << "Please enter your username: ";
	cin >> username;
	cout << "Please enter your password: ";
	char ch;
	ch = _getch();
	while (ch != 13) {//character 13 is enter
		password.push_back(ch);
		cout << '*';
		ch = _getch();
	}
	ifstream input("database.txt");
	while (input >> ruser >> rpassword ) {
		if (username == ruser && password == rpassword)
		{
			n = 1;
		}
	}
	input.close();
	if (n == 1) {
		system("cls");
		cout << "Welcome back " << username << "!" << endl << endl;
		OSmenu();
	}
	else {
		cout << endl << endl << "Login error, please try again. If not registered please type y to register and n to try again." << endl << endl;;
		string yorn;
		cin >> yorn;
		if (yorn == "y" || yorn == "Y" || yorn == "register" || yorn == "Yes" || yorn == "yes") {
			registers();
			cout << "Registered successfully, please reset program to take effect. ";
			system("pause");
			system("exit");
		}
		else if (yorn == "n" || yorn == "N" || yorn == "again" || yorn == "No" || yorn == "no") {
			login();
			system("pause");
			system("exit");
		}

	}

}


void registers() {
	
	system("cls");

	string rusername, rpassword, username;
	ofstream r("database.txt");

	cout << "Enter username: ";
	cin >> username;
	rpassword = "";
	char ch;
	cout << "Enter password: ";
	ch = _getch();
	while (ch != 13) {//character 13 is enter
		rpassword.push_back(ch);
		cout << '*';
		ch = _getch();

	}
	cout << endl;
	r << username <<" "<< rpassword<<endl;


}


#endif