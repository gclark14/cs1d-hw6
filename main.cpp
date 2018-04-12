#include <iostream>
#include "Sort.h"
#include "InsertionSort.h"

int main(int argc, char** argv) {
    const int CAP = 1000;
    InsertionSort insertionSort(CAP);

    std::cout << argv[1] << '\n';
    insertionSort.insertAllFromFile(argv[1], CAP);
    insertionSort.sort();
    insertionSort.print(std::cout);

    

    int d;
    std::cin >> d;
    return 0;
}