#include<iostream>
using namespace std;
int main(){
	int n,i=2,f=1;
	cin >> n;
	while (i <= n)
	{
		f *= i;
		++i;//这里用++i和i++是没有区别的
	}
	cout << n << "的阶乘是" << f << endl;
	return 0;
}