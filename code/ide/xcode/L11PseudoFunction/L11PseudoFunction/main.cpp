//
//  main.cpp
//  L11PseudoFunction
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>

void hello() {
    
    printf("hello\n");
}

class Hello {
    
    
public:
    void operator()() {
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[])
{
    Hello h;
    h();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

