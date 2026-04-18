class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // num -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                // return smaller index first
                if (mp[complement] < i)
                    return {mp[complement], i};
                else
                    return {i, mp[complement]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
