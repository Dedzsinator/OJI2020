#include <fstream>
#include <iostream>
#include <math.h>
using namespace std;
ifstream f("in.in");
ofstream g("out.out");

int k,t;
short int c;
long long n, m;

int main(){
	f >> c;
	switch(c) {
	case 1:
		f >> m;
		k = m * 8;
		g << k;
		break;
	case 2:
		f >> n;
		t = sqrt(n);
		if (t % 2) {
			t++;
		}
		g << t / 2;
		break;
	}

}
