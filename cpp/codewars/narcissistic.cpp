//https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include <cmath>
#define step 10

bool narcissistic(const unsigned int value){
  int numbers = int(std::log10(value)) + 1;
  unsigned int sum = 0;
  for(unsigned int tmp = value; tmp != 0; tmp /= step){ 
      sum += int(pow(tmp % step,numbers));      
  }
    return sum == value;
}
