#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long int arr[1000000];
	long long int pos=0;
	if(n>=4){
		for(long long int i=1; i<=n; i++){
			if(i%2==0){
				cout<<i<<" ";
			}else{
				arr[pos]=i;
				pos++;
			}
		}
		
		for(long long int i=0;i<pos;i++){
			cout<<arr[i]<<" ";
		}
	}else if(n==1){
		cout<<"1"<<endl;
	}else{
		cout<<"NO SOLUTION"<<endl;
	}
	return 0;
}