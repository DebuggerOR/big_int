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
	InfInt n0("9601175834501640589599290555509");
	InfInt n1("8069315529828658441477803265058975523936231216991266558850880121");
	InfInt n2("0119505999");
	InfInt n3("725501745192859614913150763");
	InfInt n4("854826042725337639447251294605462920620445553990689419261107523202827600490701");
	int s0 = 175;
	int s1 = 1220;
	test = n2 + n0;
	cout<<"test 0 ";
	cout << (test == InfInt("9601175834501640589599410061508") ? "passed" : "failed") << endl;
	test = n2 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("-8069315529828658441477803265058975523936231216991266558731374122") ? "passed" : "failed") << endl;
	test = n3 / n2;
	cout<<"test 2 ";
	cout << (test == InfInt("6070839550011707905") ? "passed" : "failed") << endl;
	test = n0 % n1;
	cout<<"test 3 ";
	cout << (test == InfInt("9601175834501640589599290555509") ? "passed" : "failed") << endl;
	test = n0 ^ n2;
	cout<<"test 4 ";
	cout << (test == InfInt("9601175834501640589599306053690") ? "passed" : "failed") << endl;
	test = n3 & n1;
	cout<<"test 5 ";
	cout << (test == InfInt("715750796134677601654837801") ? "passed" : "failed") << endl;
	test = n4 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("854826042725337639447251294605462920620445553992671980243615954355078186401021") ? "passed" : "failed") << endl;
	test2 = n1 < n1;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 == n2;
	cout<<"test 8 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 > n3;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n4;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 >= n3;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 != n0;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n3 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("13098850079395296348881566458088758646255147948596033382755379794618295237792124228444602391268956502330565023549542549535953511806629218099467573124122712933366321671137588664124903334724738177719482092349738935783838853116323848017675837176507183863461981055418815244819315180805604929223878532087404946477195631202606977570404185295020982020745395468385530788546023364414387309942490936639488") ? "passed" : "failed") << endl;
	test = n4 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("17849600627062858632001074") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
