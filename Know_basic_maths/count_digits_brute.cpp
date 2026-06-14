#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int counter = 0;
    while(n>0){
        counter++;
        n = n/10;
    }
    return counter;
}

int main(){
    int N = 12345;
    cout << "N: " << N << endl;
    int digits = countDigits(N);
    cout << "no of digits in the number are: " << digits;

    return 0;
}