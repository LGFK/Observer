#pragma once
#include "Subscriber.h"
#include"Server.h"
class MobileDevice :
    public Subscriber
{
public:
    void handle_event(const Server& obj)override;
};

