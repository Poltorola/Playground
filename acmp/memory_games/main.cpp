#include <iostream>

using namespace std;

void bar(long p);

void foo(){
    int c = 99;
    std::cout << "c from foo " << c << " its address " << &c << std::endl;
   // bar(p);              // cheking how deep is a wormhole
}

void bar(){                // stealing value of c from stack
    int x;
    std::cout <<  "x from bar " << x << " its address " << &x << std::endl;
    //foo(p);
}

void f(){                                       // there is no call for f
    cout << "hey, I am trying to hack u ;) ";
}

void g(){                   // g can secretly call f using stack)
    int * a[1];
    a[3] = (int*) &f;       // by changing returned address
}

/*

 +----------------+
 | stack start    |
 +----------------+
 |    . . .       |
 +----------------+
 | return value   |
 +----------------+
 | return address | <-- a[3] (index out of range)
 +----------------+
 | register state |
 +----------------+ <-- scope (visible area of current function)
 | int * a[1]     |
 +----------------+
 |    . . .       |
 +----------------+
 | stack end      |
 +----------------+

 */

int main() {

    foo();
    bar();

    g();

    return 0;
}

