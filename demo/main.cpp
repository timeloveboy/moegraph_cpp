# include < iostream> 
#include "num/isPrime.cpp"

using namespace std;
int main(void) {
	bool b = false;
	short s1, s2 = 100;
	int len;
	long second;
	float f = 12345678.9f;
	double d = 0.0000123456789;
	cout << " b=" << b << endl;
	cout << " f=" << f << endl;
	cout << " d=" << d << endl;
	len = 300;
	second = 128;
	b = true;
	s1 = s2 = 30;
	//A 
	cout << " len=" << len << endl;
	cout << " second=" << second << endl;
	cout << " b=" << b << endl;
	cout << " s1=" << s1 << '\t' << " s2=" << s2 << endl;
	cout << " s1=( hex)" << hex << s1 << endl;
	//B 
	cout << " s1=( oct)" << oct << s1 << endl;
	//C
	

	for (int i = 2; i < 100; i++) if (isPrime(i)) //B º¯Êý µ÷ÓÃ
		cout << i << '\t';
	return 0;
}
 