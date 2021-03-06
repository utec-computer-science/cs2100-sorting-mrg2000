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



void Sorting::SelectionSort(){

    int i, j, imin;
    for(i = 0; i<vectorSize-1; i++) {
        imin = i;
        for(j = i+1; j<vectorSize; j++)
            if(vecOrdenado[j] < vecOrdenado[imin])
                imin = j;
        swap(vecOrdenado[i], vecOrdenado[imin]);
    }

}


void Sorting::BubbleSort(){

    int i, j;
    for (i = 0; i < vectorSize-1; i++)

        for (j = 0; j < vectorSize-i-1; j++)
            if (vecOrdenado[j] > vecOrdenado[j+1])
                swap(vecOrdenado[j], vecOrdenado[j+1]);

}



void SubRutinaMerge(vector<int> &vec, int l, int m, int r) {

        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;


        int L[n1], R[n2];

        for (i = 0; i < n1; i++)
            L[i] = vec[l + i];
        for (j = 0; j < n2; j++)
            R[j] = vec[m + 1+ j];

        i = 0;
        j = 0;
        k = l;
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


        while (i < n1)
        {
            vec[k] = L[i];
            i++;
            k++;
        }


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



void heapify(vector<int>& arr, int n, int i)
{
    int max = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[max])
        max = l;

    if (r < n && arr[r] > arr[max])
        max = r;

    if (max != i) {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
}


void Sorting::HeapSort(){

    int size = (unsigned int)vectorSize;

    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(vecOrdenado, size, i);

    for (int i=size-1; i>0; i--) {
        swap(vecOrdenado[0], vecOrdenado[i]);
        heapify(vecOrdenado, i, 0);
    }

}


int partition (vector<int>& vec, int low, int high)
{
    int pivot = vec[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (vec[j] < pivot)
        {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return (i + 1);
}




void Sorting::QuickSort(int low, int high){
    if (low < high) {

        int partitionIndex = partition(vecOrdenado, low, high);

        QuickSort(low, partitionIndex - 1);
        QuickSort(partitionIndex + 1, high);
    }


}


void Sorting::ShellSort(){

    int size = (unsigned int) vectorSize;

    for (int gap = size/2; gap > 0; gap /= 2) {

        for (int i = gap; i < size; i += 1) {

            int varTemporal = vecOrdenado[i];

            int j;
            for (j = i; j >= gap && vecOrdenado[j - gap] > varTemporal; j -= gap)
                vecOrdenado[j] = vecOrdenado[j - gap];

            vecOrdenado[j] = varTemporal;
        }
    }

}