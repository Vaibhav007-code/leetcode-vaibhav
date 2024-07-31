class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
    vector<int> dp(n + 1, INT_MAX); // dp[i] represents the minimum height for the first i books
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        int width = 0, height = 0;
        for (int j = i; j > 0; --j) {
            width += books[j - 1][0];
            if (width > shelfWidth) break; // If the shelf width is exceeded, break out of the loop
            height = max(height, books[j - 1][1]); // Update the maximum height for the current shelf
            dp[i] = min(dp[i], dp[j - 1] + height); // Update dp[i] with the minimum height configuration
        }
    }

    return dp[n];
    }
};