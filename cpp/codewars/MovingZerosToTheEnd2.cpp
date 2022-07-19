#include <vector>
std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> output(input.size(),0);
  std::copy_if(input.begin(), input.end(), output.begin(), [](int i){ return i != 0; });
  return output;
}
