//
// Created by Maor Roizman Gheiler on 4/5/20.
//

#include "Sorting.h"
#include "vector"

Sorting::Sorting(vector<int> vector){

    vectorSize = vector.size();

    vecDesordenado = vector;

    vecOrdenado = vecDesordenado;

}



void Sorting::PrintVector(){
    for(int i=0;i<vecOrdenado.size();i++){
        cout << vecOrdenado[i] << " ";
    }
}



void Sorting::InsertSort(){

    for(int i=1; i<vecOrdenado.size(); i++){
        int key = vecOrdenado[i];
        int j= i-1;

        while(j>=0 && vecOrdenado[j]>key){
            vecOrdenado[j+1] = vecOrdenado[j];
            j=j-1;
        }
        vecOrdenado[j+1] = key;
    }

}


void Intercambio(int &vec1, int &vec2){
    int var;
    var = vec1;
    vec1 = vec2;
    vec2 = var;
}


void Sorting::SelectionSort(){

    int i, j, imin;
    for(i = 0; i<vectorSize-1; i++) {
        imin = i;
        for(j = i+1; j<vectorSize; j++)
            if(vecOrdenado[j] < vecOrdenado[imin])
                imin = j;
        Intercambio(vecOrdenado[i], vecOrdenado[imin]);
    }

}


void Sorting::BubbleSort(){

    int i, j;
    for (i = 0; i < vectorSize-1; i++)

        for (j = 0; j < vectorSize-i-1; j++)
            if (vecOrdenado[j] > vecOrdenado[j+1])
                Intercambio(vecOrdenado[j], vecOrdenado[j+1]);

}



void SubRutinaMerge(vector<int> &vec, int l, int m, int r) {

        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;

        /* create temp arrays */
        int L[n1], R[n2];

        /* Copy data to temp arrays L[] and R[] */
        for (i = 0; i < n1; i++)
            L[i] = vec[l + i];
        for (j = 0; j < n2; j++)
            R[j] = vec[m + 1+ j];

        /* Merge the temp arrays back into arr[l..r]*/
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                vec[k] = L[i];
                i++;
            }
            else
            {
                vec[k] = R[j];
                j++;
            }
            k++;
        }

        /* Copy the remaining elements of L[], if there
           are any */
        while (i < n1)
        {
            vec[k] = L[i];
            i++;
            k++;
        }

        /* Copy the remaining elements of R[], if there
           are any */
        while (j < n2)
        {
            vec[k] = R[j];
            j++;
            k++;
        }

}


void Sorting::MergeSort(int left, int right) {

    if (left < right) {
        int m = left+(right-left)/2;

        MergeSort(left, m);
        MergeSort(m+1, right);

        SubRutinaMerge(vecOrdenado, left, m, right);
    }
}


