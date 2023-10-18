#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //row A of N bags of candies
    //if bag has even number of candies, Mihai grabs the bag
    //else Bianca grabs the bag
    int mi = 0;
    int bi = 0;

    int testCases;
    cin >> testCases;

    int numBags = 0;
    int numCandy = 0;
    //Mihai grabs all of the even bags first
    for(int i = 0; i < testCases;i++){
        cin >> numBags;
        for(int j = 0; j < numBags;j++){
            cin >> numCandy;
            if(numCandy%2 == 0) {
                mi += numCandy;
                //printf("Mihai grabs %d\n", numCandy);
            }
            else{
                bi += numCandy;
                //printf("Bianca grabs %d\n", numCandy);
            }
        }
        //printf("Mihai: %d\tBianca: %d\n",mi,bi);
        if(mi > bi){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        mi = 0;
        bi = 0;
    }
}
