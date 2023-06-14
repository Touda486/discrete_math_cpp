#pragma once

// フィボナッチ数列
template<int N>
constexpr int fibonacci()
{
    static_assert(N >= 0, "N is 0 or natural number.");
    if constexpr (N == 0){
        return 0;
    }
    else if constexpr (N == 1){
        return 1;
    }
    else{
        return fibonacci<N - 1>() + fibonacci<N - 2>();
    }
}

