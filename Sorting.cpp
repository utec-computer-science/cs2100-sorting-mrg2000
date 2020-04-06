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