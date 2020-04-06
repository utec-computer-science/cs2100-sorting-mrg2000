#include <iostream>
#include "Sorting.h"
#include "vector"



int main() {


    vector<int> vec = {2,0,1,5,4,3,7,10,9,20};
    Sorting vector(vec);

    /*
    //InsertSort
    vector.InsertSort();
    vector.PrintVector();

     */


    /*
    //SelectionSort
    vector.SelectionSort();
    vector.PrintVector();
    */


    /*
    //BubbleSort
    vector.BubbleSort();
    vector.PrintVector();
    */

    /*
    //MergeSort

    int left = 0;
    int right = (unsigned int) vec.size()-1;

    vector.MergeSort(left,right);
    vector.PrintVector();
    */


    /*
    // HeapSort
    vector.HeapSort();
    vector.PrintVector();
    */


    /*
    //QuickSort
    int low = 0;
    int high= (unsigned int)vec.size()-1;
    vector.QuickSort(low,high);
    vector.PrintVector();
    */


return 0;
}