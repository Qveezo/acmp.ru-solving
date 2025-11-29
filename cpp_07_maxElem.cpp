#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int findMaxElem(vector<int> spis){
    int result = *max_element(begin(spis), end(spis));
    return result;
}

int main(){
    vector<int> arr;
    long long int a;
    for (int i = 0; i < 3; i++){
        cin >> a;
        arr.push_back(a);
    }
    cout << findMaxElem(arr);
    return 0;
}