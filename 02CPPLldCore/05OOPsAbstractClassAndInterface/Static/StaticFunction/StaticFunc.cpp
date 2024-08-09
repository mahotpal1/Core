#include <iostream>
using namespace std;

class StaticFunc {
public:
    static int count; // Static member variable

    static void incrementCount() { // Static member function
        count++;
    }
};

int StaticFunc::count = 0; // Definition of static member variable

int main() {
    StaticFunc::incrementCount(); // Accessing static member function without an object
    cout << "Count: " << StaticFunc::count << endl; // Output: Count: 1

    StaticFunc obj;
    obj.incrementCount(); // Accessing through an object
    cout << "Count: " << StaticFunc::count << endl; // Output: Count: 2

    return 0;
}
