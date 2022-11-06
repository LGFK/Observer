#include "Desktop.h"

void Desktop::handle_event(const Server& obj)
{
	cout << "Mail on desktop recieved" << endl;
	inbox.push_back(obj.getText());
}
