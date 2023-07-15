#pragma once

#include "IObserver.hpp"

class ISubject
{
public:
    virtual void attach(IObserver* observer) = 0;
    virtual void detach(IObserver* observer) = 0;
    virtual void notify() = 0;
    virtual ~ISubject() = default;
};
