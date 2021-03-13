#include "LZespolona.hh"
#include <cmath>



/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
  return Wynik;
}
/*
LZespolona modul2(LZespolona Skl1, LZespolona Skl2)
{
  double modul;
  modul = (Skl2.re)^2 + (Skl2.im)^2;
  return modul;
  }*/

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  double modul;
  modul = Skl2.re*Skl2.re + Skl2.im*Skl2.im;
  
  Wynik.re = (Skl1.re *  Skl2.re + Skl1.im * Skl2.im)/modul;
  Wynik.im = (Skl1.re * (-Skl2.im) + Skl1.im * Skl2.re)/modul;
  return Wynik;
}
