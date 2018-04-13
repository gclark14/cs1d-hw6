//
// Created by Gabriel on 4/12/2018.
//

#ifndef HW6_QUICKSORT_H
#define HW6_QUICKSORT_H


#include "Sort.h"

class QuickSort : public Sort {
private:

public:

    void sort() override;

    explicit QuickSort(int CAP);

    void quickSort(int left, int right);

    int partition(int left, int right, int pivot);

    std::string medianOfThree(std::string a, std::string b, std::string c);

};


#endif //HW6_QUICKSORT_H
