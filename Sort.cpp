//
// Created by Gabe on 4/6/2018.
//

#include "Sort.h"

void Sort::insertAllFromFile(const char *fileName, int numItemsToLoad) {
    std::ifstream fin;
    fin.open(fileName);

    if(!fin) {
        std::cout << "You fool!\n";
    }


    int i = 0;
    std::string s;
    while(getline(fin, s) and i < numItemsToLoad) {
        words[i] = s;
        i++;
    }
}

void Sort::print(std::ostream &out) {
    for(int i = 0; i < length; i++){
        out << *(words + i) << '\n';
    }

}

Sort::~Sort() {

}

Sort::Sort(const int cap) {
    words = new std::string[cap];
    length = cap;
}

Sort::Sort() {

}

std::string *Sort::getWords() const {
    return words;
}

int Sort::getCAP() const {
    return length;
}

void Sort::setCAP(int CAP) {
    Sort::length = CAP;
}

void swap(std::string str1, std::string str2) {
    std::string temp = str1;
    str1 = str2;
    str2 = temp;
}
