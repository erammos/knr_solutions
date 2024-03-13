#include <stdio.h>
#define MAXLINE 1000
#define LONG_LINE 80
#define MAXLINES 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char lines[MAXLINES][MAXLINE];
    int num = 0;

    while ((len = getline(line, MAXLINE)) > 0 && num < MAXLINES) {
	if (len > (LONG_LINE + 1)) {
	    copy(lines[num], line);
	    num++;
	}
    }

    printf("Lines over 80 characters:\n");
    int i;
    for (i = 0; i < num; i++) {
	printf("%s\n", lines[i]);
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

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
	++i;
}
