

#include <stdio.h> 


void printLegalPairs(char pairs[], int l, int r, int count)
{
	/* Not a Valid case */
	if(l>r) return;
	/* Valid Case */
	if(l == 0 && r == 0) {
		printf("%s\n",pairs);
		return;
	}
	if(l > 0) {
		pairs[count] = '(';
		printLegalPairs(pairs, l-1, r, count +1);
	}
	if(r > 0) {
		pairs[count] = ')';
		printLegalPairs(pairs, l, r-1, count+1);
	}
}




int main()
{
	char print_pairs[7];
	print_pairs[6] = '\0';

	printLegalPairs(print_pairs, 3, 3, 0);
	return 0;
}