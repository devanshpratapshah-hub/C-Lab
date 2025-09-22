#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];
    int total;
    float average, percentage;

public:
    
    Student() {
        total = 0;
        average = 0.0;
        percentage = 0.0;
        for (int i = 0; i < 5; i++) {
            marks[i] = 0;
        }
        cout << "\n[Default Constructor Called]" << endl;
    }

    
    Student(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
        total = m1 + m2 + m3 + m4 + m5;
        average = total / 5.0;
        percentage = (total / 500.0) * 100;
        cout << "\n[Parameterized Constructor Called]" << endl;
    }

    void display() {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << total << "/500";
        cout << "\nAverage: " << average;
        cout << "\nPercentage: " << percentage << "%" << endl;
    }
};

int main() {
    
    Student student1;
    student1.display();

    
    Student student2(80, 90, 85, 75, 95);
    student2.display();

    return 0;
}

