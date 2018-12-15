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
	InfInt n0("1012470724660415791217872893638314190745622");
	InfInt n1("27072661597743061015268945430856795232");
	InfInt n2("7996074838683564380786478685263998824201117293438041");
	InfInt n3("237652346747330034");
	InfInt n4("60219383280121073218850911961957206198542294307055722");
	int s0 = 1791;
	int s1 = 358;
	test = n1 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("27072661597743061015506597777604125266") ? "passed" : "failed") << endl;
	test = n0 - n3;
	cout<<"test 1 ";
	cout << (test == InfInt("1012470724660415791217872655985967443415588") ? "passed" : "failed") << endl;
	test = n0 / n0;
	cout<<"test 2 ";
	cout << (test == InfInt("1") ? "passed" : "failed") << endl;
	test = n4 % n4;
	cout<<"test 3 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 & n3;
	cout<<"test 5 ";
	cout << (test == InfInt("237652346747330034") ? "passed" : "failed") << endl;
	test = n1 | n1;
	cout<<"test 6 ";
	cout << (test == InfInt("27072661597743061015268945430856795232") ? "passed" : "failed") << endl;
	test2 = n0 < n2;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 == n2;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 > n1;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 <= n2;
	cout<<"test 10 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 >= n0;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 != n3;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n0 << s0;
	cout<<"test 13 ";
	cout << (test == InfInt("141287814959515666538748713146354858886080028140470971183326994640005155976174455765063206042615973999729534591931398927568357021855792722980455839329708924450952966156905187065146559005494883476882832167360871988805300776729361472227131131168299027240141489570108841854636097029789522418229397826226709162083722017838473847581529172670611577536883434549867102172466923856369437914728848256176026925019543540118700136732746596057813922292732537870561562835105089121771136646518028063073673569877057234637494071103534956479792729697875744901883719672013907990772311603358897490886656") ? "passed" : "failed") << endl;
	test = n4 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
