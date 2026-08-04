#include<iostream>
using namespace std;
class Point {
    public:
    int x;
    int y;
};

class Rectangle{
    public:
    Point top_left;
    Point bot_right;

    float compute_area()
    {
        return abs(this->top_left.x - this->bot_right.x) * abs(this->top_left.y - this -> bot_right.y);
    }
};

void func1()
{
    Rectangle r = {{0, 0},{2, 2}};

    cout << "[(" << r.top_left.x <<","<< r.top_left.y << "), " << "("<< r.bot_right.x<< ","<<r.bot_right.y << ")]" << endl;
    cout << r.compute_area();
}

int main()
{
    func1();
    return 0;
}
