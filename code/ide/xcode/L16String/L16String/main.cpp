//
//  main.cpp
//  L16String
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    string str;
    str += "Hello ";
    str += "World";

    // insert code here...
    std::cout << str << "\n";
    
    stringstream ss;
    ss << "Hello ";
    ss << 200;
    ss << " ";
    ss << 2.5;
    ss << "Hello " << "chinka " << 1000;
    
    cout << ss.str() << "\n";
    
    return 0;
}

