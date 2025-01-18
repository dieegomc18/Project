#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
public:
    Ticket(const std::string &movieName, const std::string &userName, double price);
    std::string getDetails() const;

private:
    std::string movieName;
    std::string userName;
    double price;
};

#endif // TICKET_H