#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    //sort the array
    sort(arr , arr+n-1);
    //find the missing number
    int missingNum = 1;
    bool found = false;
    for(int i = 0; i < n - 1; i++){
        if(missingNum != arr[i]){
            printf("%d\n", missingNum);
            found = true;
            break;
        }
        ++missingNum;
    }
    if(!found){
        missingNum = n;
        printf("%d\n", missingNum);
    }
}
