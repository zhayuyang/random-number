#include<iostream>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<queue>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	srand(time(NULL));
	long long n,m;
	cout<<"�˳�������-1 -1�˳�"<<endl;
	cout<<"���������������������(����):"<<endl;
	while(cin>>n>>m){
		if(n==-1&&m==-1)break;
		if(m==n){
			cout<<"�������!"<<endl;
			continue;
		}
		if(m<n)swap(m,n);
		cout<<"������:"<<rand()%(m-n+1)+n<<endl;
		cout<<"���������������������(����):"<<endl;
	}
	system("pause");
	return 0;
}

