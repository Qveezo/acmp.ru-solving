#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, chet = 0, nechet=0;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 1){
            nechet++;
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            chet++;
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    if (chet > nechet) cout << "YES";
    else cout << "NO";

    return 0;
}