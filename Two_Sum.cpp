#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ret;
        int size=nums.size();

        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    
                }
            }
        }

        return ret;
        
    }
};




int main(){


    Solution solution;
    vector<int>nums = {2, 7, 11, 15};

    int target=9;

    vector<int>result=solution.twoSum(nums,target);

    cout << result[0] << " " << result[1] << endl;

    return 0;


}