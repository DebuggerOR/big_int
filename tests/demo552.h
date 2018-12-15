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
	InfInt n0("7587027842172852816382821536778848923937674129177688574697530978581062174431984684478018");
	InfInt n1("4380340102900532306026083147480130116617426740596465529874553458920914962");
	InfInt n2("530173308556593590405634053661887107193809452551125266424583204101324680704279982211746546");
	InfInt n3("71618992719646980794309693935004734454494237198594810273689121953112207182");
	InfInt n4("947974721271901717083653306006850658647923448351748584226207317998874852693513124");
	int s0 = 1291;
	int s1 = 1329;
	test = n4 + n1;
	cout<<"test 0 ";
	cout << (test == InfInt("947974725652241819984185612032933806128053564969175324822672847873428311614428086") ? "passed" : "failed") << endl;
	test = n4 - n1;
	cout<<"test 1 ";
	cout << (test == InfInt("947974716891561614183120999980767511167793331734321843629741788124321393772598162") ? "passed" : "failed") << endl;
	test = n3 / n4;
	cout<<"test 2 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n0 % n0;
	cout<<"test 3 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	test = n2 ^ n3;
	cout<<"test 4 ";
	cout << (test == InfInt("530173308556593631876931746976420964844767223288486116205523812854968097324358743858046396") ? "passed" : "failed") << endl;
	test = n1 & n0;
	cout<<"test 5 ";
	cout << (test == InfInt("777311723071233804067242001514888909973914154326985171844858417772756994") ? "passed" : "failed") << endl;
	test = n0 | n4;
	cout<<"test 6 ";
	cout << (test == InfInt("7587027907340543885246128392534129023958222144882885146517557470595828942168646089687014") ? "passed" : "failed") << endl;
	test2 = n0 < n2;
	cout<<"test 7 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 == n1;
	cout<<"test 8 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test2 = n2 > n1;
	cout<<"test 9 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n0 <= n0;
	cout<<"test 10 ";
	cout << (test2 == true ? "passed" : "failed") << endl;
	test2 = n1 >= n2;
	cout<<"test 11 ";
	cout << (test2 == false ? "passed" : "failed") << endl;
	test = n4 << s1;
	cout<<"test 12 ";
	cout << (test == InfInt("11108642590736484747363560362251169258767608103452925720724442683765639313981929085289344485239721224274259475296205303640376551464403400126003743424021240793579297094634898376707560568208732570549241832686817601950017254203879498454171195615751908336602672773221147973834046219667604597039193454798168167732128363584570140281752451637075784971541025738819535195523335780507737704349457352774519887856982141272544724447878779316965684392787512088598605329365951077695805449555673088") ? "passed" : "failed") << endl;
	test = n4 >> s0;
	cout<<"test 13 ";
	cout << (test == InfInt("0") ? "passed" : "failed") << endl;
	

	system("pause");
	return 0;
}
