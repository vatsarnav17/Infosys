#include<iostream>
using namespace std;

class student{
    private:
        int age=10;
        string gender="male";
        string name="arnav";

    public:
        int number = 10;
        void getstuff(){
            cout<<age<<" "<<gender<<" "<<name<<endl;
        }

        void setstuff(int a,string n,string g){
            age = a;
            name = n;
            gender = g;
        }
    
};

int main()
{
    student object;
    object.getstuff();
    object.setstuff(21,"Arnav Vats","Male");
    cout<<object.number<<endl;
    object.number = 111;
    cout<<object.number<<endl;
    object.getstuff();

    return 0;
}