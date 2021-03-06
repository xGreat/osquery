/**
 * Copyright (c) 2014-present, The osquery authors
 *
 * This source code is licensed as defined by the LICENSE file found in the
 * root directory of this source tree.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR GPL-2.0-only)
 */

// Sanity check integration test for battery
// Spec file: specs/darwin/battery.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class battery : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(battery, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from battery");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"manufacturer", NormalType}
  //      {"manufacture_date", IntType}
  //      {"model", NormalType}
  //      {"serial_number", NormalType}
  //      {"cycle_count", IntType}
  //      {"health", NormalType}
  //      {"condition", NormalType}
  //      {"state", NormalType}
  //      {"charging", IntType}
  //      {"charged", IntType}
  //      {"designed_capacity", IntType}
  //      {"max_capacity", IntType}
  //      {"current_capacity", IntType}
  //      {"percent_remaining", IntType}
  //      {"amperage", IntType}
  //      {"voltage", IntType}
  //      {"minutes_until_empty", IntType}
  //      {"minutes_to_full_charge", IntType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
