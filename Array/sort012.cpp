#include <bits/stdc++.h>

using namespace std;



void sort012(int arr[], int n){

    int low = 0;
    int mid = 0;
    int high = (n-1);

    while(mid <= high){
        
        if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 0){
            swap(arr[low++], arr[mid++]);
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main(){

    int arr[6] = {2, 1, 0, 2, 0, 1};

    sort012(arr, 6);
    
    cout<<endl;
    cout<<"Array after sorting is: ";
    for(int it : arr){
        cout<<it<<" ";
    }
    return 0;
}