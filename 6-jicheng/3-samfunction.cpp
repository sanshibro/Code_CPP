#include <iostream>
using namespace std;

class Basepage{

    public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}

	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};


class Java : public Basepage{
    public:
    void header()
    {
        cout << "Java学科视频" << endl;
    }
};

class Python : public Basepage{

    public:
        void header(){
            cout<<"Python学科视频"<<endl;
        }

};




int main(){
    Java ja;
    ja.header();
    ja.Basepage::header();
    






    return 0;
}


