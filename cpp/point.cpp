#include<iostream>
using namespace std;

class Point {
    int x;
    int y;

    public: 
        Point() {
            x = 0;
            y = 0;
        }
        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }
        void display() {
            cout<<"\nX = "<<x<<" Y = "<<y<<endl;
        }

        Point operator+(Point &p2) {
            Point obj;
            obj.x = this->x+p2.x;
            obj.y = this->y+p2.y;

            return obj;
        }
        bool operator==(Point &p2) {
            
            return (this->x==p2.x && this->y==y);
        }

        
        friend ostream& operator<<(ostream &os, const Point &p);
        friend istream& operator>>(istream &is, Point &p);

        Point& operator++() {
            ++x;
            ++y;

            return *this;
        }

        Point& operator--(){
            --x;
            --y;

            return *this;
        }

        Point operator++(int) {
            
            Point tempObj = *this;
            x++;
            y++;

            return tempObj;
        }

        

};

ostream& operator<<(ostream &os, const Point &p) {

    os<<p.x<<" "<<p.y<<endl;
}
istream& operator>>(istream &is, Point &p) {
    cout<<"\nEnter x and y : ";
    is>>p.x>>p.y;

    return is;
}

int main() {
    Point p1(3,4);
    Point p2(5,7);

    cout<<p1<<p2;

    Point p3 = p1+p2;
    p3.display();

    if(p1==p2) {
        cout<<"\nPoints are equal";
    } else {
        cout<<"\nNot Equal";
    }

    Point p8;
    cin>>p8;
    cout<<p8;

    Point p4(5,7);

    Point p7 = p4++;

    cout<<p4;
    cout<<p7;

    Point p5 = ++p4;

    cout<<p4;
    cout<<p5;

    Point p6 = --p4;

   cout<<p4;
   cout<<p6;

  


    return 0;
}