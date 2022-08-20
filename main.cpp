#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(std::vector<int> &a) {
    std::for_each(a.begin(), a.end(), [](int &n) {std::cout << n << " ";});
    std::cout << std::endl;
}

int main() {
    std::vector<int> a {4, 7, 9, 14, 12};

    std::cout << "Входные данные:  ";
    print_vector(a);

    std::for_each(a.begin(), a.end(), [odd = true](int &n) mutable {if (odd) n = n * 3; odd = !odd;});

    std::cout << "Выходные данные:  ";
    print_vector(a);

    return 0;
}