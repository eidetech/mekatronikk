#include <iostream>

class Something
{
    public:
    void setX(int x);
    int getX();
    private:
        int x_;
        int y_;
};

void Something::setX(int x)
{
    x_ = x;
}

int Something::getX()
{
    return x_;
}



int main()
{
    Something s;
    s.setX(4);
    std::cout << s.getX() << std::endl;
    return 0;
}
