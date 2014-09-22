//
//  main.cpp
//  L09Overload
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>

class Hello {
    
    
public:
    void sayHello() {
        
        printf("Hello chinka\n");
    }
    
//    void sayHello(char* name) {
//        printf("Hello %s\n", name);
//    }
    
    void sayHello(std::string name) {
        std::string str = "Hello ";
        str += name;
        std::cout << str << "\n";
    }
};

int main(int argc, const char * argv[])
{
    
    Hello* h = new Hello();
    h->sayHello("zhangsan");
    
//    std::string name = "zhangsan";
//    h->sayHello((char*)name.c_str());

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

