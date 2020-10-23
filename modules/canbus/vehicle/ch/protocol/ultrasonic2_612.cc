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

#include "modules/canbus/vehicle/ch/protocol/ultrasonic2_612.h"

#include "glog/logging.h"
#include "modules/drivers/canbus/common/byte.h"
#include "modules/drivers/canbus/common/canbus_consts.h"

namespace apollo {
namespace canbus {
namespace ch {

using ::apollo::drivers::canbus::Byte;

Ultrasonic2612::Ultrasonic2612() {}
const int32_t Ultrasonic2612::ID = 0x612;

void Ultrasonic2612::Parse(const std::uint8_t* bytes, int32_t length,
                           ChassisDetail* chassis) const {
  chassis->mutable_ch()->mutable_ultrasonic2_612()->set_ult_probe_info8(
      ult_probe_info8(bytes, length));
  chassis->mutable_ch()->mutable_ultrasonic2_612()->set_ult_probe_info7(
      ult_probe_info7(bytes, length));
  chassis->mutable_ch()->mutable_ultrasonic2_612()->set_ult_probe_info6(
      ult_probe_info6(bytes, length));
  chassis->mutable_ch()->mutable_ultrasonic2_612()->set_ult_probe_info5(
      ult_probe_info5(bytes, length));
}

// config detail: {'description': 'Ultrasonic8 detection distance', 'offset':
// 0.0, 'precision': 1.0, 'len': 16, 'name': 'ult_probe_info8', 'is_signed_var':
// False, 'physical_range': '[0|65535]', 'bit': 55, 'type': 'int', 'order':
// 'motorola', 'physical_unit': 'mm'}
int Ultrasonic2612::ult_probe_info8(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 7);
  int32_t t = t1.get_byte(0, 8);
  int32_t x_h = (x & 0xf0) >> 4;
  int32_t x_l = x & 0x0f;
  int32_t x1 = x_h * 10 + x_l;
  int32_t t_h = (t & 0xf0) >> 4;
  int32_t t_l = t & 0x0f;
  int32_t t2 = t_h * 10 + t_l;
  x = x1 * 100 + t2;

  int ret = x;
  return ret;
}

// config detail: {'description': 'Ultrasonic7 detection distance', 'offset':
// 0.0, 'precision': 1.0, 'len': 16, 'name': 'ult_probe_info7', 'is_signed_var':
// False, 'physical_range': '[0|65535]', 'bit': 39, 'type': 'int', 'order':
// 'motorola', 'physical_unit': 'mm'}
int Ultrasonic2612::ult_probe_info7(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 5);
  int32_t t = t1.get_byte(0, 8);

  int32_t x_h = (x & 0xf0) >> 4;
  int32_t x_l = x & 0x0f;
  int32_t x1 = x_h * 10 + x_l;
  int32_t t_h = (t & 0xf0) >> 4;
  int32_t t_l = t & 0x0f;
  int32_t t2 = t_h * 10 + t_l;
  x = x1 * 100 + t2;

  int ret = x;
  return ret;
}

// config detail: {'description': 'Ultrasonic6 detection distance', 'offset':
// 0.0, 'precision': 1.0, 'len': 16, 'name': 'ult_probe_info6', 'is_signed_var':
// False, 'physical_range': '[0|65535]', 'bit': 23, 'type': 'int', 'order':
// 'motorola', 'physical_unit': 'mm'}
int Ultrasonic2612::ult_probe_info6(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);

  int32_t x_h = (x & 0xf0) >> 4;
  int32_t x_l = x & 0x0f;
  int32_t x1 = x_h * 10 + x_l;
  int32_t t_h = (t & 0xf0) >> 4;
  int32_t t_l = t & 0x0f;
  int32_t t2 = t_h * 10 + t_l;
  x = x1 * 100 + t2;

  int ret = x;
  return ret;
}

// config detail: {'description': 'Ultrasonic5 detection distance', 'offset':
// 0.0, 'precision': 1.0, 'len': 16, 'name': 'ult_probe_info5', 'is_signed_var':
// False, 'physical_range': '[0|65535]', 'bit': 7, 'type': 'int', 'order':
// 'motorola', 'physical_unit': 'mm'}
int Ultrasonic2612::ult_probe_info5(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);

  int32_t x_h = (x & 0xf0) >> 4;
  int32_t x_l = x & 0x0f;
  int32_t x1 = x_h * 10 + x_l;
  int32_t t_h = (t & 0xf0) >> 4;
  int32_t t_l = t & 0x0f;
  int32_t t2 = t_h * 10 + t_l;
  x = x1 * 100 + t2;

  int ret = x;
  return ret;
}
}  // namespace ch
}  // namespace canbus
}  // namespace apollo
