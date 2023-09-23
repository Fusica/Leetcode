#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string passwordStrength(string password) {
    if (password.length() < 8)
        return "error";

    int upper = 0, lower = 0, digit = 0, special = 0;

    for (char c : password) {
        if (isupper(c))
            upper = 1;
        else if (islower(c))
            lower = 1;
        else if (isdigit(c))
            digit = 1;
        else if (c == '!' || c == '$' || c == '@' || c == '%' || c == '&' || c == '*')
            special = 1;
    }

    int total = upper + lower + digit;

    if (total < 2)
        return "error";
    else if (total >= 2 && special == 0)
        return "weak";
    else if (total == 2 && special == 1)
        return "medium";
    else if (total == 3 && special == 1)
        return "strong";

    return "error";
}

int main() {
    int n;
    cin >> n;
    string password;
    while(n--)
    {
        cin >> password;
        cout << passwordStrength(password) << endl;
    }
    return 0;
}