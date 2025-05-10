#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    vector<int> arr = {2,34,55,67,89,90};
    int key; cin >> key;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            cout << mid << endl;
            break;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return 0;
}