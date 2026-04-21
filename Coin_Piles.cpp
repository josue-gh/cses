#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int CantidadDEPilas;
    cin>>CantidadDEPilas;

    vector<string> mostrarResultado;
    for(int valores=1; valores<=CantidadDEPilas; valores++){
        long long a, b;
        cin>>a>>b;

        long long condicion1=(a+b)%3;
        long long maximo=max(a,b);
        long long minimo=min(a,b);
        if(condicion1==0 && maximo<=2*minimo){
            mostrarResultado.push_back("YES");
        }else{
            mostrarResultado.push_back("NO");
        }
    }

    for(int mostrar=0; mostrar<CantidadDEPilas; mostrar++){
        cout<<mostrarResultado[mostrar]<<"\n";
    }
    return 0;
}