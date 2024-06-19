//
// Created by arnau on 19/06/2024.
//
int findLUSlength(std::string a, std::string b) {
    return a == b ? -1 : std::max(a.size(), b.size());
}