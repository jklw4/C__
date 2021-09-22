#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Select
{
private:
	int n;
	vector<int> a;
public:
	Select(int nn)
	{
		n=nn;
	}
	void input()
	{
		int temp,i;
		for(i=0;i<n;++i)
		{
			cout<<"input score:";cin>>temp;
			a.push_back(temp);
		}
	}
	void output()
	{
//		sort(a.begin(),a.end());
//		int sum=accumulate(a.begin()+1,a.end()-1,0);
		int sum=accumulate(a.begin(),a.end(),0)
			-*max_element(a.begin(),a.end())
			-*min_element(a.begin(),a.end());		
		cout<<"score="<<sum<<endl;
	}
};

int main()
{	
	Select s(6);
	s.input();
	s.output();
	system("pause");
	return 0;
}

