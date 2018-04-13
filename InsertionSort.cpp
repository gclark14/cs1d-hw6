//
// Created by Gabe on 4/6/2018.
//

#include "InsertionSort.h"

void InsertionSort::sort() {
    int i, j;

    for(i = 1; i < length; i++) {
        std::string insert = words[i];
        j = i - 1;
        while(j >= 0 and words[j] > insert){
            words[j+1] = words[j];
            j--;
        }
        words[j+1] = insert;
    }
}

InsertionSort::InsertionSort(int CAP) : Sort(CAP) {

}
