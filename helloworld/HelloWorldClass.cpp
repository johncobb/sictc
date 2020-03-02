#include <iostream>
using namespace std;

class Message {
    public: 

    void display() {
        cout << "Hello, World!" << endl;
    }
};


int main() {
    Message m;

    m.display();

    return 0;
}

