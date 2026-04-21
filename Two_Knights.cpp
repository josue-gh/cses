#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<long long> FormasDeColocarDosCaballos;
    
    long long  DimensionesDelTablero;
    cin>>DimensionesDelTablero;

    for(long long dimension=1; dimension<=DimensionesDelTablero; dimension++){
        long long TotalFormasDeAgrupar=((dimension*dimension)*((dimension*dimension)-1))/2;
        long long ChoqueCaballos=4*(dimension-1)*(dimension-2);
        long long combinatoria=TotalFormasDeAgrupar-ChoqueCaballos;
        FormasDeColocarDosCaballos.push_back(combinatoria);
    }

    for(int resultado=0; resultado<DimensionesDelTablero; resultado++){
        cout<<FormasDeColocarDosCaballos[resultado]<<"\n";
    }
    
    return 0;
}