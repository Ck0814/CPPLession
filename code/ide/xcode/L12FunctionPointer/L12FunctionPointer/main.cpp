//
//  main.cpp
//  L12FunctionPointer
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

class Object;

typedef void(Object::*SayHi)();
typedef void(Object::*CallaterHandler) ();

void threadFunc(Object* target, CallaterHandler handler, int delay) {
    
    sleep(delay);
    (target->*handler)();
}

void callater(Object* target, CallaterHandler handler, int delay) {
    
    std::thread t(threadFunc, target, handler, delay);
    t.join();
}

#define CH(fp) (CallaterHandler)(&fp)

class Object {
    
    
public:
    SayHi sayHi;
};

class Hello:public Object {
    
    
public:
    Hello() {

        callater(this, CH(Hello::HelloSayHi), 3);
    }
    
    void HelloSayHi() {
        
        printf("Hello CPP\n");
    }
};


int main(int argc, const char * argv[])
{

    Hello* h = new Hello();
    delete h;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

