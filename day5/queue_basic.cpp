#include<iostream>
using namespace std;
vector<int>queue;
int size=0;
push_function(int val){
    // code to push an element into the queue
    queue.push_back(val);
    size++;
}
pop_function(){
    queue.erase(queue.begin());
    size--;
    if(size<1){
        cout<<"the queue is empty";
    }
}
size_function(){
    cout<<"the size is :"<<queue.size()<<endl;
}
display_function(){
    for(int i=0;i<queue.size();q++){
        cout<<queue[i];
    }
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