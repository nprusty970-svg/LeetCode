class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size(),i;
       if(digits[n-1]!=9)
       {
            digits[n-1]++;
       } 
       else
       {
        for(i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
            
        }
        digits.insert(digits.begin(),1);
       }
        return digits;
    }
};