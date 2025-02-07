#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&arr){

    int n = arr.size();

    int profit = 0;
    int cost = INT_MAX;

    for(int i = 0; i < n; i++){

        cost = min(cost, arr[i]);
        profit = max(profit, arr[i] - cost);

    }

    return profit;
}


int main(){

    vector<int> arr = {7,1,5,3,6,4};

    cout<<"Maximum profit we can make is: "<<maxProfit(arr)<<endl;
    return 0;
}