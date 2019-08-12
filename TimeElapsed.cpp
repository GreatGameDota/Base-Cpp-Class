#include <Windows.h>
#include <iostream>
#include "TimeElapsed.h"

inline long long PerformanceCounter() noexcept
{
  LARGE_INTEGER li;
  ::QueryPerformanceCounter(&li);
  return li.QuadPart;
}

inline long long PerformanceFrequency() noexcept
{
  LARGE_INTEGER li;
  ::QueryPerformanceFrequency(&li);
  return li.QuadPart;
}

long long start{};

void startTimer()
{
  start = PerformanceCounter();
}

void finish()
{
  long long finish = PerformanceCounter();
  double frequency = PerformanceFrequency();
  double elapsedMilliseconds = ((finish - start) * 1000.0) / frequency;
  long hr = elapsedMilliseconds / 3600000;
  elapsedMilliseconds = elapsedMilliseconds - 3600000 * hr;
  long min = elapsedMilliseconds / 60000;
  elapsedMilliseconds = elapsedMilliseconds - 60000 * min;
  long sec = elapsedMilliseconds / 1000;
  elapsedMilliseconds = elapsedMilliseconds - 1000 * sec;
  std::cout << "\nTime elapsed: " << hr << ":" << min << ":" << sec << ":" << elapsedMilliseconds << std::endl;
}