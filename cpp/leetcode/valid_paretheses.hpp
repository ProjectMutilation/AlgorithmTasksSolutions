//https://leetcode.com/problems/valid-parentheses/
//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
#include <stack>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        std::unordered_map<char, char> brackets = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (auto item : s) {
            if (brackets.count(item)) {
                st.push(item);
            } else if (st.empty() || brackets[st.top()] != item) {
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    }
};