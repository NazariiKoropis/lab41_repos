#include <iostream>
#include <cmath>

int main() {
    double N, k, i;
    std::cout << "Enter N and k: ";
    std::cin >> N >> k;

    // Перевірка коректності введених даних
    if (k > N) {
        std::cout << "k must be less than or equal to N!" << std::endl;
        return 0;
    }

    double S;

    // 1. while(...)
    S = 0;
    i = k;
    while (i <= N) {
        S += (std::sin(i) * std::cos(i)) / (1 + std::pow(std::sin(i), 2));
        i++;
    }
    std::cout << "S (while) = " << S << std::endl;

    // 2. do{...} while(...)
    S = 0;
    i = k;
    do {
        S += (std::sin(i) * std::cos(i)) / (1 + std::pow(std::sin(i), 2));
        i++;
    } while (i <= N);
    std::cout << "S (do-while) = " << S << std::endl;

    // 3. for(..., ..., n++) {...}
    S = 0;
    for (i = k; i <= N; i++) {
        S += (std::sin(i) * std::cos(i)) / (1 + std::pow(std::sin(i), 2));
    }
    std::cout << "S (for++) = " << S << std::endl;

    // 4. for(..., ..., n--) {...}
    S = 0;
    for (i = N; i >= k; i--) {
        S += (std::sin(i) * std::cos(i)) / (1 + std::pow(std::sin(i), 2));
    }
    std::cout << "S (for--) = " << S << std::endl;

    return 0;
}