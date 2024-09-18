
#include <iostream>

using namespace std;

struct DistanceS {
    int feet;
    int inches;
    
    void display() {
        cout << "DistanceS - Feet: " << feet << ", Inches: " << inches << endl;
    }
};

class DistanceC {
public:
    int feet;
    int inches;

    void display() {
        cout << "DistanceC - Feet: " << feet << ", Inches: " << inches << endl;
    }
};

int main() {
    
    DistanceS dS;
    dS.feet = 5;
    dS.inches = 10;
    dS.display();


    DistanceC dC;
    dC.feet = 6;
    dC.inches = 11;
    dC.display();

    return 0;
}

