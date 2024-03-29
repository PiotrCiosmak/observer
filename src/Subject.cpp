#include "../include/Subject.hpp"

void Subject::attach(IObserver* observer)
{
    observers.push_back(observer);
}

void Subject::detach(IObserver* observer)
{
    observers.remove(observer);
}

void Subject::notify()
{
    for (auto observer: observers)
    {
        observer->update(message);
    }
}

void Subject::createMessage(std::string message)
{
    this->message = message;
    notify();
}

void Subject::howManyObservers()
{
    std::cout << "There are " << observers.size() << " observers in the list.\n";
}

void Subject::someBusinessLogic()
{
    this->message = "change message message";
    notify();
    std::cout << "I'm about to do some thing important\n";
}

Subject::~Subject()
{
    std::cout << "Goodbye, I was the Subject.\n";
}



