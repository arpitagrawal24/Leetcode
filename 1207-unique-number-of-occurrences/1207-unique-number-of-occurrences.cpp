class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> s;
        for(auto &i : arr)
        {
            m[i]++;
        }
        for(auto &i: m)
        {
            if(s.find(i.second) != s.end())
                return 0;
            s.insert(i.second);
        }
        return 1;
    }
};