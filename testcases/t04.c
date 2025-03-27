int testVar = NULL + __COUNTER__ - __LINE__ / INT_MAX + CHAR_MIN;
#pragma token on
void exampleFunction() {
    signed float asdfVal = 0.3;
    double tVal = INT_MAX / 2.0 + (INT_MIN - CHAR_MAX);
    unsigned char bbbbVal = 12345098.12357098712349081234 + 0.23451234 - MAX;

    long ccdarweVar = INT_MIN - -214232143 + MIN;
    const int aaaaVal = CHAR_MAX * CHAR_MIN;
    float ttVar = -4567.1 + INT_MAX;
    float t234Val = +98765.2345 + CHAR_MAX * 5. + MIN;
    char testArr[] = {'\u1234', '\xABCD', '\u7777', '\x7890', '\444'};

    int a = NULL + (++a) + (a++) * (__LINE__ / __COUNTER__);
    char aa[] = {'\a', '\b', '\e', '\f', '\n', '\r', '\t', '\v', '\\', '\'', '\"', '\?', '\0'};
}
#pragma token on

char marcroFunction() {
    int a_324908473_123948029347509 = CHAR_MIN * INT_MAX / __LINE__;
    ++NULL - __COUNTER__ + __LINE__ / INT_MAX;

    #pragma source off
    int asfeawVar[] = {3, 6, 7890, __COUNTER__ * 12345, 98765};
    int asfd_adsf_var = (asdfVal < aasdf && asdfVar > INT_MIN) + CHAR_MAX + 23450970;

    #pragma source on
    char testVarArr[] = {'\u5566', '\uDDDD', '\x3210A98760', '\555'};
}

#pragma token off
for (int i = 0; i < (7 * (INT_MAX / 2) / 5 * 2); ++i)
    for (int j = 0; j < (--i) * (__LINE__ / INT_MIN_*
