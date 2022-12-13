#include <cmath>

class DigPow {
  public:
static int digPow(int value, int p){
  auto valueLength = std::log10(value);
  p += valueLength;
  
  int digitSum = 0;
  
  for (int m = value; m > 0; m /= 10, --p)
    digitSum += std::pow(m % 10, p);

  return (digitSum % value) ? -1 : digitSum / value;
}};
