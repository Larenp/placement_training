#include <iostream>
using namespace std;

int main() {
   string a="12021";
    int i=0;
    int j=a.length()-1;
    while(i<j){
            if(a[i]!=a[j]){
                    cout<<"no";
                    return 0;
            }
            i++;
            j--;
            }
    
    cout<<"yes";

}