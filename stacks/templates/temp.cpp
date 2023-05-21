#include <iostream>
using namespace std;

template <typename T>

class Pair {
    T x;
    T y;

    public:
        void setX(T x){
            this->x = x;
        }
        T getX(){
            return x;
        }

        void setY(T y){
            this->y = y;
        }
        T gety(){
            return y;
        }
};

int main(){
    Pair<int> p1;
    p1.setX(12);
    p1.setY(13);
    cout<<p1.getX()<<" "<<p1.gety()<<endl;

    Pair<double> p2;
    p2.setX(14.5);
    p2.setY(15.5);
    cout<<p2.getX()<<" "<<p2.gety()<<endl;

    

    return 0;
}