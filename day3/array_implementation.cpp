#include <iostream>
using namespace std;

template<typename T, typename K>
auto sum(T a, K b){
    return a + b;
}

int main(){
    int arr[5] = {1, 2, 3};

    cout << *(arr+1) << endl; 

    return 0;
}
/* size of pinter is 8 bytes and constant throughout the program, it is not
 dependent on the data type it points to. It is because a pointer stores the memory addres
 s of a variable, and the size of a memory address is fixed regardless of the type of variable 
 it points to.
 */