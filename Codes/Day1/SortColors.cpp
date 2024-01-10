// sort colors or Sort 0,1,2
// problem statement        -- leetcode 75 --
/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that 
objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/

// code
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        // approach1  stl:sort
        // sort(nums.begin(),nums.end());


        // approach2  counting 0 ,1 ,2
        // int zeros=0, ones=0,twos=0;
        // for(int i=0 ;i<nums.size();i++){
        //     if(nums[i]==0)
        //     zeros++;
        //     else if(nums[i]==1)
        //     ones++;
        //     else 
        //     twos++;
        // }
        // int j=0;
        // while(zeros--){
        //     nums[j]=0;
        //     j++;
        // }
        //  while(ones--){
        //     nums[j]=1;
        //     j++;
        // }
        //  while(twos--){
        //     nums[j]=2;
        //     j++;
        // }


        // approach3 in-place 3 pointer 
//         int l=0 ,m=0 ,h =nums.size()-1;
//         while(m<=h){
//             if(nums[m]==0){
//                 swap(nums[m],nums[l]);
//                 l++;
//                 m++;
//             }
//             else if (nums[m]==1){
//                m++;
//             }
//             else{
//                 swap(nums[m],nums[h]);
//                 h--;
//             }
//         }
//     }
// };