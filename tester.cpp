// g++ -Wall -Wextra tester.cpp -o tester
#include "ArrayQueue.hpp"
#include <iostream>
#include <string>

using namespace std;

int main () {
    ArrayQueue<int> crab = ArrayQueue<int>(10);
    cout << crab.getLength() << endl;
    cout << crab.getMaxSize() << endl;

    try {
        cout << crab.front() << endl;
    } catch (string e) {
        cout << e << endl;
    }
    try {
        cout << crab.back() << endl;
    } catch (string e) {
        cout << e << endl;
    }
    cout << crab << endl;
    for (int i = 0; i < crab.getMaxSize(); i++) {
        crab.enqueue(i);
        cout << crab << endl;
    }
        cout << crab.getLength() << endl;
        cout << crab.front() << endl;
        cout << crab.back() << endl;

    try {
        crab.enqueue(222);
    } catch (string e) {
        cout << e << endl;
    }
    for (int i = 0; i < crab.getMaxSize(); i++) {
        crab.dequeue();
        cout << crab << endl;
    }
    try {
         crab.dequeue();
    } catch (string e) {
        cout << e << endl;
    }

    for (int i = 0; i < 200; i++) {
        crab.enqueue(30);
        crab.dequeue();

    }
    cout << crab.getLength() << endl;
    cout << crab.getMaxSize() << endl;

    try {
        cout << crab.front() << endl;
    } catch (string e) {
        cout << e << endl;
    }
    try {
        cout << crab.back() << endl;
    } catch (string e) {
        cout << e << endl;
    }
    for (int i = 0; i < crab.getMaxSize()/2; i++) {
        crab.enqueue(i);

    }
    ArrayQueue<int> crab2 = crab;
    cout << crab << endl;
    cout << crab2 << endl;
    cout << crab2.getLength() << endl;
    return 0;
}