#include <vector>
std::vector<int> move_zeroes(std::vector<int> input) {
std::fill(std::remove(input.begin(), input.end(), 0),input.end(),0);
return input;
}
