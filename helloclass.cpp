#include "helloclass.h"


HelloClass::HelloClass()
{
    cout<<"I'm being created."<<endl;
}

HelloClass::~HelloClass()
{
    cout<<"I'm being destroyed."<<endl;
}

void HelloClass::sayHello()
{
    cout<<"Hello Class!"<<endl;
}

