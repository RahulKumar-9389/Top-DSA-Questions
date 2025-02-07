#include <bits/stdc++.h>
using namespace std;

// Method 1
// void rearrangeElements(vector<int>&arr){

//     int n = arr.size();

//     vector<int>pos, neg;

//     for(int i = 0; i < n; i++){
        
//         if(arr[i] < 0){
//             neg.push_back(arr[i]);
//         }else{
//             pos.push_back(arr[i]);
//         }
//     }

//     // copy elements in orignal array
//     for(int i = 0; i < n/2; i++){
//         arr[2*i] = pos[i];
//         arr[2*i+1] = neg[i];
//     }

// }



// method 2 
vector<int> rearrageElements(vector<int>&arr){

    int n = arr.size();
    vector<int>ans(n, -1);
    
    int pos = 0;
    int neg = 1;

    for(int i = 0; i < n; i++){
        
        if(arr[i] < 0){
            ans[neg] = arr[i];
            neg += 2;
        }else{
            ans[pos] = arr[i];
            pos += 2;
        }
    }

    return ans;
}

int main(){

    vector<int>arr = {1, 2, -4, -5};
    vector<int>ans = rearrageElements(arr);

    for(int it : ans){
        cout<<it<<" ";
    }
    return 0;
}