#include<bits/stdc++.h>
using namespace std;

vector<int> rotateByOne(vector<int> v1){
    vector<int> v2;
    for(int i=1; i<v1.size(); i++){
        v2.push_back(v1[i]);
    }
    v2.push_back(v1[0]);
    return v2;
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
