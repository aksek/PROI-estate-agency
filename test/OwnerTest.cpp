
#include "Owner.h"

#define BOOST_TEST_MODULE Owner test
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE (constructor_tests) {
    Owner a;
    BOOST_CHECK_EQUAL(a.getName(), "Unknown Johnny");
    BOOST_CHECK_EQUAL(a.getAge(), 1);

    Owner b("Johnny", "Depp", 50);
    BOOST_CHECK_EQUAL(b.getName(), "Depp Johnny");
    BOOST_CHECK_EQUAL(b.getAge(), 50);

    Owner c("Jon", "Snow");
    BOOST_CHECK_EQUAL(c.getName(), "Snow Jon");
    BOOST_CHECK_EQUAL(c.getAge(), 1);

    Owner d("Jon");
    BOOST_CHECK_EQUAL(d.getName(), "Unknown Jon");
    BOOST_CHECK_EQUAL(d.getAge(), 1);
}

BOOST_AUTO_TEST_CASE (data_setting_tests) {
    Owner a;
    a.setData("John", "Watson", 30);
    BOOST_CHECK_EQUAL(a.getName(), "Watson John");
    BOOST_CHECK_EQUAL(a.getAge(), 30);

    a.setData("Johnny", "Depp", 0);
    BOOST_CHECK_EQUAL(a.getName(), "Depp Johnny");
    BOOST_CHECK_EQUAL(a.getAge(), 30);

    Owner b;
    b.setData(45);
    BOOST_CHECK_EQUAL(b.getName(), "Unknown Johnny");
    BOOST_CHECK_EQUAL(b.getAge(), 45);

    Owner c;
    c.setData("Jon");
    BOOST_CHECK_EQUAL(c.getName(), "Unknown Jon");
    BOOST_CHECK_EQUAL(c.getAge(), 1);

    c.setData(20);
    BOOST_CHECK_EQUAL(c.getName(), "Unknown Jon");
    BOOST_CHECK_EQUAL(c.getAge(), 20);


    c.setData(0);
    BOOST_CHECK_EQUAL(c.getName(), "Unknown Jon");
    BOOST_CHECK_EQUAL(c.getAge(), 0);
}

BOOST_AUTO_TEST_CASE (get_info_tests) {
    Owner a;
    BOOST_CHECK_EQUAL(a.getInfo(), "Unknown Johnny age:1");

    Owner b("Johnny", "Depp", 50);
    BOOST_CHECK_EQUAL(b.getInfo(), "Depp Johnny age:50");

    Owner c("Jon", "Snow");
    BOOST_CHECK_EQUAL(c.getInfo(), "Snow Jon age:1");

    Owner d("Jon");
    BOOST_CHECK_EQUAL(d.getInfo(), "Unknown Jon age:1");
}


