#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int AMOUNT;
    cin>>AMOUNT;

    long long  ROW, COLUMN, NUMBER, square;

    vector<long long> RESULTS;
    int iterator;

    for(iterator=0; iterator<AMOUNT; iterator++){
        cin>>ROW>>COLUMN;
        long long GREATER=max(ROW, COLUMN);

        if(GREATER==ROW){
            if(ROW%2==0){
                square=ROW*ROW;
                NUMBER=square-(COLUMN-1);
                RESULTS.push_back(NUMBER);
            }else{
                square=(ROW-1)*(ROW-1);
                NUMBER=square+COLUMN;
                RESULTS.push_back(NUMBER);
            }
        }else{
            if(COLUMN%2==0){
                square=(COLUMN-1)*(COLUMN-1);
                NUMBER=square+ROW;
                RESULTS.push_back(NUMBER);
            }else{
                square=COLUMN*COLUMN;
                NUMBER=square-(ROW-1);
                RESULTS.push_back(NUMBER);
            }
        }
    }

    for(iterator=0; iterator<AMOUNT; iterator++){
        cout<<RESULTS[iterator]<<endl;
    }

    return 0;
}