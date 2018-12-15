#include <iostream>
#include <cstring>
#include <cstdlib>

#include "LargeIntegers.h"

using namespace std;

// make sure the programs does not take too long to run!
int main()
{
	InfInt test;
	bool test2;
	InfInt n0("6485522330300368543312681339815212460760527019985927588935593263");
	InfInt n1("5296301761665356");
	InfInt n2("993042851427052343389088909363646336535918714723970193982610449");
	InfInt n3("07962345046974");
	InfInt n4("8964011873540507759207619011547246617278802598561685955");
	int s0 = 162;
	int s1 = 648;
	test = n3 + n2;
	cout<<"test 0 ";
	cout << (test == InfInt("993042851427052343389088909363646336535918714723978156327657423") ? "passed" : "failed") << endl;
	test = n4 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("-6485522321336356669772173580607593449213280402707124990373907308") ? "passed" : "failed") << endl;
	test = n3 / n2;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n0 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("7074567885179") ? "passed" : "failed") << endl;
	test = n1 ^ n2;
	cout<<"test 4 ";
	cout << (test == InfInt("993042851427052343389088909363646336535918714719132707202614621") ? "passed" : "failed") << endl;
	test = n3 & n1;
	cout<<"test 5 ";
	cout << (test == InfInt("228709138700") ? "passed" : "failed") << endl;
	test = n2 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("993042851427052343389088909363646336535918714723970193982610449") ? "passed" : "failed") << endl;
	test2 = n1 < n1;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 == n2;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 > n0;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n1;
	cout<<"test 10 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 >= n1;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 != n3;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n4 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("10469829598384344453880855361968606756635049706519429633247788859392669484543106492037995227203107740156669121466973698166995643131115752020834007256096285885328094379929978944022106995036704983105912621120400835788787751629121766718028105069866516480") ? "passed" : "failed") << endl;
	test = n2 >> s1;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
