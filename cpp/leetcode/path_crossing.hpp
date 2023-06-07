//https://leetcode.com/problems/path-crossing/

#include <utility>
#include <vector>
#include <algorithm>

class Solution {
public:
    struct Point{
    int x;
    int y;
    };

    bool isPathCrossing(std::string path) {
    Point pos {0, 0};
    std::vector<std::pair<int, int>>visited;
    visited.push_back(std::make_pair(0,0));
    for (auto step: path){
        switch (step) {
            case 'N': 
                pos.y++; break;
            case 'S':
                pos.y--; break;
            case 'E':
                pos.x++; break;
            case 'W':
                pos.x--; break;
            default:
                break;
        }
        auto curr_point = std::make_pair(pos.x,pos.y);
        auto it = std::find(visited.begin(),visited.end(), curr_point);
        if (it != visited.end())
            return true;
        visited.push_back(curr_point);
    }

    return false;
    }
};
