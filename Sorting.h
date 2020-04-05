//
// Created by Maor Roizman Gheiler on 4/5/20.
//

#ifndef CS2100_SORTING_MRG2000_SORTING_H
#define CS2100_SORTING_MRG2000_SORTING_H

#include <iostream>
#include "vector"

using namespace std;



class Sorting {

private:
    unsigned long vectorSize;
    vector<int> vecDesordenado;
    vector <int> vecOrdenado;


public:
    Sorting(vector<int> vector);
    void PrintVector();

    void InsertSort();








};


#endif //CS2100_SORTING_MRG2000_SORTING_H
