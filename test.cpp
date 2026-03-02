#include <iostream>
#include <cassert>

int sumar(int a, int b) {
    return a + b;
}

int main() {
    assert(sumar(2, 3) == 5);
    assert(sumar(0, 0) == 0);
    assert(sumar(-1, 1) == 0);
    std::cout << "Todos los tests pasaron!" << std::endl;
    return 0;
}