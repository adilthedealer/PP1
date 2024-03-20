#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
bool IsSquare(int num) {
    int root = trunc(sqrt(num));
    return pow(root, 2) == num;
}
int main() {
    string s;
    cin >> s;
    stack <char> st;
    for (char num : s) {
        if (st.empty()) {
            st.push(num);
        }
        else {
            string check;
            check += st.top();
            check += num;
            int pSquare = stoi(check);

        if (IsSquare(pSquare)) {
            st.pop();
        } else {
            st.push(num);
        }
    }
    }
    if (st.empty()) cout << "Stack is empty\n";
    else {
        string fin;
        while (!st.empty()) {
            fin += st.top();
            st.pop();
        }
        cout << fin << "\n";
    }
    system("pause");
    return 0;
}