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
	cout<<"此程序输入-1 -1退出"<<endl;
	cout<<"请输入生成随机数的两界(包含):"<<endl;
	while(cin>>n>>m){
		if(n==-1&&m==-1)break;
		if(m==n){
			cout<<"输入错误!"<<endl;
			continue;
		}
		if(m<n)swap(m,n);
		cout<<"随机结果:"<<rand()%(m-n+1)+n<<endl;
		cout<<"请输入生成随机数的两界(包含):"<<endl;
	}
	system("pause");
	return 0;
}

