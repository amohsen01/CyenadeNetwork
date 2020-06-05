#ifndef nwork
#define nwork
#include<iostream>
#include <string>
#include<stdlib.h>
#include"Networks.h"
using namespace std;
void ping(Network tx);
void ping(Network tx) {

	cout << "How many times do you want to ping this address: ";
	string x;
	cin >> x;
	cout << endl;
	system(("ping " + tx.getIP() + (" -n ") + x).c_str());
	system("pause");
	
}

void nstat();
void nstat() {
	system("cls");
	system("netstat -p IP");
	cout << endl << endl << endl;
	system("netstat -s -p icmpv6");
	cout << endl << endl << endl;
	system("netstat -e 20");
	system("pause");
}

void speedtest() {
	cout << "Do you have ubuntu installed from the Microsoft Store? ";
	string ans;
	cin >> ans;
	if (ans == "y" || ans == "Yes" || ans == "yes" || ans == "Y") {
		cout << "Do you have speedtest CLI installed? ";
		string an1;
		cin >> an1; {
			if (an1 == "y" || an1 == "Yes" || an1 == "yes" || an1 == "Y") {
				system("ubuntu run speedtest");
				
			}
			else cout << "Install speedtest CLI from their official website.";
		}
	}
	else cout << "Install Ubuntu from the microsoft store. ";
}
#endif
