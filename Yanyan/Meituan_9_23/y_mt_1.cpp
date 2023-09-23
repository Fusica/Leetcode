//
// Created by 13176 on 2023/9/23.
//
#include <iostream>
#include <vector>
using namespace std;

string codeJudge(string code){
    if (code.size() < 8) return "error";

    int upper = 0, lower = 0, digit = 0, special = 0;
    for (char c : code){
        if (isupper(c))
            upper = 1;
        if (islower(c))
            lower = 1;
        if(isdigit(c))
            digit = 1;
        if(c == '!' || c == '$' || c == '@' || c == '%' || c == '&' || c == '*')
            special = 1;
    }

    int total = upper + lower + digit;

    if (total < 2)
        return "error";
    if (total >= 2 && special == 0)
        return "weak";
    if(total == 2 && special == 1)
        return "medium";
    if(total == 3 && special == 1)
        return "strong";

    return "error";
}
int main(){
    int n;
    cin >> n;
    string code;
    while(n--){
        cin >> code;
        cout << codeJudge(code) << endl;
    }
    return 0;
}