/*	Exercise 1-18
 *	Write a program to remove trailing blanks and tabs from each line of input,
 *	and to delete entirely blank lines.
 */

 #include <stdio.h>
 #define MAXLINE 1000	/* maximum input line size */

 int getline(char line[], int maxline);
 int firstnonblank(char line[], int length);

 int main(void)
 {
 	int len, i;
 	char line[MAXLINE];

 	while ((len = getline(line, MAXLINE)) > 0) {
 		/*	terminates the string early, change it to a '|' or something to get
		 *	a visual effect */
 		line[1+firstnonblank(line, len)] = '\0';
 		printf("%s\n", line);
 	}
 	return 0;
 }

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* firstnonblank: returns the index of the first nonblank character of s */
int firstnonblank(char s[], int length)
{
	int i;

	for (i = length - 1; i > -1; --i) {
		if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n') {
			printf("Found! Returning %d\n", i);
			return i;
		} /* TODO: Find a way to shorten a string if possible */
	}

	printf("Returning %d\n", i);
	return i;
}
