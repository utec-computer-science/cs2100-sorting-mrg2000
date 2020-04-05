#include <iostream>
#include "Sorting.h"
#include "vector"


int main() {

    vector<int> vec = {10,11,12,13,9,7,5};

    Sorting vector(vec);

    vector.InsertSort();
    vector.PrintVector();


    return 0;
}