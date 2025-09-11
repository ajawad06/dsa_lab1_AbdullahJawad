#include <iostream>
#include "task7.h"
using namespace std;

int main() {
    //test output for the 3 defined tests
    int arr1[] = {1, 2, 3, 2, 4, 2};
    vector<int> test1= findAllIndices(arr1, 6, 2);
    cout << "Test 1: ";
    for (int i : test1) cout << i << " ";
    cout << "\n";

    int arr2[] = {5, 6, 7};
    vector<int> test2 = findAllIndices(arr2, 3, 10);
    cout << "Test 2: ";
    if (test2.empty()) cout << "Not found";
    cout << "\n";

    int arr3[] = {};
    vector<int> test3= findAllIndices(arr3, 0, 1);
    cout << "Test 3: ";
    if (test3.empty()) cout << "Not found";
    cout << "\n";

    return 0;
}
