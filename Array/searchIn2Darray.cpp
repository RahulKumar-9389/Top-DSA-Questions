#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<vector<int>>&arr, int target){

    int n = arr.size();
    int m = arr[0].size();

    int start = 0, end = m*n-1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        int row = mid / m;
        int col = mid % m;

        if(arr[row][col] == target){
            return true;
        }else if(arr[row][col] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return false;
}

int main(){

    vector<vector<int>>matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 13;

    if(isPresent(matrix, target)){
        cout<<"Element is present in the matrix!!";
    }else{
        cout<<"Element is not found!!"<<endl;
    }
    return 0;
}