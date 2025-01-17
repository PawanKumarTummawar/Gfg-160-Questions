// Count the number of possible triangles

// int countTriangles(vector<int>& arr) {
//         sort(arr.begin(), arr.end());
//         int n = arr.size() - 1;
//         int count = 0;

//         for(int i=n; i>=2; i--){
//             int j = 0, k = i-1;
//             while(k>j){
//                 int sum = arr[j] + arr[k];
//                 if(sum > arr[i]){
//                     count += k-j;
//                     k--;
//                 }
//                 else j++;
//             }
//         }
//         return count;