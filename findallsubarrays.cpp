#include <iostream>
#include <vector>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(vector<int> &arr)
{
    int n = arr.size();

    // Pick starting point
    for (int i = 0; i < n; i++)
    {
        // Pick ending poin
        for (int j = i; j < n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << "All Non-empty Subarrays\n";
    subArray(arr);
    return 0;
}