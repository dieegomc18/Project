#include "Ticket.h"

Ticket::Ticket(const std::string &movieName, const std::string &userName, double price)
    : movieName(movieName), userName(userName), price(price) {}

std::string Ticket::getDetails() const {
    return "Ticket for " + movieName + " booked by " + userName + " at price " + std::to_string(price);
}