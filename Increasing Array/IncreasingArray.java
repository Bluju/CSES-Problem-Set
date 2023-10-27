#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    //Increasing Array
    int n,num;
    long long moves{0};
    
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[i] = num;
    }
    int previous, difference;
    for(int i = 1; i < n; i++){
        previous = arr[i-1];
        if(arr[i] < arr[i-1]){
            moves += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    printf("%ld\n",moves);
}
