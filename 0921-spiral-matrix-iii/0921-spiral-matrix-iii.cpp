class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        result.push_back({rStart, cStart}); // Start at the given point

        int steps = 1; // Start by taking 1 step
        int totalCells = rows * cols; // Total squares to visit
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // The 4 directions: right, down, left, up
        int dirIdx = 0; // Start by moving right

        while (result.size() < totalCells) {
            for (int i = 0; i < 2; i++) { // For every two directions (right, down or left, up)
                for (int j = 0; j < steps; j++) {
                    rStart += directions[dirIdx][0]; // Move in the current direction
                    cStart += directions[dirIdx][1];

                    // If the new position is within the grid boundaries, record it
                    if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                        result.push_back({rStart, cStart});
                    }
                }
                dirIdx = (dirIdx + 1) % 4; // Move to the next direction
            }
            steps++; // Increase step size after every two directions
        }

        return result; // Return the list of positions in spiral order
    }
};
