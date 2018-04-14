#include <iostream>
#include "Sort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

void measure(const std::string &type, int size, const std::string &fileName);

void measure(const std::string &type, const int size, const std::string &fileName) {
    if(type == "insertionSort" or type == "InsertionSort" or type == "insertionsort"){
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

    // else heap

}

int main(int argc, char** argv) {

    measure("InsertionSort", 100, "random.txt");
    std::cout << "\n\n\n\n\n";
    measure("QuickSort", 100, "random.txt");

    int d;
    std::cin >> d;

    return 0;
}