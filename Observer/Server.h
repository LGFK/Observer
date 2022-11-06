#pragma once
#include"Subscriber.h"
#include<list>
class Server
{
	string some_changes;
	list<Subscriber*> Subs;
	void Notify();
public:
	void subscribe(Subscriber* pt);
	void unsubscribe(Subscriber* pt);
	const string& getText()const;
	void recieveMail(const string &msg);

	
};

