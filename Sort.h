//
// Created by Gabe on 4/6/2018.
//

#ifndef HW6_SORT_H
#define HW6_SORT_H

#include "iostream"

// Indicate the big oh value for all functions

// Derive three classes from class Sort:
// Insertion sort
// Quicksort, use median of three to select pivot and switch to selection sort
// when array slices are less than 16 items
// HeapSort

class Sort {
private:

public:

    // Define this method here
    void insertAllFromFile(char *fileName, int numItemsToLoad);

    // Define
    void print(std::ostream &out);

    virtual void sort() = 0;

    // Allocates an array data member
    // constructor should take a parameter for maximum capacity of array
    Sort(const int CAP);

    // Dealocate the array
    ~Sort();
};

#endif //HW6_SORT_H
