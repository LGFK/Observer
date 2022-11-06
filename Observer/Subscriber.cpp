#include "Subscriber.h"

void Subscriber::ShowMail() const
{
	for (auto item : inbox)
	{
		cout << item << endl;
	}
}

Subscriber::~Subscriber() = default;
