void foo() {
	char buffer[10];
	char *pc;
	pc = buffer;
	for (int i = 0; i <= 10; i++)
		*pc++ = 'X';
}