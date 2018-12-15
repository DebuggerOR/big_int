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
	InfInt n0("891455174541160491712872220794226441853536795958426476");
	InfInt n1("2923365686379190533546102677060773067961783955489276453139167162742407049328327");
	InfInt n2("152721636196843390558862316117823233913458843970784883686723176539710");
	InfInt n3("6784333601594332331078926366471237139298642149689907981");
	InfInt n4("225657644620885884192589754734095451462570821125838914979188048392463700513097");
	int s0 = 138;
	int s1 = 934;
	test = n0 + n4;
	cout<<"test 0 ";
	cout << (test == InfInt("225657644620885884192590646189269992623062533998059709205629901929259658939573") ? "passed" : "failed") << endl;
	test = n3 - n3;
	cout<<"test 1 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n2 / n3;
	cout<<"test 2 ";
	cout << (test == InfInt("22510926668015") ? "passed" : "failed") << endl;
	test = n1 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("338064600271028612160706064986507897680944301506037879") ? "passed" : "failed") << endl;
	test = n0 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("225657644620885884192590644675132842680187927160032294235956099150338293721637") ? "passed" : "failed") << endl;
	test = n4 & n2;
	cout<<"test 5 ";
	cout << (test == InfInt("40665369441271612358281097356760822226953220047303228414398806130696") ? "passed" : "failed") << endl;
	test = n4 | n4;
	cout<<"test 6 ";
	cout << (test == InfInt("225657644620885884192589754734095451462570821125838914979188048392463700513097") ? "passed" : "failed") << endl;
	test2 = n4 < n3;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 > n3;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 >= n2;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n1 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("424520918487267210356797436247068308310468873009447540265696660120032947412801738226997793864427109280191897214627489639479592205118092586311792449819593941622425618161297257322459156440500902396481274986867955168377380297889657671578423986366295744193916985112252447482759883945894194176485295685885054769482135300906305425436383823028489904414808669230727168") ? "passed" : "failed") << endl;
	test = n1 >> s1;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
