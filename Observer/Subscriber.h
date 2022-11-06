#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Server;

class Subscriber
{
protected:
	vector<string>inbox;
public:
	void ShowMail()const;
	virtual void handle_event(const Server& obj) = 0;
	virtual ~Subscriber();
};

