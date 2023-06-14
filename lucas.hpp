#pragma once

#include "fibonacci.hpp"

template<int N>
constexpr int lucas()
{
    if constexpr (N == 0){
        return 2;
    }
    else if constexpr (N >= 1){
        return fibonacci<N - 1>() + fibonacci<N + 1>();
    }
    else{
        return lucas<-N>() * ((-N % 2) ? -1 : 1);
    }
}