#include <iostream>
using namespace std;
string toRoman(int cem) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string roman = "";
    for (int i = 0; i < 13; i++) {
        while (cem >= values[i]) {
            roman += romanSymbols[i];
            cem -= values[i];
        }
    }
    return roman;
}
int main ()
{
	string n;
	char c;
	int h=1,v=5,x=10,cem=0,say=0,l=50;
	cin>>n;
	for (int i=0;i<n.size();i++)
	{
		c = n[i];
		if (c=='+')
		{
			continue;
		}
		else
		{
			say++;
			if (c=='I')
			{
				if (n[i+1]=='V' || n[i+1]=='X')
				{
					cem = cem-1;
				}
				else
				{
					cem = cem+1;
				}
			}
			else if (c=='V')
			{
			    cem = cem + v;
			}
			else if (c=='X')
			{
				if (n[i+1]=='L' || n[i+1]=='C')
				{
					cem = cem - 10;
				}
				else
				{
					cem = cem + x;
				}
			}
			else if (c=='L')
			{
				cem = cem + l;
			}
			else if (c=='C')
			{
				if (n[i+1]=='D' || n[i+1]=='M')
				{
					cem = cem - 100;
				}
				else
				{
					cem = cem + 100;
				}
			}
			else if (c=='D')
			{
				cem = cem + 500;
			}
			else if (c=='M')
			{
				cem = cem+1000;
			}
		}
	}
    string romanNumeral = toRoman(cem);
    cout << romanNumeral << endl;
    return 0;
}
