#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int n = nums.size();
        int a=0;
        
    for (int i = 0; i < n; i++)
    {
        nums[a] = nums[i];
        if (nums[i] != 0)
        {
            a++;
        }
    }
        
        for (int i = a; i < n; i++)
    {
        nums[i] =0;
    }
}

int main()
{
    // vector<int> nums{ 0, 0, 1 };
    vector<int> nums{ 0, 1, 0, 3, 12 };
    moveZeroes(nums);
    for (auto e : nums)
        cout << e << " ";
    
    return 0;
}
