//
//  main.cpp
//  L13Ref
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>

class Point {
    
private:
    int x, y;
    
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    int getX() {
        return this->x;
    }
    
    int getY() {
        return this->y;
    }
    
    void add(Point &p) {
        this->x += p.x;
        this->y += p.y;
    }
};

int main(int argc, const char * argv[])
{
    Point p(1, 1);
    Point p1(2, 3);
    p.add(p1);
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

