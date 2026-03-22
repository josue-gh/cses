#include<iostream>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;

//recursividad para calcular la diferencia minima
long long conjunto(int &cant, int i, vector<long long> &arr, long long sum1, long long sum2){
    //caso base cuando el iterador llega hasta la cantidad de numeros
    if(i==cant){
        return abs(sum1-sum2);
    }
    //opciones para la funcionalidad de min
    long long opcion1= conjunto(cant, i+1, arr, sum1+arr[i], sum2);

    long long opcion2= conjunto(cant, i+1, arr, sum1, sum2+arr[i]);
    //devolucion de la diferencia minima
    return min(opcion1, opcion2);
}

int main(){
    
    int cant, num;
    cin>>cant;
    vector<long long> arr(cant);

    for(long long i=0; i<cant; i++){
        cin>>arr[i];
    }
    
    cout<<conjunto(cant,0,arr,0,0);
    
    return 0;
}