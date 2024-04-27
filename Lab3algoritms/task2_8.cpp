#include <iostream>
#include <chrono>

void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int m;
    std::cout << "Введіть обсяг масиву (m ≤ 1000): ";
    std::cin >> m;

    if (m > 1000) {
        std::cout << "m повинно бути менше або дорівнює 1000\n";
        return 0;
    }

    float* arr = new float[m];
    std::cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < m; i++) {
        std::cin >> arr[i];
    }

    auto begin = std::chrono::steady_clock::now();
    bubbleSort(arr, m);
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);

    std::cout << "Відсортований масив:\n";
    for (int i = 0; i < m; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nЧас сортування: " << elapsed_ns.count() << " ns\n";

    delete[] arr;
    return 0;
}