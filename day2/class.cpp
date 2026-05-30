#include<iostream>
using namespace std;
class person{
    public:
     string name;
    string user_id;
    string pass;

};
vector<person> v;
int main(){
    person p;
    p.name="Anup";
    p.user_id="567890";
    p.pass="pass";
    v.push_back(p);
    cout<<v[0].name<<" "<<v[0].user_id<<" "<<v[0].pass;
    
}