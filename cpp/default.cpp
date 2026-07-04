#include<iostream>
using namespace std;
class Shape{
public:
//default constructor
     Shape(){
        cout<<"This is a default constructor of default class shape"<<endl;
    }
      void output(){
        cout<<"This is a shape"<<endl;
    }
};

class Polygon: public Shape{
    public:
    //default constructor
     Polygon(){
    cout<<"this is a default constructor of default class polygon"<<endl;
    } 
      void output(){
        cout<<"polygon is a shape"<<endl;
    }
};
class Rectangle : public Polygon{
    public:
    //default constructor
     Rectangle(){
        cout<<"this is a default constructor of default class rectangle"<<endl;
    }
      void output(){
        cout<<"Rectangle is a polygon"<<endl;
    }
};
class Triangle : public Polygon{
    public:
    //default constructor
     Triangle(){
        cout<<"this is a default constructor of default class triangle"<<endl;
    }
      void output(){
        cout<<"Triangle is a polygon"<<endl;
    }
};
class Square : public Rectangle{
    public:
    //default constructor
     Square(){
        cout<<"this is a default constructor of default class square"<<endl;
    }
      void output(){
        cout<<"square is a rectangle"<<endl;
    }
};

int main(){
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.output();
    p.output();
    r.output();
    t.output();
    sq.output();
}
