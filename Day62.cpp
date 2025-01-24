Longest Subarray with Sum K

    int
    longestSubarray(vector<int> &arr, int k)
{
    unordered_map<int, int> mpp;
    int prefixSum = 0, count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];

        if (prefixSum == k)
            count = i + 1;

        else if (mpp.find(prefixSum - k) != mpp.end())
            count = max(count, i - mpp[prefixSum - k]);

        if (mpp.find(prefixSum) == mpp.end())
            mpp[prefixSum] = i;
    }
    return count;