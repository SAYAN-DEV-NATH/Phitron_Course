/*

class Solution
{
public:
    int sum = 0, ans = 0;
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int tmp = nums[i] * nums[j];
                if (tmp > sum)
                {
                    sum = tmp;
                    ans = (nums[i] - 1) * (nums[j] - 1);
                }
            }
        }
        return ans;
    }
};

*/