#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <array>

std::string convert_to_hex(const int& value) {
    std::ostringstream ss;
    ss << std::setw(2) << std::setfill('0') << std::uppercase<<std::hex << value;
    return ss.str();
}
std::string rgb_to_hex(const int &r, const int &g, const int &b) {
    const std::array<int, 3> colorCodes = {std::clamp(r, 0, 255), std::clamp(g, 0, 255), std::clamp(b, 0, 255)};
    std::string color;
    color.reserve(colorCodes.size() * 2);
    for (const auto &colorCode : colorCodes) {
        color.append(convert_to_hex(colorCode));
    } 
    return color;
}
