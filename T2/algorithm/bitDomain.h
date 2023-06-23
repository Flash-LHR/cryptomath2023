#ifndef BIT_DOMAIN_H
#define BIT_DOMAIN_H

struct bitDomain {
    int bit;

    bitDomain(int _bit = 0) {
        bit = _bit;
    }

    bitDomain operator+(const bitDomain& _bitDomain) {
        return bit ^ _bitDomain.bit;
    }

    bitDomain operator*(const bitDomain& _bitDomain) {
        return bit & _bitDomain.bit;
    }

    bool operator==(const bitDomain& _bitDomain) {
        return bit == _bitDomain.bit;
    }
};

void S_box();
void clean_up();
void L();
void L_INV();

#endif