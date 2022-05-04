// first method
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "i+i+i";
	int count = 0;

	printf("The grammar is: E->E+E,E->E*E, E->i\n");
	int flag = 0;
	if (str[0] == 'i')
	{
		for (int j = 1; j < str.length(); j++)
		{
			if (str[j] == 'i' && str[j - 1] == 'i')
			{
				cout << "The string does not belong to the specified grammar";
			}
			else if (str[j] == '+' || '-' || '/' || '*')
			{
				flag = 1;
				continue;
			}

			else if (str[j] == 'i')
			{
				if (str[j + 1] == '\0')
				{
					cout << "valid";
					return 0;
				}
				continue;
			}
		}
	}
	return 0;
}
// second method
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char string[50];
	int flag, count = 0;

	printf("The grammar is: S->aS, S->Sb, S->ab\n");
	printf("Enter the string to be checked:\n");
	cin >> string;
	if (string[0] == 'a')
	{
		flag = 0;
		for (count = 1; string[count - 1] != '\0'; count++)
		{
			if (string[count] == 'b')
			{
				flag = 1;
				continue;
			}
			else if ((flag == 1) && (string[count] == 'a'))
			{
				printf("The string does not belong to the specified grammar");
				break;
			}
			else if (string[count] == 'a')
				continue;
			else if ((flag == 1) && (string[count] = '\0'))
			{
				printf("String not accepted…..!!!!");
				break;
			}
			else
			{
				printf("String accepted");
			}
		}
	}
}
