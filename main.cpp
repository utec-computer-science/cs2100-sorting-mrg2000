#include <iostream>
#include "Sorting.h"
#include "vector"


int main() {

    vector<int> vec = {0,1,5,4,3,7,10};

    Sorting vector(vec);

    vector.BubbleSort();
    vector.PrintVector();


    return 0;
}