// 26. Remove duplicates from sorted array
/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element 
appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.*/

#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int j=1;
        for(int i=1; i<nums.size(); i++){
            if (nums[i]!=nums[i-1]){
                nums[j++]=nums[i];
            }
        }
        return j;

    }
};