#pragma once

#include "ISubject.hpp"
#include <iostream>
#include <list>

class Subject : public ISubject
{
public:
    void attach(IObserver* observer) override;
    void detach(IObserver* observer) override;
    void notify() override;
    void createMessage(std::string message = "Empty");
    void howManyObservers();
    void someBusinessLogic();
    ~Subject() override;

private:
    std::list<IObserver*> observers;
    std::string message;
};
