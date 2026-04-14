/*    ✅ C++ <cmath> - CORE FUNCTION LIST (Most Important 40+)

        <cmath> provides standerd mathematical functions.
        Used for trigonometry , power , roots , logarithms , rounding etc,.
        Functions are int std namespace (e.g., std :: sqrt ())
        Most functions work with double by default
        Many functions have overloaded versions for float and ong double
        Invalid math operations return NaN or inf
        Used for fast, optimized math calculations

    1. Power / Root Functions
    sqrt(x) - square root
    cbrt(x) - cube root
    pow(a, b) - a raised to b
    hypot(a, b) - √(a² + b²) (distance / Pythagoras)

    2. Absolute / Sign
    abs(x) - absolute value (int / double)
    fabs(x) - absolute value (float/double specific)
    fmax(a, b) - max for floating
    fmin(a, b) - min for floating
    copysign(x, y) - x ki value + y ka sign

    3. Rounding Functions
    ceil(x) - round upward
    floor(x) - round downward
    round(x) - nearest integer
    trunc(x) - remove decimal
    rint(x) - rounded to nearest integer (floating)
    nearbyint(x) - similar to rint but no exceptions

    4. Trigonometric
    sin(x)
    cos(x)
    tan(x)
    asin(x)
    acos(x)
    atan(x)
    atan2(y, x) - angle from coordinates (useful AF)
    (Angle always in radians, not degrees)

    5. Hyperbolic (rare par important)

    sinh(x)
    cosh(x)
    tanh(x)
    asinh(x)
    acosh(x)
    atanh(x)

    6. Logarithmic / Exponential
    log(x) - natural log (base e)
    log10(x) - base 10 log
    log2(x) - base 2 log
    exp(x) - e^x
    expm1(x) - e^x - 1 (precision ke liye)

    7. Angles / Degrees
    atan2(y, x) - already listed
    std::lerp(a, b, t) - linear interpolation (C++20)
    (Not angle but used with geometry)

    8. Floating Utility
    fmod(a, b) - floating-point remainder
    remainder(a, b) - mathematically consistent remainder
    frexp(x, &exp) - break float into mantissa/exponent
    ldexp(x, exp) - reverse of frexp (x * 2^exp)
    modf(x, &intpart) - split integer + decimal
    nextafter(a, b) - next floating number
    nan("") - generate NaN
    isnan(x) - check NaN
    isinf(x) - check infinity
    fpclassify(x) - classify float (zero, normal, subnormal…)

    •⁠ Most Practical 15 (Real-World Use)
    Ye tum 99% time use karoge:
    1.sqrt
    2. pow
    3. abs / fabs
    4. ceil
    5. floor
    6. round
    7. sin
    8. cos
    9. tan
    10. log
    11. log10
    12. exp
    13. fmod
    14. hypot
    15. atan2
*/