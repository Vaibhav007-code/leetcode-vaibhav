class Solution {
public:
    int getCommon(vector<int>& arr1, vector<int>& arr2) {
         int i = 0;
    int j = 0;
    
    // Traverse both arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            return arr1[i];
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    // No common value found
    return -1;
    }
};