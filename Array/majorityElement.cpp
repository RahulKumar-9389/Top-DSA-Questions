#include <bits/stdc++.h>

using namespace std;


int majorityElement(int arr[], int n){

    int count = 0;
    int elem;

    for(int i = 0; i < n; i++){
        
        if(count == 0){
            count = 1;
            elem = arr[i];
        }else if(arr[i] == elem){
            count++;
        }else{
            count--;
        }
    }

    // check stored element is majority element
    int count2 = 0; 
    for(int i = 0; i < n; i++){
        if(arr[i] == elem){
            count2++;
        }
    }

    if(count2 > n/2){
        return elem;
    }

    return -1;
}

int main(){

    int arr[7] = {2, 2, 1, 1, 1, 1, 2};
    
    cout<<endl;
    cout<<majorityElement(arr, 7)<<" is the element which appeares more than n/2 times!!"<<endl;

    return 0;
}