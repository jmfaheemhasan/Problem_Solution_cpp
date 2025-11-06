// problem: Given Multiplie Lines Contains a Number X which is a Password .Print "wrong"if the password is incorrect otherwise,print "correct"&terminate the program .
// Note   : The "correct"password is the number 1999.
// Input  : The input contains several password ; each line contains a number X(10^3 ≤ X ≤ 10^4 - 1)
// Output : Print the "wrong"if the password is typed wrong otherwise ,print "correct"if the password is typed correctly 


#include<iostream>
using namespace std;

int main(){

int X;
while(cin>>X){
    if(X==1999){
        cout<<"correct"<<endl;
    }else{
        cout<<"incorrect"<<endl;
    }
}
return 0;
}