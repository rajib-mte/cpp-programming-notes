#include <bits/stdc++.h>
using namespace std;
#include <set>

int main() {


    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    //s.insert(2);
    s.insert(3); // duplicate, ignored

    for(int x : s) cout << x << " "; // Output: 1 3
}

