#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s){
  auto inputString = std::move(s);
  
  auto const subrangeLength = 2;
  auto const sizeOdd = inputString.size() % 2;
  
  std::vector<std::string> ranges;
    
  if (sizeOdd) { inputString += "_"; }
  
  for (size_t position = 0; position < inputString.size(); position += subrangeLength)  {
    ranges.push_back(inputString.substr(position,subrangeLength));
  }
  
  return ranges;
}