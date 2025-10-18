#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);           // add element
    v.insert(v.begin()+1, 10); // insert 10 at index 1

    for(int x : v)
        cout << x << " ";     // 1 10 2 3 4

    v.pop_back();             // remove last element
    cout << "\nSize: " << v.size(); // Size: 4
}
