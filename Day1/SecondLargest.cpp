#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int largest = arr[0];
    int secondLargest = -1;
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1}; 
    int result = getSecondLargest(arr);
    if (result != -1) 
    {
        cout << "The Second Largest Element is " << result << endl;
    } else 
    {
        cout << "There is no valid second largest element." << endl;
    }
    return 0;
}
