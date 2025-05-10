#include <bits/stdc++.h>
using namespace std;
int main() {
    int x; cin >> x;
    int arr1[x][x]; // 2d array / Matrix
    vector<int> arr(x);
    vector<vector<int>> arr2(x , vector<int> (x)); //2d vector / 2d matrix
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}