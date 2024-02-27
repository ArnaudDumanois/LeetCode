//
// Created by arnau on 25/02/2024.
//
int strStr(std::string haystack, std::string needle) {
    if (needle.empty()) {
        return 0;
    }
    if (haystack.size() < needle.size()) {
        return -1;
    }
    for (int i = 0; i <= haystack.size() - needle.size(); i++) {
        if (haystack.substr(i, needle.size()) == needle) {
            return i;
        }
    }
    return -1;
}