#include<bits/stdc++.h>

using namespace std;

bool is_valid_password(const string& password) {
    // check length
    if (password.size() < 6 || password.size() > 32) {
        return false;
    }

    // check for uppercase letter, lowercase letter and digit
    bool has_uppercase = false, has_lowercase = false, has_digit = false;
    for (char c : password) {
        if (isupper(c)) {
            has_uppercase = true;
        } else if (islower(c)) {
            has_lowercase = true;
        } else if (isdigit(c)) {
            has_digit = true;
        } else {
            // found a punctuation character, accent or space
            return false;
        }
    }

    return has_uppercase && has_lowercase && has_digit;
}

int main() {
    string password;
    while (getline(cin, password)) {
        if (is_valid_password(password)) {
            cout << "Senha valida.\n";
        } else {
            cout << "Senha invalida.\n";
        }
    }
    return 0;
}
