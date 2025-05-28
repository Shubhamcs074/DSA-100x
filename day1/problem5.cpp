#include <iostream>
#include <string>
using namespace std;

bool isKaprekar(int n) {
    long long square = (long long)n * n; 
    string str = to_string(square);
    int len = str.length();
    
    string leftStr = str.substr(0, len / 2);
    string rightStr = str.substr(len / 2);

    int left = (leftStr.empty()) ? 0 : stoi(leftStr);
    int right = stoi(rightStr);

    return (left + right == n);
}

int main() {
    int p, q;
    cin >> p >> q;

    cout << "The Kaprekar Numbers are:" << endl;
    int count = 0;

    for (int i = p; i <= q; i++) {
        if (isKaprekar(i)) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Frequency of Kaprekar numbers is: " << count << endl;

    return 0;
}
