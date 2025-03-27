#pragma token on
#pragma source off
#pragma token off
#pragma token on
int a = 5;
int b = ++a + (++a) + a * a + (++a) / a+a/a;
#pragma source on
int a = 5;
int b = ++a + (++a) + .2+1.2+.0+ a * a + (++a) / a+a/a;
#pragma token on
int a = 5;
int b = ++a + (++a) + .2+1.2+.0+ a * a + (++a) / a+a/a;
b = (b >= (++a) || (b <= a++) && (a = b++) || a++ & b&1) & (1 & 2 & (++b) | ++a); ///asdjfo
/*asdfjpoaisdjpoij
ajsdpfoisapjfo*/
char c = '\UAAAAAAAA';
#pragma source off
int a = 5;
int b = ++a + (++a) + .2+1.2+.0+ a * a + (++a) / a+a/a;
b = (b >= (++a) || (b <= a++) && (a = b++) || a++ & b&1) & (1 & 2 & (++b) | ++a); /// trick
char c = '\UAAAAAAAA';
#pragma source on

/*
;;;;;
int = c a;
*/

// int
