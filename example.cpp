#include <string>
using namespace std;

#include "lotsofstuff.idl"

void func1() {
}

void func2() {
}

void func3() {
}

int sqrt(int x, int y) {
(void)x;
(void)y;
return 0;
}

int takesTwoArrays(int x[24], int y[24]) {

(void)x;
(void)y;
return 0;
}

int showsArraysofArrays(int x[24], int y[24][15], int z[24][15]) {
(void)x;
(void)y;
(void)z;

return 0;
}

string upcase(string s) {
(void)s;
return "HELLO WORLD\n";
}

Person findPerson(ThreePeople tp) {
(void)tp;

Person p;
return p;
}

float multiply(float x, float y) {

(void)x;
(void)y;

return 0.0;
}

int area(rectangle r) {
return 0;
}

void searchRectangles(rectangle rects[200]) {
return;
}

MT sendMT(MT input) {
(void)input;

MT a;
return a;
}
