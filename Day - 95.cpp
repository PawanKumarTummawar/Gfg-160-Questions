k largest elements /

    vector<int>
    kLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < k; ++i)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < arr.size(); ++i)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    vector<int> res;
    while (!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}