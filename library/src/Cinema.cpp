#include "Cinema.h"
#include <iostream>

Cinema::Cinema(const std::string &name) : name(name) {}

void Cinema::addMovie(const std::string &title, const std::string &director, double price) {
    movies.emplace_back(title, director, price);
}

void Cinema::bookTicket(const std::string &movieTitle, const std::string &userName) {
    for (const auto &movie : movies) {
        if (movie.getTitle() == movieTitle) {
            Ticket ticket(movieTitle, userName, movie.getPrice());
            tickets.push_back(ticket);
            std::cout << ticket.getDetails() << std::endl;
            return;
        }
    }
    std::cout << "Movie not found!" << std::endl;
}