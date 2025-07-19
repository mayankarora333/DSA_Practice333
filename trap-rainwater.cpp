#include <iostream>
#include <vector>
using namespace std;

// Function to return the maximum water that can be stored
int maxWater(vector<int>& arr) {
    int res = 0;

    // For every element of the array
    for (int i = 1; i < arr.size() - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
            right = max(right, arr[j]);

        // Update the maximum water
        res += (min(left, right) - arr[i]);
    }

    return res;
}

int main() {
    vector<int> arr = { 2, 1, 5, 3, 1, 0, 4 };
    cout << maxWater(arr);
    return 0;
}