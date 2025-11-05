class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> res;
        int i = 0, j = 0;
        while(i< a.size() && j < b.size()){
            int tmp;
            if(a[i] < b[j]){
                tmp = a[i];
                i++;
            } else if(a[i] > b[j]) {
                tmp = b[j];
                j++;
            } else {
                tmp = a[i];
                i++;
                j++;
            }
            
            if(res.empty() || tmp != res.back()){
                res.push_back(tmp);
            }
        }
        while(i< a.size()){
            if(res.empty() || a[i] != res.back())
            res.push_back(a[i]);
            i++;
        }
        while(j< b.size()){
            if(res.empty() || b[j] != res.back())
            res.push_back(b[j]);
            j++;
        }
        return res;
    }
};