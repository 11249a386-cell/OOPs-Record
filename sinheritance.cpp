#include<iostream>
using namespace std;
class parent {
    public:
    void showparent() {
       std::cout <<"this is a parent class."<<std:: endl;
    }
};
class child : public parent {
    public:
    void showclild(){
        std::cout<<"this is the child class."<<std:: endl;
    }
};
int main(){
    child obj;
    obj.showparent();
    obj.showclild();
    return 0;
}