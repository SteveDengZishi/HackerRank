#include <unordered_map>
//two sum problem, this method using iterator will fail when there is repeated number
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,string> map;
        for(int i=0;i<nums.size();i++){
            int look=target-nums[i];
            vector<int>::iterator res=find(nums.begin(),nums.end(),look);
            if(res!=nums.end() && res!=find(nums.begin(),nums.end(),nums[i]) && map[res-nums.begin()]!="used"){
                result.push_back(i);
                map[i]="used";
                result.push_back(res-nums.begin());
            }
        }
        return result;
    }
};
