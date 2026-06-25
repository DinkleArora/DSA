#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>prices){
    int maxProfit = 0;
    int profit = 0;
    int minPrice = INT_MAX;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        else {
            profit = prices[i] - min;
        }
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main(){
    vector<int>prices = {7, 1, 6, 3, 4};
    int maxmProfit = maxProfit(prices);
    cout << "The maxm profit is: " << maxmProfit;
    
    return 0;
}