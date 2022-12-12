#include <string>
#include <vector>
#include<iostream>
void rightSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for(size_t i = 0;i < snail[0].size();i++){
        result.push_back(snail[0][i]);
    }
    snail.erase(snail.begin(),snail.begin()+1);
};
void leftSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for(size_t i = snail[snail.size()-1].size()-1;;i--){
        result.push_back(snail[snail.size()-1][i]);
        if(!i) break;
    }
    snail.erase(snail.end()-1);
};

void downSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for (size_t i = 0; i < snail.size(); i++){
        result.push_back(snail[i][snail[i].size()-1]);        
    }
    for (size_t i = 0; i < snail.size(); i++)
        snail[i].erase(snail[i].end()-1);
};
void upSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for (size_t i = snail.size() - 1; ; i--){
        result.push_back(snail[i][0]);
        if(!i) break;        
    }
    for (size_t i = 0; i < snail.size(); i++)
        snail[i].erase(snail[i].begin());
    
}
std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::vector<std::vector<int>> snail = snail_map;
  std::vector<int> result;
  while(true){
   if(snail.empty()) break;
   rightSlice(snail,result);
   if(snail.empty()) break;
   downSlice(snail,result);
   if(snail.empty()) break;
   leftSlice(snail,result);
   if(snail.empty()) break;
   upSlice(snail,result);
    
  }
  
  return result; 
}