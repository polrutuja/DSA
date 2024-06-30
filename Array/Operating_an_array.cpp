class Solution {
  public:
    bool searchEle(vector<int>& a, int x) {
        // code here
        auto it = find(a.begin(), a.end(), x);
        if (it != a.end()){
            return 1;
        }
        return 0;
    }
    

    void insertEle(vector<int>& a, int y, int yi) {
        // code here
        a.insert(a.begin()+yi, y);
    }

    bool deleteEle(vector<int>& a, int z) {
        // code here
        auto it = find(a.begin(), a.end(), z);
        if(it != a.end()){
            a.erase(it);
            return 1;
        }
        return 0;
    }
};