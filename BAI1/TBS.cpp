#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("TBS.INP", "r", stdin);
    freopen("TBS.OUT", "w", stdout);

    double a, b, c , d;
    cin >> a >> b >> c >> d;

    double sum = a * b * c * d;

    if(sum < 0) {
        cout<< -1;
    }else if(sum == 0) {
        cout<< 0;
    }else {
        cout<< 1;
    }

    return 0;
}