int suma(int a, int b) {
    return a + b;
}

int raiz_entera(int x) {
    if (x < 0)
        return -1;  // error simple

    int r = 0;
    while (r * r <= x) {
        r++;
    }
    return r - 1;
}