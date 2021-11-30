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

};

#endif // CAT_H
