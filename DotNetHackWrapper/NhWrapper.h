#pragma once

#include <memory>
using namespace System;
class NativeWrapper;

namespace NetHack
{
    public ref class Wrapper
    {
    public:
        Wrapper();
        ~Wrapper();

        void MoveLoop(bool resuming);
        bool Init();
        void Exit();
    private:
        NativeWrapper* nativeWrapper;
    };
}
