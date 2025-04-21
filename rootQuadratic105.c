#include <math.h>
#include <stdio.h>

int main() {
  
    
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int d = (b * b) - (4 * a * c);

  float x;
  float y;
  float m;
  // float n;

  if (a != 0 && d >= 0) {
    x = (-b + sqrt(d)) / (2.0 * a);
    y = (-b - sqrt(d)) / (2.0 * a);
    printf("Roots: %.2f, %.2f\n", x, y);
    if (d > 0) {
      printf("Type: Real and Distinct\n");
    } else if (d == 0) {
      printf("Type: Real and Equal\n");
    }

  } else if (d < 0) {
    d = -d;
    x = -b / (2.0 * a);
    m = sqrt(d) / (2.0 * a);
    printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", x, m, x, m);
    printf("Type: Complex");
    
  }

  // djfdklfj
  

  return 0;
}