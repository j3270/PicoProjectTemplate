
#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/SimpleString.h"

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

