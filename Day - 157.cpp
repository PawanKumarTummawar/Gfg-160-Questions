Find Only Repetitive Element from 1 to n - 1

    // User function Template for C++
    class Solution
{
public:
    int findDuplicate(vector<int> &arr)
    {
        // code here
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
            ans ^= arr[i];
        for (int i = 1; i < arr.size(); i++)
            ans ^= i;
        return ans;
    }
};
