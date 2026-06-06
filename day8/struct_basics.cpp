struct dog{
    string name;
    dog(){
        name ="dummy";
        cout<<this->name;
    }
};
class animal{
    public:
    string variant;
    animal(){
        this->variant="v r idiots"; 
    cout<<this->variant<<endl;
       }
       ~animal(){
           delete this;
       }
};
int main(){
    animal *a=new animal;
    struct dog* 
}