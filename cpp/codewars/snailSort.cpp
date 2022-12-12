#include <string>
#include <vector>
#include<iostream>

void rightSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for(int i = 0; i < snail[0].size(); i++){
        result.push_back(snail[0][i]);
    }

    snail.erase(snail.begin(),snail.begin()+1);
}

void leftSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for(int i = snail[snail.size()-1].size()-1; i >= 0; i--){
        result.push_back(snail[snail.size()-1][i]);
    }

    snail.erase(snail.end()-1);
}

void downSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for (int i = 0; i < snail.size(); i++){
        result.push_back(snail[i][snail[i].size()-1]);        
    }
    
    for (int i = 0; i < snail.size(); i++)
        snail[i].erase(snail[i].end()-1);
}

void upSlice(std::vector<std::vector<int>>&snail,std::vector<int> &result){
    for (int i = snail.size() - 1;i >= 0 ; i--){
        result.push_back(snail[i][0]);               
    }

    for (int i = 0; i < snail.size(); i++) {
        snail[i].erase(snail[i].begin());
    }
}

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::vector<std::vector<int>> snail = snail_map;
  std::vector<int> result;
  while(!snail.empty()) {

   rightSlice(snail,result);
   if(snail.empty()) { break; }
   
   downSlice(snail,result);
   if(snail.empty()) { break; }

   leftSlice(snail,result);   
   if(snail.empty()) { break; }

   upSlice(snail,result);
    
  }
  
  return result; 
}