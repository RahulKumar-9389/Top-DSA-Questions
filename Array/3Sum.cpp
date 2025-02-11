#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, int n, int target)
{

    // Initialize a answer vector
    vector<vector<int>> ans;

    // sort the array
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {

        if (i != 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if (sum < target)
            {
                j++;
            }
            else if (sum > target)
            {
                k--;
            }
            else
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                // skip the duplicates:
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int target = 0;

    vector<vector<int>> result = threeSum(arr, arr.size(), target);
    for (auto it : result)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}