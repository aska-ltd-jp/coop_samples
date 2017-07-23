typedef struct TestAbcTag *TestAbc;

typedef struct TestAbcClassMethodTab {
	TestAbc (*create)(int);
} TestAbcClassMethod;

typedef struct TestAbcMethodTag {
	void (*increment)(void);
	void (*decrement)(void);
	int (*getValue)(void);
	//TestAbc (*destroy)(void);
	void *(*destroy)(void);
} TestAbcMethod;

TestAbcClassMethod*
TestAbc_(void);

static TestAbc
create(int);

TestAbcMethod*
testAbc(TestAbc);

static void
increment(void);

static void
decrement(void);

static int
getValue(void);

static void*
destroy(void);
