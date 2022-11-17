#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *in;
	FILE *out;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	if (in == NULL) {
		printf("파일을 여는 데 실패했습니다.\n");
		return 0;
	}

	int n;
	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);
}
