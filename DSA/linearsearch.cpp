#include <bits/stdc++.h>

// Linear Search
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    vector<int> arr = {1,2,3,4,5};
    int key; cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == key){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}