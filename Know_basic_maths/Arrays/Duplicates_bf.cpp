#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> v){
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i] == v[j]){
                v.erase(v.begin() + j);
                j--;
            }
        }
    }
    return v;
}

int main(){
    int n = 5;
    vector<int> v = {1, 2, 2, 3, 3};
    vector<int> v_2 = removeDuplicates(v);
    cout << "The number of elements in the modified array are: " << v_2.size();
    return 0;
}

