#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "請輸入一個不大於8的數字:";
        cin >> num;
    } while (num < 1 || num > 8);
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            cout << "#";
        }
        cout << "\n";
    }
}
