#include "progressBar.cpp"
#include <time.h>
#include <chrono>

using namespace std;

int main() 
{
	int test1= 0;
	int test2= 1000;
	int* test1ptr;
	test1ptr= &test1;
	int* test2ptr;
	test2ptr= &test2;
	string symbol= "*";
	thread startWorker(progressBar, test1ptr, test2ptr, symbol);
	while(*test2ptr>=*test1ptr)
	{
		*test1ptr+= 10;
		std::this_thread::sleep_for (std::chrono::seconds(1));	
	}
	startWorker.join();
}