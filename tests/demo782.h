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
	InfInt n0("275873636004034784712852719934");
	InfInt n1("07781421210958796280729278988505745723788286245459545772325019658019394662");
	InfInt n2("44498994761250407793150271495802334760153716658730143019940938995286");
	InfInt n3("325426150113479064914165295589274593010825794344900047643390611110981044995290858");
	InfInt n4("1370382174242234165678996157329435530786423183678960877168210234666632128160502303231111285710956");
	int s0 = 259;
	int s1 = 542;
	test = n2 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("325426150113523563908926545997067743282321596679660201360049341254000985934286144") ? "passed" : "failed") << endl;
	test = n0 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 / n2;
	cout<<"test 2 ";
	cout << (test == InfInt("7313112394099") ? "passed" : "failed") << endl;
	test = n4 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("223380799253576693550430000602406946984000374359956198873506609098173600363313732") ? "passed" : "failed") << endl;
	test = n3 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("1370382174242233883390267010638102263270436761713957477788497546739087823805211306714717190018694") ? "passed" : "failed") << endl;
	test = n1 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("221406903336261803115232506108780934595951579729808413453863571198836836") ? "passed" : "failed") << endl;
	test = n1 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("7781448438711330144624193256046920071812604654684568880008311218179659382") ? "passed" : "failed") << endl;
	test2 = n4 < n1;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 == n4;
	cout<<"test 8 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 > n3;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 >= n1;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 != n2;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n3 << s1;
	cout<<"test 13 ";
	cout << (test == InfInt("4685005426721971001875714617253651812144421635338005738586871308486390260288853531020931577327242062269884892211332132208126278441534832533670223980150207712511362141359029703219849291461756836557732967315830054229651006902880326192970158047232") ? "passed" : "failed") << endl;
	test = n1 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
