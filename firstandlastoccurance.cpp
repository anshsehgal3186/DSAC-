#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number you have to find: ";
    cin >> k;
    int first = -1, last = -1;
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == k) {
            first = mid;
            end = mid - 1;   // move left
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    start = 0;
    end = n - 1;
    while (start <= end) {
        int mid = start + (end-start) / 2;
        if (arr[mid] == k) {
            last = mid;
            start = mid + 1;  // move right
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "First occurrence index: " << first << endl;
    cout << "Last occurrence index: " << last << endl;
    return 0;
}
