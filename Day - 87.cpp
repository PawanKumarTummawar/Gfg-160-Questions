Maximum path sum from any node

    int
    solve(Node *root, int &maxi)
{
    if (!root)
        return 0;
    int leftSum = solve(root->left, maxi);
    int rightSum = solve(root->right, maxi);
    if (leftSum > 0 && rightSum > 0)
        maxi = max(maxi, root->data + leftSum + rightSum);
    else if (leftSum < 0 && rightSum < 0)
        maxi = max(maxi, root->data);
    else
        maxi = max(maxi, root->data + max(leftSum, rightSum));

    return max(0, root->data + max(leftSum, rightSum));
}
int findMaxSum(Node *root)
{
    int maxi = INT_MIN;
    solve(root, maxi);
    return maxi;
}