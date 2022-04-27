class Solution
{
    public:
        vector<int> parent;

    int find(int x)
    {
        if (parent[x] == x)
        {
            return x;
        }
        parent[x] = find(parent[x]);
        return parent[x];
    }

    void funion(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
        {
            return;
        }
        parent[a] = b;
    }

    string smallestStringWithSwaps(string s, vector<vector < int>> &pairs)
    {
        parent.clear();
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            parent.push_back(i);
        }
        for (int i = 0; i < pairs.size(); i++)
        {
            funion(pairs[i][0], pairs[i][1]);
        }
        for (int i = 0; i < len; i++)
        {
            parent[i] = find(parent[i]);
        }
        unordered_map<int, priority_queue<char, vector< char >, greater < char>>> listChars;
        for (int i = 0; i < len; i++)
        {
            listChars[parent[i]].push(s[i]);
        }
        string res = "";
        for (int i = 0; i < len; i++)
        {
            res += listChars[parent[i]].top();
            listChars[parent[i]].pop();
        }
        return res;
    }
};