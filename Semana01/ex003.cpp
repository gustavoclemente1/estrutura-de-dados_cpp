//Código sobre vetores pré definidos e não declarados.

#include <iostream>


int main() {
    int c[12] = {14, 6, 4};

    c[3] = 20;
    c[7] = 18;
    c[9] = 1;
    
    for (int i=0; i < 12; i++){
        std::cout << "c[" << i << "] = " << c[i] << std::endl;
    }
    return 0;
}