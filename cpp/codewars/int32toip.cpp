//https://www.codewars.com/kata/52e88b39ffb6ac53a400022e/
#include <sstream>
#include <iomanip>
#include <iostream>
#include <bitset>
std::string uint32_to_ip(uint32_t ip){
    std::stringstream ss;
    auto const separator = ".";
    std::bitset<32> bits = std::bitset<32>(ip);
    auto fourth_octet = ((bits&std::bitset<32>(0x000000FF)) >>  0).to_ulong();
    auto third_octet  = ((bits&std::bitset<32>(0x0000FF00)) >>  8).to_ulong();
    auto second_octet = ((bits&std::bitset<32>(0x00FF0000)) >> 16).to_ulong();
    auto first_octet  = ((bits&std::bitset<32>(0xFF000000)) >> 24).to_ulong();
    ss<<first_octet<<separator<<second_octet<<separator<<third_octet<<separator<<fourth_octet;
    return ss.str();
}
