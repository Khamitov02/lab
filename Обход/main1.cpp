#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <chrono>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
 freopen("out1.txt", "w", stdout);
 double g;
unsigned long long int a;

ofstream fout;


//vect
	for (unsigned long long int size = 10000; size <= 10000000; size += 10000)
	{g=0;
		vector<unsigned long long int> v;


		for (unsigned long long int i = 0; i < size; i++)
		{
			v.push_back(i);
		}

		auto begin1 = chrono::high_resolution_clock::now();

		for (int i = 0; i < size; i++)
		{
			 v[i]++;
		}

		auto end1 = chrono::high_resolution_clock::now();

		g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
cout <<  g<< " " << v.size() << endl;
	}



//forwardlist


freopen("out2.txt", "w", stdout);
	for (unsigned long long int size = 10000; size <= 10000000; size += 10000)
	{g=0;
		forward_list<unsigned long long int> f;


		for (unsigned long long int i = 0; i < size; i++)
		{
			f.push_front(i);
		}

		auto begin1 = chrono::high_resolution_clock::now();

		for (forward_list<unsigned long long int>::iterator it = f.begin(); it != f.end(); ++it)
		{
			*it++;
		}

		auto end1 = chrono::high_resolution_clock::now();

		g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
cout <<  g<< " " << distance(f.begin(), f.end()) << endl;
	}


	//list

	freopen("out3.txt", "w", stdout);

	for (unsigned long long int size = 10000; size <= 10000000; size += 10000)
	{g=0;
		list<unsigned long long int> ll;


		for (unsigned long long int i = 0; i < size; i++)
		{
			ll.push_back(i);
		}

		auto begin1 = chrono::high_resolution_clock::now();

		for (list<unsigned long long int>::iterator it = ll.begin(); it != ll.end(); ++it)
		{
			(*it)++;
		}

		auto end1 = chrono::high_resolution_clock::now();

	g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
cout <<  g<< " " << ll.size() << endl;
	}


//map

freopen("out4.txt", "w", stdout);
	for (unsigned long long int size = 10000; size <= 10000000; size += 10000)
	{g=0;
		map<unsigned long long int, unsigned long long int> Map;

		for (unsigned long long int i = 0; i < size; i++)
		{
			Map.insert({i, 0});
		}

		auto begin1 = chrono::high_resolution_clock::now();

		for (map<unsigned long long int, unsigned long long int>::iterator it = Map.begin(); it != Map.end(); ++it)
		{
			(it->second)++;
		}

		auto end1 = chrono::high_resolution_clock::now();

		g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
cout <<  g<< " " << Map.size() << endl;
	}



//set

	freopen("out5.txt", "w", stdout);

	for (unsigned long long int size = 10000; size <= 10000000; size += 10000)
	{g=0;
		set<unsigned long long int> Set;

		for (unsigned long long int i = 0; i < size; i++)
		{
			Set.insert(i);
		}

		auto begin1 = chrono::high_resolution_clock::now();

		for (set<unsigned long long int>::iterator it1 = Set.begin(); it1 != Set.end(); ++it1)
		{
			*it1++;
		}

		auto end1 = chrono::high_resolution_clock::now();

		g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
cout <<  g<< " " << Set.size() << endl;
	}




	return 0;

}

