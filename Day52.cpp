
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        int count = 0;
        int l = 0, n = arr.size(), r = n - 1;
        while (l < r)
        {
            int sum = arr[l] + arr[r];
            if (sum >= target)
                r--;
            else
            {
                count += r - l;
                l++;
            }
        }
        return count;
    }
};
