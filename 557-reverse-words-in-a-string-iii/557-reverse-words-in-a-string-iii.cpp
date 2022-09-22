class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        
        string ans ="", cur;
        while(str >> cur)
        {
            reverse(cur.begin(), cur.end()); 
            ans += cur;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};