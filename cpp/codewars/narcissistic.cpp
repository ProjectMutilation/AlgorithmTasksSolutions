//https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include <cmath>

bool narcissistic(const unsigned int value){
  int numbers = std::log10(value) + 1;
  unsigned int sum = 0;
  for(int tmp = value; tmp != 0; tmp /= 10){ 
      sum += pow(tmp % 10,numbers);      
  }
    return sum == value;
}
