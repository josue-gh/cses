#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	long long x;
	cin>>n>>x;
	unordered_map<long long,int> mapa;
	for(int h=0; h<n;h++){
		long long v;
		cin>>v;
		if(v<=x){ 
		long long comple=x-v;
		if(mapa.find(comple)!=mapa.end()){
			cout<<h+1<<endl;
			cout<<mapa[comple]+1;
			return 0;
		}
		mapa[v]=h;
		}
	}
	 
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}