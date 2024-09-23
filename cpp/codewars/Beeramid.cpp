//https://www.codewars.com/kata/51e04f6b544cf3f6550000c1
#include <cmath>
int beeramid(int bonus, double price) {
  const unsigned int beer_count = bonus > 0 ? bonus / price : 0;
  const unsigned int n = std::cbrt(3 * beer_count); //approximation
  return beer_count >= n * (n + 1) * (2 * n + 1) /6 ? n : n - 1;
}
