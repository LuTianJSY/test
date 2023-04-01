#include <iostream>
using namespace std;
#include <string.h>
#include <initializer_list> 

int add(initializer_list<int> param)
{
	int result=0;
	for(auto it=param.begin();it!=param.end();it++)
		result+=*it;
	return result;
}
int main()
{
    cout<<add({1,2,3,4,4,5})<<endl;//参数必须用大括号括起来 
    return 0;
}
