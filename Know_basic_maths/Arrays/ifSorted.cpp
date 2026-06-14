#include <bits/stdc++.h>
using namespace std;

bool ifSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cout << "enter the no of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool result = ifSorted(arr, n);
    if(result){
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}

