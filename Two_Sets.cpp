#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long total=(n*(n+1))/2;
    int pos=1;
    int aux=1;
    int a=0;
    vector<long long> arr;

    if(total%2==0){
        cout<<"YES"<<endl;
        if(n%2==0){
        	cout<<n/2<<endl;
            cout<<"1 ";
            for(int i=2;i<=n;i++){
                if(pos%2!=0){   
                    arr.push_back(i);
                    a++;
                    aux++;
                    if(aux==3){
                        aux=1;
                        pos++;
                    }
                }else{
                    cout<<i<<" ";
                    aux++;
                    if(aux==3){
                        aux=1;
                        pos++;
                    }
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<a; i++){
                cout<<arr[i]<<" ";
            }
        }else{
        	int conjuntos=n/2;
        	cout<<conjuntos+1<<endl;
            for(int i=1;i<=n;i++){
               if(pos%2==0){   
                    arr.push_back(i);
                    a++;
                    aux++;
                    if(aux==3){
                        aux=1;
                        pos++;
                    }
                }else{
                    cout<<i<<" ";
                    aux++;
                    if(aux==3){
                        aux=1;
                        pos++;
                    }
                }
        }
        cout<<endl;
        cout<<conjuntos<<endl;
            for(int i=0; i<a; i++){
                cout<<arr[i]<<" ";
            }
        }
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}