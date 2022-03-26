#pragma once
#include "IObserver.h"
#include <vector>

class Observable
{
public:
    void addObserver(IObserver* theObserver)
    {
        myObservers.push_back(theObserver);
    }
    void notifyUpdate()
    {
        for (auto&& anObserver : myObservers)
        {
            anObserver->update();
        }
    }
private:
    std::vector<IObserver*> myObservers;
};
