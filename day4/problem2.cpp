#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
     void recursion(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
          result.push_back(current);

          for(int i = index; i < nums.size(); ++i){
            current.push_back(nums[i]);
            recursion(i+1, nums, current, result);
            current.pop_back();
          }
     }

     vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        recursion(0, nums, current, result);
        return result;
     }
};
int main(){
    Solution sol;

    vector<int> nums = {0} ;
    vector<vector<int>> res = sol.subsets(nums);
    
    cout << "Subsets:\n";
    for (const auto& subset : res) {
        cout << "[";
        for (int num : subset)
            cout << num << " ";
        cout << "]\n";
    }

    return 0;

}