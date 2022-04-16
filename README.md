# Rust like numerics in C++11
Integral numeric types which do not allow integer promotion. Arithmetic operations require that all operands have the same type. The programmer must ensure this condition is followed by using appropriate casts.

## Example:
The following code will not compile.
```c++
#include <iostream>
#include <numerals.hpp>

int main()
{
    using namespace rust;
    auto u1 = 15_u32;
    auto u2 = 150_u16;
    
    std::cout << (u1 + u2).internal() << '\n';

    return 0;
}
```

```c++
[build] src/main.cpp: In function ‘int main()’:
[build] src/main.cpp:11:22: error: no match for ‘operator+’ (operand types are ‘rust::t_generic<unsigned int>’ and ‘rust::t_generic<short unsigned int>’)
[build]    11 |     std::cout << (u1 + u2).internal() << '\n';
[build]       |                   ~~ ^ ~~
[build]       |                   |    |
[build]       |                   |    t_generic<short unsigned int>
[build]       |                   t_generic<unsigned int>
```

Explicit conversions must be specified
```c++
    std::cout << (u1 + static_cast<u32>(u2)).internal() << '\n';
    // or
    std::cout << (static_cast<u16>(u1) + u2).internal() << '\n';
```

## Usage
Only the files in inc should be included in projects. src/main.cpp's purpose if just for testing.