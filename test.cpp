#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main () {
    LinkedList<int> *testList = new LinkedList<int>();
    testList->append(5);
    testList->append(4);
    testList->append(3);
    testList->append(2);
    testList->append(1);

    return 0;
}