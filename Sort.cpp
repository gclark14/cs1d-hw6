//
// Created by Gabe on 4/6/2018.
//

#include "Sort.h"

void Sort::insertAllFromFile(char *fileName, int numItemsToLoad) {
    std::ifstream fin;
    fin.open(fileName);

    if(!fin) {
        std::cout << "You fool!\n";
    }


    int i = 0;
    std::string s;
    while(getline(fin, s) and i < CAP) {
        words[i] = s;
        i++;
    }
}

void Sort::print(std::ostream &out) {
    for(int i = 0; i < CAP; i++){
        out << words[i] << '\n';
    }

}

Sort::~Sort() {

}

Sort::Sort(const int cap) {
    words = new std::string[cap];
    CAP = cap;
}
