#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string> freq;
    cout << "Enter the number of fruits : ";
    int n = 0;
    cin >> n;
    string x;
    /*
    freq[1]="apple";
    freq[2]="banana"; 
    */
    for (auto i = 0; i < n; i++)
    {
        cout << "Enter the name of fruit : ";
        cin >> x;
        freq.insert({i, x});
    }
    freq.erase(1);//removing the element with key 1
    

    for (auto c : freq)
    {
        cout << c.first << " : " << c.second << endl;
    }
}