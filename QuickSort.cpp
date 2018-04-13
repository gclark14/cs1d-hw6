//
// Created by Gabriel on 4/12/2018.
//

#include "QuickSort.h"

QuickSort::QuickSort(int CAP) : Sort(CAP) {

}

void QuickSort::sort() {
    quickSort(0, length - 1);
}

std::string QuickSort::medianOfThree(std::string a, std::string b, std::string c) {
    if(a > b ) {
        if(b > c) {
            return b;
        }
        if(a > c) {
            return c;
        } else {
            return a;
        }
    } else {
        if(a > c) {
            return a;
        } else if(b > c) {
            return c;
        } else {
            return b;
        }
    }
}

int QuickSort::partition(int left, int right, int pivot) {

}

void QuickSort::quickSort(int left, int right) {
    if(left >= right) {
        return;
    }

    int pivot = (left + right) / 2;
    if(words[pivot] < words[left]) {
        swap(words[left], words[pivot]);
    }
    if(words[right] < words[left]) {
        swap(words[left], words[right]);
    }
    if(words[right] < words[pivot]) {
        swap(words[pivot], words[right]);
    }

    // pivot is still at the center but it also provides that
    // words[pivot] is the median of left, right, and its center
    int index = partition(left, right, pivot);

    quickSort(index, right);
    quickSort(left, index - 1);
}
