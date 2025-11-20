#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main () {
    cout << "Test" << endl;
    LinkedList<int> *testList = new LinkedList<int>();
    cout << "Test 2" << endl;
    testList->append(5);
    testList->append(4);
    testList->append(3);
    testList->append(2);
    testList->append(1);

    cout << "Test 3" << endl;

    cout << testList->getLength() << endl;

    cout << testList->getElement(2) << endl;

    cout << "Test 4" << endl;
    cout << "Length of list: " << testList->getLength() << endl;

    if (testList->isEmpty()) {
        cout << "This list is empty" << endl;
    } else {
        cout << "This list is NOT empty" << endl;
    }

    return 0;
}