/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Adiel Ben Meir>
 *
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}


TEST_CASE ("Good input") {
            CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
                                                            "@-------@\n"
                                                            "@-@@@@@-@\n"
                                                            "@-@---@-@\n"
                                                            "@-@@@@@-@\n"
                                                            "@-------@\n"
                                                            "@@@@@@@@@"));

            CHECK(nospaces(mat(3, 7, '@', '-')) == nospaces("@@@\n"
                                                            "@-@\n"
                                                            "@-@\n"
                                                            "@-@\n"
                                                            "@-@\n"
                                                            "@-@\n"
                                                            "@@@"));

            CHECK(nospaces(mat(3, 1, '@', '-')) == nospaces("@@@"));

    /* Add more test here */
}

TEST_CASE ("one of the input = 1") {
            CHECK(nospaces(mat(1, 7, '@', '-')) == nospaces("@\n"
                                                            "@\n"
                                                            "@\n"
                                                            "@\n"
                                                            "@\n"
                                                            "@\n"
                                                            "@"));

            CHECK(nospaces(mat(1, 1, '@', '-')) == nospaces("@"));
            CHECK(nospaces(mat(1, 3, '@', '-')) == nospaces("@\n"
                                                            "@\n"
                                                            "@"));
            CHECK(nospaces(mat(3, 1, '@', '-')) == nospaces("@@@"));
            CHECK(nospaces(mat(11, 1, '@', '-')) == nospaces("@@@@@@@@@@@"));

}

// TEST_CASE ("invalid input"){
//     CHECK_THROWS(mat(3, 5,'%'));
//     CHECK_THROWS(mat(3, 7, '%'));
//     CHECK_THROWS(mat(3, 9, '$'));
//     CHECK_THROWS(mat(5, 11, '$'));
//     CHECK_THROWS(mat(3 '$', '%'));
//     CHECK_THROWS(mat(9, '$', '%'));
//     CHECK_THROWS(mat(11, '%'));
//     CHECK_THROWS(mat(13,'%'));
//     CHECK_THROWS(mat('%'));
//     CHECK_THROWS(mat('$'));
//     CHECK_THROWS(mat(3));
//     CHECK_THROWS(mat(9));




// }

TEST_CASE ("even input") {
    CHECK_THROWS(mat(4, 6, '$', '%'));
    CHECK_THROWS(mat(2, 7, '$', '%'));
    CHECK_THROWS(mat(3, 6, '$', '%'));
    CHECK_THROWS(mat(5, 8, '$', '%'));
    CHECK_THROWS(mat(8, 3, '$', '%'));
    CHECK_THROWS(mat(12, 9, '$', '%'));
    CHECK_THROWS(mat(4, 12, '$', '%'));
    CHECK_THROWS(mat(2, 13, '$', '%'));
    CHECK_THROWS(mat(3, 18, '$', '%'));
    CHECK_THROWS(mat(5, 10, '$', '%'));
    CHECK_THROWS(mat(2, 3, '$', '%'));
    CHECK_THROWS(mat(10, 9, '$', '%'));
    CHECK_THROWS(mat(12, 6, '$', '%'));
    CHECK_THROWS(mat(12, 7, '$', '%'));
    CHECK_THROWS(mat(3, 16, '$', '%'));
    CHECK_THROWS(mat(5, 18, '$', '%'));
    CHECK_THROWS(mat(18, 3, '$', '%'));
    CHECK_THROWS(mat(12, 19, '$', '%'));
}

TEST_CASE ("negative input") {
    CHECK_THROWS(mat(-4, -6, '$', '%'));
    CHECK_THROWS(mat(2, -7, '$', '%'));
    CHECK_THROWS(mat(-3, 6, '$', '%'));
    CHECK_THROWS(mat(5, -8, '$', '%'));
    CHECK_THROWS(mat(-8, 3, '$', '%'));
    CHECK_THROWS(mat(-12, -9, '$', '%'));
}


// }

// TEST_CASE ("Bad input") {
//     CHECK_THROWS(mat(10, 5, '$', '%'));
//     /* Add more test here */
// }


/* Add more test cases here */
