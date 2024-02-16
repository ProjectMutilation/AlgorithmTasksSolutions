//https://leetcode.com/problems/path-crossing/

#include <utility>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

class Solution {
public:
    struct Point {
        int x;
        int y;
    };

    bool isPathCrossing(std::string path) {
    Point pos {0, 0};
    std::set<std::pair<int, int>> visited;
    visited.insert(std::make_pair(0,0));
    for (const auto &step: path) {
        switch (step) {
            case 'N': 
                pos.y++;
                break;
            case 'S':
                pos.y--;
                break;
            case 'E':
                pos.x++;
                break;
            case 'W':
                pos.x--;
                break;
            default:
                break;
        }
        const auto currentPointPos = std::make_pair(pos.x, pos.y);
        const auto [it, success] = visited.insert(currentPointPos);
        if (!success) { return true; }
    }
    return false;
    }
};