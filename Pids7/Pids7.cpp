#include <iostream>
#include <cstdio>
using namespace std;
char s[20];
int l, i, k = 0;
void main() {
	puts("Input a string =>"); gets_s(s);
	l = strlen(s);
	s[l] = ' '; s[l + 1] = '\0'; l++;
	for (i = l; i > 0; i--)
		if ((s[i] == ' ') && (s[i - 1] != ' ')) k++;
	printf("The string %s have %d words", s, k);
	system("pause");
}
