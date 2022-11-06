#include "MobileDevice.h"

void MobileDevice::handle_event(const Server& obj)
{
	cout << "Mail on MobileDevice recieved" << endl;
	inbox.push_back(obj.getText());
}
