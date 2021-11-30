#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();

    // Legg til get- og set-funksjoner her.

    int getXPosition();
    int getYPosition();
    void setXPosition(double x);
    void setYPosition(double y);

private:

    double x_;
    double y_;

};

#endif // POSITION_H
