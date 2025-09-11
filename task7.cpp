#include "task7.h"


vector<int> findAllIndices(const int arr[], int size, int key) {
    //take in the array and loop through it and add the indices to a secondary array/vector that i return
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
