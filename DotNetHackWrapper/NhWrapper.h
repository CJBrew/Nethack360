#pragma once

#define WIN32

using namespace System;

namespace NetHack
{
    public ref class Wrapper
    {
    public:
        Wrapper();
        void MoveLoop(bool resuming);
    };
}
