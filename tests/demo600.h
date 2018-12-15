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
	InfInt n0("9225876317587777914874397196");
	InfInt n1("1751276729587325578778766221513265319");
	InfInt n2("4179097130829991756917235200181116620649789591380133874312228096405219092150590");
	InfInt n3("5977827503841509148781001829740049482125");
	InfInt n4("380868862287375168097675");
	int s0 = 1116;
	int s1 = 577;
	test = n2 + n1;
	cout<<"test 0 ";
	cout << (test == InfInt("4179097130829991756917235200181116620649791342656863461637806875171440605415909") ? "passed" : "failed") << endl;
	test = n0 - n3;
	cout<<"test 1 ";
	cout << (test == InfInt("-5977827503832283272463414051825175084929") ? "passed" : "failed") << endl;
	test = n2 / n0;
	cout<<"test 2 ";
	cout << (test == InfInt("452975629302894185551508099793241151865776966691912") ? "passed" : "failed") << endl;
	test = n2 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("1389829779113904017614802282173522389840") ? "passed" : "failed") << endl;
	test = n4 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("5977827503841508925016285687159084583942") ? "passed" : "failed") << endl;
	test = n4 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("377868870389451238440968") ? "passed" : "failed") << endl;
	test = n2 | n3;
	cout<<"test 6 ";
	cout << (test == InfInt("4179097130829991756917235200181116620650131318190294431932627169208386265512383") ? "passed" : "failed") << endl;
	test2 = n3 < n1;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 == n2;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 > n3;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n1 <= n1;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n0 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("4563679387140384761834037946923237395669551977524902409659727455469379472845951787473475335513643596449257213838772262828282019171775331286484330236081864496711334965758099791980871822746231447132045312") ? "passed" : "failed") << endl;
	test = n3 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
