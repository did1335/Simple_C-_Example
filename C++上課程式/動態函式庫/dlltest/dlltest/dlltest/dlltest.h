#pragma once
#include <cstdlib>
#include <iostream>

#ifdef DLLTEST_EXPORTS
#define DLLTEST_API __declspec (dllexport)
#else
#define DLLTEST_API __declspec (dllimport)
#endif // DLLTEST_EXPORTS


 extern "C++" DLLTEST_API int add(int x, int y);

