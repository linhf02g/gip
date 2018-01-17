#include <stdio.h>
 
int main()
{
  float a, b, c;
  float x, y, z;
  float Laenge, Breite, Hoehe;
  float Oberflache, Volume;

  printf("\nEnter erster Eckpunkt\n");
  scanf("%f %f %f",&a, &b, &c);
  printf("\nEnter zweiter Eckpunkt\n");
  scanf("%f %f %f",&x, &y, &z);
  if (x>a)
  {Laenge = x - a;}
  else if (x<a)
  {Laenge = a - x;}
    if (y>b)
  {Breite = y - b;}
  else if (y<b)
  {Breite = b - y;}
     if (z>c)
  {Hoehe = z - c;}
  else if (z<c)
  {Hoehe = c - z;}
  Oberflache = 2 * (Laenge * Breite + Laenge * Hoehe + Breite * Hoehe);
  Volume = Laenge * Breite * Hoehe;

  printf("\n Oberflache = %.2f\n",Oberflache);
  printf("\n Volume = %.2f\n ",Volume);
  printf("\n Laenge = %.2f\n ",Laenge);
  printf("\n Breite = %.2f\n ",Breite);
  printf("\n Hoehe = %.2f\n ",Hoehe);
  
  return 0;
}