Missing in Array

    int
    missingNum(vector<int> &arr)
{
    int ans = 0;
    for (auto ele : arr)
        ans ^= ele;
    for (int i = 1; i <= arr.size() + 1; i++)
        ans ^= i;
    return ans;
}