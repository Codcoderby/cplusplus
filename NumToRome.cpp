#include <iostream>
#include <string>
using namespace std;
string toRoman(int num) {
    const int N[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string R[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    for (int i = 0; num > 0; ++i) {
        while (num >= N[i]) {
            num -= N[i];
            result += R[i];
        }
    }

    return result;
}

int main() {
    int number;
    cin >> number;

    if (number >= 1 && number <= 3999) {
        string roman = toRoman(number);
        cout << roman << endl;
    } 

    return 0;
}

