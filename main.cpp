#include <iostream>
#include "SkipList.h"

int main() {
    auto s = SkipList<int, int>{};
    s.put(1, 2);
    s.put(3, 4);

    std::cout << "Hello, World![from SkipList]:" << *(s.get(3)) << std::endl;
    std::cout << "Hello, World![from SkipList]:" << *(s.get(1)) << std::endl;
    s.remove(1);
    std::cout << "Hello, World![from SkipList]:" << *(s.get(3)) << std::endl;
    if (!s.get(1)) std::cout << "Delete done!" << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
