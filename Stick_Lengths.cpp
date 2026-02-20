#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	
	long long med=arr[n/2];
	long long cost=0;
	for(int j=0;j<n;j++){
		if(arr[j]<med){
			cost=cost+(med-arr[j]);
		}else if(arr[j]>med){
			cost=cost+(arr[j]-med);
		}
	}
	cout<<cost;
	return 0;
}