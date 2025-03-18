Palindrome SubStrings

    int
    palinCount(int left, int right, string &s)
{
    int count = 0;
    while (left >= 0 && right < s.size())
    {
        if (s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
        else
            break;
    }
    return count;
}
int countPS(string &s)
{
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += palinCount(i - 1, i + 1, s);
    }

    for (int i = 1; i < n; i++)
    {
        count += palinCount(i - 1, i, s);
    }
    return count;