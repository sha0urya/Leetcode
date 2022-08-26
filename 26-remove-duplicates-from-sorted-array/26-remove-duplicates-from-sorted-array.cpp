class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        if(nums.size()==0)return -1;
        if(nums.size()==1)return 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]){   
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};