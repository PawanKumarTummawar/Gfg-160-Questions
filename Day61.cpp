// Equilibrium Point

// int findEquilibrium(vector<int> &arr) {

//         int totalSum = 0, leftSum = 0;
//         for(int num: arr) totalSum += num;
//         for(int i=0; i<arr.size(); i++){
//             if(leftSum == totalSum - leftSum - arr[i]) return i;
//             leftSum += arr[i];
//         }
//         return -1;