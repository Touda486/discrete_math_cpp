#pragma once

// N乗 X^N
template<int X, int N>
constexpr int power()
{
    static_assert(N >= 0, "N is 0 or natural number.");
    int r = 1;
    for (int i = 0; i < N; ++i){
        r *= X;
    }
    return r;
}

template<int N>
constexpr int mersenne()
{
    return power<2, N>() - 1;
}

