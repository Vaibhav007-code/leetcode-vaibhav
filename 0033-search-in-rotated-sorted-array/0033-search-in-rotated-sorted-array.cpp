class Solution {
public:
    int getpvt(vector<int>& arr, int n) {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (arr[mid] >= arr[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int>& arr, int s, int e, int key) {
        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            if (arr[mid] == key) {
                return mid;
            }
            if (key > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }

    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int pivot = getpvt(arr, n);
        if (target >= arr[pivot] && target <= arr[n - 1]) {
            return binarySearch(arr, pivot, n - 1, target);
        } else {
            return binarySearch(arr, 0, pivot - 1, target);
        }
    }
};
