#include <iostream>
using namespace std;

int consecutiveOnes(int arr[], int n){

    int count = 0;
    int maxi = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            count = 0;
        }

        maxi = max(count, maxi);
    }

    return maxi;
}

int main(){

    int n = 6;
    int arr[6] = {1, 1, 0, 1, 1, 1};

    cout<<endl;
    cout<<"Maximum length of consecutive ones is: "<<consecutiveOnes(arr, 6)<<endl;

    return 0;
}