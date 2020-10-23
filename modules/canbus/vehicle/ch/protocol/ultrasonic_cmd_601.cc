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

#include "modules/canbus/vehicle/ch/protocol/ultrasonic_cmd_601.h"

#include "modules/drivers/canbus/common/byte.h"

namespace apollo {
namespace canbus {
namespace ch {

using ::apollo::drivers::canbus::Byte;

const int32_t Ultrasoniccmd601::ID = 0x601;

// public
Ultrasoniccmd601::Ultrasoniccmd601() { Reset(); }

uint32_t Ultrasoniccmd601::GetPeriod() const {
  // TODO(All) :  modify every protocol's period manually
  static const uint32_t PERIOD = 100 * 1000;
  return PERIOD;
}

void Ultrasoniccmd601::UpdateData(uint8_t* data) {
  set_p_vcu_probecmd_num5(data, vcu_probecmd_num5_);
  set_p_vcu_probecmd_num4(data, vcu_probecmd_num4_);
  set_p_vcu_probecmd_num3(data, vcu_probecmd_num3_);
  set_p_vcu_probecmd_num2(data, vcu_probecmd_num2_);
  set_p_vcu_probecmd_num1(data, vcu_probecmd_num1_);
  set_p_vcu_probecmd_num7(data, vcu_probecmd_num7_);
  set_p_vcu_probecmd_num6(data, vcu_probecmd_num6_);
  set_p_vcu_probecmd_num8(data, vcu_probecmd_num8_);
  set_p_vcu_probecmd_num9(data, vcu_probecmd_num9_);
  set_p_vcu_probecmd_num12(data, vcu_probecmd_num12_);
  set_p_vcu_probecmd_num11(data, vcu_probecmd_num11_);
  set_p_vcu_probecmd_num10(data, vcu_probecmd_num10_);
  set_p_vcu_machine_num(data, vcu_machine_num_);
  set_p_vcu_distance_cmd(data, vcu_distance_cmd_);
  set_p_vcu_ultrasonic_data_8(data, vcu_ultrasonic_data_8_);
}

void Ultrasoniccmd601::Reset() {
  // TODO(All) :  you should check this manually
  vcu_probecmd_num5_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM5_ON;
  vcu_probecmd_num4_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM4_ON;
  vcu_probecmd_num3_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM3_ON;
  vcu_probecmd_num2_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM2_ON;
  vcu_probecmd_num1_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM1_ON;
  vcu_probecmd_num7_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM7_ON;
  vcu_probecmd_num6_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM6_ON;
  vcu_probecmd_num8_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM8_ON;
  vcu_probecmd_num9_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM9_OFF;
  vcu_probecmd_num12_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM12_OFF;
  vcu_probecmd_num11_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM11_OFF;
  vcu_probecmd_num10_ = Ultrasonic_cmd_601::VCU_PROBECMD_NUM10_OFF;
  vcu_machine_num_ = 1;
  vcu_distance_cmd_ =
      Ultrasonic_cmd_601::VCU_DISTANCE_CMD_LONG_DISTANCE_CONTINUOUS_B3;
  vcu_ultrasonic_data_8_ = 0xff;
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num5(
    Ultrasonic_cmd_601::Vcu_probecmd_num5Type vcu_probecmd_num5) {
  vcu_probecmd_num5_ = vcu_probecmd_num5;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM5', 'enum': {0:
// 'VCU_PROBECMD_NUM5_OFF', 1: 'VCU_PROBECMD_NUM5_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 20, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num5(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num5Type vcu_probecmd_num5) {
  int x = vcu_probecmd_num5;

  Byte to_set(data + 2);
  to_set.set_value(x, 4, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num4(
    Ultrasonic_cmd_601::Vcu_probecmd_num4Type vcu_probecmd_num4) {
  vcu_probecmd_num4_ = vcu_probecmd_num4;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM4', 'enum': {0:
// 'VCU_PROBECMD_NUM4_OFF', 1: 'VCU_PROBECMD_NUM4_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 19, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num4(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num4Type vcu_probecmd_num4) {
  int x = vcu_probecmd_num4;

  Byte to_set(data + 2);
  to_set.set_value(x, 3, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num3(
    Ultrasonic_cmd_601::Vcu_probecmd_num3Type vcu_probecmd_num3) {
  vcu_probecmd_num3_ = vcu_probecmd_num3;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM3', 'enum': {0:
// 'VCU_PROBECMD_NUM3_OFF', 1: 'VCU_PROBECMD_NUM3_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 18, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num3(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num3Type vcu_probecmd_num3) {
  int x = vcu_probecmd_num3;

  Byte to_set(data + 2);
  to_set.set_value(x, 2, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num2(
    Ultrasonic_cmd_601::Vcu_probecmd_num2Type vcu_probecmd_num2) {
  vcu_probecmd_num2_ = vcu_probecmd_num2;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM2', 'enum': {0:
// 'VCU_PROBECMD_NUM2_OFF', 1: 'VCU_PROBECMD_NUM2_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 17, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num2(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num2Type vcu_probecmd_num2) {
  int x = vcu_probecmd_num2;

  Byte to_set(data + 2);
  to_set.set_value(x, 1, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num1(
    Ultrasonic_cmd_601::Vcu_probecmd_num1Type vcu_probecmd_num1) {
  vcu_probecmd_num1_ = vcu_probecmd_num1;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM1', 'enum': {0:
// 'VCU_PROBECMD_NUM1_OFF', 1: 'VCU_PROBECMD_NUM1_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 16, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num1(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num1Type vcu_probecmd_num1) {
  int x = vcu_probecmd_num1;

  Byte to_set(data + 2);
  to_set.set_value(x, 0, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num7(
    Ultrasonic_cmd_601::Vcu_probecmd_num7Type vcu_probecmd_num7) {
  vcu_probecmd_num7_ = vcu_probecmd_num7;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM7', 'enum': {0:
// 'VCU_PROBECMD_NUM7_OFF', 1: 'VCU_PROBECMD_NUM7_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 22, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num7(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num7Type vcu_probecmd_num7) {
  int x = vcu_probecmd_num7;

  Byte to_set(data + 2);
  to_set.set_value(x, 6, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num6(
    Ultrasonic_cmd_601::Vcu_probecmd_num6Type vcu_probecmd_num6) {
  vcu_probecmd_num6_ = vcu_probecmd_num6;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM6', 'enum': {0:
// 'VCU_PROBECMD_NUM6_OFF', 1: 'VCU_PROBECMD_NUM6_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 21, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num6(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num6Type vcu_probecmd_num6) {
  int x = vcu_probecmd_num6;

  Byte to_set(data + 2);
  to_set.set_value(x, 5, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num8(
    Ultrasonic_cmd_601::Vcu_probecmd_num8Type vcu_probecmd_num8) {
  vcu_probecmd_num8_ = vcu_probecmd_num8;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM8', 'enum': {0:
// 'VCU_PROBECMD_NUM8_OFF', 1: 'VCU_PROBECMD_NUM8_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 23, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num8(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num8Type vcu_probecmd_num8) {
  int x = vcu_probecmd_num8;

  Byte to_set(data + 2);
  to_set.set_value(x, 7, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num9(
    Ultrasonic_cmd_601::Vcu_probecmd_num9Type vcu_probecmd_num9) {
  vcu_probecmd_num9_ = vcu_probecmd_num9;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM9', 'enum': {0:
// 'VCU_PROBECMD_NUM9_OFF', 1: 'VCU_PROBECMD_NUM9_ON'}, 'precision': 1.0, 'len':
// 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit':
// 8, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num9(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num9Type vcu_probecmd_num9) {
  int x = vcu_probecmd_num9;

  Byte to_set(data + 1);
  to_set.set_value(x, 0, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num12(
    Ultrasonic_cmd_601::Vcu_probecmd_num12Type vcu_probecmd_num12) {
  vcu_probecmd_num12_ = vcu_probecmd_num12;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM12', 'enum': {0:
// 'VCU_PROBECMD_NUM12_OFF', 1: 'VCU_PROBECMD_NUM12_ON'}, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
// 'bit': 11, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num12(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num12Type vcu_probecmd_num12) {
  int x = vcu_probecmd_num12;

  Byte to_set(data + 1);
  to_set.set_value(x, 3, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num11(
    Ultrasonic_cmd_601::Vcu_probecmd_num11Type vcu_probecmd_num11) {
  vcu_probecmd_num11_ = vcu_probecmd_num11;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM11', 'enum': {0:
// 'VCU_PROBECMD_NUM11_OFF', 1: 'VCU_PROBECMD_NUM11_ON'}, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
// 'bit': 10, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num11(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num11Type vcu_probecmd_num11) {
  int x = vcu_probecmd_num11;

  Byte to_set(data + 1);
  to_set.set_value(x, 2, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_probecmd_num10(
    Ultrasonic_cmd_601::Vcu_probecmd_num10Type vcu_probecmd_num10) {
  vcu_probecmd_num10_ = vcu_probecmd_num10;
  return this;
}

// config detail: {'name': 'VCU_ProbeCMD_NUM10', 'enum': {0:
// 'VCU_PROBECMD_NUM10_OFF', 1: 'VCU_PROBECMD_NUM10_ON'}, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
// 'bit': 9, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_probecmd_num10(
    uint8_t* data,
    Ultrasonic_cmd_601::Vcu_probecmd_num10Type vcu_probecmd_num10) {
  int x = vcu_probecmd_num10;

  Byte to_set(data + 1);
  to_set.set_value(x, 1, 1);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_machine_num(int vcu_machine_num) {
  vcu_machine_num_ = vcu_machine_num;
  return this;
}

// config detail: {'name': 'VCU_Machine_NUM', 'offset': 0.0, 'precision': 1.0,
// 'len': 4, 'is_signed_var': False, 'physical_range': '[0|15]', 'bit': 15,
// 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_machine_num(uint8_t* data,
                                             int vcu_machine_num) {
  vcu_machine_num = ProtocolData::BoundedValue(0, 15, vcu_machine_num);
  int x = vcu_machine_num;

  Byte to_set(data + 1);
  to_set.set_value(x, 4, 4);
}

Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_distance_cmd(
    Ultrasonic_cmd_601::Vcu_distance_cmdType vcu_distance_cmd) {
  vcu_distance_cmd_ = vcu_distance_cmd;
  return this;
}

// config detail: {'name': 'VCU_Distance_CMD', 'enum': {177:
// 'VCU_DISTANCE_CMD_MAX_DISTANCE_CONTINUOUS_B1', 178:
// 'VCU_DISTANCE_CMD_MAX_DISTANCE_TRIGGER_B2', 179:
// 'VCU_DISTANCE_CMD_LONG_DISTANCE_CONTINUOUS_B3', 180:
// 'VCU_DISTANCE_CMD_LONG_DISTANCE_TRIGGER_B4', 181:
// 'VCU_DISTANCE_CMD_GENERAL_DISTANCE_CONTINUOUS_B5', 182:
// 'VCU_DISTANCE_CMD_GENERAL_DISTANCE_TRIGGER_B6', 183:
// 'VCU_DISTANCE_CMD_CLOSE_DISTANCE_CONTINUOUS_B7', 184:
// 'VCU_DISTANCE_CMD_CLOSE_DISTANCE_TRIGGER_B8', 185:
// 'VCU_DISTANCE_CMD_MIN_DISTANCE_CONTINUOUS_B9', 186:
// 'VCU_DISTANCE_CMD_MIN_DISTANCE_TRIGGER_BA', 187:
// 'VCU_DISTANCE_CMD_RAINDAY_DISTANCE_CONTINUOUS_BB', 188:
// 'VCU_DISTANCE_CMD_RAINDAY_DISTANCE_TRIGGER_BC'}, 'precision': 1.0, 'len': 8,
// 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|255]', 'bit': 7,
// 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
void Ultrasoniccmd601::set_p_vcu_distance_cmd(
    uint8_t* data, Ultrasonic_cmd_601::Vcu_distance_cmdType vcu_distance_cmd) {
  int x = vcu_distance_cmd;

  Byte to_set(data + 0);
  to_set.set_value(x, 0, 8);
}

// set the last data is nozero
Ultrasoniccmd601* Ultrasoniccmd601::set_vcu_ultrasonic_data_8(
    int vcu_ultrasonic_data_8) {
  vcu_ultrasonic_data_8_ = vcu_ultrasonic_data_8;
  return this;
}

// set the last data is nozero
void Ultrasoniccmd601::set_p_vcu_ultrasonic_data_8(
    uint8_t* data, int vcu_ultrasonic_data_8) {
  int x = vcu_ultrasonic_data_8;

  Byte to_set(data + 7);
  to_set.set_value(x, 0, 8);
}

}  // namespace ch
}  // namespace canbus
}  // namespace apollo
