#include <iostream>
using namespace std;
int main ()
{
	long long int a,b,i,j,cem=0,k;
	int A[3][3],B[3][3];
	cout<<"@codcoder_ project\n";
	cout<<"1-ci matrisi daxil edin\n";
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"2-ci matrisi daxil edin\n";
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cin>>B[i][j];
		}
	}
	cout<<"Iki matrisin hasili\n";
	for (i=0;i<3;i++)
	{
		cem = 0;
		for (j=0;j<3;j++)
		{
			cem = 0;
			for (k=0;k<3;k++)
			{
				cem = A[i][k] * B[k][j] + cem;
			}
			cout<<cem<<" ";
		}
		cout<<endl;
	}
}


