#include <iostream> 
#include <vector>
#include <unordered_map> 
using namespace std;

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            auto p = map.find(target-nums[i]);
            if(p != map.end()){
                cout << "match found: " << p->second << " and " << i << endl;
                return {p->second, i};
            }
            map[nums[i]] = i;
        }
    }
};

int main(){
    Solution s;
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    s.twoSum(v, 13);
    return 0;
}