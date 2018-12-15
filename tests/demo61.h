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
	InfInt n0("278886771244009215122792428108575659431088053428280");
	InfInt n1("61608955675557206332736595559682787780163192407154758999");
	InfInt n2("64969360718484429710259995189529618271101928288658");
	InfInt n3("389319008825413683122390643103475513611212935061396787384053025597844018929");
	InfInt n4("7366797633");
	int s0 = 1371;
	int s1 = 889;
	test = n0 + n4;
	cout<<"test 0 ";
	cout << (test == InfInt("278886771244009215122792428108575659431095420225913") ? "passed" : "failed") << endl;
	test = n0 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 / n0;
	cout<<"test 2 ";
	cout << (test == InfInt("1395975173325029736704312") ? "passed" : "failed") << endl;
	test = n1 % n1;
	cout<<"test 3 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n4 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("389319008825413683122390643103475513611212935061396787384053025599738265520") ? "passed" : "failed") << endl;
	test = n0 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("3053461504") ? "passed" : "failed") << endl;
	test = n4 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("278886771244009215122792428108575659431092366764409") ? "passed" : "failed") << endl;
	test2 = n4 < n4;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n1 == n3;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 > n1;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 >= n1;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test = n3 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("1606836743981436264438081832837201900639749607332244653530129431097909590965866727547222666440173088835526243473614631707870614588209151549997905605102960028311465906462310819917061486738442344983428420448496567155391511639717219676823844469128976439523879087340865823941080527112544234756168974768942736494344450666175056086631563206798082048") ? "passed" : "failed") << endl;
	test = n1 >> s1;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
