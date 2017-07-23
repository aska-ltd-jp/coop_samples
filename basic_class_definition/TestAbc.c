#include <stdio.h>
#include <stdlib.h>

#include "TestAbc.h"

typedef struct TestAbcTag {
	int value;
} field;

static TestAbc me;

static TestAbcClassMethod class_method_struct = {
	create
};

static TestAbcMethod method_struct = {
	increment,
	decrement,
	getValue,
	destroy
};

TestAbcClassMethod*
TestAbc_(void) {
	return &class_method_struct;
}

static TestAbc
create(int num) {
	TestAbc instance = (TestAbc)malloc(sizeof(field));
	instance->value = num;
	return instance;
}

TestAbcMethod*
testAbc(TestAbc instance) {
	me = instance;
	return &method_struct;
}

static void
increment(void) {
	++me->value;
}

static void
decrement(void) {
	--me->value;
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
