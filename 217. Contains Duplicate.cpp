// Time - O(n)
// Hashmap

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0;i < nums.size();i++)
        {
            if(m.find(nums[i]) != m.end())    // include number
                return true;
            else
                m[nums[i]] = 0;
        }
        return false;
    }
};
