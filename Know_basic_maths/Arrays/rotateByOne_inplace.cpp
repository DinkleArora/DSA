#include<bits/stdc++.h>
using namespace std;

vector<int> rotateByOne(vector<int> v){
    int first = v[0];
    for(int i=0; i<v.size()-1; i++){
        v[i] = v[i+1];
    }
    v.back() = first;

    return v;
}

int main(){
    int n = 5;
    vector<int> v = {1, 2, 2, 3, 3};
    vector<int> v_2 = rotateByOne(v);
    cout << "The rotated array is: ";
    for(int x : v_2)
    cout << x << " ";
    return 0;
}