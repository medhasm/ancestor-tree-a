#include "doctest.h"
#include "FamilyTree.hpp"

TEST_CASE("testing relation") {
family::Tree T("lucifer");
    CHECK(T.relation("lucifer" ) == string("me"));   
    CHECK(T.relation("shalom" ) == string("father"));
    CHECK(T.relation("shalom" ) == string("mother"));
    CHECK(T.relation("shalom" ) == string("grandmother"));
    CHECK(T.relation("shalom" ) == string("grandfather"));
    CHECK(T.relation("shalom" ) == string("great-grandfather"));
    CHECK(T.relation("shalom" ) == string("great-grandmather"));
    CHECK(T.relation("shalom" ) == string("great-great-grandmother"));
    CHECK(T.relation("shalom" ) == string("great-great-grandfather"));
    CHECK(T.relation("shalom" ) == string("unrelated"));

    CHECK(T.relation("morningstar" ) == string("me"));
    CHECK(T.relation("morningstar" ) == string("father"));
    CHECK(T.relation("morningstar" ) == string("mother"));
    CHECK(T.relation("morningstar"  ) == string("grandmother"));
    CHECK(T.relation("morningstar"  ) == string("grandfather"));
    CHECK(T.relation("morningstar" ) == string("great-grandfather"));
    CHECK(T.relation("morningstar" ) == string("great-grandmather"));
    CHECK(T.relation("morningstar"  ) == string("great-great-grandmother"));
    CHECK(T.relation("morningstar"  ) == string("great-great-grandfather"));
    CHECK(T.relation("morningstar") == string("unrelated"));

    CHECK(T.relation("emanedel" ) == string("me"));
    CHECK(T.relation("emanedel" ) == string("father"));
    CHECK(T.relation("emanedel" ) == string("mother"));
    CHECK(T.relation("emanedel"   ) == string("grandmother"));
    CHECK(T.relation("emanedel"   ) == string("grandfather"));
    CHECK(T.relation("emanedel" ) == string("great-grandfather"));
    CHECK(T.relation("emanedel") == string("great-grandmather"));
    CHECK(T.relation("emanedel") == string("great-great-grandmother"));
    CHECK(T.relation("emanedel") == string("great-great-grandfather"));
    CHECK(T.relation("emanedel") == string("unrelated"));

    CHECK(T.relation("johnson" ) == string("me"));
    CHECK(T.relation("johnson" ) == string("father"));
    CHECK(T.relation("johnson"  ) == string("mother"));
    CHECK(T.relation("johnson"   ) == string("grandmother"));
    CHECK(T.relation("johnson" ) == string("grandfather"));
    CHECK(T.relation("johnson" ) == string("great-grandfather"));
    CHECK(T.relation("johnson" ) == string("great-grandmather"));
    CHECK(T.relation("johnson" ) == string("great-great-grandmother"));
    CHECK(T.relation("johnson" ) == string("great-great-grandfather"));
    CHECK(T.relation("johnson" ) == string("unrelated"));

    CHECK(T.relation("alberto" ) == string("me"));
    CHECK(T.relation("alberto"  ) == string("father"));
    CHECK(T.relation("alberto"   ) == string("mother"));
    CHECK(T.relation("alberto"   ) == string("grandmother"));
    CHECK(T.relation("alberto" ) == string("grandfather"));
    CHECK(T.relation("alberto"  ) == string("great-grandfather"));
    CHECK(T.relation("alberto"  ) == string("great-grandmather"));
    CHECK(T.relation("alberto" ) == string("great-great-grandmother"));
    CHECK(T.relation("alberto"  ) == string("great-great-grandfather"));
    CHECK(T.relation("alberto"  ) == string("unrelated"));
}
TEST_CASE("testing relation"){
family::Tree T("lucifer");

    CHECK(T.find("me" ) == string("ariel"));
    CHECK(T.find("father" ) == string("ariel"));
    CHECK(T.find("mother" ) == string("ariel"));
    CHECK(T.find("grandmother" ) == string("ariel"));
    CHECK(T.find("grandfather") == string("ariel"));
    CHECK(T.find("great-grandfather") == string("ariel"));
    CHECK(T.find("great-grandmather") == string("ariel"));
    CHECK(T.find("great-great-grandmother" ) == string("ariel"));
    CHECK(T.find("great-great-grandfather" ) == string("ariel"));
    CHECK(T.find("great-great-great-grandfather" ) == string("ariel"));

    CHECK_THROWS(T.find("uncle"));
    CHECK_THROWS(T.find("unt"));
    CHECK_THROWS(T.find("nothing"));
    CHECK_THROWS(T.find("brother"));
    CHECK_THROWS(T.find("sister"));
    CHECK_THROWS(T.find("cousin"));
    CHECK_THROWS(T.find("nephew"));


    CHECK(T.find("me" ) == string("samouel"));
    CHECK(T.find("father" ) == string("samouel"));
    CHECK(T.find("mother" ) == string("samouel"));
    CHECK(T.find("grandmother" ) == string("samouel"));
    CHECK(T.find("grandfather") == string("samouel"));
    CHECK(T.find("great-grandfather") == string("samouel"));
    CHECK(T.find("great-grandmather") == string("samouel"));
    CHECK(T.find("great-great-grandmother" ) == string("samouel"));
    CHECK(T.find("great-great-grandfather" ) == string("samouel"));
    CHECK(T.find("great-great-great-grandfather" ) == string("samouel"));


    CHECK(T.find("me" ) == string("jack"));
    CHECK(T.find("father" ) == string("jack"));
    CHECK(T.find("mother" ) == string("jack"));
    CHECK(T.find("grandmother" ) == string("jack"));
    CHECK(T.find("grandfather") == string("jack"));
    CHECK(T.find("great-grandfather") == string("jack"));
    CHECK(T.find("great-grandmather") == string("jack"));
    CHECK(T.find("great-great-grandmother" ) == string("jack"));
    CHECK(T.find("great-great-grandfather" ) == string("jack"));
    CHECK(T.find("great-great-great-grandfather" ) == string("jack"));

    CHECK(T.find("me" ) == string("lucifer"));
    CHECK(T.find("father" ) == string("lucifer"));
    CHECK(T.find("mother" ) == string("lucifer"));
    CHECK(T.find("grandmother" ) == string("lucifer"));
    CHECK(T.find("grandfather") == string("lucifer"));
    CHECK(T.find("great-grandfather") == string("lucifer"));
    CHECK(T.find("great-grandmather") == string("lucifer"));
    CHECK(T.find("great-great-grandmother" ) == string("lucifer"));
    CHECK(T.find("great-great-grandfather" ) == string("lucifer"));
    CHECK(T.find("great-great-great-grandfather" ) == string("lucifer"));


    CHECK(T.find("me" ) == string("mikel"));
    CHECK(T.find("father" ) == string("mikel"));
    CHECK(T.find("mother" ) == string("mikel"));


}

