#include <iostream>
#include "task8.h"

using namespace std;

int main() {
    cout << "Test 1: " <<naiveSearch("watermelon","wate")<<endl;
    cout << "Test 2: " <<naiveSearch("watermelon","elon")<<endl;
    cout << "Test 3: " <<naiveSearch("watermelon","bcd")<<endl;
    cout << "Test 4: "<< naiveSearch("watermelon","")<<endl;

    return 0;
}
