//abstraction is done using abstract classes
#include<iostream>
using namespace std;
class phone{
    public:
    virtual void photo()=0;

};
class android :public phone{
    public:
    void photo(){
        cout<<"selfie taken";
    }

};
class iphone :public phone{
    public:
    void photo(){
        cout<<"photograph taken";
    }

};
int main(){
    phone *p=new android;
    (*p).photo();
}