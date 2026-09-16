class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            bool selfdividing=true;
            while(num!=0)
            {
                int dig=num%10;
                if(dig==0 || i%dig!=0)
                {
                    selfdividing=false;
                    break;
                }
                num=num/10;
            }
            if(selfdividing)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};