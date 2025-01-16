// Count all triplets with given sum in sorted array

// int countTriplets(vector<int> &arr, int target)
// {
//     int n = arr.size(), count = 0, sum = 0;
//     for (int i = 0; i <= n - 3; i++)
//     {
//         int j = i + 1, k = n - 1;
//         while (j < k)
//         {
//             sum = arr[i] + arr[j] + arr[k];
//             if (sum < target)
//                 j++;
//             else if (sum > target)
//                 k--;
//             else if (sum == target)
//             {
//                 count++;
//                 int temp = j + 1;
//                 while (temp < k && arr[temp] == arr[temp - 1])
//                 {
//                     count++;
//                     temp++;
//                 }
//                 k--;
//             }
//         }
//     }
//     return count;