#include "fraction.h"
#include <gtest/gtest.h>

/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 */
Fraction::Fraction(): m_numerator(1), m_denominator(3){}

/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 * @param nume 
 * @param denom 
 */
Fraction::Fraction(int nume,int denom): m_numerator(nume), m_denominator(denom){}

/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 * @param p 
 */
Fraction::Fraction(int p): m_numerator(p), m_denominator(p){}

/**
 * 
 * @param fract1 
 * @return Fraction 
 */
Fraction Fraction::operator+(const Fraction& fract1){
    return Fraction((this->m_numerator*fract1.m_denominator)+(this->m_denominator*fract1.m_numerator),this->m_denominator*fract1.m_denominator);}

/**
 * 
 * @param fract1 
 * @return Fraction 
 */
Fraction Fraction::operator-(const Fraction& fract1){
    return Fraction((this->m_numerator*fract1.m_denominator)-(this->m_denominator*fract1.m_numerator),this->m_denominator*fract1.m_denominator);}

/**
 * 
 * @param value 
 * @return Fraction 
 */
Fraction Fraction::operator+(int value){
    return Fraction(this->m_numerator+(value*this->m_denominator),this->m_denominator);}

/**
 * 
 * @param value 
 * @return Fraction 
 */
Fraction Fraction::operator-(int value){
    return Fraction(this->m_numerator-(value*this->m_denominator),this->m_denominator);}

/**
 * 
 * @param fract1 
 * @return true 
 * @return false 
 */
bool Fraction::operator==(const Fraction& fract1){
    return((m_numerator==fract1.m_numerator)&&(m_denominator==fract1.m_denominator));}

/**
 * 
 * @param fract1 
 * @return true 
 * @return false 
 */
bool Fraction::operator<(const Fraction& fract1){
    return ((m_numerator/m_denominator)<(fract1.m_numerator/fract1.m_denominator));}

/**
 * 
 * @param fract1 
 * @return true 
 * @return false 
 */
bool Fraction::operator>(const Fraction& fract1){
    return ((m_numerator/m_denominator)>(fract1.m_numerator/fract1.m_denominator));}

/**
 * 
 * @return Fraction 
 */
Fraction Fraction::simplify(){
    for(int i=m_numerator/1;i>1;i--)
    {
        if((m_numerator%i==0)&&(m_denominator%i==0)){
            m_numerator/=i;
            m_denominator/=i;
            break;}
    }
    return Fraction(m_numerator,m_denominator);}

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool Fraction::isSimplest() const{
    return (m_denominator%m_numerator!=0);}

void Fraction::disp() const{
    std::cout<<m_numerator<<"/"<<m_denominator<<"\n";}

/**
 * 
 * @param cout 
 * @param fract1 
 * @return std::ostream& 
 */
std::ostream& operator<<(std::ostream& cout, const Fraction& fract1){
    return cout<<fract1.m_numerator<<"/"<<fract1.m_denominator;}

