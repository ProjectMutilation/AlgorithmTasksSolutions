#include <vector>
std::vector<int> move_zeroes(const std::vector<int>& input) {
std::vector<int> output;
for (auto elem:input){
  if(elem != 0) output.push_back(elem);
}
  output.resize(input.size());
  return output;
}
