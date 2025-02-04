#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){

    int i = 0;
    int j = 0;
    vector<int>ans;

    while(i<n && j<m){

        if(arr1[i] <= arr2[j]){
            if(ans.size() == 0 || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(ans.size() == 0 || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(ans.size() == 0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }

    return ans;
}

int main(){

    int n = 10; int m = 7;

    int arr1[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[m] = {2, 3, 4, 4, 5, 11, 12}; 

    vector<int> result = findUnion(arr1, arr2, n, m);

    cout<<endl;
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}