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
	InfInt n0("7342444827172270078173973746079995");
	InfInt n1("252762079139175699550603987980843189201353621984");
	InfInt n2("602360073179758909662333429099669989013908533870265505064512744444");
	InfInt n3("7576276439182181734847240527965588972250696943176899526623156480170244911845757636796");
	InfInt n4("99256303821762188670143894539499881060095773400860446555661734758177239");
	int s0 = 1998;
	int s1 = 77;
	test = n2 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("7576276439182181735449600601145347881913030372276569515637065014040510416910270381240") ? "passed" : "failed") << endl;
	test = n3 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("7576276439182181734847240527965588972250696943176892184178329307900166737872011556801") ? "passed" : "failed") << endl;
	test = n0 / n1;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n0 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("7342444827172270078173973746079995") ? "passed" : "failed") << endl;
	test = n2 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("99255918877393585643449262359366483644164672002823239867234955767624235") ? "passed" : "failed") << endl;
	test = n3 & n2;
	cout<<"test 5 ";
	cout << (test == InfInt("118478839066099751348471233919211759776051073741358869496791646396") ? "passed" : "failed") << endl;
	test = n0 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("7342444827172270078173973746079995") ? "passed" : "failed") << endl;
	test2 = n1 < n2;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 == n0;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 > n4;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n0;
	cout<<"test 10 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n2 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("91026080646496006092563806678510877041023259668537024537960362595720412221315770134560768") ? "passed" : "failed") << endl;
	test = n1 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
