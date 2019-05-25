
#include "Owner.h"

#define BOOST_TEST_MODULE Owner test
#include <boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_CASE (constructor_tests) {
    Owner a;
    BOOST_CHECK_EQUAL(a.getInfo(), "Unknown Johnny age:1");

    Owner b("Johnny", "Depp", 50);
    BOOST_CHECK_EQUAL(b.getInfo(), "Depp Johnny age:50");

    Owner c("Jon", "Snow");
    BOOST_CHECK_EQUAL(c.getInfo(), "Snow Jon age:1");

    Owner d("Jon");
    BOOST_CHECK_EQUAL(d.getInfo(), "Unknown Jon age:1");
}

BOOST_AUTO_TEST_CASE (data_setting_tests) {
    Owner a;
    a.setData("John", "Watson", 30);
    BOOST_CHECK_EQUAL(a.getInfo(), "Watson John age:30");

    a.setData("Johnny", "Depp", 0);
    BOOST_CHECK_EQUAL(a.getInfo(), "Depp Johnny age:30");

    Owner b;
    b.setData(45);
    BOOST_CHECK_EQUAL(b.getInfo(), "Unknown Johnny age:45");

    Owner c;
    c.setData("Jon");
    BOOST_CHECK_EQUAL(c.getInfo(), "Unknown Jon age:1");

    c.setData(20);
    BOOST_CHECK_EQUAL(c.getInfo(), "Unknown Jon age:20");


    c.setData(0);
    BOOST_CHECK_EQUAL(c.getInfo(), "Unknown Jon age:0");

}
