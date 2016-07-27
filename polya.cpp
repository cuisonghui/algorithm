#include <iostream>
#include <map>


using namespace std;

void zuoyi(unsigned char& polya)
{
	const unsigned char maxv = 0X80;
	bool maxBit = polya & maxv;
	polya <<= 1;
	if(maxBit)
		polya +=1;
}

int polya()
{
	unsigned char polyaNum=1;
	map<int,int> map_dedup;
	for(unsigned char polyaNum=0;polyaNum<256;polyaNum++)
	{
		unsigned char value = polyaNum;
		zuoyi(value);	
		std::cout <<(int)polyaNum <<"--->" <<(int)(value) << std::endl;
		if(polyaNum ==255)
			break;
	}
}

int main()
{
	polya();
}
