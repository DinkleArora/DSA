#include<bits/stdc++.h>
using namespace std;

int occurence(vector<int> v){
    for(int i=0; i<v.size(); i++){
        int temp = -1;

        for(int j=0; j<v.size(); j++){
            if(i != j && v[i] == v[j]){
                temp = v[j];
            }
        }

        if(temp == -1){
            return v[i];
        }
    }

    return -1;
}

int main(){
    vector<int> v = {1,1, 2, 3, 3};
    int once = occurence(v);
    cout << once;

    return 0;
}