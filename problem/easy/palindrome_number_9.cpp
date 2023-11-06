//
// Created by arnau on 17/10/2023.
//
#include <iostream>

bool isPalindrome(int x) {
    if (x < 0) return false;
    int inverted = 0;
    int original = x;
    while (x != 0) { // tant que x est différent de 0
        // on va decaler inverted d'une position vers la gauche
        // et on ajoute le chiffre de x le plus à droite
        inverted = inverted * 10 + x % 10;
        // et on avance d'une position vers la droite dans x
        x = x / 10;
    }
    if (inverted == original) return true;
    return false;
}

int main(){
    std::cout << isPalindrome(121) << std::endl;
}