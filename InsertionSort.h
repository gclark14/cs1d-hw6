//
// Created by Gabe on 4/6/2018.
//

#ifndef HW6_INSERTIONSORT_H
#define HW6_INSERTIONSORT_H


#include "Sort.h"

class InsertionSort : public Sort {
private:

public:

    void sort() override;

    explicit InsertionSort(int CAP);

};


#endif //HW6_INSERTIONSORT_H
