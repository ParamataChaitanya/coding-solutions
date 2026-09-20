class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int answer=0;
        for(auto &costomer:accounts)
        {
            int sum=0;
            for(int j:costomer)
            {
                sum+=j;
            }
            answer=max(answer,sum);
        }
        return answer;
    }
};