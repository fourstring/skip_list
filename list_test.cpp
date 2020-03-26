//
// Created by fourstring on 2020/3/6.
//
#include <iostream>
#include <list>

using namespace std;

int main() {
    auto l = std::list<int>{1, 2, 3};
    for (auto i = l.rbegin(); i != l.rend(); i++) {
        cout << *i << ' ' << *l.begin() << ' ' << *i.base() << std::endl;
        if (++i.base() == l.begin()) l.push_front(0);
    }
}
