#include <string>
#include <bitset>
unsigned int countBits(unsigned long long n){
  std::string str = std::bitset<64>(n).to_string();
  return std::count(str.begin(), str.end(), '1');
}
