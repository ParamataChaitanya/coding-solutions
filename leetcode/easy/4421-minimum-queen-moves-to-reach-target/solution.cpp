class Solution {
public:
    int minQueenMoves(vector<int>& s, vector<int>& t) {
        if(t[0]==s[0] || t[1]==s[1] || abs(t[0]-s[0])==abs(t[1]-s[1]) )
        {
            if(s==t)
            {
                return 0;
            }
            return 1;
        }
        else
        {
            return 2;
        }
    }
};