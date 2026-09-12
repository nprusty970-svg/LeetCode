class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0,i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[index]=nums[i];
                index++;
            }
        }
        for(i=index;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};