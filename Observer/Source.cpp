#include"Desktop.h"
#include"MobileDevice.h"
#include"Server.h"
#include"Web.h"

int main()
{
	Server serv;
	MobileDevice MD;
	Web WA;
	Desktop D;
	serv.subscribe(&D);
	serv.subscribe(&WA);
	serv.subscribe(&MD);
	serv.recieveMail("Mail 1");
	serv.recieveMail("Mail 2");
	serv.recieveMail("Mail 3");
	serv.recieveMail("Mail 4");
	serv.recieveMail("Mail 5");
	D.ShowMail();
}