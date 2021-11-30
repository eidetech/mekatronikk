#ifndef IPOSITIONPROVIDER_H
#define IPOSITIONPROVIDER_H
#include <position.h>

class IPositionProvider
{
public:

    ~IPositionProvider() {}

    virtual Position getPosition() = 0; // Pure virtual.

};

#endif // IPOSITIONPROVIDER_H
