// This is the main DLL file.

#include "NHWrapper.h"

#define GUISTUB
#include "hack.h"

extern "C"  boolean FDECL(pcmain, (int, char **));
extern "C" void FDECL(nethack_exit, (int));

namespace NetHack
{
    Wrapper::Wrapper()
    {
        Init();

        MoveLoop(0);
        Exit();
    }

    void Wrapper::Exit()
    {
        nethack_exit(EXIT_SUCCESS);
    }
    bool Wrapper::Init()
    {
        sys_early_init();

        return (bool)pcmain(0, 0);
    }

    void Wrapper::MoveLoop(bool resuming)
    {
        moveloop(resuming);
    }
}