#include <iostream>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    int a, b, c;

    for(int i = 0; i < testCases;i++){
        //loop through the test cases and output whether + or - make the equation true
        //a + b = c
        cin >> a >> b >> c;
        if(a + b == c){
            printf("+\n");
        }
        else if(a - b == c){
            printf("-\n");
        }
    }


}