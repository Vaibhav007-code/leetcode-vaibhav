class Solution {
public:
    string convert(string s, int numRows) {
         if (numRows == 1 || numRows >= s.length()) {
        return s;
    }

    // Create a vector of strings to represent each row.
    vector<string> rows(min(numRows, int(s.length())));
    int current_row = 0;
    bool going_down = false;

    // Distribute the characters into the rows.
    for (char c : s) {
        rows[current_row] += c;
        // Change direction when we reach the top or bottom row.
        if (current_row == 0 || current_row == numRows - 1) {
            going_down = !going_down;
        }
        current_row += going_down ? 1 : -1;
    }

    // Combine all the rows to form the final string.
    string result;
    for (string row : rows) {
        result += row;
    }

    return result;
    }
};