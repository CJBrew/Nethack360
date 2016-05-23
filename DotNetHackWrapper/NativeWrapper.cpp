#include "NativeWrapper.h"

#define WIN32

#include <stdexcept>
#include <iostream>

#define GUISTUB
#include "hack.h"

extern "C"  int FDECL(pcmain, (int, char **));
//extern "C"  boolean FDECL(pcmain, (int, char **));
extern "C" void FDECL(nethack_exit, (int));

void NativeWrapper::Init()
{
    try {
        sys_early_init();

        int iresult = pcmain(0, 0);
        std::cout << "result = " << iresult << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }
}

void NativeWrapper::MainLoop()
{
    moveloop(false);
}