#pragma once

#include <stdafx.h>

namespace cursespp {
    class IInput {
        public:
            virtual ~IInput() { }
            virtual void Write(const std::string& key) = 0;
            virtual size_t Length() = 0;
    };
}
