#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype>
using namespace std;

// Скорее всего проблема в строчных буквах, походу должен выводиться ERROR еси они записаны строчно.

void checkHorseMove(string strr){
    try {
        vector<string> myletters;
        vector<int> letters;
        vector<int> numbers;
        map<string, int> mymap = {{"A", 1}, {"B", 2}, {"C", 3}, {"D", 4}, {"E", 5}, {"F", 6}, {"G", 7}, {"H", 8}};
        string n = strr;
        bool flag = false;
        string fPos = n.erase(strr.find("-"));
        string sPos = strr.substr(strr.find("-")+1);
        if (!(stoi(fPos.substr(1)) > 8 || stoi(fPos.substr(1)) < 1)) numbers.push_back(stoi(fPos.substr(1))); // 4
        else flag = true;

        string letter = fPos.substr(0, 1);
        // letter[0] = toupper(letter[0]);
        auto it = mymap.find(letter);
        if (it != mymap.end()) letters.push_back(it->second);
        else if (islower(letter[0])) flag = true;
        else flag = true;

        if (!(stoi(sPos.substr(1)) > 8 || stoi(sPos.substr(1)) < 1)) numbers.push_back(stoi(sPos.substr(1))); // 5
        else flag = true;

        letter = sPos.substr(0, 1);
        // letter[0] = toupper(letter[0]);
        it = mymap.find(letter);
        if (it != mymap.end()) letters.push_back(it->second);
        else if (islower(letter[0])) flag = true;
        else flag = true;
        // for (int i = 0; i < numbers.size(); i++){
        //     cout << numbers[i] << letters[i];
        //     cout << endl;
        // }
        if (flag) {
            cout << "ERROR";
            return;
        }
        if (
            ( (abs(letters[1] - letters[0]) == 1 && abs(numbers[1] - numbers[0]) == 2) )
            || ( (abs(letters[1] - letters[0]) == 2 && abs(numbers[1] - numbers[0]) == 1) )
        ) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } catch (...) {
        cout << "ERROR";
    }
}

int main(){
    string inpp;
    cin >> inpp;
    checkHorseMove(inpp);
    return 0;
}