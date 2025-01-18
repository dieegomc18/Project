#ifndef CINEMA_H
#define CINEMA_H

#include <string>
#include <vector>
#include "Movie.h"
#include "Ticket.h"

class Cinema {
public:
    Cinema(const std::string &name);
    void addMovie(const std::string &title, const std::string &director, double price);
    void bookTicket(const std::string &movieTitle, const std::string &userName);

private:
    std::string name;
    std::vector<Movie> movies;
    std::vector<Ticket> tickets;
};

#endif // CINEMA_H