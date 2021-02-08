/**
 * @file fraction.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FRACTION_H
#define __FRACTION_H

#include<iostream>


class Fraction {
  int m_numerator;
  int m_denominator;

  public:

  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void disp() const;
  friend std::ostream& operator<<(std::ostream&, const Fraction&);
};

#endif