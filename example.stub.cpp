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


void getFunctionNameFromStream(char *buffer, unsigned int bufSize) {
unsigned int i;
char *bufp;
ssize_t readlen;

bufp = buffer;
for (i=0; i< bufSize; i++) {
    readlen = RPCSTUBSOCKET-> read(bufp, 1);
    // check for eof or error
    if (readlen == 0) {
      break;
    }
    // check for null and bump buffer pointer
    if (*bufp++ == '\0') {
      break;
    }
  }
}

void var0() {
*GRADING << "Proceeding with invocation of func3()." << endl;
func3();
RPCSTUBSOCKET->write("1", VOID_BUFFER_SIZE);
char var15 = 'A';
(void)var15;
*GRADING << "Sent a VOID." << endl;
*GRADING << "Invocation of func3() ended." << endl;
}

void var1() {
*GRADING << "Proceeding with invocation of func2()." << endl;
func2();
RPCSTUBSOCKET->write("1", VOID_BUFFER_SIZE);
char var19 = 'A';
(void)var19;
*GRADING << "Sent a VOID." << endl;
*GRADING << "Invocation of func2() ended." << endl;
}

void var2() {
*GRADING << "Proceeding with invocation of func1()." << endl;
func1();
RPCSTUBSOCKET->write("1", VOID_BUFFER_SIZE);
char var23 = 'A';
(void)var23;
*GRADING << "Sent a VOID." << endl;
*GRADING << "Invocation of func1() ended." << endl;
}

void var3() {
*GRADING << "Proceeding with invocation of area()." << endl;
rectangle r;
char var28[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var28, INT_BUFFER_SIZE);
r.x = atoi(var28);
*GRADING << "Received an INT named r.x equal to " << r.x << "." << endl;
char var29[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var29, INT_BUFFER_SIZE);
r.y = atoi(var29);
*GRADING << "Received an INT named r.y equal to " << r.y << "." << endl;

int var30;
var30 = area(r);
char var31[INT_BUFFER_SIZE];
snprintf(var31, sizeof(var31), "%d", var30);
RPCSTUBSOCKET->write(var31, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named var30 equal to " << var30 << "." << endl;
*GRADING << "Invocation of area() ended." << endl;
}

void var4() {
*GRADING << "Proceeding with invocation of findPerson()." << endl;
ThreePeople tp;
char var53[STRING_BUFFER_SIZE];
ssize_t var54;
tp.p1.firstname = "";
while (true) {
var54 = RPCSTUBSOCKET->read(var53, STRING_BUFFER_SIZE);
if (var54 == 0 || var53[0] == '\0') {
	break;
}
tp.p1.firstname += var53[0];
}
*GRADING << "Received a STRING named tp.p1.firstname equal to '" << tp.p1.firstname << "'." << endl;
char var55[STRING_BUFFER_SIZE];
ssize_t var56;
tp.p1.lastname = "";
while (true) {
var56 = RPCSTUBSOCKET->read(var55, STRING_BUFFER_SIZE);
if (var56 == 0 || var55[0] == '\0') {
	break;
}
tp.p1.lastname += var55[0];
}
*GRADING << "Received a STRING named tp.p1.lastname equal to '" << tp.p1.lastname << "'." << endl;
char var57[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var57, INT_BUFFER_SIZE);
tp.p1.age = atoi(var57);
*GRADING << "Received an INT named tp.p1.age equal to " << tp.p1.age << "." << endl;
char var58[STRING_BUFFER_SIZE];
ssize_t var59;
tp.p2.firstname = "";
while (true) {
var59 = RPCSTUBSOCKET->read(var58, STRING_BUFFER_SIZE);
if (var59 == 0 || var58[0] == '\0') {
	break;
}
tp.p2.firstname += var58[0];
}
*GRADING << "Received a STRING named tp.p2.firstname equal to '" << tp.p2.firstname << "'." << endl;
char var60[STRING_BUFFER_SIZE];
ssize_t var61;
tp.p2.lastname = "";
while (true) {
var61 = RPCSTUBSOCKET->read(var60, STRING_BUFFER_SIZE);
if (var61 == 0 || var60[0] == '\0') {
	break;
}
tp.p2.lastname += var60[0];
}
*GRADING << "Received a STRING named tp.p2.lastname equal to '" << tp.p2.lastname << "'." << endl;
char var62[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var62, INT_BUFFER_SIZE);
tp.p2.age = atoi(var62);
*GRADING << "Received an INT named tp.p2.age equal to " << tp.p2.age << "." << endl;
char var63[STRING_BUFFER_SIZE];
ssize_t var64;
tp.p3.firstname = "";
while (true) {
var64 = RPCSTUBSOCKET->read(var63, STRING_BUFFER_SIZE);
if (var64 == 0 || var63[0] == '\0') {
	break;
}
tp.p3.firstname += var63[0];
}
*GRADING << "Received a STRING named tp.p3.firstname equal to '" << tp.p3.firstname << "'." << endl;
char var65[STRING_BUFFER_SIZE];
ssize_t var66;
tp.p3.lastname = "";
while (true) {
var66 = RPCSTUBSOCKET->read(var65, STRING_BUFFER_SIZE);
if (var66 == 0 || var65[0] == '\0') {
	break;
}
tp.p3.lastname += var65[0];
}
*GRADING << "Received a STRING named tp.p3.lastname equal to '" << tp.p3.lastname << "'." << endl;
char var67[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var67, INT_BUFFER_SIZE);
tp.p3.age = atoi(var67);
*GRADING << "Received an INT named tp.p3.age equal to " << tp.p3.age << "." << endl;

Person var68;
var68 = findPerson(tp);
RPCSTUBSOCKET->write(var68.firstname.c_str(), var68.firstname.length() + 1);
char var69 = 'A';
(void)var69;
char var70 = 'A';
(void)var70;
*GRADING << "Sent a STRING named var68.firstname equal to '" << var68.firstname << "'." << endl;
RPCSTUBSOCKET->write(var68.lastname.c_str(), var68.lastname.length() + 1);
char var71 = 'A';
(void)var71;
char var72 = 'A';
(void)var72;
*GRADING << "Sent a STRING named var68.lastname equal to '" << var68.lastname << "'." << endl;
char var73[INT_BUFFER_SIZE];
snprintf(var73, sizeof(var73), "%d", var68.age);
RPCSTUBSOCKET->write(var73, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named var68.age equal to " << var68.age << "." << endl;
*GRADING << "Invocation of findPerson() ended." << endl;
}

void var5() {
*GRADING << "Proceeding with invocation of sendMT()." << endl;
MT input;
char var77[VOID_BUFFER_SIZE];
RPCSTUBSOCKET->read(var77, VOID_BUFFER_SIZE);
*GRADING << "Received a VOID." << endl;

MT var78;
var78 = sendMT(input);
RPCSTUBSOCKET->write("1", VOID_BUFFER_SIZE);
char var79 = 'A';
(void)var79;
*GRADING << "Sent a VOID." << endl;
*GRADING << "Invocation of sendMT() ended." << endl;
}

void var6() {
*GRADING << "Proceeding with invocation of sqrt()." << endl;
int x;
char var84[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var84, INT_BUFFER_SIZE);
x = atoi(var84);
*GRADING << "Received an INT named x equal to " << x << "." << endl;

int y;
char var85[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var85, INT_BUFFER_SIZE);
y = atoi(var85);
*GRADING << "Received an INT named y equal to " << y << "." << endl;

int var86;
var86 = sqrt(x, y);
char var87[INT_BUFFER_SIZE];
snprintf(var87, sizeof(var87), "%d", var86);
RPCSTUBSOCKET->write(var87, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named var86 equal to " << var86 << "." << endl;
*GRADING << "Invocation of sqrt() ended." << endl;
}

void var7() {
*GRADING << "Proceeding with invocation of upcase()." << endl;
string s;
char var93[STRING_BUFFER_SIZE];
ssize_t var94;
s = "";
while (true) {
var94 = RPCSTUBSOCKET->read(var93, STRING_BUFFER_SIZE);
if (var94 == 0 || var93[0] == '\0') {
	break;
}
s += var93[0];
}
*GRADING << "Received a STRING named s equal to '" << s << "'." << endl;

string var95;
var95 = upcase(s);
RPCSTUBSOCKET->write(var95.c_str(), var95.length() + 1);
char var96 = 'A';
(void)var96;
char var97 = 'A';
(void)var97;
*GRADING << "Sent a STRING named var95 equal to '" << var95 << "'." << endl;
*GRADING << "Invocation of upcase() ended." << endl;
}

void var8() {
*GRADING << "Proceeding with invocation of takesTwoArrays()." << endl;
int x[24];
for (int var105=0; var105 < 24; var105++) {
char var104[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var104, INT_BUFFER_SIZE);
x[var105] = atoi(var104);
*GRADING << "Received an INT named x[" << var105 << "] equal to " << x[var105] << "." << endl;
}

int y[24];
for (int var107=0; var107 < 24; var107++) {
char var106[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var106, INT_BUFFER_SIZE);
y[var107] = atoi(var106);
*GRADING << "Received an INT named y[" << var107 << "] equal to " << y[var107] << "." << endl;
}

int var108;
var108 = takesTwoArrays(x, y);
char var109[INT_BUFFER_SIZE];
snprintf(var109, sizeof(var109), "%d", var108);
RPCSTUBSOCKET->write(var109, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named var108 equal to " << var108 << "." << endl;
*GRADING << "Invocation of takesTwoArrays() ended." << endl;
}

void var9() {
*GRADING << "Proceeding with invocation of multiply()." << endl;
float x;
char var114[FLOAT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var114, FLOAT_BUFFER_SIZE);
x = (float)atof(var114);
*GRADING << "Received a FLOAT named x equal to " << x << "." << endl;

float y;
char var115[FLOAT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var115, FLOAT_BUFFER_SIZE);
y = (float)atof(var115);
*GRADING << "Received a FLOAT named y equal to " << y << "." << endl;

float var116;
var116 = multiply(x, y);
char var117[FLOAT_BUFFER_SIZE];
snprintf(var117, sizeof(var117), "%40.40f", var116);
RPCSTUBSOCKET->write(var117, FLOAT_BUFFER_SIZE);
*GRADING << "Sent an FLOAT named var116 equal to " << var116 << "." << endl;
*GRADING << "Invocation of multiply() ended." << endl;
}

void var10() {
*GRADING << "Proceeding with invocation of searchRectangles()." << endl;
rectangle rects[200];
for (int var125=0; var125 < 200; var125++) {
char var123[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var123, INT_BUFFER_SIZE);
rects[var125].x = atoi(var123);
*GRADING << "Received an INT named rects[" << var125 << "].x equal to " << rects[var125].x << "." << endl;
char var124[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var124, INT_BUFFER_SIZE);
rects[var125].y = atoi(var124);
*GRADING << "Received an INT named rects[var125].y equal to " << rects[var125].y << "." << endl;
}

searchRectangles(rects);
RPCSTUBSOCKET->write("1", VOID_BUFFER_SIZE);
char var127 = 'A';
(void)var127;
*GRADING << "Sent a VOID." << endl;
*GRADING << "Invocation of searchRectangles() ended." << endl;
}

void var11() {
*GRADING << "Proceeding with invocation of showsArraysofArrays()." << endl;
int x[24];
for (int var139=0; var139 < 24; var139++) {
char var138[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var138, INT_BUFFER_SIZE);
x[var139] = atoi(var138);
*GRADING << "Received an INT named x[" << var139 << "] equal to " << x[var139] << "." << endl;
}

int y[24][15];
for (int var142=0; var142 < 24; var142++) {
for (int var141=0; var141 < 15; var141++) {
char var140[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var140, INT_BUFFER_SIZE);
y[var142][var141] = atoi(var140);
*GRADING << "Received an INT named y[" << var142 << "][" << var141 << "] equal to " << y[var142][var141] << "." << endl;
}
}

int z[24][15];
for (int var145=0; var145 < 24; var145++) {
for (int var144=0; var144 < 15; var144++) {
char var143[INT_BUFFER_SIZE];
RPCSTUBSOCKET->read(var143, INT_BUFFER_SIZE);
z[var145][var144] = atoi(var143);
*GRADING << "Received an INT named z[" << var145 << "][" << var144 << "] equal to " << z[var145][var144] << "." << endl;
}
}

int var146;
var146 = showsArraysofArrays(x, y, z);
char var147[INT_BUFFER_SIZE];
snprintf(var147, sizeof(var147), "%d", var146);
RPCSTUBSOCKET->write(var147, INT_BUFFER_SIZE);
*GRADING << "Sent an INT named var146 equal to " << var146 << "." << endl;
*GRADING << "Invocation of showsArraysofArrays() ended." << endl;
}

void dispatchFunction() {

char functionNameBuffer[2048];
getFunctionNameFromStream(functionNameBuffer, sizeof(functionNameBuffer));
if (!RPCSTUBSOCKET->eof()) {
if (strcmp(functionNameBuffer, "func3") == 0)
	var0();
if (strcmp(functionNameBuffer, "func2") == 0)
	var1();
if (strcmp(functionNameBuffer, "func1") == 0)
	var2();
if (strcmp(functionNameBuffer, "area") == 0)
	var3();
if (strcmp(functionNameBuffer, "findPerson") == 0)
	var4();
if (strcmp(functionNameBuffer, "sendMT") == 0)
	var5();
if (strcmp(functionNameBuffer, "sqrt") == 0)
	var6();
if (strcmp(functionNameBuffer, "upcase") == 0)
	var7();
if (strcmp(functionNameBuffer, "takesTwoArrays") == 0)
	var8();
if (strcmp(functionNameBuffer, "multiply") == 0)
	var9();
if (strcmp(functionNameBuffer, "searchRectangles") == 0)
	var10();
if (strcmp(functionNameBuffer, "showsArraysofArrays") == 0)
	var11();
}
}

