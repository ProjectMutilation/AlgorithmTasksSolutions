#include <string>
#include <sstream>
#include <iomanip>
namespace RGBToHex
{
void normalize(int& var){
    if(var>255) var = 255;
    if(var<0) var = 0;
}
std::string convert_to_hex(const int& var){
    std::stringstream ss;
    ss<<std::setw(2)<<std::setfill('0')<<std::uppercase<<std::hex<<var;
    return ss.str();
}
std::string rgb(int r, int g, int b){
    normalize(r);
    normalize(g);
    normalize(b);
    return convert_to_hex(r) + convert_to_hex(g) + convert_to_hex(b);
}
};

