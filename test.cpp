#include <cassert>

// Declaraciones
int suma(int a, int b);
int raiz_entera(int x);

int main() {

    // Tests suma
    assert(suma(2,3) == 5);
    assert(suma(-1,1) == 0);

    // Tests raiz
    assert(raiz_entera(0) == 0);
    assert(raiz_entera(4) == 2);
    assert(raiz_entera(10) == 3);
    assert(raiz_entera(-5) == -1);

    return 0;
}