//
// Created by arnau on 19/06/2024.
//
bool checkRecord(std::string s) {
    return count(s.begin(), s.end(), 'A') <= 1 && s.find("LLL") == std::string::npos;
}