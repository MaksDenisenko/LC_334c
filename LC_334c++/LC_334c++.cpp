
#include <vector>
#include <iostream>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int j = 0, k = 0;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        j = i + 1;
        while (j != nums.size() - 1)
        {
            if (nums[i] < nums[j])
            {
                k = j + 1;
                while (k != nums.size())
                {
                    if (nums[j] < nums[k])
                        return true;
                    k++;
                }
            }
            j++;
        }
    }
    return false;
}

int main()
{
    vector<int> a = { 10, 5, 1, 4, 2, 3, 2, 1 };
    increasingTriplet(a);
}

