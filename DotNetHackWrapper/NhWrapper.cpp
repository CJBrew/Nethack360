// This is the main DLL file.

#include "NHWrapper.h"

#include "NativeWrapper.h"

namespace NetHack
{
    Wrapper::Wrapper() : nativeWrapper(new NativeWrapper())
    {
    }
    Wrapper::~Wrapper()
    {
        delete nativeWrapper;
    }

    void Wrapper::Exit()
    {
        //nethack_exit(EXIT_SUCCESS);
    }
    bool Wrapper::Init()
    {
        nativeWrapper->Init();

        return false;
    }

    void Wrapper::MoveLoop(bool resuming)
    {
        nativeWrapper->MainLoop();
    }
}