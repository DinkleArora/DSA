#include<bits/stdc++.h>
using namespace std;

int reverse_digit(int N){
    int counter = 0;
    int reversed_number = 0;
    while(N>0){
        counter = N % 10;
        reversed_number = reversed_number * 10 + counter;
        N = N/10;
    }
    return reversed_number;
}

int main(){
    int N = 12345;
    cout << "N: " << N << endl;
    int reversed = reverse_digit(N);
    cout << "The reversed number: " << reversed;

    return 0;
}
