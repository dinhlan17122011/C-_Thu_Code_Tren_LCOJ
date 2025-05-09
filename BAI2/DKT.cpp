#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DKT.INP", "r", stdin);
    freopen("DKT.OUT", "w", stdout);

    int n ; cin >> n;

    int a = n * (n + 1) / 2;
    int b = a % 26 ;

    cout<<(char) ('A' + b);

    return 0 ;
}