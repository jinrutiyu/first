#include<iostream>
using namespace std;
int main(){
	int n,i=2,f=1;
	cin >> n;
	while (i <= n)
	{
		f *= i;
		++i;//������++i��i++��û�������
	}
	cout << n << "�Ľ׳���" << f << endl;
	return 0;
}