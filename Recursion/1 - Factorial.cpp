#include <bits/stdc++.h>


using namespace std;

//#define F(i, n) for(int i; i < n; i++)
#define ll long long
int cnt = 0;

ll factorial(int n){
    cnt++;
    cout << "n: " << n <<endl;
    cout << "cnt: " << cnt <<endl;

    if(n == 0 || n == 1) return 1; //base case

    ll re = n * factorial(n - 1);
    cout << endl;
    cout << "final:"<<endl;
    cout << "Re: " << re <<endl;
    cout << endl;
    return re;

}

void solve(){
    int n;
    cin >> n;
    cout << endl << endl;
    cout << factorial(n) << endl;
    //cout<< "cnt (" << to_string(cnt) << ")" << endl;


}



int main(){


        int t = 1;
        cin >> t;
        while(t--) solve();
        return 0;

}


