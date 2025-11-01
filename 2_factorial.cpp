
// Problem : Given a number N.Print the factorial of number N
// input   : First line contains a number T(1≤T≤15) number of the test case ,Next line will contain a number N(0≤N≤20/
// output  : For each case print a single line contains the factorial of N


#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

for(int i=1;i<T;i++){

int N;
cin>>N;
long long factorial=1;
for(int j=2;j<=N;j++){

    factorial=factorial*j;
}
cout<<factorial<<endl;

}

return 0;
   
}