#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	long long int bit = 1;
	for(int i=1;i<=n;i++){
		bit=bit*2 % 1000000007;
	}
	cout<<bit<<endl;
	return 0;
}