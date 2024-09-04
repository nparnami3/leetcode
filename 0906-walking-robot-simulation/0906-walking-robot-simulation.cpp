class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
      vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dir = 0;  // Start facing north
    int x = 0, y = 0;  // Start at the origin
    int maxDistance = 0;

    // Convert obstacles to a set of strings for quick lookup
    unordered_set<string> obstacleSet;
    for (const auto& obstacle : obstacles) {
        obstacleSet.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
    }

    // Process each command
    for (int command : commands) {
        if (command == -1) {
            dir = (dir + 1) % 4;  // Turn right
        } else if (command == -2) {
            dir = (dir + 3) % 4;  // Turn left
        } else {
            for (int i = 0; i < command; ++i) {
                int nextX = x + directions[dir].first;
                int nextY = y + directions[dir].second;
                if (obstacleSet.find(to_string(nextX) + "," + to_string(nextY)) == obstacleSet.end()) {
                    x = nextX;
                    y = nextY;
                    maxDistance = max(maxDistance, x * x + y * y);
                } else {
                    break;  // Stop moving forward if there's an obstacle
                }
            }
        }
    }

    return maxDistance;
    }
};