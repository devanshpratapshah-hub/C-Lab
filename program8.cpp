#include <iostream>
using namespace std;

class Booking {
public:
    int tickets;

    Booking(int t = 0) {
        tickets = t;
    }

    Booking operator+(Booking b) {
        return Booking(tickets + b.tickets);
    }
};

int main() {
    Booking b1(2);   
    Booking b2(3);   

    Booking b3 = b1 + b2;  

    cout << "Total Tickets = " << b3.tickets << endl;

    return 0;
}

