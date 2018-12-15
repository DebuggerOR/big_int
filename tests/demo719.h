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
	InfInt n0("19583941198228311198820941064242617254929355427981733804719915603041426528013900142414655");
	InfInt n1("4884420447291317665504165323634060787104836443911658613608073542339025404135226569702401417");
	InfInt n2("0639060539939705399432306000456802685768525076993351569214031768450529287789837781");
	InfInt n3("7528353649458147115245498296771");
	InfInt n4("756961357494096971917355142325663263262330538");
	int s0 = 192;
	int s1 = 1177;
	test = n1 + n1;
	cout<<"test 0 ";
	cout << (test == InfInt("9768840894582635331008330647268121574209672887823317227216147084678050808270453139404802834") ? "passed" : "failed") << endl;
	test = n2 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("-4884420446652257125564459924201754786648033758143133536614721973124993635684697281912563636") ? "passed" : "failed") << endl;
	test = n2 / n0;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n4 % n1;
	cout<<"test 3 ";
	cout << (test == InfInt("756961357494096971917355142325663263262330538") ? "passed" : "failed") << endl;
	test = n1 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("4884420447291317665504165323634060787104836443911658613608077426022695589563055076970204234") ? "passed" : "failed") << endl;
	test = n0 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("19583941198228311198820941064242617254929355427981733804719915603041426528013900142414655") ? "passed" : "failed") << endl;
	test = n1 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("4901330302550943520595169164773212803400501323438980071132071854494383013900567342441525183") ? "passed" : "failed") << endl;
	test2 = n2 < n2;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 == n4;
	cout<<"test 8 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 > n1;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 <= n2;
	cout<<"test 10 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 != n4;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n2 << s0;
	cout<<"test 13 ";
	cout << (test == InfInt("4011448024272673975886593308436997025079609741941536937378345769886823931369688847964633253980009402084508114729606339495168939125192523776") ? "passed" : "failed") << endl;
	test = n3 >> s1;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
