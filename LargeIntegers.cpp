
#include "LargeIntegers.h"
#define WORD_SIZE 8

/**
 * reverse char array
 *
 * @param arr - char array
 * @param length - length of the array
 */
void reverseChars(char* arr, int length) {
    for (int i = 0; i < length / 2; i++) {
        // swap by 3 xor
        arr[i] = arr[i] ^ arr[length - i - 1];
        arr[length - i - 1] = arr[i] ^ arr[length - i - 1];
        arr[i] = arr[i] ^ arr[length - i - 1];
    }
}

/**
 * fill the shorter bit string with 0's
 *
 * @param bits1 - first bit string
 * @param bits2 - second bit string
 */
void fillBits(string& bits1, string& bits2) {
    int minLength = (int) min(bits1.length(), bits2.length());
    int maxLength = (int) max(bits1.length(), bits2.length());
    for (int i = minLength; i < maxLength; i++) {
        bits1.length() < bits2.length() ? (bits1 = "0" + bits1) : (bits2 = "0" + bits2);
    }
}

/**
 * check sign of num
 *
 * @param num - long to check it's sign
 * @return 1 if +, -1 if - and 0 if it's 0
 */
int checkSign(long num) {
    if (num > 0) return 1;
    if (num < 0) return -1;
    return 0;
}

/**
 * CTOR - no args
 */
InfInt::InfInt() {
	// init members
	this->numDigs = 0;
	this->sign = 0;
    this->alcByts = WORD_SIZE*sizeof(int);
    // init a char array to store digits
    this->digs = new char[this->alcByts + 1];
    this->digs[this->alcByts]='\0';
    memset(this->digs, '0', this->alcByts);
}

/**
 * CTOR
 *
 * @param num - int arg
 */
InfInt::InfInt(int num) {
	// init members
    this->numDigs = 0;
    this->sign = checkSign(num);
    num = abs(num);
    this->alcByts = WORD_SIZE*sizeof(int);
    // init char array to store num's digits
    this->digs = new char[this->alcByts+1];
    this->digs[this->alcByts] = '\0';
    memset(this->digs, '0', this->alcByts);
    // take digits one by one
    while(num) {
        this->digs[this->numDigs++] = (num % 10) + '0';
        num /= 10;
    }
    // reverse order of digits
    reverseChars(this->digs, this->alcByts);
}

/**
 * CTOR
 *
 * @param num - long arg
 */
InfInt::InfInt(long num) {
	// init members
    this->numDigs = 0;
    this->sign = checkSign(num);
    num = abs(num);
    this->alcByts = WORD_SIZE*sizeof(long);
    // init char array to store num's digits
    this->digs = new char[this->alcByts+1];
    this->digs[this->alcByts]='\0';
    memset(this->digs, '0', this->alcByts);
    // take digits one by one
    while(num) {
        this->digs[this->numDigs++] = (num % 10) + '0';
        num /= 10;
    }
    // reverse order of digits
    reverseChars(this->digs, this->alcByts);
}

/**
 * CTOR
 *
 * @param num - long arg
 * @param newAlcByts - num of bytes to allocate
 */
InfInt::InfInt(long num, int newAlcByts) {
    this->alcByts = newAlcByts;
    this->sign = checkSign(num);
    num = abs(num);
    this->digs = new char[this->alcByts+1];
    this->digs[this->alcByts]='\0';
    memset(this->digs, '0', newAlcByts);
    this->numDigs = 0;
    while (num) {
        this->digs[this->numDigs] = (num % 10) + '0';
        this->numDigs++;
        num /= 10;
    }
    reverseChars(this->digs, this->alcByts);
}

/**
 * CTOR
 *
 * @param str - char* arg
 */
InfInt::InfInt(const char* str) {
    this->numDigs = 0;
    int isNeg = 0;
    // case neg num
    if(str[0] != '-') {
        this->sign = 1;
        this->alcByts = strlen(str);
    } else {
        isNeg = 1;
        this->sign = -1;
        this->alcByts = strlen(str) - 1;
    }
    this->digs = new char[this->alcByts+1];
    this->digs[this->alcByts]='\0';
    for (int i = 0; i < this->alcByts ; i++) {
        this->digs[this->numDigs++] = str[i+isNeg];
    }

    this->fixZeros();
}

/**
 * CCTOR
 *
 * @param num - inf arg
 */
InfInt::InfInt(const InfInt &num) {
    this->alcByts = num.alcByts;
    this->sign = num.sign;
    this->numDigs = num.numDigs;
    this->digs = new char[this->alcByts+1];
    this->digs[this->alcByts]='\0';
    for (int i = 0; i < this->alcByts; i++) {
        this->digs[i] = num.digs[i];
    }
}

/**
 * DTOR
 */
InfInt::~InfInt() {
    delete [] digs;
}

/**
 * = operator
 *
 * @param num - int arg
 * @return this inf value
 */
const InfInt &InfInt::operator=(int num) {
    *this = InfInt(num);
}

/**
 * = operator
 *
 * @param num - inf arg
 * @return this inf value
 */
const InfInt &InfInt::operator=(const InfInt &num) {
    if(&num != this) {
        this->alcByts=num.alcByts;
        this->numDigs=num.numDigs;
        this->sign = num.sign;
        delete [] this->digs;
        this->digs = new char[this->alcByts+1];
        this->digs[this->alcByts]='\0';
        for (int i = 0; i < this->alcByts; i++) {
            this->digs[i]=num.digs[i];
        }
    }
    return *this;
}

/**
 * + operator
 *
 * @param num - int arg
 * @return this + num
 */
InfInt InfInt::operator+(int num) {
    return *this + InfInt(num);
}

/**
 * + operator
 *
 * @param num - inf arg
 * @return this + num
 */
InfInt InfInt::operator+(InfInt num) {
    // case this + 0 return this
    if (!num.sign) {
        return *this;
    }
    // case 0 + num return num
    if (!this->sign) {
        return num;
    }
    // case this pos and num neg
    if (this->sign > 0 && num.sign < 0) {
        num.sign = 1;
        return *this - num;
    }
    // case this neg and num pos
    if (this->sign < 0 && num.sign > 0) {
        this->sign = 1;
        return num - *this;
    }
    // case this neg and num neg
    if (this->sign < 0 && num.sign < 0) {
        this->sign = 1;
        num.sign = 1;
        return -(*this + num);
    }
    // case this pos and num pos
    InfInt result(0, max(this->alcByts, num.alcByts) + 1);
    int cry = 0;
    int sum;
    int i = 0;
    //
    while(i < max(this->numDigs, num.numDigs)){
        sum = cry;
        if(i < this->numDigs) {
            sum += this->digs[this->alcByts-1-i] - '0';
        }
        if(i < num.numDigs) {
            sum += num.digs[num.alcByts-1-i] - '0';
        }
        result.digs[result.alcByts-i-1] = (sum % 10) + '0';
        cry = sum / 10;
        i++;
    }
    // case more digit because carry
    if(cry) {
        result.digs[result.alcByts-i-1] = cry + '0';
        i++;
    }
    result.numDigs = i;
    if (result.numDigs) {
        result.sign = 1;
    }

    return result;
}

/**
 * += operator
 *
 * @param num - int arg
 * @return this += num
 */
InfInt &InfInt::operator+=(int num) {
    *this = *this + num;
    return *this;
}

/**
 * += operator
 *
 * @param num - inf arg
 * @return this += num
 */
InfInt &InfInt::operator+=(const InfInt& num) {
    *this = *this + num;
    return *this;
}

/**
 * - operator
 *
 * @param num - int arg
 * @return this - num
 */
InfInt InfInt::operator-(int num) {
    return *this - InfInt(num);
}

/**
 * - operator
 *
 * @param num - inf arg
 * @return this - num
 */
InfInt InfInt::operator-(InfInt num) {
    // case this - 0 return this
    if (!num.sign) {
        return *this;
    }
    // case this = num
    if (*this == num) {
        return InfInt(0);
    }
    // case 0 - num return -num
    if (!this->sign) {
        num.sign *= -1;
        return num;
    }
    // case this pos and num neg
    if (this->sign > 0 && num.sign < 0) {
        num.sign = 1;
        return *this + num;
    }
    // case this neg and num pos
    if (this->sign < 0 && num.sign > 0) {
        InfInt copy(*this);
        copy.sign = 1;
        return -(copy + num);
    }
    // case this neg and num neg
    if (this->sign < 0 && num.sign < 0) {
        InfInt copy(*this);
        copy.sign = 1;
        num.sign = 1;
        return -(copy - num);
    }
    // case this pos and num pos
    InfInt result, smlInf;
    if (*this > num) {
        result = *this;
        smlInf = num;
        result.sign = 1;
    } else if (num > *this) {
        result = num;
        smlInf = *this;
        result.sign = -1;
    }
    int sum;
    int i = 0;
    while (i < smlInf.numDigs) {
        sum = result.digs[result.alcByts-i-1] - smlInf.digs[smlInf.alcByts-i-1];
        if (sum < 0) {
            // borrow 10
            sum += 10;
            int k = i + 1;
            // 0's -> 9's
            while (result.digs[result.alcByts-k-1] == '0' && k < result.numDigs) {
                result.digs[result.alcByts-k-1] = '9';
                k++;
            }
            // reduce from significant digit
            result.digs[result.alcByts-k-1]--;
        }
        result.digs[result.alcByts-i-1] = sum + '0';
        i++;
    }
    if (!result.digs[result.alcByts-result.numDigs]) {
        result.numDigs--;
    }

    result.fixZeros();
    return result;
}

/**
 * - operator
 *
 * @return -this
 */
InfInt InfInt::operator-() {
    InfInt result(*this);
    result.sign *= -1;
    return result;
}
/**
 * -= operator
 *
 * @param num - int arg
 * @return this -= num
 */
InfInt &InfInt::operator-=(int num) {
    *this = *this - InfInt(num);
    return *this;
}
/**
 * -= operator
 *
 * @param num - inf num
 * @return this -= num
 */
InfInt &InfInt::operator-=(const InfInt& num) {
    *this = *this - num;
    return *this;
}

/**
 * ++ operator
 *
 * @return this += 1
 */
InfInt InfInt::operator++() {
    return *this += 1;
}

/**
 * ++ operator
 *
 * @return this += 1
 */
InfInt InfInt::operator++(int) {
    InfInt copy(*this);
    operator++();
    return copy;
}

/**
 * -- operator
 *
 * @return this -= 1
 */
InfInt InfInt::operator--() {
    return *this -= 1;
}

/**
 * -- operator
 *
 * @return this -= 1
 */
InfInt InfInt::operator--(int) {
    InfInt copy(*this);
    operator--();
    return copy;
}

/**
 * * operator
 *
 * @param num - int arg
 * @return this * num
 */
InfInt InfInt::operator*(int num) {
    return *this * InfInt(num);
}

/**
 * * operator
 *
 * @param num - inf arg
 * @return this * num
 */
InfInt InfInt::operator*(const InfInt& num) {
    // case this 0 or num 0
    if(!this->sign || !num.sign) {
        return InfInt(0);
    }
    // init result
    InfInt result(0, this->alcByts + num.alcByts);
    result.sign = this->sign * num.sign;

    int i, j;
    int cry;
    int newDig;
    for(i = 0; i < num.numDigs; i++) {
        // case the dig not 0
        if(num.digs[num.alcByts-i-1]-'0') {
            cry = 0;
            for(j = 0; j < this->numDigs || cry; j++) {
                // case didn't pass this num digs
                if (j < this->numDigs) {
                    newDig = result.digs[result.alcByts-1-i-j]-'0'
                            + (num.digs[num.alcByts-i-1]-'0') * (this->digs[this->alcByts-j-1]-'0') + cry;
                    // case passed this num digs
                } else {
                    newDig = result.digs[result.alcByts-1-i-j]-'0' + cry;
                }
                // add list significant dig to result
                result.digs[result.alcByts-1-i-j] = (newDig % 10) + '0';
                cry = newDig / 10;
            }
        }
    }
    result.numDigs = i + j - 1;
    return result;
}

/**
 * *= operator
 *
 * @param num - int arg
 */
void InfInt::operator*=(int num) {
    *this = *this * num;
}

/**
 * *= operator
 *
 * @param num - inf arg
 */
void InfInt::operator*=(const InfInt& num) {
    *this = *this * num;
}

/**
 * division
 *
 * @param num - int arg
 * @return division by num
 */
InfInt InfInt::division(int num) {
    return this->division(InfInt(num));
}

/**
 * division
 *
 * @param num - inf arg
 * @return division by num
 */
InfInt InfInt::division(InfInt num) {
    // div by 0
    if(!num.sign) {
        throw "error: division by zero";
    }

    // init remainder, this and num
    InfInt remainder(0, this->alcByts);
    int divSign = this->sign * num.sign;
    this->sign = 1;
    num.sign = 1;

    // division algorithm
    for (int i = this->numDigs; i > 0; i--) {
        remainder *= 10;
        remainder += this->digs[this->alcByts-i] - '0';
        this->digs[this->alcByts-i] = '0';
        while (remainder >= num) {
            remainder -= num;
            this->digs[this->alcByts-i]++;
        }
    }

    // update signs and fix zeroes
    this->sign = divSign;
    remainder.sign = divSign;
    this->fixZeros();
    remainder.fixZeros();
    return remainder;
}

/**
 * /= operator
 *
 * @param num - int arg
 * @return this /= num
 */
InfInt InfInt::operator/(int num) {
    InfInt result(*this);
    result /= num;
    return result;
}

/**
 * / operator
 *
 * @param num - inf arg
 * @return this /= num
 */
InfInt InfInt::operator/(const InfInt& num) {
    InfInt result(*this);
    result /= num;
    return result;
}

/**
 * /= operator
 *
 * @param num - int arg
 */
void InfInt::operator/=(int num) {
    division(num);
}

/**
 * /= operator
 *
 * @param num - inf arg
 */
void InfInt::operator/=(const InfInt& num) {
    division(num);
}

/**
 * % operator
 *
 * @param num - int arg
 * @return this % num
 */
InfInt InfInt::operator%(int num) {
    InfInt remainder(*this);
    return remainder.division(num);
}

/**
 * %= operator
 *
 * @param num - int arg
 */
void InfInt::operator%=(int num) {
    operator= (division(num));
}

/**
 * % operator
 *
 * @param num - inf arg
 * @return this % num
 */
InfInt InfInt::operator%(const InfInt& num) {
    InfInt remainder(*this);
    return remainder.division(num);
}

/**
 * %= operator
 *
 * @param num - inf arg
 */
void InfInt::operator%=(const InfInt& num) {
    operator = (division(num));
}

/**
 * | operator
 *
 * @param num - int arg
 * @return this | num
 */
InfInt InfInt::operator|(int num) {
    return *this | InfInt(num);
}

/**
 * | operator
 *
 * @param num - inf arg
 * @return this | num
 */
InfInt InfInt::operator|(const InfInt& num) {
    // nums as bit strings
    string bits1 = this->toBitString();
    string bits2 = num.toBitString();
    // fill 0 to get same length
    fillBits(bits1, bits2);

    InfInt result;
    InfInt twoExp;
    // calc value of or
    for (int i = bits1.length() - 1; i >= 0; i--) {
        if (bits1[i] == '1' || bits2[i] == '1') {
            twoExp = 1;
            for (int j = bits1.length() - 1; j > i; j--) {
                twoExp *= 2;
            }
            result += twoExp;
        }
    }

    if(this->sign < 0 || num.sign < 0) {
        result.sign = -1;
    } else {
        result.sign = 1;
    }

    result.fixZeros();
    return result;
}

/**
 * ^ operator
 *
 * @param num - int arg
 * @return this ^ num
 */
InfInt InfInt::operator^(int num) {
    return *this ^ InfInt(num);
}

/**
 * ^ operator
 *
 * @param num - inf arg
 * @return this ^ num
 */
InfInt InfInt::operator^(const InfInt& num) {
    // nums as bits strings
    string bits1 = this->toBitString();
    string bits2 = num.toBitString();
    // fill 0 to get same length
    fillBits(bits1, bits2);

    InfInt result;
    InfInt twoExp;
    // calc value of xor
    for (int i = bits1.length() - 1; i >= 0; i--) {
        if (bits1[i] != bits2[i]) {
            twoExp = 1;
            for (int j = bits1.length() - 1; j > i; j--) {
                twoExp *= 2;
            }
            result += twoExp;
        }
    }

    if((this->sign >= 0 && num.sign >= 0) || (this->sign < 0 && num.sign < 0)) {
        result.sign = 1;
    } else {
        result.sign = -1;
    }

    result.fixZeros();
    return result;
}

/**
 * & operator
 *
 * @param num - int arg
 * @return this & num
 */
InfInt InfInt::operator&(int num) {
    return *this & InfInt(num);
}

/**
 * & operator
 *
 * @param num - inf arg
 * @return this & num
 */
InfInt InfInt::operator&(const InfInt& num) {
    // nums as bits strings
    string bits1 = this->toBitString();
    string bits2 = num.toBitString();
    fillBits(bits1, bits2);

    InfInt result;
    InfInt twoExp;
    // calc value of &
    for (int i = bits1.length() - 1; i >= 0; i--) {
        if (bits1[i] == '1' && bits2[i] == '1') {
            twoExp = 1;
            for (int j = bits1.length() - 1; j > i; j--) {
                twoExp *= 2;
            }
            result += twoExp;
        }
    }

    if(this->sign >= 0 || num.sign >= 0) {
        result.sign = 1;
    } else {
        result.sign = -1;
    }

    result.fixZeros();
    return result;
}

/**
 * &= operator
 *
 * @param num - int arg
 */
void InfInt::operator&=(int num) {
    *this = *this & InfInt(num);
}

/**
 * &= operator
 *
 * @param num - inf arg
 */
void InfInt::operator&=(const InfInt& num) {
    *this = *this & num;
}

/**
 * << operator
 *
 * @param num - int arg
 * @return this << num
 */
InfInt InfInt::operator<<(int num) {
    InfInt result(*this);
    result <<= num;
    return result;
}

/**
 * <<= operator
 *
 * @param num - int arg
 */
void InfInt::operator<<=(int num) {
    if (num < 0) {
        this->operator>>=(-num);
    } else if (num > 0) {
        for (int i = 0; i < num; i++) {
            *this *= 2;
        }
    }
}

/**
 * >> operator
 *
 * @param num - int arg
 * @return this >> num
 */
InfInt InfInt::operator>>(int num) {
    InfInt result(*this);
    result >>= num;
    return result;
}

/**
 * >>= operator
 *
 * @param num - int num
 */
void InfInt::operator>>=(int num) {
    if (num < 0) {
        this->operator<<=(-num);
    } else if (num > 0) {
        for (int i = 0; i < num; i++) {
            *this /= 2;
        }
    }
}

/**
 * comparison
 *
 * @param num
 * @return 1,-1 or 0 if bigger, smaller or equal
 */
int InfInt::comparison(const InfInt& num) {
    // comparison by sign
    if (this->sign < num.sign) {
        return -1;
    }
    if (this->sign > num.sign) {
        return 1;
    }
    // comparison by numDigs
    if (this->numDigs < num.numDigs) {
        return -this->sign;
    }
    if (this->numDigs > num.numDigs) {
        return this->sign;
    }
    // same sign and numDigs - comparison by digs from msb to lsb
    for (int i = this->numDigs; i > 0; i--) {
        if (this->digs[this->alcByts - i] < num.digs[num.alcByts - i]) {
            return -this->sign;
        } else if (this->digs[this->alcByts - i] > num.digs[num.alcByts - i]) {
            return this->sign;
        }
    }
    // else they equal
    return 0;
}

/**
 * < operator
 *
 * @param num
 * @return this < num
 */
bool InfInt::operator<(const InfInt& num) {
    return this->comparison(num) < 0;
}

/**
 * > operator
 *
 * @param num
 * @return this > num
 */
bool InfInt::operator>(const InfInt& num) {
    return this->comparison(num) > 0;
}

/**
 * == operator
 *
 * @param num
 * @return this == num
 */
bool InfInt::operator==(const InfInt& num) {
    return this->comparison(num) == 0;
}

/**
 * != operator
 *
 * @param num
 * @return this != num
 */
bool InfInt::operator!=(const InfInt& num) {
    return this->comparison(num) != 0;
}

/**
 * <= operator
 *
 * @param num
 * @return this <= num
 */
bool InfInt::operator<=(const InfInt& num) {
    return this->comparison(num) <= 0;
}

/**
 * >= operator
 *
 * @param num
 * @return this >= num
 */
bool InfInt::operator>=(const InfInt& num) {
    return this->comparison(num) >= 0;
}

/**
 * < operator
 *
 * @param num
 * @return this < num
 */
bool InfInt::operator<(int num) {
    return this->comparison(InfInt(num)) < 0;
}

/**
 * > operator
 *
 * @param num
 * @return this > num
 */
bool InfInt::operator>(int num) {
    return this->comparison(InfInt(num)) > 0 ;
}

/**
 * == operator
 *
 * @param num
 * @return this == num
 */
bool InfInt::operator==(int num) {
    return this->comparison(InfInt(num)) == 0;
}

/**
 * != operator
 *
 * @param num - int arg
 * @return this != num
 */
bool InfInt::operator!=(int num) {
    return this->comparison(InfInt(num)) != 0;
}

/**
 * <= operator
 *
 * @param num
 * @return this <= num
 */
bool InfInt::operator<=(int num) {
    return this->comparison(InfInt(num)) <= 0;
}

/**
 * >= operator
 *
 * @param num
 * @return this >= num
 */
bool InfInt::operator>=(int num) {
    return this->comparison(InfInt(num)) >= 0;
}

/**
 * to string
 *
 * @return this as string
 */
string InfInt::toString() const {
    string str;
    // if 0
    if (!this->sign) {
        return "0";
    }
    // if neg
    if (this->sign < 0) {
        str = "-";
    }
    int i = this->alcByts-this->numDigs;
    // while no important zeroes
    while(!(this->digs[i]-'0')) {
        i++;
    }
    // add digs to string
    for (i; i < this->alcByts; i++) {
        str += this->digs[i];
    }
    return str;
}

/**
 * to bit string
 *
 * @return this as bit string
 */
string InfInt::toBitString() const{
    string bits;
    InfInt num(*this);
    num.sign = 1;
    // dec to bun algorithm
    while (num / 2 > 0) {
        bits = (num % 2).toString() + bits;
        num /= 2;
    }
    bits = (num % 2).toString() + bits;
    return bits;
}

/**
 * fix zeroes and sign 0 problem
 */
void InfInt::fixZeros() {
    int numZeros=0;
    for (int i = 0; i < this->alcByts; i++) {
        if(this->digs[i] - '0') {
            break;
        }
        numZeros++;
    }
    this->numDigs=this->alcByts-numZeros;
    if(!this->numDigs) {
        this->sign = 0;
    }
}

/**
 * + operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 + num2
 */
InfInt operator+(int num1, InfInt num2) {
    return num2 + num1;
}

/**
 * - operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 - num2
 */
InfInt operator-(int num1, InfInt num2) {
    return -num2 + num1;
}

/**
 * * operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 * num2
 */
InfInt operator*(int num1, InfInt num2) {
    return num2 * num1;
}

/**
 * / operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 / num2
 */
InfInt operator/(int num1, const InfInt& num2) {
    return InfInt(num1) / num2;
}

/**
 * % operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 % num2
 */
InfInt operator%(int num1, const InfInt& num2) {
    return InfInt(num1) % num2;
}

/**
 * | operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 | num2
 */
InfInt operator|(int num1, InfInt num2) {
    return num2 | num1;
}

/**
 * ^ operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 ^ num2
 */
InfInt operator^(int num1, const InfInt& num2) {
    return InfInt(num1) ^ num2;
}

/**
 * & operator
 *
 * @param num1 - int arg
 * @param num2 - inf arg
 * @return num1 & num2
 */
InfInt operator&(int num1, const InfInt& num2) {
    return InfInt(num1) & num2;
}

/**
 * >> instream operator
 *
 * @param inStream
 * @param num
 * @return num as instream
 */
istream &operator>>(istream &inStream, InfInt &num) {
    InfInt result;
    result.sign=1;
    // check if num negative
    int chr = inStream.peek();
    if(chr == '-') {
        result.sign = -1;
        inStream.get();
        chr = inStream.peek();
    }
    // put chrs in num
    while(isdigit(chr)) {
        result *= 10;
        result += (chr - '0');
        inStream.get();
        chr = inStream.peek();
    }
    result.fixZeros();
    num = result;
    return inStream;
}

/**
 * << outstream operator
 *
 * @param outStream
 * @param num
 * @return num as ostream
 */
ostream &operator<<(ostream &outStream, const InfInt& num) {
    return outStream << num.toString();
}

/**
 * int cast operator
 *
 * @return ls 31 bit or less (according to sign bit method)
 */
InfInt::operator int() {
    // inf bits and int bits
    string infIntBits = this->toBitString();
    string intBits;
    for (int i = 0; i < infIntBits.length() && i < WORD_SIZE * sizeof(int) - 1; i++) {
        intBits = infIntBits[infIntBits.length() - 1 - i] + intBits;
    }

    // calc int val from int bits
    int intVal = 0;
    int twoExp;
    for (int i = intBits.length() - 1; i >= 0; i--) {
        if (intBits[i] - '0') {
            twoExp = 1;
            for (int j = intBits.length() - 1; j > i; j--) {
                twoExp *= 2;
            }
            intVal += twoExp;
        }
    }

    // determine sine
    if (this->sign > 0) return intVal;
    if (this->sign < 0) return -intVal;
    return 0;
}