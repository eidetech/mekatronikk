#include <iostream>
#include <ianimal.h>
#include <cat.h>
#include <position.h>

int main()
{
    Cat pus;

    IAnimal& pus_ref = pus;

    pus_ref.move();

    pus.move();

    Position pos(5,2);

    pos.getXPosition();
    pos.getYPosition();

    pos.setXPosition(7);

    pos.getXPosition();

    return 0;

}
