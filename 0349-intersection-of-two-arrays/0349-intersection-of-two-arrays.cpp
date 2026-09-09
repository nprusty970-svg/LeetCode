class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
       int i,j,k;
        for(i=0;i<nums1.size();i++)
        {
            bool found=false;
            for(j=0;j<nums2.size();j++)
            {
                
                if(nums1[i]==nums2[j])
                {

                    found=true;
                    break;
                }
            }
            if(found)
            {
                bool already=false;
                for(k=0;k<ans.size();k++)
                {
                    if(ans[k]==nums1[i])

                    {
                        already=true;

                        break;
                    }


                }

                if(!already)
                {
                    ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};