#include <stdio.h>
#include <stdlib.h>

#include "TestAbc.h"

typedef struct TestAbcTag {
	int value;
} TestAbcField;

static TestAbc me;

static TestAbcMethod testAbcMethod = {
	increment,
	getValue,
	destroy
};

TestAbc
TestAbc_new(int num) {
	TestAbc instance = (TestAbc)malloc(sizeof(TestAbcField));
	instance->value = num;
	return instance;
}

TestAbcMethod*
testAbc(TestAbc instance) {
	me = instance;
	return &testAbcMethod;
}

static void
increment(void) {
	++me->value;
}

static int
getValue(void) {
	return me->value;
}

static void*
destroy(void) {
	free(me);
	return NULL;
}
