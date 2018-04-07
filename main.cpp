#include <iostream>
#include "Sort.h"

int main(int argc, char** argv) {
    Sort sort(45392);

    std::cout << argv[1] << '\n';
    sort.insertAllFromFile(argv[1], 45392);
    sort.print(std::cout);

    int d;
    std::cin >> d;
    return 0;
}