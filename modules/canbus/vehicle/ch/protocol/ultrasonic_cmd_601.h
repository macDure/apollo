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

#pragma once

#include "modules/canbus/proto/chassis_detail.pb.h"
#include "modules/drivers/canbus/can_comm/protocol_data.h"

namespace apollo {
namespace canbus {
namespace ch {

class Ultrasoniccmd601 : public ::apollo::drivers::canbus::ProtocolData<
                             ::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID;

  Ultrasoniccmd601();

  uint32_t GetPeriod() const override;

  void UpdateData(uint8_t* data) override;

  void Reset() override;

  // config detail: {'name': 'VCU_ProbeCMD_NUM5', 'enum': {0:
  // 'VCU_PROBECMD_NUM5_OFF', 1: 'VCU_PROBECMD_NUM5_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 20, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num5(
      Ultrasonic_cmd_601::Vcu_probecmd_num5Type vcu_probecmd_num5);

  // config detail: {'name': 'VCU_ProbeCMD_NUM4', 'enum': {0:
  // 'VCU_PROBECMD_NUM4_OFF', 1: 'VCU_PROBECMD_NUM4_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 19, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num4(
      Ultrasonic_cmd_601::Vcu_probecmd_num4Type vcu_probecmd_num4);

  // config detail: {'name': 'VCU_ProbeCMD_NUM3', 'enum': {0:
  // 'VCU_PROBECMD_NUM3_OFF', 1: 'VCU_PROBECMD_NUM3_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 18, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num3(
      Ultrasonic_cmd_601::Vcu_probecmd_num3Type vcu_probecmd_num3);

  // config detail: {'name': 'VCU_ProbeCMD_NUM2', 'enum': {0:
  // 'VCU_PROBECMD_NUM2_OFF', 1: 'VCU_PROBECMD_NUM2_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 17, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num2(
      Ultrasonic_cmd_601::Vcu_probecmd_num2Type vcu_probecmd_num2);

  // config detail: {'name': 'VCU_ProbeCMD_NUM1', 'enum': {0:
  // 'VCU_PROBECMD_NUM1_OFF', 1: 'VCU_PROBECMD_NUM1_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 16, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num1(
      Ultrasonic_cmd_601::Vcu_probecmd_num1Type vcu_probecmd_num1);

  // config detail: {'name': 'VCU_ProbeCMD_NUM7', 'enum': {0:
  // 'VCU_PROBECMD_NUM7_OFF', 1: 'VCU_PROBECMD_NUM7_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 22, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num7(
      Ultrasonic_cmd_601::Vcu_probecmd_num7Type vcu_probecmd_num7);

  // config detail: {'name': 'VCU_ProbeCMD_NUM6', 'enum': {0:
  // 'VCU_PROBECMD_NUM6_OFF', 1: 'VCU_PROBECMD_NUM6_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 21, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num6(
      Ultrasonic_cmd_601::Vcu_probecmd_num6Type vcu_probecmd_num6);

  // config detail: {'name': 'VCU_ProbeCMD_NUM8', 'enum': {0:
  // 'VCU_PROBECMD_NUM8_OFF', 1: 'VCU_PROBECMD_NUM8_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 23, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num8(
      Ultrasonic_cmd_601::Vcu_probecmd_num8Type vcu_probecmd_num8);

  // config detail: {'name': 'VCU_ProbeCMD_NUM9', 'enum': {0:
  // 'VCU_PROBECMD_NUM9_OFF', 1: 'VCU_PROBECMD_NUM9_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 8, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num9(
      Ultrasonic_cmd_601::Vcu_probecmd_num9Type vcu_probecmd_num9);

  // config detail: {'name': 'VCU_ProbeCMD_NUM12', 'enum': {0:
  // 'VCU_PROBECMD_NUM12_OFF', 1: 'VCU_PROBECMD_NUM12_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 11, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num12(
      Ultrasonic_cmd_601::Vcu_probecmd_num12Type vcu_probecmd_num12);

  // config detail: {'name': 'VCU_ProbeCMD_NUM11', 'enum': {0:
  // 'VCU_PROBECMD_NUM11_OFF', 1: 'VCU_PROBECMD_NUM11_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 10, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num11(
      Ultrasonic_cmd_601::Vcu_probecmd_num11Type vcu_probecmd_num11);

  // config detail: {'name': 'VCU_ProbeCMD_NUM10', 'enum': {0:
  // 'VCU_PROBECMD_NUM10_OFF', 1: 'VCU_PROBECMD_NUM10_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 9, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_probecmd_num10(
      Ultrasonic_cmd_601::Vcu_probecmd_num10Type vcu_probecmd_num10);

  // config detail: {'name': 'VCU_Machine_NUM', 'offset': 0.0, 'precision': 1.0,
  // 'len': 4, 'is_signed_var': False, 'physical_range': '[0|15]', 'bit': 15,
  // 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_machine_num(int vcu_machine_num);

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
  // 'VCU_DISTANCE_CMD_RAINDAY_DISTANCE_TRIGGER_BC'}, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|255]',
  // 'bit': 7, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Ultrasoniccmd601* set_vcu_distance_cmd(
      Ultrasonic_cmd_601::Vcu_distance_cmdType vcu_distance_cmd);

  // set the last data is nozero
  Ultrasoniccmd601* set_vcu_ultrasonic_data_8(int vcu_ultrasonic_data_8);

 private:
  // config detail: {'name': 'VCU_ProbeCMD_NUM5', 'enum': {0:
  // 'VCU_PROBECMD_NUM5_OFF', 1: 'VCU_PROBECMD_NUM5_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 20, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num5(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num5Type vcu_probecmd_num5);

  // config detail: {'name': 'VCU_ProbeCMD_NUM4', 'enum': {0:
  // 'VCU_PROBECMD_NUM4_OFF', 1: 'VCU_PROBECMD_NUM4_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 19, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num4(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num4Type vcu_probecmd_num4);

  // config detail: {'name': 'VCU_ProbeCMD_NUM3', 'enum': {0:
  // 'VCU_PROBECMD_NUM3_OFF', 1: 'VCU_PROBECMD_NUM3_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 18, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num3(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num3Type vcu_probecmd_num3);

  // config detail: {'name': 'VCU_ProbeCMD_NUM2', 'enum': {0:
  // 'VCU_PROBECMD_NUM2_OFF', 1: 'VCU_PROBECMD_NUM2_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 17, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num2(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num2Type vcu_probecmd_num2);

  // config detail: {'name': 'VCU_ProbeCMD_NUM1', 'enum': {0:
  // 'VCU_PROBECMD_NUM1_OFF', 1: 'VCU_PROBECMD_NUM1_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 16, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num1(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num1Type vcu_probecmd_num1);

  // config detail: {'name': 'VCU_ProbeCMD_NUM7', 'enum': {0:
  // 'VCU_PROBECMD_NUM7_OFF', 1: 'VCU_PROBECMD_NUM7_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 22, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num7(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num7Type vcu_probecmd_num7);

  // config detail: {'name': 'VCU_ProbeCMD_NUM6', 'enum': {0:
  // 'VCU_PROBECMD_NUM6_OFF', 1: 'VCU_PROBECMD_NUM6_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 21, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num6(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num6Type vcu_probecmd_num6);

  // config detail: {'name': 'VCU_ProbeCMD_NUM8', 'enum': {0:
  // 'VCU_PROBECMD_NUM8_OFF', 1: 'VCU_PROBECMD_NUM8_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 23, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num8(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num8Type vcu_probecmd_num8);

  // config detail: {'name': 'VCU_ProbeCMD_NUM9', 'enum': {0:
  // 'VCU_PROBECMD_NUM9_OFF', 1: 'VCU_PROBECMD_NUM9_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 8, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num9(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num9Type vcu_probecmd_num9);

  // config detail: {'name': 'VCU_ProbeCMD_NUM12', 'enum': {0:
  // 'VCU_PROBECMD_NUM12_OFF', 1: 'VCU_PROBECMD_NUM12_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 11, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num12(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num12Type vcu_probecmd_num12);

  // config detail: {'name': 'VCU_ProbeCMD_NUM11', 'enum': {0:
  // 'VCU_PROBECMD_NUM11_OFF', 1: 'VCU_PROBECMD_NUM11_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 10, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num11(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num11Type vcu_probecmd_num11);

  // config detail: {'name': 'VCU_ProbeCMD_NUM10', 'enum': {0:
  // 'VCU_PROBECMD_NUM10_OFF', 1: 'VCU_PROBECMD_NUM10_ON'}, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]',
  // 'bit': 9, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_probecmd_num10(
      uint8_t* data,
      Ultrasonic_cmd_601::Vcu_probecmd_num10Type vcu_probecmd_num10);

  // config detail: {'name': 'VCU_Machine_NUM', 'offset': 0.0, 'precision': 1.0,
  // 'len': 4, 'is_signed_var': False, 'physical_range': '[0|15]', 'bit': 15,
  // 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_machine_num(uint8_t* data, int vcu_machine_num);

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
  // 'VCU_DISTANCE_CMD_RAINDAY_DISTANCE_TRIGGER_BC'}, 'precision': 1.0, 'len':
  // 8, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|255]',
  // 'bit': 7, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  void set_p_vcu_distance_cmd(
      uint8_t* data, Ultrasonic_cmd_601::Vcu_distance_cmdType vcu_distance_cmd);

  // set the last data is nozero
  void set_p_vcu_ultrasonic_data_8(uint8_t* data, int vcu_ultrasonic_data_8);

 private:
  Ultrasonic_cmd_601::Vcu_probecmd_num5Type vcu_probecmd_num5_;
  Ultrasonic_cmd_601::Vcu_probecmd_num4Type vcu_probecmd_num4_;
  Ultrasonic_cmd_601::Vcu_probecmd_num3Type vcu_probecmd_num3_;
  Ultrasonic_cmd_601::Vcu_probecmd_num2Type vcu_probecmd_num2_;
  Ultrasonic_cmd_601::Vcu_probecmd_num1Type vcu_probecmd_num1_;
  Ultrasonic_cmd_601::Vcu_probecmd_num7Type vcu_probecmd_num7_;
  Ultrasonic_cmd_601::Vcu_probecmd_num6Type vcu_probecmd_num6_;
  Ultrasonic_cmd_601::Vcu_probecmd_num8Type vcu_probecmd_num8_;
  Ultrasonic_cmd_601::Vcu_probecmd_num9Type vcu_probecmd_num9_;
  Ultrasonic_cmd_601::Vcu_probecmd_num12Type vcu_probecmd_num12_;
  Ultrasonic_cmd_601::Vcu_probecmd_num11Type vcu_probecmd_num11_;
  Ultrasonic_cmd_601::Vcu_probecmd_num10Type vcu_probecmd_num10_;
  int vcu_machine_num_;
  Ultrasonic_cmd_601::Vcu_distance_cmdType vcu_distance_cmd_;
  int vcu_ultrasonic_data_8_;
};

}  // namespace ch
}  // namespace canbus
}  // namespace apollo
