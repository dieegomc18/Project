#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
public:
    Movie(const std::string &title, const std::string &director, double price);
    std::string getTitle() const;
    double getPrice() const;

private:
    std::string title;
    std::string director;
    double price;
};

#endif // MOVIE_H