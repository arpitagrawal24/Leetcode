class DisjSet
{
    int *rank, *parent, n;

    public:
        DisjSet(int n)
        {
            rank = new int[n];
            parent = new int[n];
            this->n = n;
            makeSet();
        }
    void makeSet()
    {
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);

        if (xset == yset)
            return;

        if (rank[xset] < rank[yset])
        {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset])
        {
            parent[yset] = xset;
        }
        else
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};
class Solution
{
    public:

        bool validPath(int n, vector<vector < int>> &edges, int source, int destination) {
            DisjSet obj(n);
            for(auto &i: edges)
            {
                obj.Union(i[0],i[1]);
            }
            if(obj.find(source) == obj.find(destination))
                return 1;
            else
                return 0;
        }
};
