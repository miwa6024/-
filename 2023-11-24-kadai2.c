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
 if (upperCaseCount == 0)
 {
 	printf("大文字が含まれていません ");
 }
if (lowerCaseCount == 0)
{
    printf("小文字が含まれていません ");
}
if (other == 0)
{
    printf("その他の文字が含まれていません ");
}
if (!length >= 8 && !length <= 16)
{
    printf("文字数が条件外です");
}
	return 0;
}
