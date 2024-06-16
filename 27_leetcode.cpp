//27. Remove elememt
/* Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
 The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.*/
 
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};