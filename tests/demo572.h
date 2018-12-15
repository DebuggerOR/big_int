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
	InfInt n0("84723714485189507726271753269167591918366456625381845");
	InfInt n1("52006065442519351666");
	InfInt n2("4695723172676000914220289944549893233156469057471816414199483591298357979682339774276613418388");
	InfInt n3("955785019360573769803907781203537839899373");
	InfInt n4("569538602085674563978012243631007");
	int s0 = 687;
	int s1 = 92;
	test = n1 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("955785019360573769803959787268980359251039") ? "passed" : "failed") << endl;
	test = n4 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("-84723714485189507725702214667081917354388444381750838") ? "passed" : "failed") << endl;
	test = n1 / n3;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n2 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("34280581198191739112738119138596622695361001408487768") ? "passed" : "failed") << endl;
	test = n3 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n4 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("569538602085674563978012243631007") ? "passed" : "failed") << endl;
	test = n1 | n4;
	cout<<"test 6 ";
	cout << (test == InfInt("569538602085684953827236069612543") ? "passed" : "failed") << endl;
	test2 = n2 < n4;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n1 == n4;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 > n0;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 >= n2;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 != n0;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n0 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("419531513752795364189239801057495327242800775343841555291609811766606560357253120") ? "passed" : "failed") << endl;
	test = n0 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
