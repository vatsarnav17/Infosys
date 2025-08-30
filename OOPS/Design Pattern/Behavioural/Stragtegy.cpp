// #include<iostream>
// using namespace std;

// class Strategy{
//     public: 
//         virtual void execute()=0;
//         virtual ~Strategy(){}
// };

// class car : public Strategy{
//     public:
//         void execute() override{
//             cout<<"car"<<endl;
//         }
// };

// class bike : public Strategy{
//     public:
//         void execute() override{
//             cout<<"bike"<<endl;
//         }
// };

// class cycle:public Strategy{
//     public:
//         void execute() override{
//             cout<<"cycle"<<endl;
//         }
// };

// class navigator{
//     private: 
//         Strategy* strat;
    
//     public:
//         navigator(Strategy* s)
//         {
//             strat = s;
//         }
//         void setstrat(Strategy* s){
//             strat = s;
//         }
//         void nav(){
//             strat->execute();
//         }
        
// };
// int main()
// {
//     car c;
//     bike b;
//     cycle cy;

//     navigator navi(&c);
//     navi.nav();

//     navi.setstrat(&b);
//     navi.nav();

//     navi.setstrat(&cy);
//     navi.nav();

//     return 0;
// }

#include<iostream>
using namespace std;

class switching{
    public:
        virtual void change() = 0;
        virtual ~switching(){};
};

class fan : public switching{
    public:
        void change(){
            cout<<"fan on"<<endl;
        }
        ~fan(){}
};

class light : public switching{
    public:
        void change() override{
            cout<<"light on"<<endl;
        }
        ~light(){}
};

class lightboard{
    private:
        switching* sw;
    public:
        lightboard(switching *s){
            sw = s;
        }  
        void setsw(switching *s){
            sw= s;
        }
        void op(){
            sw->change();
        }
        ~lightboard(){}
};

int main()
{
    fan f;
    light l;
    lightboard lb(&l);
    lb.op();
    lb.setsw(&f);
    lb.op();
    return 0;
}

