#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];

	printf("パスワードを入力してください :");
	scanf("%99s", a);

	int upperCaseCount = 0;
	int lowerCaseCount = 0;
	int other = 0;
	int length = strlen(a);
	
	for (int i = 0; i < length; i++)
	{

		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			upperCaseCount++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			lowerCaseCount++;
		}
		else
		{
			other++;
		}
	}
	if(length >= 8 && length <= 16 && lowerCaseCount > 0 && lowerCaseCount > 0 && other > 0)
    {
        printf("条件を満たしています");
    }
    else{
        printf("条件を満たしていません");
    }
    
	return 0;
}
