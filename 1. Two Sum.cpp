// Time - O(n^2)
// 暴力破解法

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len_nums = nums.size();
        vector<int> ans;
        for(int i = 0; i < len_nums; i++)
        {
            for(int j = 0; j < len_nums; j++)
            {
                if(i == j)
                    continue;
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// Time - O(nlogn)
// 利用哈希表達到只需要查詢一次，就可以找到 (Target - num) 是否在哈希表內

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(target - nums[i]) != m.end())    // found key in hashmap
            {
                ans.push_back(i);
                ans.push_back(m[target - nums[i]]);
                return ans;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};
