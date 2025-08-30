// #include<iostream>
// using namespace std;

// class Logger{
//     private:
//     Logger(){
//         cout<<"Logger created"<<endl;
//     }

//     Logger(const Logger&) = delete;
//     Logger& operator=(const Logger&) = delete;

//     static Logger* instance;

//     public:

//     static Logger* getinstance(){
//         if(instance==nullptr){
//             instance = new Logger();
//         }
//         return instance;
//     }

//     void log(string msg){
//         cout<<"LOG : "<<msg<<endl;
//     }

//     ~Logger(){
//         cout<<"Logger destroyed"<<endl;
//     }
// };

// Logger* Logger::instance = nullptr;

// int main()
// {
//     Logger* l1 = Logger::getinstance();
//     l1->log("lolhi");

//     Logger* l2 = Logger::getinstance();
//     l2->log("hello");

//     cout << "l1: " << l1 << " , l2: " << l2 << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

class Admin{
    private:
    Admin(){
        cout<<"admin active"<<endl;
    }

    Admin(const Admin&) = delete;
    Admin& operator=(const Admin&) = delete;

    static Admin* user;

    public:
        static Admin* makeuser(){
            if(user==nullptr){
                user = new Admin();
            }
            return user;
        }

    void status(){
        cout<<"connected"<<endl;
    }

    ~Admin(){
        cout<<"Admin off";
    }

};

Admin* Admin::user = nullptr;

int main()
{
    Admin *u1 = Admin::makeuser();
    u1->status();

    Admin *u2 = Admin::makeuser();
    u2->status();

    return 0;
}