//
// Created by arnau on 18/06/2024.
//
vector<string> findWords(vector<string>& words) {
    std::vector<std::string> result;
    std::unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    std::unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    std::unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    for (const std::string& word : words) {
        bool row1Word = true;
        bool row2Word = true;
        bool row3Word = true;
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') c += 32;
            if (row1.find(c) == row1.end()) row1Word = false;
            if (row2.find(c) == row2.end()) row2Word = false;
            if (row3.find(c) == row3.end()) row3Word = false;
        }
        if (row1Word || row2Word || row3Word) result.push_back(word);
    }
    return result;
}