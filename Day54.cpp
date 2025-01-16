// Pair with given sum in a sorted array

// int countPairs(vector<int> &arr, int target) {
//         int count = 0;
//         int s = 0, e = arr.size() - 1;

//             while(s < e) {
//                 int sum = arr[s] + arr[e];
//                 if(sum > target) e--;
//                 else if(sum < target) s++;
//                 else {
//                     int ele1 = arr[s], ele2 = arr[e];
//                     int c1 = 0, c2 = 0;
//                     while(s<=e && arr[s] == ele1){
//                         c1++;
//                         s++;
//                     }
//                     while(s<=e && arr[e] == ele2){
//                         c2++;
//                         e--;
//                     }
//                     if(ele1 == ele2) count += (c1 * (c1-1))/2;
//                     else count += c1*c2;
//                 }
//         }
//         return count;