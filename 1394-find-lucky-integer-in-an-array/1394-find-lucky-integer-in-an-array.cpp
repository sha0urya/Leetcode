class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        map<int,int>m;
        for(int i = 0; i < arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        int ans = -1;
        for(auto it: m)
        {
            if(it.first == it.second)
            {
                if(it.first >= ans)
                {
                    ans = it.first;
                }
            }
        }
        return ans;
    }
};