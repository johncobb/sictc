#include <iostream>
using namespace std;

/*
compile:
g++ -o bin/helloworld hello.cpp

run:
./bin/helloworld
*/

// prototypes
void sayHello();

int main() {
    sayHello();
    return 0;
}

void sayHello() {
    cout << "Hello, Gaege!" << endl;
}
