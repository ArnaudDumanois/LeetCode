//
// Created by arnau on 25/02/2024.
//
int lengthOfLastWord(std::string s) {
    int length = 0;
    int i = s.size() - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
};
