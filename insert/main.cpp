#include "subvector.cpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
   freopen("out.txt", "w", stdout);


long long int g=0;
for (int size = 10000; size <= 1000000; size += 10000)
	{
		vector<int> vec;
g=0;
		for (int i = 0; i < size; i++)
		{
			vec.push_back(i);
		}

		for (int i = 0; i < 100; i++)
		{

			int rand_place = rand()%(size-1) + 1;

			auto begin1 = chrono::high_resolution_clock::now();
			vec.insert(vec.begin()+rand_place,0);
            auto end1 = chrono::high_resolution_clock::now();
g+=chrono::duration_cast <chrono::microseconds>(end1 - begin1).count();
			vec.pop_back();



		}

 cout <<  g/100<< " " << vec.size() << endl;



        }
        freopen("out1.txt", "w", stdout);
        for (int size = 10000; size <= 1000000; size += 10000)
	{
		subvector sub;g=0;

		for (int i = 0; i < size; i++)
		{
			sub.push_back(i);
		}

		for (int i = 0; i < 100; i++)
		{

			int p = rand()%(size-1);

			auto begin1 = chrono::high_resolution_clock::now();
			sub.insert(0, p);
			auto end1 = chrono::high_resolution_clock::now();

			sub.pop_back();
g+=chrono::duration_cast <chrono::microseconds>(end1 - begin1).count();
		}

		 cout <<  g/100<< " " << sub.size() << endl;
	}
        return 0;
}
