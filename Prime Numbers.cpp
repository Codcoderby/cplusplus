#include <iostream>
using namespace std;
int main()
{
	int num1, num2, i, j, count = 0;
	cout<<"@codcoder_ project:"<<endl;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	i = num1 + 1;
	cout<<"Prime numbers between these numbers:"<<endl;
	while (i < num2)
	{
		for (j = i; j > 0; j--)
		{
			if (i % j == 0)
			{
				count++;
			}
			
			if (count >= 3){
				break;
			}
		}
		if (count == 2){
			cout << i << " " ;
		}
		i++;
		count = 0;
	}
}




