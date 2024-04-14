
#include <vector>
#include <iostream>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    if (nums.size() < 3)
        return false;
    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] <= first) {
            first = nums[i];
        }
        else if (nums[i] <= second) {
            second = nums[i];
        }
        else {
            return true;
        }
    }
}

int main()
{
    vector<int> a = { 10, 5, 1, 4, 2, 3, 2, 1 };
    increasingTriplet(a);
}

