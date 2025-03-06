#include <bits/stdc++.h>
using namespace std;


vector<int> findMissingAndRepeatedValues(vector<vector<int>>grid, int n){

    int size = n * n;
    vector<int>freq(size+1, 0);

    int missing = -1;
    int repeated = -1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            freq[grid[i][j]]++;
        }
    }

    for(int i = 1; i <= size; i++){
        if(freq[i] == 0){
            missing = i;
        }
        if(freq[i] == 2){
            repeated = i;
        }
    }

    return {repeated, missing};
}


int main(){

    vector<vector<int>>grid = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 4, 6}
    };

    int n = grid.size();

    vector<int>ans = findMissingAndRepeatedValues(grid, n);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}