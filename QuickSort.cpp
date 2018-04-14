//
// Created by Gabriel on 4/12/2018.
//

#include "QuickSort.h"

QuickSort::QuickSort(int CAP) : Sort(CAP) {

}

void QuickSort::sort() {
    quickSort(0, length - 1);

}

int QuickSort::partition(int left, int right) {

    int center = (left + right) / 2;

    if(words[center] < words[left]) {
        swap(words[left], words[center]);
    }
    if(words[right] < words[left]) {
        swap(words[left], words[right]);
    }
    if(words[right] < words[center]) {
        swap(words[center], words[right]);
    }

    swap(words[left], words[center]);

    std::string pivotString = words[left];

    int lowerIndex = left;

    for(int upperIndex = left + 1; upperIndex <= right; upperIndex++) {
        if(words[upperIndex] < pivotString) {
            lowerIndex++;
            swap(words[upperIndex], words[lowerIndex]);
        }
    }

    swap(words[left], words[lowerIndex]);
    return lowerIndex;
}

void QuickSort::quickSort(int left, int right) {
    if(left < right) {
        if((right - left) <= 16) {
            selectionSort(left, right);
        } else {
            // Without the selectionSort this sorts correctly
            int pivot = partition(left, right);
            quickSort(left, pivot - 1);
            quickSort(pivot + 1, right);
        }
    }
}

void QuickSort::selectionSort(int a, int b) {
    int min;
    for(int i = a; i < b; i++) {
        min = i;
        for(int j = i + 1; j < b; j++) {
            if(words[j] < words[min]){
                min = j;
            }
        }
        swap(words[min], words[i]);
    }
}

int QuickSort::medianOfThree(std::string a, std::string b, std::string c) {
    if(a > b ) {
        if(b > c) {
            return 2;
        }
        if(a > c) {
            return 3;
        } else {
            return 1;
        }
    } else {
        if(a > c) {
            return 1;
        } else if(b > c) {
            return 3;
        } else {
            return 2;
        }
    }
}
