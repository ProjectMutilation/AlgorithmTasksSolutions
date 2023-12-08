//https://www.codewars.com/kata/520b9d2ad5c005041100000f

#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
#include<sstream>

bool isnotAlphanumeric(const std::string& input) {
    return std::any_of(input.begin(), input.end(), [](char symb) {
      return !std::isalpha(symb) && !std::isdigit(symb);
    });
}
std::string pig_it(std::string str) {
    std::vector<std::string> words;
    char separator = ' ';
    size_t pos = 0;
    while ((pos = str.find(separator)) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1/*space*/);
    }
    words.push_back(str);
    std::stringstream result;

    for (auto& element : words) {
        if ((element.size() == 1) && (isnotAlphanumeric(element))) {
          result << element << separator;   
        } else {
            char movedChar = element[0];
            element.erase(0, 1);
            element.push_back(movedChar);
            result << element << "ay" << separator;
        }
    }

    auto ans = result.str();
    if (ans.back() == ' ') { 
        ans.pop_back();
    }

    return ans;
}