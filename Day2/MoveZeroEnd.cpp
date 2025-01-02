#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int j = 0; // Pointer for the position of the next zero to replace

    // Move all non-zero elements forward
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 0, 4, 0};
    moveZeroes(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
}