#include "..\cppunitlite\TestHarness.h"

using namespace std;

int main()
{
    TestResult tr;
    TestRegistry::runAllTests(tr);

    return 0;
}

TEST (first, first) {
    FAIL("test...");
}

TEST (second, first) {
    FAIL("test 2...");
}
