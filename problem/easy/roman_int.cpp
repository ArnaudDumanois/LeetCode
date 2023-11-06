//
// Created by arnau on 18/10/2023.
//
#include <iostream>
#include <string>
using namespace std;
int translate(char c){
    if (c == 'I'){
        return 1;
    } else if (c == 'V') {
        return 5;
    } else if (c == 'M'){
        return 1000;
    } else if (c == 'D'){
        return 500;
    } else if (c == 'C'){
        return 100;
    } else if (c == 'L'){
        return 50;
    } else if (c == 'X'){
        return 10;
    }
    return 0;
}

int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); i++){
        // on regarde si le chiffre suivant est plus grand que le chiffre actuel
        if (i < s.size() - 1 && translate(s[i]) < translate(s[i+1])){
            // si oui, on soustrait le chiffre actuel
            result -= translate(s[i]);
        } else {
            // sinon on l'additionne
            result += translate(s[i]);
        }
    }
    return result;
}

int main(){
    cout << romanToInt("III") << endl;
    cout << romanToInt("IV") << endl;
    cout << romanToInt("IX") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
}