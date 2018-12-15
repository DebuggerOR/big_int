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
	InfInt n0("1416596098432962972049163486973067066597308637202903601307276775707453648534566978925011");
	InfInt n1("55988555541022845045250716882757641329171898821891308776982595");
	InfInt n2("49402268806988052985352962349");
	InfInt n3("963288754263401377204856545346090655533");
	InfInt n4("33490792665676755");
	int s0 = 885;
	int s1 = 1206;
	test = n1 + n4;
	cout<<"test 0 ";
	cout << (test == InfInt("55988555541022845045250716882757641329171898855382101442659350") ? "passed" : "failed") << endl;
	test = n0 - n2;
	cout<<"test 1 ";
	cout << (test == InfInt("1416596098432962972049163486973067066597308637202903601307227373438646660481581625962662") ? "passed" : "failed") << endl;
	test = n4 / n4;
	cout<<"test 2 ";
	cout << (test == InfInt("1") ? "passed" : "failed") << endl;
	test = n4 % n4;
	cout<<"test 3 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n4 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("963288754263401377204825415345015235838") ? "passed" : "failed") << endl;
	test = n2 & n4;
	cout<<"test 5 ";
	cout << (test == InfInt("32864955800764673") ? "passed" : "failed") << endl;
	test = n3 | n0;
	cout<<"test 6 ";
	cout << (test == InfInt("1416596098432962972049163486973067066597308637203158826915888491080614636078843959410687") ? "passed" : "failed") << endl;
	test2 = n1 < n4;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 == n0;
	cout<<"test 8 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 > n2;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 <= n2;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n2 >= n4;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n1 << s0;
	cout<<"test 12 ";
	cout << (test == InfInt("14442601415287019708911584099015860859812561195571316681895179985814116787232719460246053002352440384408198018823345680820771940180944784324881684262546026224775512672802971442852559384065698958936457080825271994420713031711244255150513739486613914609845956446925179142384195460489944665201446792552080433586834160263067902935040") ? "passed" : "failed") << endl;
	test = n3 >> s1;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
