// problem : Given a Number N.Print number from 1 to N in one separate lines.
//input    :Only one containing a number N(1≤N≤10^3)
//output   :Print N lines according to required above 



#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<i<<endl;
    }
    return 0;
}
