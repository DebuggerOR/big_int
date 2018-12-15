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
	InfInt n0("062317040000126661009051369303429034400656584392055194478416695881");
	InfInt n1("34652777283808177125353383163818058684636817401966582135117707569728926");
	InfInt n2("18478968428760084985607316140920774");
	InfInt n3("64448769956744051622832292158999926317783811053428509826675458002310392299534148209171526165978117");
	InfInt n4("5729328887111898546265302671972248257894033690795774028894264");
	int s0 = 1570;
	int s1 = 1460;
	test = n0 + n2;
	cout<<"test 0 ";
	cout << (test == InfInt("62317040000126661009051369303447513369085344477040801794557616655") ? "passed" : "failed") << endl;
	test = n1 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n2 / n4;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n2 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("18478968428760084985607316140920774") ? "passed" : "failed") << endl;
	test = n0 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("64448769956744051622832292158999975341664616014369374538806055106907178287145408766795768059711052") ? "passed" : "failed") << endl;
	test = n1 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("54021617312872144335786833056974117877276072057994473330086182920") ? "passed" : "failed") << endl;
	test = n0 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("62317040000126661009051369303429034400656584392055194478416695881") ? "passed" : "failed") << endl;
	test2 = n1 < n0;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n1 == n0;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 > n2;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 >= n4;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 != n1;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n3 << s0;
	cout<<"test 13 ";
	cout << (test == InfInt("2668749588777479117948459603740546954274038566753666113623361216815518688810438036328548948928301159965576333661276437496866654517913590223326835196274727688966632288910248155411100810109888318776162857375758944527052671699049108963589069281065669272683841124950078564581229163739147561120250648836587740832284860791661590083137191978472536527581808320952271441190731479115741662920960373372868779754889998117747233776354239953462438965857019138010949764013276556925437862352494648304388790081164855640797089672568839649264078708935377175787281189256647405971312746692608") ? "passed" : "failed") << endl;
	test = n4 >> s0;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
