// https://www.codewars.com/kata/5539fecef69c483c5a000015
#include<cmath>
#include <bits/stdc++.h>
#include <string>
class BackWardsPrime
{
public:
  static std::string backwardsPrime(long long start, long long end){
    std::string res;
    bool prime, backwardsPrime, notSame;
    const auto sep = " ";
    for(auto i = start;i<=end;i++){
      auto reversed_item = reverse_item(i);
      prime = isPrime(i);
      backwardsPrime = isPrime(reversed_item);
      notSame = i != reversed_item;
      if(prime && notSame && backwardsPrime){
       res += std::to_string(i) + sep; 
      }
    }
    return res.substr(0,res.length()-1);
  };
  static long long reverse_item(long long item){
   std::string s_item = std::to_string(item);
   std::reverse(s_item.begin(),s_item.end());
   return std::stoll(s_item);
  }
  static bool isPrime(long long item){
    auto sq_root = std::sqrt(item); 
    for(auto i = 2; i <= sq_root; i++){
      if (item % i == 0) {
         return false;
      }
    }
    return true;
  };
};