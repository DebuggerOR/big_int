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
	InfInt n0("390266336132885706811931247437321015603399650666199592147202523576");
	InfInt n1("710716053933");
	InfInt n2("575196734319836033619213771203324574959337242105176485799135719050389532538523");
	InfInt n3("403500632");
	InfInt n4("89090045214356101788476598967377090627406108842136809497048784009171664196890645535899948405228");
	int s0 = 1301;
	int s1 = 1824;
	test = n2 + n2;
	cout<<"test 0 ";
	cout << (test == InfInt("1150393468639672067238427542406649149918674484210352971598271438100779065077046") ? "passed" : "failed") << endl;
	test = n1 - n2;
	cout<<"test 1 ";
	cout << (test == InfInt("-575196734319836033619213771203324574959337242105176485799135719049678816484590") ? "passed" : "failed") << endl;
	test = n3 / n1;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n1 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("710716053933") ? "passed" : "failed") << endl;
	test = n4 ^ n2;
	cout<<"test 4 ";
	cout << (test == InfInt("89090045214356101263081320652178686583622871753744634448338067650242114487176720747707135338359") ? "passed" : "failed") << endl;
	test = n0 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("390266336132885706811931247437321015603399650666199592147202523576") ? "passed" : "failed") << endl;
	test = n1 | n2;
	cout<<"test 6 ";
	cout << (test == InfInt("575196734319836033619213771203324574959337242105176485799135719050389938470847") ? "passed" : "failed") << endl;
	test2 = n3 < n3;
	cout<<"test 7 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n0 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 > n3;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 <= n4;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n4 >= n0;
	cout<<"test 11 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test = n3 << s0;
	cout<<"test 12 ";
	cout << (test == InfInt("17614429354397194759520352464140429306870654447356658472467609870944116648060102508802566084516674203708248835032664897484416113749471577373102148985025561743721951343781977914371685263303040088089896786754678554472497899716224298667298838718119256492110542117556920667472479034647753782577285536036492899960906506593196604628746560206232522352783074113583111838980158766344685432756092093474499723264") ? "passed" : "failed") << endl;
	test = n0 >> s1;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
