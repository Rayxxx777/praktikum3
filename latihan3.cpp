#include <iostream>

using namespace std;
int main()
{
	int a,b,c;

	cout << " masukan nilai pertama : ";
	cin >> a ;
	cout << " masukan nilai ke-dua : ";
	cin >> b ;
	cout << " masukan nilan ke-tiga : ";
	cin >> c ;

	if (a<b){
		if (b<c)
		cout << "nilai tengahnya adalah : "<< b ;
		else{
			if (a<c)
				cout << "nilai tengahnya adalah : "<< c ;
			else
				cout << "nilai tengahnya adalah : "<< a ;
		}	
	}

	else
	{
		if (a<c)
			cout << "nilai tengahnya adalah : "<< a ;
		else
		{
			if(b<c)
				cout << "nilai tengahnya adalah : "<< c ;
			else
				cout << "nilai tengahnya adalah : "<< b ;

		}
	}

return 0;
}