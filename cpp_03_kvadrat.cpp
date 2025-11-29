#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << stol((to_string((a/10) * ((a/10)+1)) + "25"));
    return 0;
}