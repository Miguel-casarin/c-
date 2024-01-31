#include <iostream>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};

    for (int x = 0; x < 5; x++) {
        std::cout << vetor[x] << " ";
    }

    std::cout << "\nPressione Enter para fechar o console.";
    
    // Aguarda o usuário pressionar Enter
    std::cin.get();

    return 0;
}
