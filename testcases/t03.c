int testVar = 0;
#pragma token off
void exampleFunction() {
    double tVal = 0.0;
    signed float asdfVal = 0.2;
    unsigned char bbbbVal = 12345098.12357098712349081234 + 0.23451234;
    long ccdarweVar = -1 - -214232143;

    const int aaaaVal = 9876;
    float ttVar = -4567.1;
    float t234Val = +98765.2345 + 5. + 0.7654321;
    char testArr[] = {'\u1234', '\xABCD', '\u7777', '\x7890', '\444'};

    int a = 1 + (++a) + (a++);
    char strrrrr[] = "987654321098abcdefghijklm;9.234098";
    char aa[] = {'\a', '\b', '\e', '\f', '\n', '\r', '\t', '\v', '\\', '\'', '\"', '\?', '\0'};
}
#pragma token on

char marcroFunction() {
    ++NULL - __COUNTER__ + __LINE__ / INT_MAX;
    #pragma source off
    int a_324908473_123948029347509 = 6;
    int asfeawVar[] = {3, 6, 7890, 12345, 98765};
    int asfd_adsf_var = (asdfVal < aasdf && asdfVar > -0.1) + 23450970 + 8765;

    #pragma source on
    char testVarArr[] = {'\UA1234B22', '\u5566', '\uDDDD', '\555'};
    char strValue[] = "4567893210asjdfalkjfd1234";
}

#pragma token off
for (int i = 0; i < (7 * 4 / 5 * 2); ++i)
    for (int j = 0; j < (--i); j += 6) {
        int newTestVar = 8;
        do {
            newTestVar++;
            newTestVar--;
            newTestVar += newTestVar + 7 + .0;
            newTestVar = 8;
        } while (newTestVar < 8);
        #pragma token on
        do {
            break;
        } while (newTestVar < 8);

        if (newTestVar > 8)
            newTestVar = 8;
        else
            newTestVar = 8;
    }
#pragma source off

struct {
    char firstVar = 17;
    char secondVar = 234509821370 - 0.56;
}
