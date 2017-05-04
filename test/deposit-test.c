#include <ctest.h>
#include <../src/deposit.h>

CTEST(test_number_one, dataent)
{
    // Given
    const int a = 199;
    const int b = 39999;
    
    // When
    int result = dataent (a,b);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

////*********************************////

CTEST(test_day1_9999sum, dataent)
{
    // Given
    const int a = 1;
    const int b = 9999;
    
    // When
    int result = dataent (a,b);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_negday_sum10001, dataent)
{
	// When
    int result = dataent (-1,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_days366_sum10001, dataent)
{
	// When
    int result = dataent (366,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_day1_sum10000, to_profit)
{	
	// When
    int result = profit (1,10000);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_sum10000days30, to_profit)
{
	// When
    int result = profit (10000,30);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_30days_sum100000, to_profit)
{
	// When
    int result = profit (30,100000);

    // Then
    int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_31days_sum10000, to_profit)
{
	// When
    int result = profit (31,10000);

    // Then
    int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum10000, to_profit)
{
	// When
    int result = profit (241,10000);

    // Then
    int expected = 11200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum100000, to_profit)
{
	// When
    int result = profit (241,100000);

    // Then
    int expected = 115000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(test_241days_sum110000, to_profit)
{
	// When
    int result = profit (365,110000);

    // Then
    int expected = 126500;
    ASSERT_EQUAL(expected, result);
}
