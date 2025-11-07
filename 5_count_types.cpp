//Problem: Given N numbers. Count how many of these values are even, odd, positive and negative.


//Input:

//First line contains one number N (1 ≤ N ≤ 10^3) number of values.
//Second line contains N numbers (-10^5 ≤ Xi ≤ 10^5).

//Output:

//Print four lines with the following format:

//First Line: "Even: X", where X is the number of even numbers in the given input.

//Second Line: "Odd: X", where X is the number of odd numbers in the given input.

//Third Line: "Positive: X", where X is the number of positive numbers in the given input.

//Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.




#include<iostream>
using namespace std;


int main(){

int N;
cin>>N;

int even=0,odd=0,positive=0,negative=0;



for(int i=1;i<=N;i++){
    int X;
cin>>X;
    if(X%2==0)
    even++;
    else
    odd++;

    if(X>0)
    positive++;
    else if(X<0)
    negative++;
}


cout<<"even:"<<even<<endl;
cout<<"odd:"<<odd<<endl;
cout<<"positive:"<<positive<<endl;
cout<<"negative:"<<negative<<endl;


return 0;
}
