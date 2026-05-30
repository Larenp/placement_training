#include <iostream>
using namespace std;
 void register1() {
    cout<<"register";
     cout<<endl;
    cout<<"enter the username";
    cout<<endl;
    string username;
    cin>>username;
    cout<<"enter the password"; 
     cout<<endl;        
    string password;  
    cin>>password;
 }
 void login() {
    cout<<"login";
     cout<<endl;
    cout<<"enter the username";
     cout<<endl;
    string username;
    cin>>username;
    cout<<"enter the password";
     cout<<endl;
    string password;
    cin>>password;
 }
  void admin_login() {
    cout<<"admin_login";
     cout<<endl;
    cout<<"enter the username";
     cout<<endl;
    string username;
    cin>>username;
    cout<<"enter the password";
     cout<<endl;
    string password;
    cin>>password;
 }
  void exit() {
    cout<<"exit";
     cout<<endl;
     exit(0);
    
 }
   


int main(){
    int n=0;
   
    while(1){
       
         cout<<"Welcom to hi\n1.Register\n2.Login\n3.Admin Login\n4.Exit\nEnter your choice\n";
          cout<<endl;
          cin>>n;
            switch (n){
                case 1: register1();
                break;
                case 2:login();
                break;
                case 3:admin_login();
                break; 
                case 4:exit();
                break;
                default:cout<<"invalid input"<<endl;
                
            }
            
    }
}