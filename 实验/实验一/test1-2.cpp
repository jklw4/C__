#include <iostream>
#include <cstdlib>
using namespace std;

struct score
{
	int number;
	score* next;
};

class Select
{
private:
	int n;
	score* head,* end,* p;
public:
	Select(int nn)
	{
		n=nn;
	}
	void input()
	{
		head=new score;
		end=head;
		int i;
		for(i=0;i<n;++i)
		{
			p=new score;
			cout<<"input score:";cin>>p->number;
			end->next=p;
			end=p;
		}
		end->next=0;
	}
	void browse()
	{
		p=head;
		while(p->next!=0)
		{
			p=p->next;
			cout<<p->number<<endl;
		}
	}
	void output()
	{
		int i;
		int max=0,min=11,sum=0;
		p=head;
		while(p->next!=0)
		{
			p=p->next;
			sum=sum+p->number;
			if(p->number>max)
			{
				max=p->number;
			}
			if(p->number<min)
			{
				min=p->number;
			}
		}
		sum=sum-min-max;
		cout<<"score="<<sum<<endl;
	}
};

int main()
{	
	Select s(6);
	s.input();
//	s.browse();
	s.output();
	system("pause");
	return 0;
}

