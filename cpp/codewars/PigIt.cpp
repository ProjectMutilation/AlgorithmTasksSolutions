//https://www.codewars.com/kata/520b9d2ad5c005041100000f

#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
//TODO(mkor): rewrite this solution with using of regex 
bool isnotAlphanumeric(std::string str){
    for(int i=0; i<str.size(); i++){
        if( !std::isalpha(str[i]) && !std::isdigit(str[i])){
            return true;
        }
    }
    return false;
}
std::string pig_it(std::string str){
    std::vector<std::string> words;
    std::string separator = " ";
    size_t pos = 0;
    while ((pos = str.find(separator)) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + separator.length());
    }
    words.push_back(str);
    std::string result;
    for (auto element : words) {
        if ((element.size() == 1) && (isnotAlphanumeric(element))){
         result.append(element+separator);   
        }
        else{
            char movedChar = element[0];
            element.erase(0,1);
            element.push_back(movedChar);
            result.append(element);
            result.append("ay");
            result.append(separator);
        }
    }
    if(result.substr(result.length()-1,1) == " "){ 
        result.pop_back();
    }
    return result;
}