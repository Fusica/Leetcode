//
// Created by 13176 on 2023/4/3.
//
//https://blog.csdn.net/weixin_42373086/article/details/129758333
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // 一维数组(固定数目)
//    int n;
//    cin >> n;
//
//    vector<int> nums(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> nums[i];
//    }
//
//    for (int i = 0; i < n ; ++i) {
//        cout << nums[i] << " ";
//    }
//    cout << endl; //换行符 \n


    //一维数组(不固定数目)

    // vector<int> nums;
    // int n;
    // while(cin >> n){
    //     nums.push_back(n);
    //     if (getchar() == '\n') break;
    // }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // cout << endl;

    //二维数组
    // int a;
    // int b;
    // cin >> a >> b;

    // vector<vector<int>> nums(a, vector<int>(b));

    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cin >> nums[i][j];
    //     }

    // }

    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout << nums[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    //整形数字存入数组

    // int a;
    // cin >> a;
    // char sep;
    // vector<int> nums(a);

    // for (int i = 0; i < a - 1; i++)
    // {
    //     cin >> nums[i] >> sep;
    // }
    // cin >> nums[a - 1];

    // for (int i = 0; i < a; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;

    //字符串(固定数目)
    // 第一个数字是字符串数目，后面有空格或者换行符隔开字符串
    // int n;
    // cin >> n;
    // vector<string> str(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> str[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout << endl;

    //字符串(不固定数目)
    // vector<string> strings;
    // string str;
    // while (cin >> str)
    // {
    //     strings.push_back(str);
    //     if (getchar() == '\n')
    //     {
    //         break;
    //     }

    // }

    // for (int i = 0; i < strings.size(); i++)
    // {
    //     cout << strings[i] << " ";
    // }

    // cout << endl;

    //一整行字符串，具体内容由分号隔开
    vector<string> strs;
    //读入一整行字符串
    string s;
    getline(cin, s);

    int p; //双指针中的快指针
    for (int q = 0; q < s.size(); q++)
    {
        p = q;
        while (s[p] != ';' && p < s.size())
        {
            p++;
        }

        string tmp = s.substr(q, p - q);
        strs.push_back(tmp);
        q = p;

    }

    for (int i = 0; i < strs.size(); i++)
    {
        cout << strs[i] << " ";
    }
    cout << endl;


}

