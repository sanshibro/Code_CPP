#include <iostream>

using namespace std;


class BaseDrink{

    public :
        virtual void zhushui() = 0;
        virtual void chongpao() = 0;
        virtual void dongzuo() = 0;
    public : 
        void liucheng(){
            zhushui();
            chongpao();
            dongzuo();
        };

};





class coffe : public BaseDrink{
    public:
        void zhushui(){
            cout << "煮水" << endl;
        }
        void chongpao(){
            cout << "冲泡咖啡" << endl;
        }
        void dongzuo(){
            cout << "加糖加奶" << endl;
        }
};

class tea : public BaseDrink{
    public:
        void zhushui(){
            cout << "煮水" << endl;
        }
        void chongpao(){
            cout << "冲泡茶" << endl;
        }
        void dongzuo(){
            cout << "加柠檬" << endl;
        }
};

void Make(BaseDrink *baseDrink){
    baseDrink->liucheng();
    delete baseDrink;
}

int main() {
    // 程序入口
    cout << "Hello, World!" << endl;

    Make(new coffe);
    Make(new tea);
    return 0;
}