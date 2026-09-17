class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector <int> seen(n+1,0);
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            seen[nums[i]]=1;
        }

        for(int i=1;i<=n;i++)
        {
            if(seen[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};