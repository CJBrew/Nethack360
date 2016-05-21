// This is the main DLL file.

#include "NHWrapper.h"

#define GUISTUB
#include "hack.h"

namespace NetHack
{
    Wrapper::Wrapper()
    {}

    void Wrapper::MoveLoop(bool resuming)
    {
        moveloop(resuming);
    }
}