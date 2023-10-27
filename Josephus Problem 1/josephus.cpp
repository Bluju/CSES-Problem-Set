#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
int main() {
    indexed_set st;
    int n;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        st.insert(i+1);
    }
    int curr = 1;
    while(st.size() > 0) {
        curr %= st.size();
 
        auto val = st.find_by_order(curr);
        cout << *val << " ";
        st.erase(val);
 
        ++curr;
    }
    //cout << n << "\n";
    /*
    if(st.find(2) != st.end()) {
        st.erase(2);
    }
 
    for(auto &x : st) {
        cout << x << " ";
    }
 
    for(auto itr = st.begin(); itr != st.end(); ++it) {
        cout << *itr << " ";
    }
    */
    return 0;
}
