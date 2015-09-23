/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}
TEST(RandoTest, divisbleFunctionWorks)
{
	Rando rando;
	ASSERT_TRUE(rando.isDivisibleBy(2,2));
	ASSERT_TRUE(rando.isDivisibleBy(4,2));
	ASSERT_FALSE(rando.isDivisibleBy(1,2));
	ASSERT_FALSE(rando.isDivisibleBy(1,0));
}
TEST(RandoTest, primeFunctionWorks)
{
	Rando rando;
	ASSERT_TRUE(rando.isPrime(3));
	ASSERT_FALSE(rando.isPrime(4));
}
TEST(RandoTest, zeroFunctionWorks)
{
	Rando rando;
	ASSERT_TRUE(rando.nearestToZero(1,2));
	ASSERT_TRUE(rando.nearestToZero(10,1));
	ASSERT_TRUE(rando.nearestToZero(2,2));
}
/**
 * Note: This exercise was done on Visual Studio installed on Windows.
 * The main function below is based off of some code from this guide:
 * http://www.codeproject.com/Articles/696481/Quick-start-unit-test-How-to-start-working-with-th
 **/
int main(int argc, char* argv[])
{
	/*The method is initializes the Google framework and must be called before RUN_ALL_TESTS */
	::testing::InitGoogleTest(&argc, argv);

	/*RUN_ALL_TESTS automatically detects and runs all the tests defined using the TEST macro.
	It's must be called only once in the code because multiple calls lead to conflicts and,
	therefore, are not supported.
	*/
	int stat = RUN_ALL_TESTS();

	return stat;
}
