class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v;
        for(int i= 0 ; i < s.size() ; i++)
        {
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'u' or s[i] == 'o' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
                v.push_back(i);
        }
        int a = 0 , b = v.size() - 1;
        while(a < b)
        {
            swap(s[v[a]],s[v[b]]);
            a++;
            b--;
        }
        return s;
    }
};