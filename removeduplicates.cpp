#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(vector<int>& arr) {
  
    // To track seen elements
    unordered_set<int> s; 
  
    // To maintain the new size of the array
    int idx = 0;  

    for (int i = 0; i < arr.size(); i++) {
        if (s.find(arr[i]) == s.end()) { 
            s.insert(arr[i]);  
            arr[idx++] = arr[i];  
        }
    }
 
    // Return the size of the array 
    // with unique elements
    return s.size(); 
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int newSize = removeDuplicates(arr);
    for (int i = 0; i < newSize; i++) 
        cout << arr[i] << " ";
    return 0;
}