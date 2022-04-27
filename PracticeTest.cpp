/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}



///////////////////////////
/*COUNT STARTING REPEATS*/
/////////////////////////


TEST(PracticeTest, zzz_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("zzz"), 2);
}

TEST(PracticeTest, abccc_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("abccc"), 0);
}

TEST(PracticeTest, aaaabbbbbccc_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("aaaabbbbbccc"), 3);
}

TEST(PracticeTest, aabbbbbccc_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("aabbbbbccc"), 1);
}

TEST(PracticeTest, zzzzyyyyyyyyyyxxxxxxxx_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("zzzzyyyyyyyyyyxxxxxxxx"), 3);
}

TEST(PracticeTest, single_q_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("q"), 0);
}

TEST(PracticeTest, empty_string_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats(""), 0);
}

TEST(PracticeTest, endline_repeats)
{
	Practice testObject;

	ASSERT_EQ( testObject.count_starting_repeats("\n\n\n"), 2);
}


//////////////
/*PALINDROME*/
//////////////


TEST(PracticeTest, racecar_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("racecar"), true);
}

TEST(PracticeTest, apple_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("apple"), false);
}

TEST(PracticeTest, aaabbbbaaa_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("aaabbbbaaa"), true);
}

TEST(PracticeTest, aaabbbaaa_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("aaabbbaaa"), true);
}

TEST(PracticeTest, single_a_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("a"), true);
}

TEST(PracticeTest, Case_Sensitive_palindrome)
{
	Practice testObject;

	ASSERT_EQ( testObject.isPalindrome("rAcECaR"), true);
}


////////////////////
/*SORT DESCENDING*/
//////////////////


TEST(PracticeTest, ascending_sortDescending)
{
	Practice testObject;
	int a = 1;
	int b = 2;
	int c = 3;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,3);
	ASSERT_EQ(b,2);
	ASSERT_EQ(c,1);
}

TEST(PracticeTest, twosame_sortDescending)
{
	Practice testObject;
	int a = 10;
	int b = 10;
	int c = 11;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,11);
	ASSERT_EQ(b,10);
	ASSERT_EQ(c,10);
}

TEST(PracticeTest, threesame_sortDescending)
{
	Practice testObject;
	int a = 10;
	int b = 10;
	int c = 10;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,10);
	ASSERT_EQ(b,10);
	ASSERT_EQ(c,10);
}

TEST(PracticeTest, negatives_sortDescending)
{
	Practice testObject;
	int a = -3;
	int b = -10;
	int c = 11;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,11);
	ASSERT_EQ(b,-3);
	ASSERT_EQ(c,-10);
}

TEST(PracticeTest, max_sortDescending)
{
	Practice testObject;
	int a = 2147483647;
	int b = -2147483647;
	int c = 0;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,2147483647);
	ASSERT_EQ(b,0);
	ASSERT_EQ(c,-2147483647);
}

TEST(PracticeTest, secondthird_secondfirst_sortDescending)
{
	Practice testObject;
	int a = 0;
	int b = 2147483647;
	int c = 0;

	testObject.sortDescending(a,b,c);

	ASSERT_EQ(a,2147483647);
	ASSERT_EQ(b,0);
	ASSERT_EQ(c,0);
}

////////////////
/*ALL-NIGHTER*/
//////////////


TEST(PracticeTest, nullptr_allnighter)
{
	Practice testObject;

	int sleep[7];

	for(int i = 0; i < 7; i++)
	{
		sleep[i] = 1;
	}

	ASSERT_EQ( testObject.allnighter(sleep), nullptr);
}

TEST(PracticeTest, fourthday_allnighter)
{
	Practice testObject;

	int sleep[7];

	for(int i = 0; i < 7; i++)
	{
		sleep[i] = 1;
	}

	sleep[4] = 0;

	ASSERT_EQ( testObject.allnighter(sleep), &sleep[4]);
}

TEST(PracticeTest, seconddaywithlast_allnighter)
{
	Practice testObject;

	int sleep[7];

	for(int i = 0; i < 7; i++)
	{
		sleep[i] = 100;
	}

	sleep[4] = 0;
	sleep[2] = 0;

	ASSERT_EQ( testObject.allnighter(sleep), &sleep[2]);
}

TEST(PracticeTest, allzero_allnighter)
{
	Practice testObject;

	int sleep[7];

	for(int i = 0; i < 7; i++)
	{
		sleep[i] = 0;
	}

	ASSERT_EQ( testObject.allnighter(sleep), &sleep[0]);
}

TEST(PracticeTest, lastzero_allnighter)
{
	Practice testObject;

	int sleep[7];

	for(int i = 0; i < 7; i++)
	{
		sleep[i] = 100;
	}

	sleep[6] = 0;

	ASSERT_EQ( testObject.allnighter(sleep), &sleep[6]);
}
