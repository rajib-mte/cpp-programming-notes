#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);
    v.emplace_back(50);
    v.insert(v.begin() + 2, 25);

    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";

    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();
    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();

    v.pop_back();
    v.erase(v.begin());
    v.resize(3, 100);

    cout << "\nAfter modifications: ";
    for (int x : v) cout << x << " ";

    v.clear();
    cout << "\nEmpty: " << (v.empty() ? "Yes" : "No");
}


