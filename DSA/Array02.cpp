#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int r,c; cin >> r >> c;
    vector<vector<int>> arr(r , vector<int> (c));
    for (int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for(int j = 0 ; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}