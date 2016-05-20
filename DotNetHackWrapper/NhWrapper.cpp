// This is the main DLL file.

#include "NHWrapper.h"

#include "hack.h"
#include "extern.h"

namespace Nethack
{
    void Wrapper::MoveLoop(bool resuming)
    {
        moveloop(resuming);
    }
}