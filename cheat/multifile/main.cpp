#include <iostream>

#define DEF
#include "a.h"
//#define DEF
    //ERROR def undefined
    //preprocessor does things in the exact same order it sees them

#include "b.h"
#include "c.h"
//#include "f.h"

using namespace std;

int i = 0;
static int staticInt = 0;

//extern int externIntInit = 1;
    //WARN
    //extern initialized?!

static void staticFunc()
{
    cout << "main" << endl;
    cout << staticInt << endl;
    cout << aHStaticInt << endl;
    cout << externInt << endl;
}

void func(){ cout << "mainFunc" << endl; }

int main( int argc, char** argv )
{
    //static demostration
        staticFunc();
        a();
        staticFunc();
        a();

    a();
    b();

    //preprocessor includes
        def++;

    //#cross language
        
        //#c
            c( 1, 1.0 );

        //#fortran
            //f( 1, 1.0 );
}