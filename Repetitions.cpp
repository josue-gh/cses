
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string tex;
    int n;
    int aux=1;
    int mayor=0;
    
    cin>>tex;
    n=tex.length();

    for(int i=0; i<n;i++){

        if(tex[i]==tex[i+1]){

            aux++;
        }else{
            
            if(mayor<aux)
            mayor=aux;
            aux=1;
        }
    }
    cout<<mayor;
    return 0;
}