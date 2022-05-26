//https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include <cmath>

bool narcissistic(const unsigned int value){
  int numbers = std::log10(value) + 1;
  int copy_value = value;
  unsigned int sum = 0;
  for(int i = 0; i < numbers;i++){
      sum +=pow(copy_value%10,numbers);
      copy_value /= 10;
  }
    return (sum == value) ? true:false;
}
