/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "complexTests.cpp"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "complexTests.cpp", 5, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testDefaultConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDefaultConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 15, "testDefaultConstructor" ) {}
 void runTest() { suite_MyTestSuite.testDefaultConstructor(); }
} testDescription_suite_MyTestSuite_testDefaultConstructor;

static class TestDescription_suite_MyTestSuite_testOneParamConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOneParamConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 21, "testOneParamConstructor" ) {}
 void runTest() { suite_MyTestSuite.testOneParamConstructor(); }
} testDescription_suite_MyTestSuite_testOneParamConstructor;

static class TestDescription_suite_MyTestSuite_testTwoParamConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testTwoParamConstructor() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 27, "testTwoParamConstructor" ) {}
 void runTest() { suite_MyTestSuite.testTwoParamConstructor(); }
} testDescription_suite_MyTestSuite_testTwoParamConstructor;

static class TestDescription_suite_MyTestSuite_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testGetters() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 33, "testGetters" ) {}
 void runTest() { suite_MyTestSuite.testGetters(); }
} testDescription_suite_MyTestSuite_testGetters;

static class TestDescription_suite_MyTestSuite_testassignmentEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testassignmentEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 39, "testassignmentEqual" ) {}
 void runTest() { suite_MyTestSuite.testassignmentEqual(); }
} testDescription_suite_MyTestSuite_testassignmentEqual;

static class TestDescription_suite_MyTestSuite_testBinaryPlus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBinaryPlus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 47, "testBinaryPlus" ) {}
 void runTest() { suite_MyTestSuite.testBinaryPlus(); }
} testDescription_suite_MyTestSuite_testBinaryPlus;

static class TestDescription_suite_MyTestSuite_testBinaryMinus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBinaryMinus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 57, "testBinaryMinus" ) {}
 void runTest() { suite_MyTestSuite.testBinaryMinus(); }
} testDescription_suite_MyTestSuite_testBinaryMinus;

static class TestDescription_suite_MyTestSuite_testAbs : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAbs() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 67, "testAbs" ) {}
 void runTest() { suite_MyTestSuite.testAbs(); }
} testDescription_suite_MyTestSuite_testAbs;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
