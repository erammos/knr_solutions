#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void trim_end(int n, char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
	trim_end(len, line);
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

void trim_end(int len, char line[])
{
    int i = len - 1;
    while (i >= 0
	   && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'))
	i--;
    line[i + 1] = '\0';
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
	++i;
}
