#include <iostream>
#include "Cinema.h"

using namespace std;

int main() {
    cout << "Cinema Ticketing System" << endl;

    // Example usage
    Cinema cinema("Cineplex");
    cinema.addMovie("Inception", "Christopher Nolan", 12.99);
    cinema.bookTicket("Inception", "John Doe");

    return 0;
}