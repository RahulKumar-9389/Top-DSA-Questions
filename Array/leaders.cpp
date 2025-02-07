#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int>&arr){

    int n = arr.size();

    vector<int>ans;
    ans.push_back(arr[n-1]);

    int leader = arr[n-1];

    for(int i = (n-2); i >= 0; i--){

        if(arr[i] > leader){
            ans.push_back(arr[i]);
            leader = arr[i];
        }
    }

    return ans;
}

int main(){

    vector<int>arr = {10, 22, 12, 3, 0, 6};

    vector<int>ans = findLeaders(arr);
    for(int elem : ans){
        cout<<elem<<" ";
    }
    return 0;
}