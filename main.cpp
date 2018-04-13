#include <iostream>
#include "Sort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

void measure(std::string type, int size, std::string fileName);

void measure(std::string type, const int size, std::string fileName) {
    if(type == "insertion" or type == "Insertion"){
        InsertionSort insertionSort(size);

        std::cout << fileName << '\n';
        insertionSort.insertAllFromFile(fileName.c_str(), size);
        insertionSort.sort();
        insertionSort.print(std::cout);
    }

    if(type == "quicksort" or type == "QuickSort" or type == "quickSort"){
        QuickSort quickSort(size);

        std::cout << fileName << '\n';
        quickSort.insertAllFromFile(fileName.c_str(), size);
        quickSort.sort();
        quickSort.print(std::cout);
    }

    // elif quick
    // else heap

}

int main(int argc, char** argv) {

    //measure("InsertionSort", 100, "random.txt");
    std::cout << "\n\n\n\n\n";
    measure("QuickSort", 100, "random.txt");


    return 0;
}