#ifndef CAT_H
#define CAT_H
#include <ianimal.h>
#include <ipositionprovider.h>

class Cat : public IAnimal, public IPositionProvider
{
public:
    Cat() = default;
    ~Cat();
    virtual void move() override;
    virtual Position getPosition() override;


    void setAge(int age);
    void printAge();

private:
     int _age = 0;

};

#endif // CAT_H
