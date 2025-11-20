// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int maxsum=INT_MIN;

//         for(int st=0;st<n;st++){
//             int currsum=0;
//             for(int end=st;end<n;end++){
//                 currsum +=nums[end];
//                 maxsum=max(currsum,maxsum);
//             }
//         }
//         return maxsum;
//     }
// };

//kedane's algorithm

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currsum=0;
//         int maxsum=INT_MIN;

//         for(int i=0;i<nums.size();i++){
//             currsum +=nums[i];
//             maxsum=max(currsum,maxsum);

//             if(currsum<0){
//                 currsum=0;
//             }
//         }
//         return maxsum;
//     }
// };