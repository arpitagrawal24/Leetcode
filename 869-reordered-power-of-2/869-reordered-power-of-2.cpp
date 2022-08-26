class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> v = hash_num(n);
        int num = 1;
        for(int i = 0 ; i < 31 ; i++)
        {
            if(v == hash_num(num))
                return true;
             num = num<<1;   
        }return false;
    }
    
    vector<int> hash_num(int n)
    {
        vector<int> v(10);
        while(n>0)
        {
            v[n%10]++;
            n/= 10;
        }
        return v;
    }
};