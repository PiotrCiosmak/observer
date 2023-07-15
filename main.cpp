#include <iostream>
#include "include/Subject.hpp"
#include "include/Observer.hpp"

void clientCode();

int main()
{
    clientCode();
}

void clientCode()
{
    Subject* subject = new Subject;
    Observer* observer1 = new Observer(*subject);
    Observer* observer2 = new Observer(*subject);
    Observer* observer3 = new Observer(*subject);
    Observer* observer4;
    Observer* observer5;

    subject->createMessage("Hello World! :D");
    observer3->removeMeFromList();

    subject->createMessage("The weather is hot today! :p");
    observer4 = new Observer(*subject);

    observer2->removeMeFromList();
    observer5 = new Observer(*subject);

    subject->createMessage("My new car is great! ;)");
    observer5->removeMeFromList();

    observer4->removeMeFromList();
    observer1->removeMeFromList();

    delete observer5;
    delete observer4;
    delete observer3;
    delete observer2;
    delete observer1;
    delete subject;
}