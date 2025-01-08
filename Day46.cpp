// Union of Arrays with Duplicates - Day-46

// int findUnion(vector<int>& a, vector<int>& b) {
//         unordered_map<int, int> mpp;
//         int ans = 0;
//         for(int x: a) {
//             if(!mpp[x]) {
//                 mpp[x] = 1;
//                 ans++;
//             }
//         }
//         for(int x: b) {
//             if(!mpp[x]){
//                 mpp[x] = 1;
//                 ans++;
//             }
//         }
//         return ans;
