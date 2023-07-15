#pragma once

#include "IObserver.hpp"
#include "Subject.hpp"

class Observer : public IObserver
{
public:
    explicit Observer(Subject& new_subject);
    void update(const std::string& message_from_subject) override;
    void removeMeFromList();
    void printInfo();
    ~Observer() override;

private:
    std::string message_from_subject;
    Subject& subject;
    static int static_number;
    int number;
};
