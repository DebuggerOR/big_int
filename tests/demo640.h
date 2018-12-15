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
	InfInt n0("757214878112554631572812065593690677190433996250859502974232754477732916850");
	InfInt n1("1671891127607750713301624401571841");
	InfInt n2("403611917387111878774947078279533025969929282249338872511974417270935096343552965920668933902803871");
	InfInt n3("800328365196297051471710755303714372920209786954265237336064066719276006180427846664843930");
	InfInt n4("6060123948115561635011513252916808887516170609035909200558342356698324073185604994787561357500234");
	int s0 = 1080;
	int s1 = 1316;
	test = n3 + n2;
	cout<<"test 0 ";
	cout << (test == InfInt("403611918187440243971244129751243781273643655169548659466239654606999163062828972101096780567647801") ? "passed" : "failed") << endl;
	test = n1 - n4;
	cout<<"test 1 ";
	cout << (test == InfInt("-6060123948115561635011513252916808887516170609035909200558342355026432945577854281485936955928393") ? "passed" : "failed") << endl;
	test = n3 / n4;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n0 % n2;
	cout<<"test 3 ";
	cout << (test == InfInt("757214878112554631572812065593690677190433996250859502974232754477732916850") ? "passed" : "failed") << endl;
	test = n2 ^ n1;
	cout<<"test 4 ";
	cout << (test == InfInt("403611917387111878774947078279533025969929282249338872511974417270008608854110831508238496399987614") ? "passed" : "failed") << endl;
	test = n1 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("324536508626915999779863379714048") ? "passed" : "failed") << endl;
	test = n0 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("757214878112554631572812065593690677190433996250859502974232754477732916850") ? "passed" : "failed") << endl;
	test2 = n3 < n1;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 == n2;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 > n2;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 >= n1;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n0 << s0;
	cout<<"test 12 ";
	cout << (test == InfInt("9808767844339303515801641856650087446693768587721320981370531003746017229709471713499187080066690850570158790633147874316728254259706388697441511870361049467721043142359441967928227705321248571396253886745772019327240353300298056691683498732528691075725597652463541337875462601603782940146889563143866454148702605824773367505090556833180569868710866338213860314425813072629267913016000494117165465600") ? "passed" : "failed") << endl;
	test = n4 >> s1;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
