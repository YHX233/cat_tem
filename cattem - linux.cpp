#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;
int main()
{
	char runstr[10000],jieshu[5]="exit",guanyu[6]="about";
	cout<<"+---------------------------+"<<endl;
	cout<<"|        Cat_terminal       |"<<endl;
	cout<<"+---------------------------+"<<endl;
	cout<<"Terminal:";
	while(1)
	{
		cin.getline(runstr,10000);
		if (strcmp(runstr,jieshu)==0)break;
		if (strcmp(runstr,guanyu)==0)
		{
			cout<<"+---------------------+"<<endl;
			cout<<"|Cat_terminal_beta0.1 |"<<endl;
			cout<<"| 2023.ZhLink_studio  |"<<endl;
			cout<<"+---------------------+"<<endl;
		}
		cout<<"Terminal:";
		system(runstr);	
	}
	return 0;
}

