class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> m;
        vector <pair<int , int> >v;
        vector <int> v1;
        for(auto &i : nums)
        {
            ++m[i];                
        }
        for(auto &[x ,y ] : m)
        {
            v.push_back({y,x});
        }
        for(auto &[x,y] : m)
        {
            cout<<x<<" "<<y<<endl;
        }
        cout<<endl;
        for(auto &i : v)
        {
            cout<< i.first << " " << i.second<<endl;
        }
        cout<<endl;
        sort(v.rbegin(), v.rend());
        for(auto &i : v)
        {
            cout<< i.first << " " << i.second<<endl;
        }
        for(int i =0 ; i< k ; i++)
        {
            // cout<< v[i].first << " " << v[i].second<<endl;
            v1.push_back(v[i].second);
        }
        return v1;
    }
};