#include <cmath>

class DigPow {
  public:
static int digPow(int n, int p)
{
  p += std::log10(n);
  int digit = 0;
  for (int m = n; m > 0; m /= 10, --p)
    digit += std::pow(m % 10, p);

  return digit % n ? -1 : digit / n;
}};
