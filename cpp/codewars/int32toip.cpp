//https://www.codewars.com/kata/52e88b39ffb6ac53a400022e/
#include <sstream>
#include <iomanip>
#include <bitset>

std::string uint32_to_ip(uint32_t ip){
    std::stringstream ss;
    auto const separator = ".";
    auto bits = std::bitset<32>(ip);
    auto const mask = std::bitset<32>(0xFF);
    auto fourth_octet =  (bits        & mask).to_ulong();
    auto third_octet  = ((bits >> 8)  & mask).to_ulong();
    auto second_octet = ((bits >> 16) & mask).to_ulong();
    auto first_octet  = ((bits >> 24) & mask).to_ulong();
    ss<<first_octet<<separator<<second_octet<<separator<<third_octet<<separator<<fourth_octet;
    return ss.str();
}
