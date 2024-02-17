#include <iostream>

void bubbleSort(int arg[], int n, bool ascendente) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((ascendente && arg[j] > arg[j + 1]) || (!ascendente && arg[j] < arg[j + 1])) {
                int temp = arg[j];
                arg[j] = arg[j + 1];
                arg[j + 1] = temp;
            }
        }
    }
}

void printArray(int arg[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arg[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arg[10];
    std::cout << "Ingresa 10 numeros separados : ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> arg[i];
    }

    char order;
    std::cout << "Ingrese 'a' para ordenar en ascendente o 'd' para ordenar en descendente: ";
    std::cin >> order;

    bool ascendente = (order == 'a' || order == 'A');

    bubbleSort(arg, 10, ascendente);

    std::cout << "El arreglo ordenado es: ";
    printArray(arg, 10);

    return 0;
}