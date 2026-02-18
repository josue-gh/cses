#include<iostream>
using namespace std;
int main()
{
	long long int cant;
	long long int sum=0;
	long long int aux;
	cin>>cant;
	long long int arr[cant];
	
	for(int j=0;j<cant;j++)
	{
		cin>>arr[j];
	}
	
	for(int i=0; i<cant-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			aux=arr[i]-arr[i+1];
			arr[i+1]=(arr[i+1])+aux;
			sum=sum+aux; 
		}
	}
	cout<<sum;
	return 0;
}