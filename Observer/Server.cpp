#include "Server.h"

void Server::Notify()
{
    for (auto item : Subs)
    {
        item->handle_event(*this);
    }
}

void Server::subscribe(Subscriber* pt)
{
    Subs.push_back(pt);
}

void Server::unsubscribe(Subscriber* pt)
{
    Subs.remove(pt);
}

const string& Server::getText() const
{
    return some_changes;
}

void Server::recieveMail(const string& msg)
{
    some_changes = msg;
    Notify();
}
