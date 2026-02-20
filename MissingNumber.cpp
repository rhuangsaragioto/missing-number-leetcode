#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void printVector(const vector<int>& v) {
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
}

int missingNumber(vector<int>& nums) {
    const int size = nums.size();
    int bCoefficient = ((size * size) + size) * 0.5;
    int sum = 0;

    for (size_t i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    return (bCoefficient - sum);
}

// debugging purposes
int main() {
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    
    int s1 = missingNumber(nums1);
    int s2 = missingNumber(nums2);
    int s3 = missingNumber(nums3);

    vector<vector<int>> inputs = {nums1, nums2, nums3};
    vector<int> expected = {2, 2, 8};
    vector<int> actual = {s1, s2, s3};

    for (size_t i = 0; i < inputs.size(); i++) {
        cout << "Case " << i + 1 << ": ";
        printVector(inputs[i]);
        cout << "\n" << endl;
        cout << "Expected: " << expected[i] << endl;
        cout << "Actual: " << actual[i] << "\n" << endl;
    }
}
