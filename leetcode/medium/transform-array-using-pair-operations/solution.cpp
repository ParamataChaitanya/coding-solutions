class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s1=0,s2=0;
        for(long long x:source)
        {
            s1+=x;
        }
        for(long long y:target)
        {
            s2+=y;
        }
        if(s1==s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};