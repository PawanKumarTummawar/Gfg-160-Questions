Flood fill Algorithm

    void
    solve(vector<vector<int>> &image, int i, int j, int oldcolor, int newColor, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m || image[i][j] != oldcolor)
        return;
    image[i][j] = newColor;
    solve(image, i - 1, j, oldcolor, newColor, n, m);
    solve(image, i + 1, j, oldcolor, newColor, n, m);
    solve(image, i, j - 1, oldcolor, newColor, n, m);
    solve(image, i, j + 1, oldcolor, newColor, n, m);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                              int newColor)
{
    int n = image.size();
    int m = image[0].size();
    int oldcolor = image[sr][sc];
    if (oldcolor != newColor)
        solve(image, sr, sc, oldcolor, newColor, n, m);
    return image;