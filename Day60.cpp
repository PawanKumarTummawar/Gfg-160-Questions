// Container With Most Water

// int maxWater(vector<int> &arr) {

//         int left = 0, right = arr.size() - 1;
//         int maxArea = 0;
//         int currArea;

//         while(left < right){
//             currArea = (right - left) * min(arr[left], arr[right]);

//             maxArea = maxArea < currArea ? currArea : maxArea;
//             arr[left] > arr[right] ? --right : ++left;
//         }
//         return maxArea;