class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        //counting the freq 
        // const int &, & for References each string,const for without modifying the orginal data, read-only 
        for(const int& i:nums)
        {
            a[i]++;
        }
        //moving into elemant in map(a) to vector(fre)
        vector<pair<int,int>>fre;
        for(auto& p:a)
        {
            fre.push_back({p.second,p.first});
        }
        //sort the vector in decending order
        sort(fre.rbegin(),fre.rend());
        //store the top k elements in the res vector
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(fre[i].second);
        }
        return res;
    }
};