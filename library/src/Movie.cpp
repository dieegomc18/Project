#include "Movie.h"

Movie::Movie(const std::string &title, const std::string &director, double price)
    : title(title), director(director), price(price) {}

std::string Movie::getTitle() const {
    return title;
}

double Movie::getPrice() const {
    return price;
}