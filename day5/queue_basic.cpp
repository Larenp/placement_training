#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>queue1;

int size=0;
void push_function(int val){
   
    queue1.push_back(val);
    size++;
}
void pop_function(){
    queue1.erase(queue1.begin());
    size--;
    if(size<1){
        cout<<"the queue is empty";
    }
}
void size_function(){
    cout<<"the size is :"<<queue1.size()<<endl;
}
void display_function(){
    for(int i=0;i<queue1.size();i++){
        cout<<queue1[i]<<" ";
    }
    cout<<endl;
}

int main(){
 
    while(1){
        cout<<"enter your choice :"<<endl;
        cout<<"1. push an element into the queue"<<endl;
        cout<<"2. pop an element from the queue"<<endl;
        cout<<"3. display the size of the queue"<<endl;
        cout<<"4. display the queue"<<endl;
        int choice;     
        cin>>choice;
        switch(choice){
            case 1:cout<<"enter the value to be pushed into the queue :"<<endl;
            int val;
            cin>>val;
            push_function(val);
            break;
            case 2:pop_function();
            break;
            case 3:size_function();         
            break;
            case 4:display_function();
            break;
            default:cout<<"invalid choice";

    }


}
}