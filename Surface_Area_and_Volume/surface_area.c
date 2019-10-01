#include <stdio.h>

int main()
{
  int h, w, d;
  int surface_area, volume;
  
  scanf("%d%d%d", &h, &w, &d);
  surface_area = 2*( h * w + h * d + w * d);
  volume = h * w * d;
  printf("%d %d", surface_area, volume);
  return 0;
}

