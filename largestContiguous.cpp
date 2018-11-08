// Largest Sum Contiguous Subarray

#include <iostream>
#include <vector>

using namespace std;

int findMaxSum(vector<int> nums);

int main(int argc, char const *argv[])
{
    // vector<int> nums = {-2,-3,4,-1,-2,1,5,-3};
    // vector<int> nums = {-2};
    vector<int> nums = {-2,-3};

    cout << findMaxSum(nums) << endl;

    return 0;
}

int findMaxSum(vector<int> nums) {
    int max_so_far = nums[0], max_ending_here = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        max_ending_here = max(nums[i], max_ending_here + nums[i]);

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}