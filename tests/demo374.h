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
	InfInt n0("68204865440416429855059480276250284334208546619433251447663638743932949251809215281797");
	InfInt n1("47629158430988745888026990582661765175");
	InfInt n2("401276280704607140754766589589649");
	InfInt n3("0297500357341299254944488077560250806644578730638113519041193992951380485993");
	InfInt n4("9813355576944926376803655");
	int s0 = 1087;
	int s1 = 173;
	test = n4 + n2;
	cout<<"test 0 ";
	cout << (test == InfInt("401276290517962717699692966393304") ? "passed" : "failed") << endl;
	test = n3 - n2;
	cout<<"test 1 ";
	cout << (test == InfInt("297500357341299254944488077560250806644578329361832814434053238184790896344") ? "passed" : "failed") << endl;
	test = n1 / n1;
	cout<<"test 2 ";
	cout << (test == InfInt("1") ? "passed" : "failed") << endl;
	test = n4 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("9813355576944926376803655") ? "passed" : "failed") << endl;
	test = n4 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n0 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("141947704972325350815749") ? "passed" : "failed") << endl;
	test = n0 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("68204865440416429855059480276250284334208546619433251493977935068737068979948361874069") ? "passed" : "failed") << endl;
	test2 = n3 < n2;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 == n4;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 > n4;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 <= n3;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 != n4;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n0 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("816591032443719902861627814198954519438061744813991076286888555240577007438265111086567621290662379956041223631218819512100017381440487424") ? "passed" : "failed") << endl;
	test = n4 >> s1;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
