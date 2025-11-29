#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << to_string(a) + "9" + to_string(9-a);
    return 0;
}