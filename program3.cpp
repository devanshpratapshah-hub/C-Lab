#include <iostream>
#include <string>
using namespace std;

class Booking;

class Tourist {
private:
    string name;
    int passportNumber;

public:
    Tourist(string n, int p) : name(n), passportNumber(p) {}

    
    friend void displayFullDetails(const Tourist&, const Booking&);
};

class Booking {
private:
    string destination;
    string travelClass;
    double cost;

public:
    Booking(string d, string t, double c) : destination(d), travelClass(t), cost(c) {}

    
    friend void displayFullDetails(const Tourist&, const Booking&);
};


void displayFullDetails(const Tourist& t, const Booking& b) {
    cout << "=== Full Booking Report ===\n";
    cout << "Name: " << t.name << endl;
    cout << "Passport No.: " << t.passportNumber << endl;
    cout << "Destination: " << b.destination << endl;
    cout << "Class: " << b.travelClass << endl;
    cout << "Total Cost: " << b.cost << "\n\n";
}

int main() {
    
    Tourist tourist1("Devansh Shah", 4535355);
    Booking booking1("Switzerland", "Business", 15000.0);

    
    displayFullDetails(tourist1, booking1);

    return 0;
}


