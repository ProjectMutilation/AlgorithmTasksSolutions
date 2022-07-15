#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
namespace RGBToHex
{
std::string convert_to_hex(const int& var){
    std::stringstream ss;
    ss<<std::setw(2)<<std::setfill('0')<<std::uppercase<<std::hex<<var;
    return ss.str();
}
std::string rgb(int r, int g, int b){
    std::string result;
    for(auto value:{r,g,b}){
        result.append(convert_to_hex(std::clamp(value,0,255)));
    } 
    return result;
}
};

