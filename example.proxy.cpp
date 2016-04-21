#include <string>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include "rpcproxyhelper.h"
#include "rpcstubhelper.h"
#include "c150grading.h"

using namespace std;
using namespace C150NETWORK;

#include "example.idl"

#define INT_BUFFER_SIZE 16
#define FLOAT_BUFFER_SIZE 128
#define VOID_BUFFER_SIZE 1
#define STRING_BUFFER_SIZE 1


void func3 () {
*GRADING << "Proceeding with invocation of func3()." << endl;

RPCPROXYSOCKET->write("func3", strlen("func3") + 1);

char var13[VOID_BUFFER_SIZE];
RPCPROXYSOCKET->read(var13, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;
*GRADING << "Invocation of func3() ended." << endl;

}

void func2 () {
*GRADING << "Proceeding with invocation of func2()." << endl;

RPCPROXYSOCKET->write("func2", strlen("func2") + 1);

char var17[VOID_BUFFER_SIZE];
RPCPROXYSOCKET->read(var17, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;
*GRADING << "Invocation of func2() ended." << endl;

}

void func1 () {
*GRADING << "Proceeding with invocation of func1()." << endl;

RPCPROXYSOCKET->write("func1", strlen("func1") + 1);

char var21[VOID_BUFFER_SIZE];
RPCPROXYSOCKET->read(var21, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;
*GRADING << "Invocation of func1() ended." << endl;

}

int area (rectangle r) {
*GRADING << "Proceeding with invocation of area()." << endl;

RPCPROXYSOCKET->write("area", strlen("area") + 1);

char var24[INT_BUFFER_SIZE];
snprintf(var24, sizeof(var24), "%d", r.x);
RPCPROXYSOCKET->write(var24, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named r.x equal to " << r.x << "." << endl;
char var25[INT_BUFFER_SIZE];
snprintf(var25, sizeof(var25), "%d", r.y);
RPCPROXYSOCKET->write(var25, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named r.y equal to " << r.y << "." << endl;

int var26;
char var27[INT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var27, INT_BUFFER_SIZE);
var26 = atoi(var27);
*GRADING << "Received an INT named var26 equal to " << var26 << "." << endl;
*GRADING << "Invocation of area() ended." << endl;

return var26;

}

Person findPerson (ThreePeople tp) {
*GRADING << "Proceeding with invocation of findPerson()." << endl;

RPCPROXYSOCKET->write("findPerson", strlen("findPerson") + 1);

RPCPROXYSOCKET->write(tp.p1.firstname.c_str(), tp.p1.firstname.length() + 1);
char var32 = 'A';
(void)var32;
char var33 = 'A';
(void)var33;
*GRADING << "Sent a STRING named tp.p1.firstname equal to '" << tp.p1.firstname << "'." << endl;
RPCPROXYSOCKET->write(tp.p1.lastname.c_str(), tp.p1.lastname.length() + 1);
char var34 = 'A';
(void)var34;
char var35 = 'A';
(void)var35;
*GRADING << "Sent a STRING named tp.p1.lastname equal to '" << tp.p1.lastname << "'." << endl;
char var36[INT_BUFFER_SIZE];
snprintf(var36, sizeof(var36), "%d", tp.p1.age);
RPCPROXYSOCKET->write(var36, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named tp.p1.age equal to " << tp.p1.age << "." << endl;
RPCPROXYSOCKET->write(tp.p2.firstname.c_str(), tp.p2.firstname.length() + 1);
char var37 = 'A';
(void)var37;
char var38 = 'A';
(void)var38;
*GRADING << "Sent a STRING named tp.p2.firstname equal to '" << tp.p2.firstname << "'." << endl;
RPCPROXYSOCKET->write(tp.p2.lastname.c_str(), tp.p2.lastname.length() + 1);
char var39 = 'A';
(void)var39;
char var40 = 'A';
(void)var40;
*GRADING << "Sent a STRING named tp.p2.lastname equal to '" << tp.p2.lastname << "'." << endl;
char var41[INT_BUFFER_SIZE];
snprintf(var41, sizeof(var41), "%d", tp.p2.age);
RPCPROXYSOCKET->write(var41, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named tp.p2.age equal to " << tp.p2.age << "." << endl;
RPCPROXYSOCKET->write(tp.p3.firstname.c_str(), tp.p3.firstname.length() + 1);
char var42 = 'A';
(void)var42;
char var43 = 'A';
(void)var43;
*GRADING << "Sent a STRING named tp.p3.firstname equal to '" << tp.p3.firstname << "'." << endl;
RPCPROXYSOCKET->write(tp.p3.lastname.c_str(), tp.p3.lastname.length() + 1);
char var44 = 'A';
(void)var44;
char var45 = 'A';
(void)var45;
*GRADING << "Sent a STRING named tp.p3.lastname equal to '" << tp.p3.lastname << "'." << endl;
char var46[INT_BUFFER_SIZE];
snprintf(var46, sizeof(var46), "%d", tp.p3.age);
RPCPROXYSOCKET->write(var46, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named tp.p3.age equal to " << tp.p3.age << "." << endl;

Person var47;
char var48[STRING_BUFFER_SIZE];
ssize_t var49;
var47.firstname = "";
while (true) {
var49 = RPCPROXYSOCKET->read(var48, STRING_BUFFER_SIZE);
if (var49 == 0 || var48[0] == '\0') {
	break;
}
var47.firstname += var48[0];
}
*GRADING << "Received a STRING named var47.firstname equal to '" << var47.firstname << "'." << endl;
char var50[STRING_BUFFER_SIZE];
ssize_t var51;
var47.lastname = "";
while (true) {
var51 = RPCPROXYSOCKET->read(var50, STRING_BUFFER_SIZE);
if (var51 == 0 || var50[0] == '\0') {
	break;
}
var47.lastname += var50[0];
}
*GRADING << "Received a STRING named var47.lastname equal to '" << var47.lastname << "'." << endl;
char var52[INT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var52, INT_BUFFER_SIZE);
var47.age = atoi(var52);
*GRADING << "Received an INT named var47.age equal to " << var47.age << "." << endl;
*GRADING << "Invocation of findPerson() ended." << endl;

return var47;

}

MT sendMT (MT input) {
*GRADING << "Proceeding with invocation of sendMT()." << endl;

RPCPROXYSOCKET->write("sendMT", strlen("sendMT") + 1);

RPCPROXYSOCKET->write("1", VOID_BUFFER_SIZE);
char var74 = 'A';
(void)var74;
*GRADING << "Sent a VOID." << endl;

MT var75;
char var76[VOID_BUFFER_SIZE];
RPCPROXYSOCKET->read(var76, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;
*GRADING << "Invocation of sendMT() ended." << endl;

return var75;

}

int sqrt (int x, int y) {
*GRADING << "Proceeding with invocation of sqrt()." << endl;

RPCPROXYSOCKET->write("sqrt", strlen("sqrt") + 1);

char var80[INT_BUFFER_SIZE];
snprintf(var80, sizeof(var80), "%d", x);
RPCPROXYSOCKET->write(var80, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named x equal to " << x << "." << endl;

char var81[INT_BUFFER_SIZE];
snprintf(var81, sizeof(var81), "%d", y);
RPCPROXYSOCKET->write(var81, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named y equal to " << y << "." << endl;

int var82;
char var83[INT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var83, INT_BUFFER_SIZE);
var82 = atoi(var83);
*GRADING << "Received an INT named var82 equal to " << var82 << "." << endl;
*GRADING << "Invocation of sqrt() ended." << endl;

return var82;

}

string upcase (string s) {
*GRADING << "Proceeding with invocation of upcase()." << endl;

RPCPROXYSOCKET->write("upcase", strlen("upcase") + 1);

RPCPROXYSOCKET->write(s.c_str(), s.length() + 1);
char var88 = 'A';
(void)var88;
char var89 = 'A';
(void)var89;
*GRADING << "Sent a STRING named s equal to '" << s << "'." << endl;

string var90;
char var91[STRING_BUFFER_SIZE];
ssize_t var92;
var90 = "";
while (true) {
var92 = RPCPROXYSOCKET->read(var91, STRING_BUFFER_SIZE);
if (var92 == 0 || var91[0] == '\0') {
	break;
}
var90 += var91[0];
}
*GRADING << "Received a STRING named var90 equal to '" << var90 << "'." << endl;
*GRADING << "Invocation of upcase() ended." << endl;

return var90;

}

int takesTwoArrays (int x[24], int y[24]) {
*GRADING << "Proceeding with invocation of takesTwoArrays()." << endl;

RPCPROXYSOCKET->write("takesTwoArrays", strlen("takesTwoArrays") + 1);

for (int var99=0; var99 < 24; var99++) {
char var98[INT_BUFFER_SIZE];
snprintf(var98, sizeof(var98), "%d", x[var99]);
RPCPROXYSOCKET->write(var98, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named x[" << var99 << "] equal to " << x[var99] << "." << endl;
}

for (int var101=0; var101 < 24; var101++) {
char var100[INT_BUFFER_SIZE];
snprintf(var100, sizeof(var100), "%d", y[var101]);
RPCPROXYSOCKET->write(var100, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named y[" << var101 << "] equal to " << y[var101] << "." << endl;
}

int var102;
char var103[INT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var103, INT_BUFFER_SIZE);
var102 = atoi(var103);
*GRADING << "Received an INT named var102 equal to " << var102 << "." << endl;
*GRADING << "Invocation of takesTwoArrays() ended." << endl;

return var102;

}

float multiply (float x, float y) {
*GRADING << "Proceeding with invocation of multiply()." << endl;

RPCPROXYSOCKET->write("multiply", strlen("multiply") + 1);

char var110[FLOAT_BUFFER_SIZE];
snprintf(var110, sizeof(var110), "%40.40f", x);
RPCPROXYSOCKET->write(var110, FLOAT_BUFFER_SIZE);
*GRADING << "Sent an FLOAT named x equal to " << x << "." << endl;

char var111[FLOAT_BUFFER_SIZE];
snprintf(var111, sizeof(var111), "%40.40f", y);
RPCPROXYSOCKET->write(var111, FLOAT_BUFFER_SIZE);
*GRADING << "Sent an FLOAT named y equal to " << y << "." << endl;

float var112;
char var113[FLOAT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var113, FLOAT_BUFFER_SIZE);
var112 = (float)atof(var113);
*GRADING << "Received a FLOAT named var112 equal to " << var112 << "." << endl;
*GRADING << "Invocation of multiply() ended." << endl;

return var112;

}

void searchRectangles (rectangle rects[200]) {
*GRADING << "Proceeding with invocation of searchRectangles()." << endl;

RPCPROXYSOCKET->write("searchRectangles", strlen("searchRectangles") + 1);

for (int var120=0; var120 < 200; var120++) {
char var118[INT_BUFFER_SIZE];
snprintf(var118, sizeof(var118), "%d", rects[var120].x);
RPCPROXYSOCKET->write(var118, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named rects[" << var120 << "].x equal to " << rects[var120].x << "." << endl;
char var119[INT_BUFFER_SIZE];
snprintf(var119, sizeof(var119), "%d", rects[var120].y);
RPCPROXYSOCKET->write(var119, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named rects[var120].y equal to " << rects[var120].y << "." << endl;
}

char var122[VOID_BUFFER_SIZE];
RPCPROXYSOCKET->read(var122, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;
*GRADING << "Invocation of searchRectangles() ended." << endl;

}

int showsArraysofArrays (int x[24], int y[24][15], int z[24][15]) {
*GRADING << "Proceeding with invocation of showsArraysofArrays()." << endl;

RPCPROXYSOCKET->write("showsArraysofArrays", strlen("showsArraysofArrays") + 1);

for (int var129=0; var129 < 24; var129++) {
char var128[INT_BUFFER_SIZE];
snprintf(var128, sizeof(var128), "%d", x[var129]);
RPCPROXYSOCKET->write(var128, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named x[" << var129 << "] equal to " << x[var129] << "." << endl;
}

for (int var132=0; var132 < 24; var132++) {
for (int var131=0; var131 < 15; var131++) {
char var130[INT_BUFFER_SIZE];
snprintf(var130, sizeof(var130), "%d", y[var132][var131]);
RPCPROXYSOCKET->write(var130, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named y[" << var132 << "][" << var131 << "] equal to " << y[var132][var131] << "." << endl;
}
}

for (int var135=0; var135 < 24; var135++) {
for (int var134=0; var134 < 15; var134++) {
char var133[INT_BUFFER_SIZE];
snprintf(var133, sizeof(var133), "%d", z[var135][var134]);
RPCPROXYSOCKET->write(var133, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named z[" << var135 << "][" << var134 << "] equal to " << z[var135][var134] << "." << endl;
}
}

int var136;
char var137[INT_BUFFER_SIZE];
RPCPROXYSOCKET->read(var137, INT_BUFFER_SIZE);
var136 = atoi(var137);
*GRADING << "Received an INT named var136 equal to " << var136 << "." << endl;
*GRADING << "Invocation of showsArraysofArrays() ended." << endl;

return var136;

}

