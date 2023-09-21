//
// Created by 13176 on 2023/9/20.
//
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<char, int> mass;
    mass['C'] = 12;
    mass['H'] = 1;
    mass['O'] = 16;
    mass['N'] = 14;

    string formula;
    cin >> formula;

    int relative_mass = 0;

    int i = 0;
    while(i < formula.length()){
        char element = formula[i++];
        int count = 0;
        while(i < formula.length() && isdigit(formula[i])){
            count = count * 10 + (formula[i] - '0');
            i++;
        }
        if (count == 0){
            count = 1;
        }
        relative_mass += mass[element] * count;
    }


    cout << relative_mass << endl;
    return 0;

}
