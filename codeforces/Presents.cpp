#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;  // Target found at index i
        }
    }

    return -1;  // Target not found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    int x, y;
    int element;

    for (int i = 0; i < n; ++i) {
        cin >> element;
        arr.push_back(element);
    }

    for (int i = 1; i <= n; ++i) {
        int x = i;
        y = linearSearch(arr, x);
        cout << y + 1 << " ";
    }

    return 0;
}
