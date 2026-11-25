#ifndef MATH_H
#define MATH_H

#define M_PI 3.14159265358979323846

float sinf(float);
double sin(double);
float cosf(float);
double cos(double);

#ifdef __GNUC__
static inline float sqrtf(float x) {
    float res;
    __asm__("sqrt.s %0, %1" : "=f"(res) : "f"(x));
    return res;
}
#else
float sqrtf(float);
#endif

#endif
