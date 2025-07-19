#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& arr, int ele) {
  
    // Initialize the counter for the 
    // elements not equal to ele    
    int k = 0;
    for (int i = 0; i < arr.size(); i++) {

        // Place the element which is not 
        // equal to ele at the kth position
        if (arr[i] != ele) {
            arr[k] = arr[i];  
            
            // Increment the count of 
            // elements not equal to ele
            k++;             
        }              
    }
    return k;
}

int main() {
    vector<int> arr = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    cout << removeElement(arr, ele) << endl;
    return 0;
}