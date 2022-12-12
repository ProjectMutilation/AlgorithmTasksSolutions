#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> result;
  auto str = std::move(s);
  if (str.size() % 2) { str += "_"; }
  for (size_t i = 0; i<str.size(); i+=2)
  {
    result.push_back(str.substr(i,2));
  }
  return result;
}