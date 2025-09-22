#include <iostream>
using namespace std;

class Travel {
public:
    static void showPolicy() {
        cout << "All bookings are non-refundable.\n";
    }
};

int main() {
    Travel::showPolicy();   
    return 0;
}
