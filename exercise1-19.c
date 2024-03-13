#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void reverse(int len, char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
	reverse(len, line);
	printf("%s", line);
    }

    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;
    if (c == '\n') {
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(int len, char line[])
{
    int i;
    for (i = 0; i < (len - 1) / 2; i++) {
	char c = line[i];
	line[i] = line[len - i - 2];
	line[len - i - 2] = c;
    }
}

