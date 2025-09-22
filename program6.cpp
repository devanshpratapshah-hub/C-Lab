#include <iostream>
#include <string>
using namespace std;

class TravelBooking {
public:
    void bookTrip(string name, string destination) {
        cout << "\n--- Basic Booking ---\n";
        cout << "Name: " << name << endl;
        cout << "Destination: " << destination << endl;
        cout << "Class: Economy" << endl;
        cout << "Insurance: Not Included" << endl;
    }

    void bookTrip(string name, string destination, string travelClass) {
        cout << "\n--- Booking with Class ---\n";
        cout << "Name: " << name << endl;
        cout << "Destination: " << destination << endl;
        cout << "Class: " << travelClass << endl;
        cout << "Insurance: Not Included" << endl;
    }

    
    void bookTrip(string name, string destination, string travelClass, bool insurance) {
        cout << "\n--- Full Booking Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Destination: " << destination << endl;
        cout << "Class: " << travelClass << endl;
        cout << "Insurance: " << (insurance ? "Included" : "Not Included") << endl;
    }
};

int main() {
    TravelBooking tb;

    
    tb.bookTrip("Devansh", "Goa");
    tb.bookTrip("Devansh", "Manali", "Business");
    tb.bookTrip("Devansh", "Kerala", "First Class", true);

    return 0;
}



