#include<iostream>
using namespace std;
class animal
{
    protected:
    string name;
    int age;
    public:
    animal(string n, int a)
    {
        name = n;
        age = a;
    }
    void eat()
    {
        cout<<"eating___"<<end1;
    }
    class cat: public animal
    {
        public:
        cat(string n, int a) : animal(n,a){}
        void bark()
        {
            cout<<"bark___"<<end 1;
        }
    }
    int main()
    {
          cat my cat("whiskers",3)
            dog my dog("rufus",5;)
            my cat.eat();
            my eat.meow();
            my dog.eat();
            my dog.bark();
            return 0;
        }
    }