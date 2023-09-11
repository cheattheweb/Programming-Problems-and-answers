#include <iostream>
using namespace std;
int main(){
	int children, choco, temp;
	cin >> children >> choco;
	temp = choco;
	while(1)
	{
		if( choco % children == 0){
			break;
			}else
			{
				choco++;
			}
			}
			printf("%d\n",choco - temp);
	return 0;
	}