#include <numerals.hpp>

#include <iostream>

int main(int, char**)
{
    using namespace rust;
    auto u1 = 15_u32;
    auto u2 = 150_u16;
    //std::cout << (u1 + u2) << '\n';
    std::cout << (u1 + static_cast<u32>(u2)).internal() << '\n';
    std::cout << (static_cast<u16>(u1) + u2).internal() << '\n';

    auto uc = 255_u8;
    auto uc2 = uc + 1_u8;
    std::cout << static_cast<int>(uc.internal()) << ' ' << static_cast<int>(uc2.internal()) << '\n';

    auto sc = 120_i8;
    auto sc2 = sc + 10_i8;
    std::cout << static_cast<int>(sc.internal()) << ' ' << static_cast<int>(sc2.internal()) << '\n';


    auto i = -1_i8;
    std::cout << static_cast<int>(i.internal()) << '\n';
}
