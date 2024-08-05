class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         unordered_map<string, int> frequency;
    
    // Count the frequency of each string in the array
    for (const string& str : arr) {
        frequency[str]++;
    }
    
    // Collect the distinct strings
    vector<string> distinctStrings;
    for (const string& str : arr) {
        if (frequency[str] == 1) {
            distinctStrings.push_back(str);
        }
    }
    
    // Check if there are at least k distinct strings
    if (distinctStrings.size() >= k) {
        return distinctStrings[k - 1]; // Return the Kth distinct string (1-based index)
    } else {
        return ""; // If fewer than k distinct strings, return an empty string
    }
    }
};