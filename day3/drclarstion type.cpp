#include<iostream>
using namespace std;
template<typename T, typename K
auto sum(T a, K b){
    return a + b;
}
int main(){
  /* int x;
    // Deduces the exact type of x (including references if applicable)
    decltype(auto) y=x;
    cout<<sum(3.6, 4.3)<<endl;
    return 0;
    */
  /* int x;
    // Deduces the type of x but removes references and cv-qualifiers
    auto y = x; // y is deduced as int, not int& or const int
    cout << sum(3.6, 4.3) << endl;
    return 0;
    */
}