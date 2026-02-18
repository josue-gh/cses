#include<iostream>
using namespace std;
int main(){
	
	long long int i, n, faltante, num;
	long long int sum=0;
	
	cin>>n;
	cout<<endl;
	for(i=1; i<=n-1; i++){
		cin>>num;
		sum=sum+num;
	}
	n=(n*(n+1))/2;
	faltante=n-sum;
	cout<<endl;
	
	cout<<faltante<<endl;
	
	return 0;
}