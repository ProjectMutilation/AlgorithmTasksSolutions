//https://www.codewars.com/kata/52e88b39ffb6ac53a400022e/
#include <sstream>

std::string uint32_to_ip(uint32_t ip) {
    std::ostringstream ss;
    constexpr char separator = '.';
    constexpr auto mask = 0xFF;

    for (size_t i = 0; i < 4; i++) {
        ss << ((ip >> (3 - i) * 8) & mask) << separator;
    }
    
    auto addr = ss.str();
    addr.pop_back();
    return addr;
}