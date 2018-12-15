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
	InfInt n0("251261163017634110647143458309181765725039661116");
	InfInt n1("49038067143721003825438100207655014230616120083968079766408057");
	InfInt n2("6834149127376520217992870337831018458648763179417197337720191256424085");
	InfInt n3("31011673015701249810809570819039103226770995236693112916000425940295950717996582641548778");
	InfInt n4("883825312948382949365386689757761188801");
	int s0 = 49;
	int s1 = 1833;
	test = n2 + n4;
	cout<<"test 0 ";
	cout << (test == InfInt("6834149127376520217992870337831902283961711562366562724409949017612886") ? "passed" : "failed") << endl;
	test = n4 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("-49038067143721003825437216382342065847666754697278322005219256") ? "passed" : "failed") << endl;
	test = n4 / n0;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n1 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("239896489784593756333200522674061377984784075549") ? "passed" : "failed") << endl;
	test = n0 ^ n0;
	cout<<"test 4 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n1 & n1;
	cout<<"test 5 ";
	cout << (test == InfInt("49038067143721003825438100207655014230616120083968079766408057") ? "passed" : "failed") << endl;
	test = n1 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("6834149173174698136833517163323913864924267165864295652022683201630205") ? "passed" : "failed") << endl;
	test2 = n0 < n3;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 > n2;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 >= n0;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n1 << s0;
	cout<<"test 12 ";
	cout << (test == InfInt("27605977614428909493098582280011657376027225317841525342816426289516232310784") ? "passed" : "failed") << endl;
	test = n2 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("12139887543896535181163312589502500420211040895809868334") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
