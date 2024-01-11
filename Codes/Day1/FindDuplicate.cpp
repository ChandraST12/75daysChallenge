//find duplicate in array 
//  problem statement        -- leetcode 287 --
/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/
// code

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    approach1 
    // int ans=0;
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size()-1;i++){
    //    if(nums[i]==nums[i+1]){
    //        ans= nums[i];
    //        break;
    //    }
      
    // } 
    // return ans;
    //  Time Complexity -> O(N Log N)
    // Space Complexit -> O(1)


    // approach2    marking visited =>-1

    // int ans=-1;
    // for(int i=0;i<nums.size();i++){
    //     int index = abs(nums[i]);
    //     if(nums[index]<0){
    //       ans= index;
    //       break;
    //     }
    //      nums[index]= -1*nums[index];
    // }
    //    return ans;

    // approach3
      while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);

    }
    return nums[0];

    
    
    }
};
*/