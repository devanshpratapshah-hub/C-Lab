#include <iostream>
#include <string>
using namespace std;

class Tourist {
private:
    string name;
    int trips;
    int loyaltyPoints;

public:
    Tourist(string n, int t, int lp) : name(n), trips(t), loyaltyPoints(lp) {}
    void display() {
        cout << "Name: " << name
             << " | Trips: " << trips
             << " | Loyalty Points: " << loyaltyPoints << endl;
    }
    void operator++() {
        trips++;
        loyaltyPoints += 10;
    }
    void operator--() {
        if (trips > 0) {
            trips--;
            loyaltyPoints -= 5;
        }
    }
    void operator-() {
        loyaltyPoints = 0;
    }
    bool operator!() {
        return trips == 0;
    }
};

int main() {
    Tourist t1("Devansh", 3, 25);

    cout << "Initial Tourist Info:\n";
    t1.display();

    cout << "\nAfter ++ (new trip):\n";
    ++t1;   
    t1.display();

    cout << "\nAfter -- (cancel trip):\n";
    --t1;   
    t1.display();

    cout << "\nAfter applying - (reset points):\n";
    -t1;    
    t1.display();

    cout << "\nCheck if Tourist has no trips (! operator): ";
    if (!t1) 
        cout << "No trips left.\n";
    else 
        cout << "Tourist still has trips.\n";

    return 0;
}
