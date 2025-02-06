Permutations of a String

    void
    removing(string &s, vector<string> &ans, unordered_map<string, int> &mm)
{
    int i = 0, j = 0;
    for (i = s.length() - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
            break;
    }
    if (i < 0)
        return;
    for (int k = s.length() - 1; k > i; k--)
    {
        if (s[k] > s[i])
        {
            j = k;
            break;
        }
    }
    swap(s[i], s[j]);
    i++;
    j = s.length() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    mm[s]++;
    if (mm[s] == 1)
        ans.push_back(s);
}

vector<string> findPermutation(string &s)
{

    sort(s.begin(), s.end());
    vector<string> ans;
    ans.push_back(s);
    unordered_map<string, int> mm;
    mm[s]++;
    int fact = 1;
    for (int i = 2; i <= s.length(); i++)
        fact *= i;
    fact--;
    while (fact--)
    {
        removing(s, ans, mm);
    }
    return ans;