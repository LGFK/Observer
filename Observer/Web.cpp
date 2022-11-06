#include "Web.h"

void Web::handle_event(const Server& obj)
{
	cout << "Mail on web app recieved" << endl;
	inbox.push_back(obj.getText());
}
