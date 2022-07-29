#include <string>
#include <iostream>
#include <algorithm>


std::string encode(const std::string &str) {
   char encoded_symbol = 49; //49 is ascii code of digit "1"
   std::string res = str;
   for (auto symbol : {'a','e','i','o','u'}){
        std::replace(res.begin(), res.end(), symbol, encoded_symbol);
        encoded_symbol++;
   }
   return res;
}


std::string decode(const std::string &str) {
   char decoded_symbol = 49;
   std::string res = str;
   for (auto symbol : {'a','e','i','o','u'}){
        std::replace(res.begin(), res.end(), decoded_symbol,  symbol);
        decoded_symbol++;
   }
   return res;
};