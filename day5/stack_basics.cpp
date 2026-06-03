#include<iostream>
using namespace std;
vector<int>stack1;
void push_stack(int val){
stack1.push_back(val);
}
void pop_stack(){
stack1.pop_back();
}
void size_stack(){
cout<<stack1.size()<<endl;
}
void display(){
for(int i=0;i<stack1.size();i++){
cout<<stack1[i]<<" ";
}
cout<<endl;
}
int mina(){
    while(1){
        cout<<"enter your choice :"<<endl;
        cout<<"1. push an element into the stack"<<endl;
        cout<<"2. pop an element from the stack"<<endl;
        cout<<"3. display the size of the stack"<<endl;
        cout<<"4. display the stack"<<endl;
        int choice;     
        cin>>choice;
        switch(choice){
            case 1:cout<<"enter the value to be pushed into the stack :"<<endl;
            int val;
            cin>>val;
            push_stack(val);
            break;
            case 2:pop_stack();
            break;
            case 3:size_stack();         
            break;
            case 4:display();
            break;
            default:cout<<"invalid choice";
    }

}
}
