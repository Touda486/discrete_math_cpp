#pragma once

// 階乗 N!
template<int N>
constexpr int factorial()
{
    static_assert(N >= 0, "N has to be 0 or natural number.");
    if constexpr (N <= 1){
        return 1;
    }
    else{
        return N * factorial<N - 1>();
    }
}

template<int M, int N>
constexpr int beta()
{
    return factorial<M - 1>() * factorial<N - 1>() / factorial<M + N - 1>();
}
