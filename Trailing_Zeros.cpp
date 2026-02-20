#include<iostream>
using namespace std;
int main()
{
	int n;
	int cant=0;
	cin>>n;
	
	if(n<5){
		cout<<0<<endl;
	}else
	{
	while(n>=5){
	
	n=n/5;
	cant=cant+n;
	}
	cout<<cant<<endl;
	return 0;
	}
}