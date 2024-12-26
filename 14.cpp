// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4]. 

// approch 1 

#include <iostream>
#include <vector>
using namespace std;


void addElementToBeginning(vector<int>& nums, int newElement) {
    nums.insert(nums.begin(), newElement);  

   
    cout << "Updated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1,2,3,4}; 
    int newElement = 0; 

    addElementToBeginning(nums, newElement);

    return 0;
}

