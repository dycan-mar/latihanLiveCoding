#include <stdio.h>

void main()
{
  int detik, menit, jam;
  printf("Masukan bilangan :");
  scanf("%d", &detik);

  menit = detik / 60;
  detik %= 60;
  jam = menit / 60;
  menit %= 60;

  printf("%02d:%02d:%02d", jam, menit, detik);
}