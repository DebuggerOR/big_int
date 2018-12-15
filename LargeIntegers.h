
#ifndef LARGE_INTEGERS_H
#define LARGE_INTEGERS_H

#include <string.h>
#include <iostream>
#include <sstream>

using namespace std;

class InfInt {

private:

    /** members **/

    int sign;
    int alcByts;
    int numDigs;
    char *digs;

public:

    /** CTOR **/

    InfInt();

    InfInt(int num);

    InfInt(long num);

    InfInt(long num, int cap);

    InfInt(const char str[]);

    InfInt(const InfInt &num);

    /** DTOR **/

    ~InfInt();

    /** cast to int **/

    operator int();

    /** assignment **/

    const InfInt &operator=(int num);

    const InfInt &operator=(const InfInt &num);

    /** plus and minus **/

    InfInt operator+(int num);

    InfInt operator+(InfInt num);

    InfInt operator-(int num);

    InfInt operator-(InfInt num);

    InfInt operator-();

    InfInt &operator+=(int num);

    InfInt &operator+=(const InfInt& num);

    InfInt &operator-=(int num);

    InfInt &operator-=(const InfInt& num);

    /** inc and dec **/

    InfInt operator++();

    InfInt operator++(int);

    InfInt operator--();

    InfInt operator--(int);

    /** multiply **/

    InfInt operator*(int num);

    InfInt operator*(const InfInt& num);

    void operator*=(int n);

    void operator*=(const InfInt& num);

    /** division **/

    InfInt division(int num);

    InfInt division(InfInt num);

    InfInt operator/(int num);

    InfInt operator/(const InfInt& num);

    void operator/=(int num);

    void operator/=(const InfInt& num);

    InfInt operator%(int num);

    InfInt operator%(const InfInt& num);

    void operator%=(int num);

    void operator%=(const InfInt& num);

    /** comparison **/

    int comparison(const InfInt& num);

    bool operator<(int num);

    bool operator>(int num);

    bool operator<=(int num);

    bool operator>=(int num);

    bool operator==(int num);

    bool operator!=(int num);

    bool operator<(const InfInt& num);

    bool operator>(const InfInt& num);

    bool operator<=(const InfInt& num);

    bool operator>=(const InfInt& num);

    bool operator==(const InfInt& num);

    bool operator!=(const InfInt& num);

    /** bitwise **/

    InfInt operator|(int num);

    InfInt operator|(const InfInt& num);

    InfInt operator^(int num);

    InfInt operator^(const InfInt& num);

    InfInt operator&(int num);

    InfInt operator&(const InfInt& num);

    void operator&=(int num);

    void operator&=(const InfInt& num);

    InfInt operator>>(int num);

    void operator>>=(int num);

    InfInt operator<<(int num);

    void operator<<=(int num);

    /** more functions **/

    void fixZeros();

    string toString() const;

    string toBitString() const;

    /** IO **/

    friend istream &operator>>(istream &inStream, InfInt &num);

    friend ostream &operator<<(ostream &outStream, const InfInt &num);
};

/** reversed order operators **/

InfInt operator+(int num1, InfInt num2);

InfInt operator-(int num1, InfInt num2);

InfInt operator*(int num1, InfInt num2);

InfInt operator/(int num1, const InfInt& num2);

InfInt operator%(int num1, const InfInt& num2);

InfInt operator|(int num1, InfInt num2);

InfInt operator^(int num1, InfInt num2);

InfInt operator&(int num1, const InfInt& num2);

#endif //LARGE_INTEGERS_H