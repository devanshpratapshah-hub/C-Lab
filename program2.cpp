#include <iostream>
#include <string>
using namespace std;

class TravelManagement {
public:
    
    void bookTicket(string name, string destination, string travelClass = "Economy", bool insurance = false) {
        cout << "Booking details:\n";
        cout << "Name: " << name << endl;
        cout << "Destination: " << destination << endl;
        cout << "Class: " << travelClass << endl;

        
        double baseFare = 5000.0;
        if (travelClass == "Business") {
            baseFare *= 2.0;
        } else if (travelClass == "First") {
            baseFare *= 3.0;
        }

        if (insurance) {
            baseFare += 1000.0;
            cout << "Travel Insurance: Included\n";
        } else {
            cout << "Travel Insurance: Not included\n";
        }

        cout << "Total Fare: ?" << baseFare << "\n\n";
    }
};
int main() {
    TravelManagement tm;

    
    tm.bookTicket("Alice", "Paris", "First", true);

    
    tm.bookTicket("Bob", "Dubai", "Business");

   
    tm.bookTicket("Charlie", "Tokyo");
   return 0;}

