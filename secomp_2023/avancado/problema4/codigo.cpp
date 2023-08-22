#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string& sequence) {
    stack<char> s;

    for (char ch : sequence) {
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.empty()) {
                return false;
            } else if ((ch == ')' && s.top() == '(') || (ch == ']' && s.top() == '[') || (ch == '}' && s.top() == '{')) {
                s.pop();
            } else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline after reading n

    for (int i = 0; i < n; i++) {
        string device;
        getline(cin, device);

        if (isBalanced(device)) {
            cout << "Armadilha desativada. Acesso concedido." << endl;
        } else {
            cout << "Armadilha!" << endl;
        }
    }

    return 0;
}
