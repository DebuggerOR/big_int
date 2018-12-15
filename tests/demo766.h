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
	InfInt n0("100917211840930254509107689160524431424182656027430719912920288528959216676424685236149280169492335");
	InfInt n1("022370706020057864973725521718879857585832470820525992147198158855769925945414716973312706");
	InfInt n2("0340345040246193834019248646071252416461109988391413333989641948443341757");
	InfInt n3("376349211652281048654821244127550197961030754646096044200506998763823900481289803619186698099");
	InfInt n4("941957127737586799257876905218659960369816183694503609");
	int s0 = 996;
	int s1 = 307;
	test = n4 + n4;
	cout<<"test 0 ";
	cout << (test == InfInt("1883914255475173598515753810437319920739632367389007218") ? "passed" : "failed") << endl;
	test = n2 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("-22370706020057864633380481472686023566583824749273575686088170464356591955772768529970949") ? "passed" : "failed") << endl;
	test = n2 / n3;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n4 % n3;
	cout<<"test 3 ";
	cout << (test == InfInt("941957127737586799257876905218659960369816183694503609") ? "passed" : "failed") << endl;
	test = n3 ^ n4;
	cout<<"test 4 ";
	cout << (test == InfInt("376349211652281048654821244127550197961863832185366006835673259125707709303316016935191169482") ? "passed" : "failed") << endl;
	test = n3 & n3;
	cout<<"test 5 ";
	cout << (test == InfInt("376349211652281048654821244127550197961030754646096044200506998763823900481289803619186698099") ? "passed" : "failed") << endl;
	test = n0 | n4;
	cout<<"test 6 ";
	cout << (test == InfInt("100917211840930254509107689160524431424182656155014149562165196776879201453604311870218595759783935") ? "passed" : "failed") << endl;
	test2 = n4 < n4;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 == n4;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n4 > n1;
	cout<<"test 9 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n3 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n3 >= n3;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 != n4;
	cout<<"test 12 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n4 << s0;
	cout<<"test 13 ";
	cout << (test == InfInt("630821981232049077153968754962749523081807183146066206117113183731402342711043098749840379462930023511797056761351872538504561892513519965295681315860241773424477158522763562784883823332990862686545959494130817655873468561704898850066614178984070970567484199725753624874207555094479644447226153595335396571868011204401103956247746682262065216327855898624") ? "passed" : "failed") << endl;
	test = n4 >> s1;
	cout<<"test 14 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
