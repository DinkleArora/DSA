#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int N){
    int counter;
    counter = (int)(log10(N)+1);
    return counter;
}

int main(){
    int N = 12345;
    cout << "N: " << N << endl;
    int digits = countDigits(N);
    cout << "no of digits are: " << digits;
    
    return 0;
}