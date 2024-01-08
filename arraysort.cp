
#include <iostream>

void function(int a[], int &n, int key) {
    int i, temp;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            temp = a[i];
            a[i] = a[n - 1];
            a[n - 1] = temp;
            n--;
            i--;  // Adjust the loop counter as the array size has decreased
        }
    }
}

void printfunction(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}

int main() {
    int i, n, key;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::cout << "Enter the key: ";
    std::cin >> key;
    int a[n];
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    function(a, n, key);
    printfunction(a, n);

    return 0;
}
