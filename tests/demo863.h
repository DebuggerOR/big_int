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
	InfInt n0("38271097012361091574910164799302798065433330107508083264783077502702304868");
	InfInt n1("489161392625924269261369351790695622990860882502129821940324032130640103600454356");
	InfInt n2("254759287368317791572467340814658673037569892091478505282442840043817578471560389780033130");
	InfInt n3("83248502173336142230964873984533358470696264137892873839895305873254645503106186");
	InfInt n4("97087261120244449825738506567863392116570412856136929048853263225");
	int s0 = 1896;
	int s1 = 303;
	test = n0 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("83248540444433154592056448894698157773494329571222981347978570656332148205411054") ? "passed" : "failed") << endl;
	test = n0 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("-489161354354827256900277776880530823688062817068799714432240767347562600898149488") ? "passed" : "failed") << endl;
	test = n2 / n4;
	cout<<"test 2 ";
	cout << (test == InfInt("2624023836173455228716014") ? "passed" : "failed") << endl;
	test = n4 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("97087261120244449825738506567863392116570412856136929048853263225") ? "passed" : "failed") << endl;
	test = n3 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("83248502173336203112292311606297795035251984256740602580062578545681978913763315") ? "passed" : "failed") << endl;
	test = n0 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("39492944426457343047248732743308904442247655676174221391182213728") ? "passed" : "failed") << endl;
	test = n1 | n3;
	cout<<"test 6 ";
	cout << (test == InfInt("557536632156531263065996542905399963723794605751774299376717616706332667053244126") ? "passed" : "failed") << endl;
	test2 = n0 < n4;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 > n1;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 >= n3;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 != n4;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n4 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("1582161949965746753663915733439117974374399102047865804170873215540787323644565641859824347065162581744138909470530464788574856393791764694242409076018380800") ? "passed" : "failed") << endl;
	test = n0 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
