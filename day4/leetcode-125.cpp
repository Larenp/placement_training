#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<cctype>
using namespace std;

bool valid_palindrom(string s1)
{

    string s;
    for (auto c : s1)
    {
        if (isalnum(c))
        {
            s += tolower(c);
        }
    }
    int l = 0;
    int r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }
    return true;
}

int main()
{
    string s1;
    cout << "Enter the string " << endl;
    getline(cin,s1);
    if (valid_palindrom(s1))
    {
        cout << "String is a valid palindrom" << endl;
    }
    else
    {
        cout << "String is not a valid palindrom" << endl;
    }
    return 0;
}
/*
bool valid_palindrom(string s1)
{

    string s;
    for (int i=0;i<s1.length();i++)
    {
        if (isalnum(s1[i]))
        {
            s += tolower(s1[i]);
        }
    }
    int l = 0;
    int r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }
    return true;
}
*/