//Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides by two,
//if n is odd, the algorithm multiplies by three and adds one.
//Repeat until n is one
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << n << " ";
    while(n > 1){
        n = n % 2 == 0 ? n/2 : n*3+1;
        cout << n << " ";
    }
    cout << "\n";
}
