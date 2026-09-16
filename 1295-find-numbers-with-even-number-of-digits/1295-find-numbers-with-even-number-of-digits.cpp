class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count1=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int count2=0;
            while(nums[i]!=0)
            {
                
                nums[i]=nums[i]/10;
                count2++;
            }
            if(count2%2==0)
            {
                count1++;
            }
        }
        return count1;
    }
};