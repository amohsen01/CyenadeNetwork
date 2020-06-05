#pragma once
#ifndef Networks
#define Networks
#include <iostream>
#include <string>
using namespace std;
class Network {
public:
	Network(string IPadd="192.168.1.2", string subnt="255.255.255.0", string gateway="192.168.1.1") {
		IP = IPadd;
		subnet = subnt;
		gatewayip = gateway;
	}
	void setIP() {
		string Ip;
		cout << "What is the IP:";
		cin >> Ip;
		IP = Ip;
	}
	void setGateway(string gateway) {
		gatewayip = gateway;
	}
	void setSubnet(string subnt) {
		subnet = subnt;
	}
	string getIP() {
		return IP;
	}
	string getSubnet() {
		return subnet;
	}
	string getGatewat() {
		return gatewayip;
	}
	
private:
	string IP, subnet,gatewayip;
};

#endif