#include<iostream>
using namespace std;

class Box{
    private:
    int length;
    int breadth;
    int height;
    public:
    void setLength(int);//{
        //length = l;
   // }
    int getLength(){
        return length;
    }


};

void Box::setLength(int ll){
    length = ll;
}

int main()
{
    Box b1;
    b1.setLength(25);
    cout<<"The box lentgh is: "<<b1.getLength();




    return 0;
}