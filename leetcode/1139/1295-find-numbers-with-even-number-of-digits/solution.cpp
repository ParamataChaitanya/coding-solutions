class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i:nums)
        {
            int d=0;
            while(i!=0)
            {
                d++;
                i=i/10;
            }
            if(d%2==0)
            {
                c++;
            }
        }
        return c;
    }
};