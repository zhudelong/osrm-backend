
#include <testcase.hpp>

#include "testcase.pb.h"

int main() {
    TestRepeatedPackedInt64::Test msg;

    write_to_file(msg, "data-empty.pbf");

    msg.add_i(17LL);
    write_to_file(msg, "data-one.pbf");

    msg.add_i(200);
    msg.add_i(0LL);
    msg.add_i(1LL);
    msg.add_i(std::numeric_limits<int64_t>::max());
    msg.add_i(-200);
    msg.add_i(-1LL);
    msg.add_i(std::numeric_limits<int64_t>::min());
    write_to_file(msg, "data-many.pbf");
}

