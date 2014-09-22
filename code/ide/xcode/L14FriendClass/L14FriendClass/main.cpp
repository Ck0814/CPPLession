//
//  main.cpp
//  L14FriendClass
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>

class A {
    friend class B;
    
private:
    int num;
    
public:
    A() {
        num = 10;
    }
};

class B:public A {
    
    
public:
    B() {
        printf("%d\n", num);
    }
};

int main(int argc, const char * argv[])
{

    B b;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

