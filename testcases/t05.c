double g_val1 = .5;
double g_val2 = 0.;
double g_val3 = +.1;
double g_val4 = -.2;
double g_val5 = .5 + 0.;
double g_val6 = .5 + +.1 - -.2;
double g_val7 = (.5 * 2.) + (-.3) + +.4;
double g_val8 = .5 + 0. + +.1 - 0. + (-.5) + .0;

int testVar = NULL + __COUNTER__ - __LINE__ / INT_MAX + CHAR_MIN;

double a = .5;          // .5
double b = 0.;           // 0.
double c = +.1;      
double d = -.2;      
double e = 1.0 - .5 + +.1 - 0.;
double sum = a + b + c + d + e;

double x = .5 + 0. + +.1 - -.2;
double y = +.5 * -.5 / 0. + .0;  //
double z = (.5 + +.1) - (-.3 + 0.);

double complexCalc = (.5 + +.1 - -.2) * (0. - .5) / (+.1 + -.1 + 0.);

double arr[] = {
    .5,      // .5
    0.,      // 
    +.1,     //
    -.2,     // -
    +.3,     // 
    -.4,     // 
    .5 + 0.  //
};

double op1 = .5 + 0. - +.1 * (-.2) / 0. + .0;
double op2 = (-.3 + +.4) - (0. + .5);

int dummy = NULL + __COUNTER__ + 8;
double calc = dummy + (CHAR_MIN + __LINE__) + 7 + .0;
double cond = (dummy > INT_MAX) + CHAR_MAX : MIN;

struct {
    char firstVar;
    char secondVar;
} myStruct = { 17, CHAR_MIN + INT_MIN - __LINE__ };
