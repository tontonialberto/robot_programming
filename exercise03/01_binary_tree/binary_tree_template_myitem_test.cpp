#include "binary_tree_template.h"
#include <string>
#include <iostream>

struct MyItem {
    float f;
    double d;
    std::string s;

    MyItem(float f, double d, std::string s)
        :f(f), d(d), s(s) {}

    bool operator<(const MyItem& other) const {
        if((f < other.f)
            || (f == other.f && d < other.d)
            || (f == other.f && d == other.d && s < other.s) ) {
                return true;
            }

        return false;
    }
};

std::ostream& operator<<(std::ostream& os, const MyItem& item) {
    os << "(" << item.f << " , " << item.d << " , \"" << item.s << "\")";
    return os;
}

int main() {
    TreeNode_<MyItem> root({0, 0, "Node 1"});
    root.insert({1, 0, "Node 2"});
    root.insert({0, 1, "Node 3"});
    root.insert({0, 0, "Node 4"});

    root.print(std::cerr);

    return 0;
}