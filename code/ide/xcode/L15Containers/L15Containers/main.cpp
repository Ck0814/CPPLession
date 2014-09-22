//
//  main.cpp
//  L15Containers
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;

int main(int argc, const char * argv[])
{

    std::list<std::string> l;
    l.push_back("Hello");
    l.push_back("chinka");
    
    for (std::list<std::string>::iterator it = l.begin(); it != l.end(); it++) {
        std::cout << *it << "\n";
    }
    
    std::map<std::string, std::string> m;
//    m.insert(std::pair<string, string>("hello", "Hello chinka"));
//    m.insert(pair<string,string>("name", "zhangsan"));
    
    m["name"] = "chinka";
    
    cout << m["name"] << "\n";
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

