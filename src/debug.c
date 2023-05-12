#include <stdio.h>
#include <stdlib.h>

void cdg() {
  FILE * fp;
  fp = fopen("cdg.log", "a");
  fprintf(fp, "%s %s %s %d", "We", "are", "in", 2012);
  fclose(fp);
}
