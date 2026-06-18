#include<bits/stdc++.h>
using namespace std;

int maxConsOnes(vector<int>arr){
    int count = 0;
    int maxi = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            count++;
        }
        if(arr[i] == 0){
            count = 0;
        }
        maxi = max(count, maxi);
    }
    return maxi;
}

int main(){
    int n = 5;
    vector<int> v = {1, 0, 0, 1, 1};
    int v_2= maxConsOnes(v);
    cout << "max consecutive ones: " << v_2;
    return 0;
}
