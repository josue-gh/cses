#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
	int numero;
    int suma=0;
	
	cin>> numero;
	//definimos al vector
	vector <int> vec;
	
	//agregamos datos 
	for(int i=0; i<numero;i++){
		int valor;
		cin>>valor;
		vec.push_back(valor);
	}
	
	//ordenamos los elementos del vector
	sort(vec.begin(), vec.end());
	
	for(int j=0; j<numero-1; j++){
	if(vec[j] != vec[j+1]){
		suma=suma+1;
	}	
	}
	
	cout<<suma+1<<endl;
	
	return 0;
}