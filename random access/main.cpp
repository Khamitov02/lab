#include "subvector.cpp"
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
   freopen("out.txt", "w", stdout);


double g=0;
for (long long int size = 100000; size <= 5000000; size += 20000)
	{
		vector<long long int> vec;
 g=0;

		for (long long int i = 0; i < size; i++)
		{
			vec.push_back(i);
		}

		for (long long int y = 0; y < 100000; y++)
		{
auto begin1 = chrono::high_resolution_clock::now();
			long long int p = rand()%(size-1) + 1;


			long long int u=vec[p];



auto end1 = chrono::high_resolution_clock::now();
g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();


		}


 cout <<  g/10000<< " " << vec.size() << endl;



        }
        freopen("out1.txt", "w", stdout);
        for (long long int size = 100000; size <= 50000000; size += 20000)
	{
		subvector sub; g=0;


		for (long long int i = 0; i < size; i++)
		{
			sub.push_back(i);
		}

		for (int i = 0; i < 100000; i++)
		{auto begin1 = chrono::high_resolution_clock::now();

			long long int p = rand()%(size-1)+1;


			sub.get_element(p);
auto end1 = chrono::high_resolution_clock::now();
g+=chrono::duration_cast <chrono::nanoseconds>(end1 - begin1).count();
		}



		 cout <<  g/10000<< " " << sub.size() << endl;
	}
        return 0;
}
