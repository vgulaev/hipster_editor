// #include <stdio.h>
#include <SDL2/SDL.h>

// #include "debug.h"
#include "window.h"

void main_main() {
  window_init();

  draw_rect(50, 50, 50, 50);
  draw_rect(100, 100, 50, 50);

  quit();
}

int main(int, char **) {
  main_main();
  return 0;
}

int WinMain(int, char **) {
  main_main();
  return 0;
}
// --------
