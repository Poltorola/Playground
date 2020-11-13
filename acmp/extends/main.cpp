#include <iostream>

using namespace std;

class A{
private:
    int private_field;

    void private_method(){
        cout << "i`m private\n";
    }
protected:
    int protected_field;

    void protected_method(){
        cout << "i`m protected\n";
    }
public:
    int public_field;

    A(int a, int b, int c): private_field(a), protected_field(b), public_field(c){}

    void public_method(){
        cout << "i`m public, but i can see private and protected fields and methods\n";
    }
};


class Public_A: public A{
public:
    Public_A(int a,int b,int c): A(a,b,c) {}
};

class Protected_A: protected A{
public:
    Protected_A(int a,int b,int c): A(a, b, c) {}

    void f(){
        this->protected_method();
        this->public_method();
        cout << this->public_field;
        cout << this->protected_field;
    }
};

class Private_A: private A{
public:
    Private_A(int a,int b,int c): A(a, b, c) {}

    void g(){
        this->public_method();
        this->protected_method();
        cout << this->public_field;
        cout << this->protected_field;
    }
};




int main(){
    A a(1, 2, 3);

    cout << a.public_field;
    a.public_method();

    Public_A pubA(3,2,1);
    cout << pubA.public_field;
    pubA.public_method();

    Protected_A protA(0,0,0);
//    cout << protA.public_field;
//    protA.public_method();


    Private_A privA(-1,-1,-1);
//    cout << privA.public_field;
//    privA.public_method()
//

}