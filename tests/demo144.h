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
	InfInt n0("4594105570959");
	InfInt n1("920979523771297249465693098276186893048255460388267158219068777646529298070102950194817078");
	InfInt n2("65178672913860589159271983147382340008665995041412727450562058302052575365");
	InfInt n3("930243154715020692165511284318543190717530444844735272052268024953913786354142602392");
	InfInt n4("2393641463351298975547636069356971226775062104763577070115011291495463122917122674222729730712453");
	int s0 = 1882;
	int s1 = 482;
	test = n1 + n3;
	cout<<"test 0 ";
	cout << (test == InfInt("920980454014451964486385263787471211591446177918712002954340829914554251983889304337419470") ? "passed" : "failed") << endl;
	test = n2 - n0;
	cout<<"test 1 ";
	cout << (test == InfInt("65178672913860589159271983147382340008665995041412727450562053707947004406") ? "passed" : "failed") << endl;
	test = n4 / n3;
	cout<<"test 2 ";
	cout << (test == InfInt("2573135261698") ? "passed" : "failed") << endl;
	test = n1 % n4;
	cout<<"test 3 ";
	cout << (test == InfInt("920979523771297249465693098276186893048255460388267158219068777646529298070102950194817078") ? "passed" : "failed") << endl;
	test = n1 ^ n2;
	cout<<"test 4 ";
	cout << (test == InfInt("920979523771297185626570645327447036021766104681050872042100797333752440061615143468302515") ? "passed" : "failed") << endl;
	test = n0 & n2;
	cout<<"test 5 ";
	cout << (test == InfInt("4555450810501") ? "passed" : "failed") << endl;
	test = n2 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("65178672913860589159271983147382340008665995041412727450562058302052575365") ? "passed" : "failed") << endl;
	test2 = n4 < n3;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n1 == n1;
	cout<<"test 8 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 > n4;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 <= n3;
	cout<<"test 10 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 >= n1;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test = n4 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("29889387072772671298656828028028211309205945342720902122758575310646119594043952358477047432037402833039767843478624934456389228913141259179335754371589218708078715842329832629111156115306542432287475668355080118777080912478315733819339046912") ? "passed" : "failed") << endl;
	test = n1 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
