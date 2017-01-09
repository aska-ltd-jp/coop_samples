#include <stdio.h>

#include "TestAbc.h"

int
getValue(void) {
	return 1;
}

int
main(int argc, char **argv) {
	TestAbc ab = TestAbc_new(10);
	TestAbc bc = TestAbc_new(100);
	
	printf("getValue() : %18d\n", getValue());
	
	printf("testAbc(ab)->getValue() : %5d\n", testAbc(ab)->getValue());
	printf("testAbc(bc)->getValue() : %5d\n", testAbc(bc)->getValue());
	
	printf("\n");
	
	testAbc(ab)->increment();
	printf("testAbc(ab)->increment()\n");
	
	testAbc(bc)->increment();
	printf("testAbc(bc)->increment()\n");
	
	printf("\n");
	
	printf("getValue() : %18d\n", getValue());
	printf("testAbc(ab)->getValue() : %5d\n", testAbc(ab)->getValue());
	printf("testAbc(bc)->getValue() : %5d\n", testAbc(bc)->getValue());
	
	ab = (TestAbc)testAbc(ab)->destroy();
	bc = (TestAbc)testAbc(bc)->destroy();
	
	return 0;
}
