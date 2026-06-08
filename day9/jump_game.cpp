//u have a array , find mini steps to reach end, if max jumps is 2
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1};
    int count = 0;
    int i = 0;
    while (i < arr.size()) // (i<arr.size()-2){ no need of checking i+3,i+2,i+1<arr.size()}
    {
        if (i == arr.size() - 1)
        {
            break;
        }
        if (i + 3 < arr.size() && arr[i + 3] == 1)
        {
            count++;
            i = i + 3;
        }
        else if (i + 2 < arr.size() && arr[i + 2] == 1)
        {
            count++;
            i = i + 2;
        }
        else if (i + 1 < arr.size() && arr[i + 1] == 1)
        {
            count++;
            i++;
        }
        else
        {
            cout << "-1";
            exit(0);
        }
    }
    cout << "number of jumps : " << count << endl;
}