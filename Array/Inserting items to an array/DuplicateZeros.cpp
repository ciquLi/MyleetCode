class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        while(i<(arr.size()-1))
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i,0);
                arr.pop_back();
                i += 2;
            }
            else
            {
                i++;
            }
        }
    }
};
