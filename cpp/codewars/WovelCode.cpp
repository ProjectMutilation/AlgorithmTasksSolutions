//https://www.codewars.com/kata/53697be005f803751e0015aa
//write function to replace all the lowercase vowels in a given string with numbers and function to turn to back
#include <string>
#include <algorithm>
#include <unordered_map>

const std::unordered_map<char, char> encode_replacements = {
        {'a', '1'},
        {'e', '2'},
        {'i', '3'},
        {'o', '4'},
        {'u', '5'},
};

const std::unordered_map<char, char> decode_replacements = {
        {'1', 'a'},
        {'2', 'e'},
        {'3', 'i'},
        {'4', 'o'},
        {'5', 'u'},
};

std::string impl(const std::string& str, const std::unordered_map<char, char>& repl) {
   std::string output{str};
   std::for_each(output.begin(), output.end(), [&repl](char& ch) {
      if (repl.find(ch) != repl.end()) {
         ch = repl.at(ch);
      }
   });
  
   return output;
}

std::string encode(const std::string& str) {
   return impl(str, encode_replacements);
}

std::string decode(const std::string& str) {
   return impl(str, decode_replacements);
};
