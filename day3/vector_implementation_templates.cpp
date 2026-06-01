#include <iostream>
using namespace std;
// Both arguments must be of the same data type because a single template parameter T is used.
template <typename T>
T sum(T a, T b) {
    return a + b;
}   
int main(){
 cout<<sum(3.6, 4.3)<<endl;
    return 0;
}
/*
// T1 and T2 allow arguments of different data types.
template <typename T1, typename T2>
auto sum(T1 a, T2 b) {
    return a + b;
}
*/