#include "../include/Observer.hpp"

int Observer::static_number{};

Observer::Observer(Subject& new_subject) : subject{new_subject}
{
    this->subject.attach(this);
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number << "\".\n";
    this->number = Observer::static_number;
}

void Observer::update(const std::string& message_from_subject)
{
    this->message_from_subject = message_from_subject;
    printInfo();
}

void Observer::removeMeFromList()
{
    subject.detach(this);
    std::cout << "Observer \"" << number << "\" removed from the list.\n";
}

void Observer::printInfo()
{
    std::cout << "Observer \"" << this->number << "\": a new message is available --> "
              << this->message_from_subject << "\n";

}

Observer::~Observer()
{
    std::cout << "Goodbye, I was the Observer \"" << this->number << "\".\n";

}

