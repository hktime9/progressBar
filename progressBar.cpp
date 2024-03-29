#include <iostream>
#include <thread> 
#include <stdlib.h>

using namespace std;

void progressBar(int* val, int *tarVal, string marker)
{
	bool completed= 0;
	while(!completed)
	{
		if(*val>*tarVal)
		{
			completed= 1;
			cout << endl;
		}
		else
		{
			double percentage= (static_cast<double>(*val)/static_cast<double>(*tarVal))*100.0;
			int sprite1= static_cast<int>(percentage);
			sprite1= sprite1/10;
			string compString1= "";
			string bar1= "";
			string compString2= "";
			string bar2= "";
			if(sprite1>=5)
			{
				for(int i=0;i<5;i++)
				{
					compString1= compString1+marker;
				}
				int sprite2= sprite1-5;
				for(int i=0;i<sprite2;i++)
				{
					compString2= compString2+marker;
				}
				for(int i=0;i<((marker.length())*(5-sprite2));i++)
				{
					bar2= bar2+" ";
				}
			}
			else
			{
				for(int i=0;i<sprite1;i++)
				{
					compString1= compString1+marker;
				}
				for(int i=0;i<((marker.length())*(5-sprite1));i++)
				{
					bar1= bar1+" ";
				}
				for(int i=0;i<5*marker.length();i++)
				{
					bar2= bar2+" ";
				}
			}
			cout << "\r[" << compString1+bar1 << " " << percentage << "% " << compString2+bar2 << "]";		
		}
	}
}