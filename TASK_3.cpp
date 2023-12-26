#include <iostream>
using namespace std;

// Function to find two indices that add up to the target, returning indices directly
void findTwoIndices(const int nums[], int size, int target, int& firstIndex, int& secondIndex) {
    int left = 0, right = size - 1;

    while (left < right) {
        int currentSum = nums[left] + nums[right];

        if (currentSum == target) {
            firstIndex = left;
            secondIndex = right;
            return;
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }

    // No matching indices found, set indices to invalid values
    firstIndex = -1;
    secondIndex = -1;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 10;
    int firstIndex, secondIndex;

    findTwoIndices(nums, sizeof(nums) / sizeof(nums[0]), target, firstIndex, secondIndex);

    if (firstIndex == -1 || secondIndex == -1) {
        cout << "No such numbers exist in the list." << endl;
    } else {
        cout << "Indices: " << firstIndex << ", " << secondIndex << endl;
    }

    return 0;
}