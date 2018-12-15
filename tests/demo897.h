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
	InfInt n0("94436819480353465766458981401874135464656022917623454835467354295504372741");
	InfInt n1("428132204699072422773272849278945629900242973688357901412169458126492081674686");
	InfInt n2("467304554358602327943079098023086027271957299958166752825276830937229473");
	InfInt n3("3913091818665004464703840131083047068133828265114151814635280475082230");
	InfInt n4("654520618511054099888879816271");
	int s0 = 70;
	int s1 = 159;
	test = n1 + n0;
	cout<<"test 0 ";
	cout << (test == InfInt("428226641518552776239039308260347504035707629711275524867004925480787586047427") ? "passed" : "failed") << endl;
	test = n4 - n2;
	cout<<"test 1 ";
	cout << (test == InfInt("-467304554358602327943079098023086027271956645437548241771176942057413202") ? "passed" : "failed") << endl;
	test = n3 / n2;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 % n2;
	cout<<"test 3 ";
	cout << (test == InfInt("3913091818665004464703840131083047068133828265114151814635280475082230") ? "passed" : "failed") << endl;
	test = n0 ^ n2;
	cout<<"test 4 ";
	cout << (test == InfInt("93979276542815271693655952907932708867787493168783250102901291590122810532") ? "passed" : "failed") << endl;
	test = n4 & n3;
	cout<<"test 5 ";
	cout << (test == InfInt("107311092994966549747059782") ? "passed" : "failed") << endl;
	test = n0 | n3;
	cout<<"test 6 ";
	cout << (test == InfInt("94440732466331067818656960704731575757694867672958710229860715287727820279") ? "passed" : "failed") << endl;
	test2 = n4 < n0;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 == n2;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 > n0;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 >= n1;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 != n4;
	cout<<"test 12 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test = n1 << s0;
	cout<<"test 13 ";
	cout << (test == InfInt("505449293426996407110175410337793508727446973607517848816056007110391232831580331110371548005924864") ? "passed" : "failed") << endl;
	test = n0 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("79991097533766119924215214618812729032145496400617707") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
