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
	InfInt n0("364985901644561215053003764851217972026291615919141488199123301414444876297596814648219");
	InfInt n1("462902650110660338536723");
	InfInt n2("441482507814519169414978504630744459274953197716444495161600603139406773412184511468965131793844661");
	InfInt n3("59118851212774479128134058714213300324329235614477118756254544618213212235042031462345");
	InfInt n4("2076150637984256680169273490649090065912974143081");
	int s0 = 1722;
	int s1 = 2;
	test = n4 + n0;
	cout<<"test 0 ";
	cout << (test == InfInt("364985901644561215053003764851217972028367766557125744879292574905093966363509788791300") ? "passed" : "failed") << endl;
	test = n4 - n4;
	cout<<"test 1 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 / n1;
	cout<<"test 2 ";
	cout << (test == InfInt("127713356574307094275567481986221748925091744239062865398217700") ? "passed" : "failed") << endl;
	test = n1 % n1;
	cout<<"test 3 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n3 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("59118851212774479128134058714213300326290813326510378325224512114307083559570230282656") ? "passed" : "failed") << endl;
	test = n1 & n2;
	cout<<"test 5 ";
	cout << (test == InfInt("462902613800078949761297") ? "passed" : "failed") << endl;
	test = n4 | n1;
	cout<<"test 6 ";
	cout << (test == InfInt("2076150637984256680169273802362207733729191133051") ? "passed" : "failed") << endl;
	test2 = n1 < n2;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 > n3;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n2 << s0;
	cout<<"test 12 ";
	cout << (test == InfInt("104367681116830968635848980716049643932727643075033858242330184806232495268703200837067276610571757851687207611875233450385415292884940333773486384856795668317811873014021077464847737042542479758883228291438133816929134038514477944223244799476356154934247343874628734211641576259140091218024387813667560387773238136381767258009330928737381209369587633339131321365409495978693815165673083429936182725766322329723764925273923172093896606510912159944780063229235636546531716529568879032817208840770240006348479651768478097713426288120138550872697281167333495650083670594069947952956031769156149651076265641772658609618944") ? "passed" : "failed") << endl;
	test = n0 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
