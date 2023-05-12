// #include <stdio.h>
#include <SDL2/SDL.h>

#include "debug.h"
#include "window.h"

int main()
{
  window_init();

  draw_rect(50, 50, 50, 50);
  draw_rect(100, 100, 50, 50);

  quit();

  // cdg();
  // printf("Cores %ld\n", number_of_processors);

  // //#pragma omp parallel
  // #pragma omp single
  // printf("Hello, 66 world.\n");
  // printf("Hello, World!+++");
  return 0;
}
