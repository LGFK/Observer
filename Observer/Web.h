#pragma once
#include "Subscriber.h"
#include "Server.h"
class Web :
    public Subscriber
{
public:
    void handle_event(const Server& obj)override;
};

