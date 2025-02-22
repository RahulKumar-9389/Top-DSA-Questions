#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int rows){

    vector<vector<int>>ans(rows);

    for(int i = 0; i < rows; i++){

        ans[i] = vector<int>(i+1, 1);

        for(int j = 1; j < i; j++){
            ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
        }
    }

    return ans;
}

int main(){

    int rows = 5;
    vector<vector<int>>res = generate(rows);
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}