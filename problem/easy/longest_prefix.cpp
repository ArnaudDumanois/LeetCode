//
// Created by arnau on 18/10/2023.
//
#include <iostream>
#include <string>
#include <vector>
std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string result;
    if (strs.empty()) { return  result; }
    // on parcours chaque element de la liste
    for (int i = 0; i < strs[0].size(); i++){
        // on prend le premier caractère de la première string
        char c = strs[0][i];
        // on parcours chaque string
        for (int j = 1; j < strs.size(); j++){
            // si on a atteint la fin de la string ou si le caractère est différent de celui de la première string
            if (i >= strs[j].size() || strs[j][i] != c){
                return result;
            }
        }
        // sinon on ajoute le caractère à la string résultat
        result += c;
    }
    return result;
}

int main(){
    std::vector<std::string> strs = {"flower","flow","flight"};
    std::cout << longestCommonPrefix(strs) << std::endl;
}