//
// Created by Maor Roizman Gheiler on 4/5/20.
//

#include "Sorting.h"
#include "vector"

Sorting::Sorting(vector<int> vector){

    vectorSize = vector.size();

    vecDesordenado = vector;


}



void Sorting::PrintVector(){
    for(int i=0;i<vecOrdenado.size();i++){
        cout << vecOrdenado[i] << " ";
    }
}



void Sorting::InsertSort(){

    vecOrdenado = vecDesordenado;

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