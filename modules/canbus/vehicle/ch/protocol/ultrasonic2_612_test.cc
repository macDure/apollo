/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "gtest/gtest.h"
#include "modules/canbus/vehicle/ch/protocol/ultrasonic2_612.h"

namespace apollo {
namespace canbus {
namespace ch {
class Ultrasonic2612Test : public ::testing::Test {
 public:
  virtual void SetUp() {}
};

TEST_F(Ultrasonic2612Test, General) {
  uint8_t data[8] = {0x88, 0x89, 0x90, 0x91, 0x92, 0x93, 0x13, 0x14};
  int32_t length = 8;
  ChassisDetail cd;
  Ultrasonic2612 ultrasonic2;
  ultrasonic2.Parse(data, length, &cd);

  EXPECT_EQ(data[0], 0b10001000);
  EXPECT_EQ(data[1], 0b10001001);
  EXPECT_EQ(data[2], 0b10010000);
  EXPECT_EQ(data[3], 0b10010001);
  EXPECT_EQ(data[4], 0b10010010);
  EXPECT_EQ(data[5], 0b10010011);
  EXPECT_EQ(data[6], 0b00010011);
  EXPECT_EQ(data[7], 0b00010100);

  EXPECT_EQ(cd.ch().ultrasonic2_612().ult_probe_info8(), 1314);
  EXPECT_EQ(cd.ch().ultrasonic2_612().ult_probe_info7(), 9293);
  EXPECT_EQ(cd.ch().ultrasonic2_612().ult_probe_info6(), 9091);
  EXPECT_EQ(cd.ch().ultrasonic2_612().ult_probe_info5(), 8889);
}

}  // namespace ch
}  // namespace canbus
}  // namespace apollo
