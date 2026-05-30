#include <iostream>
using namespace std;
class fruit {
public:
    int apple;

    // Constructor with direct initialization list
    fruit(int value) : apple(value) {}

    // Explicitly asking the compiler to generate the default destructor
    ~fruit() = default; 
    
};

int main() {
    fruit d(10);
    cout << d.apple << endl; 

    return 0; 
}
