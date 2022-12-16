#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_sync_done.read();
}

void myproject::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = (ap_start.read() & (ap_sync_reg_Block_proc_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_Block_proc_U0_start_full_n() {
    Block_proc_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_Block_proc_U0_start_write() {
    Block_proc_U0_start_write = ap_const_logic_0;
}

void myproject::thread_ap_channel_done_layer2_out_0_V_1() {
    ap_channel_done_layer2_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_10_V_1() {
    ap_channel_done_layer2_out_10_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_11_V_1() {
    ap_channel_done_layer2_out_11_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_12_V_1() {
    ap_channel_done_layer2_out_12_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_13_V_1() {
    ap_channel_done_layer2_out_13_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_14_V_1() {
    ap_channel_done_layer2_out_14_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_15_V_1() {
    ap_channel_done_layer2_out_15_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_16_V_1() {
    ap_channel_done_layer2_out_16_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_17_V_1() {
    ap_channel_done_layer2_out_17_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_18_V_1() {
    ap_channel_done_layer2_out_18_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_19_V_1() {
    ap_channel_done_layer2_out_19_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_1_V_1() {
    ap_channel_done_layer2_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_20_V_1() {
    ap_channel_done_layer2_out_20_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_21_V_1() {
    ap_channel_done_layer2_out_21_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_22_V_1() {
    ap_channel_done_layer2_out_22_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_23_V_1() {
    ap_channel_done_layer2_out_23_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_24_V_1() {
    ap_channel_done_layer2_out_24_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_25_V_1() {
    ap_channel_done_layer2_out_25_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_26_V_1() {
    ap_channel_done_layer2_out_26_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_27_V_1() {
    ap_channel_done_layer2_out_27_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_28_V_1() {
    ap_channel_done_layer2_out_28_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_29_V_1() {
    ap_channel_done_layer2_out_29_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_2_V_1() {
    ap_channel_done_layer2_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_30_V_1() {
    ap_channel_done_layer2_out_30_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_31_V_1() {
    ap_channel_done_layer2_out_31_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_32_V_1() {
    ap_channel_done_layer2_out_32_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_33_V_1() {
    ap_channel_done_layer2_out_33_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_34_V_1() {
    ap_channel_done_layer2_out_34_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_35_V_1() {
    ap_channel_done_layer2_out_35_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_36_V_1() {
    ap_channel_done_layer2_out_36_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_37_V_1() {
    ap_channel_done_layer2_out_37_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_38_V_1() {
    ap_channel_done_layer2_out_38_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_39_V_1() {
    ap_channel_done_layer2_out_39_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_3_V_1() {
    ap_channel_done_layer2_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_40_V_1() {
    ap_channel_done_layer2_out_40_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_41_V_1() {
    ap_channel_done_layer2_out_41_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_42_V_1() {
    ap_channel_done_layer2_out_42_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_43_V_1() {
    ap_channel_done_layer2_out_43_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_44_V_1() {
    ap_channel_done_layer2_out_44_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_45_V_1() {
    ap_channel_done_layer2_out_45_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_46_V_1() {
    ap_channel_done_layer2_out_46_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_47_V_1() {
    ap_channel_done_layer2_out_47_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_48_V_1() {
    ap_channel_done_layer2_out_48_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_49_V_1() {
    ap_channel_done_layer2_out_49_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_4_V_1() {
    ap_channel_done_layer2_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_50_V_1() {
    ap_channel_done_layer2_out_50_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_51_V_1() {
    ap_channel_done_layer2_out_51_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_52_V_1() {
    ap_channel_done_layer2_out_52_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_53_V_1() {
    ap_channel_done_layer2_out_53_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_54_V_1() {
    ap_channel_done_layer2_out_54_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_55_V_1() {
    ap_channel_done_layer2_out_55_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_56_V_1() {
    ap_channel_done_layer2_out_56_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_57_V_1() {
    ap_channel_done_layer2_out_57_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_58_V_1() {
    ap_channel_done_layer2_out_58_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_59_V_1() {
    ap_channel_done_layer2_out_59_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_5_V_1() {
    ap_channel_done_layer2_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_60_V_1() {
    ap_channel_done_layer2_out_60_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_61_V_1() {
    ap_channel_done_layer2_out_61_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_62_V_1() {
    ap_channel_done_layer2_out_62_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_63_V_1() {
    ap_channel_done_layer2_out_63_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_64_V_1() {
    ap_channel_done_layer2_out_64_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_65_V_1() {
    ap_channel_done_layer2_out_65_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_66_V_1() {
    ap_channel_done_layer2_out_66_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_67_V_1() {
    ap_channel_done_layer2_out_67_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_68_V_1() {
    ap_channel_done_layer2_out_68_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_69_V_1() {
    ap_channel_done_layer2_out_69_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_6_V_1() {
    ap_channel_done_layer2_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_70_V_1() {
    ap_channel_done_layer2_out_70_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_71_V_1() {
    ap_channel_done_layer2_out_71_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_72_V_1() {
    ap_channel_done_layer2_out_72_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_73_V_1() {
    ap_channel_done_layer2_out_73_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_74_V_1() {
    ap_channel_done_layer2_out_74_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_75_V_1() {
    ap_channel_done_layer2_out_75_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_76_V_1() {
    ap_channel_done_layer2_out_76_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_77_V_1() {
    ap_channel_done_layer2_out_77_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_78_V_1() {
    ap_channel_done_layer2_out_78_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_79_V_1() {
    ap_channel_done_layer2_out_79_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_7_V_1() {
    ap_channel_done_layer2_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_80_V_1() {
    ap_channel_done_layer2_out_80_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_81_V_1() {
    ap_channel_done_layer2_out_81_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_82_V_1() {
    ap_channel_done_layer2_out_82_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_83_V_1() {
    ap_channel_done_layer2_out_83_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_84_V_1() {
    ap_channel_done_layer2_out_84_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_85_V_1() {
    ap_channel_done_layer2_out_85_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_86_V_1() {
    ap_channel_done_layer2_out_86_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_87_V_1() {
    ap_channel_done_layer2_out_87_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_88_V_1() {
    ap_channel_done_layer2_out_88_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_89_V_1() {
    ap_channel_done_layer2_out_89_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_8_V_1() {
    ap_channel_done_layer2_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_90_V_1() {
    ap_channel_done_layer2_out_90_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_91_V_1() {
    ap_channel_done_layer2_out_91_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_92_V_1() {
    ap_channel_done_layer2_out_92_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_93_V_1() {
    ap_channel_done_layer2_out_93_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_94_V_1() {
    ap_channel_done_layer2_out_94_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_95_V_1() {
    ap_channel_done_layer2_out_95_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_96_V_1() {
    ap_channel_done_layer2_out_96_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_97_V_1() {
    ap_channel_done_layer2_out_97_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_98_V_1() {
    ap_channel_done_layer2_out_98_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_99_V_1() {
    ap_channel_done_layer2_out_99_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_9_V_1() {
    ap_channel_done_layer2_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_0_V_1() {
    ap_channel_done_layer4_out_0_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_10_V_1() {
    ap_channel_done_layer4_out_10_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_11_V_1() {
    ap_channel_done_layer4_out_11_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_12_V_1() {
    ap_channel_done_layer4_out_12_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_13_V_1() {
    ap_channel_done_layer4_out_13_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_14_V_1() {
    ap_channel_done_layer4_out_14_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_15_V_1() {
    ap_channel_done_layer4_out_15_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_16_V_1() {
    ap_channel_done_layer4_out_16_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_17_V_1() {
    ap_channel_done_layer4_out_17_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_18_V_1() {
    ap_channel_done_layer4_out_18_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_19_V_1() {
    ap_channel_done_layer4_out_19_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_1_V_1() {
    ap_channel_done_layer4_out_1_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_20_V_1() {
    ap_channel_done_layer4_out_20_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_21_V_1() {
    ap_channel_done_layer4_out_21_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_22_V_1() {
    ap_channel_done_layer4_out_22_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_23_V_1() {
    ap_channel_done_layer4_out_23_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_24_V_1() {
    ap_channel_done_layer4_out_24_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_25_V_1() {
    ap_channel_done_layer4_out_25_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_26_V_1() {
    ap_channel_done_layer4_out_26_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_27_V_1() {
    ap_channel_done_layer4_out_27_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_28_V_1() {
    ap_channel_done_layer4_out_28_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_29_V_1() {
    ap_channel_done_layer4_out_29_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_2_V_1() {
    ap_channel_done_layer4_out_2_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_30_V_1() {
    ap_channel_done_layer4_out_30_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_31_V_1() {
    ap_channel_done_layer4_out_31_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_32_V_1() {
    ap_channel_done_layer4_out_32_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_33_V_1() {
    ap_channel_done_layer4_out_33_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_34_V_1() {
    ap_channel_done_layer4_out_34_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_35_V_1() {
    ap_channel_done_layer4_out_35_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_36_V_1() {
    ap_channel_done_layer4_out_36_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_37_V_1() {
    ap_channel_done_layer4_out_37_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_38_V_1() {
    ap_channel_done_layer4_out_38_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_39_V_1() {
    ap_channel_done_layer4_out_39_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_3_V_1() {
    ap_channel_done_layer4_out_3_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_40_V_1() {
    ap_channel_done_layer4_out_40_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_41_V_1() {
    ap_channel_done_layer4_out_41_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_42_V_1() {
    ap_channel_done_layer4_out_42_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_43_V_1() {
    ap_channel_done_layer4_out_43_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_44_V_1() {
    ap_channel_done_layer4_out_44_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_45_V_1() {
    ap_channel_done_layer4_out_45_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_46_V_1() {
    ap_channel_done_layer4_out_46_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_47_V_1() {
    ap_channel_done_layer4_out_47_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_48_V_1() {
    ap_channel_done_layer4_out_48_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_49_V_1() {
    ap_channel_done_layer4_out_49_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_4_V_1() {
    ap_channel_done_layer4_out_4_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_50_V_1() {
    ap_channel_done_layer4_out_50_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_51_V_1() {
    ap_channel_done_layer4_out_51_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_52_V_1() {
    ap_channel_done_layer4_out_52_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_53_V_1() {
    ap_channel_done_layer4_out_53_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_54_V_1() {
    ap_channel_done_layer4_out_54_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_55_V_1() {
    ap_channel_done_layer4_out_55_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_56_V_1() {
    ap_channel_done_layer4_out_56_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_57_V_1() {
    ap_channel_done_layer4_out_57_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_58_V_1() {
    ap_channel_done_layer4_out_58_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_59_V_1() {
    ap_channel_done_layer4_out_59_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_5_V_1() {
    ap_channel_done_layer4_out_5_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_60_V_1() {
    ap_channel_done_layer4_out_60_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_61_V_1() {
    ap_channel_done_layer4_out_61_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_62_V_1() {
    ap_channel_done_layer4_out_62_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_63_V_1() {
    ap_channel_done_layer4_out_63_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_64_V_1() {
    ap_channel_done_layer4_out_64_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_65_V_1() {
    ap_channel_done_layer4_out_65_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_66_V_1() {
    ap_channel_done_layer4_out_66_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_67_V_1() {
    ap_channel_done_layer4_out_67_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_68_V_1() {
    ap_channel_done_layer4_out_68_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_69_V_1() {
    ap_channel_done_layer4_out_69_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_6_V_1() {
    ap_channel_done_layer4_out_6_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_70_V_1() {
    ap_channel_done_layer4_out_70_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_71_V_1() {
    ap_channel_done_layer4_out_71_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_72_V_1() {
    ap_channel_done_layer4_out_72_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_73_V_1() {
    ap_channel_done_layer4_out_73_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_74_V_1() {
    ap_channel_done_layer4_out_74_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_75_V_1() {
    ap_channel_done_layer4_out_75_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_76_V_1() {
    ap_channel_done_layer4_out_76_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_77_V_1() {
    ap_channel_done_layer4_out_77_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_78_V_1() {
    ap_channel_done_layer4_out_78_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_79_V_1() {
    ap_channel_done_layer4_out_79_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_7_V_1() {
    ap_channel_done_layer4_out_7_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_80_V_1() {
    ap_channel_done_layer4_out_80_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_81_V_1() {
    ap_channel_done_layer4_out_81_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_82_V_1() {
    ap_channel_done_layer4_out_82_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_83_V_1() {
    ap_channel_done_layer4_out_83_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_84_V_1() {
    ap_channel_done_layer4_out_84_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_85_V_1() {
    ap_channel_done_layer4_out_85_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_86_V_1() {
    ap_channel_done_layer4_out_86_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_87_V_1() {
    ap_channel_done_layer4_out_87_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_88_V_1() {
    ap_channel_done_layer4_out_88_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_89_V_1() {
    ap_channel_done_layer4_out_89_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_8_V_1() {
    ap_channel_done_layer4_out_8_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_90_V_1() {
    ap_channel_done_layer4_out_90_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_91_V_1() {
    ap_channel_done_layer4_out_91_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_92_V_1() {
    ap_channel_done_layer4_out_92_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_93_V_1() {
    ap_channel_done_layer4_out_93_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_94_V_1() {
    ap_channel_done_layer4_out_94_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_95_V_1() {
    ap_channel_done_layer4_out_95_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_96_V_1() {
    ap_channel_done_layer4_out_96_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_97_V_1() {
    ap_channel_done_layer4_out_97_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_98_V_1() {
    ap_channel_done_layer4_out_98_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_99_V_1() {
    ap_channel_done_layer4_out_99_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_9_V_1() {
    ap_channel_done_layer4_out_9_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_0_V_1() {
    ap_channel_done_layer5_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_10_V_1() {
    ap_channel_done_layer5_out_10_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_11_V_1() {
    ap_channel_done_layer5_out_11_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_12_V_1() {
    ap_channel_done_layer5_out_12_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_13_V_1() {
    ap_channel_done_layer5_out_13_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_14_V_1() {
    ap_channel_done_layer5_out_14_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_15_V_1() {
    ap_channel_done_layer5_out_15_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_16_V_1() {
    ap_channel_done_layer5_out_16_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_17_V_1() {
    ap_channel_done_layer5_out_17_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_18_V_1() {
    ap_channel_done_layer5_out_18_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_19_V_1() {
    ap_channel_done_layer5_out_19_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_1_V_1() {
    ap_channel_done_layer5_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_20_V_1() {
    ap_channel_done_layer5_out_20_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_21_V_1() {
    ap_channel_done_layer5_out_21_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_22_V_1() {
    ap_channel_done_layer5_out_22_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_23_V_1() {
    ap_channel_done_layer5_out_23_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_24_V_1() {
    ap_channel_done_layer5_out_24_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_25_V_1() {
    ap_channel_done_layer5_out_25_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_26_V_1() {
    ap_channel_done_layer5_out_26_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_27_V_1() {
    ap_channel_done_layer5_out_27_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_28_V_1() {
    ap_channel_done_layer5_out_28_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_29_V_1() {
    ap_channel_done_layer5_out_29_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_2_V_1() {
    ap_channel_done_layer5_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_30_V_1() {
    ap_channel_done_layer5_out_30_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_31_V_1() {
    ap_channel_done_layer5_out_31_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_32_V_1() {
    ap_channel_done_layer5_out_32_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_33_V_1() {
    ap_channel_done_layer5_out_33_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_34_V_1() {
    ap_channel_done_layer5_out_34_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_35_V_1() {
    ap_channel_done_layer5_out_35_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_36_V_1() {
    ap_channel_done_layer5_out_36_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_37_V_1() {
    ap_channel_done_layer5_out_37_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_38_V_1() {
    ap_channel_done_layer5_out_38_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_39_V_1() {
    ap_channel_done_layer5_out_39_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_3_V_1() {
    ap_channel_done_layer5_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_40_V_1() {
    ap_channel_done_layer5_out_40_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_41_V_1() {
    ap_channel_done_layer5_out_41_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_42_V_1() {
    ap_channel_done_layer5_out_42_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_43_V_1() {
    ap_channel_done_layer5_out_43_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_44_V_1() {
    ap_channel_done_layer5_out_44_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_45_V_1() {
    ap_channel_done_layer5_out_45_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_46_V_1() {
    ap_channel_done_layer5_out_46_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_47_V_1() {
    ap_channel_done_layer5_out_47_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_48_V_1() {
    ap_channel_done_layer5_out_48_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_49_V_1() {
    ap_channel_done_layer5_out_49_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_4_V_1() {
    ap_channel_done_layer5_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_50_V_1() {
    ap_channel_done_layer5_out_50_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_51_V_1() {
    ap_channel_done_layer5_out_51_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_52_V_1() {
    ap_channel_done_layer5_out_52_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_53_V_1() {
    ap_channel_done_layer5_out_53_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_54_V_1() {
    ap_channel_done_layer5_out_54_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_55_V_1() {
    ap_channel_done_layer5_out_55_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_56_V_1() {
    ap_channel_done_layer5_out_56_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_57_V_1() {
    ap_channel_done_layer5_out_57_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_58_V_1() {
    ap_channel_done_layer5_out_58_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_59_V_1() {
    ap_channel_done_layer5_out_59_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_5_V_1() {
    ap_channel_done_layer5_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_60_V_1() {
    ap_channel_done_layer5_out_60_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_61_V_1() {
    ap_channel_done_layer5_out_61_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_62_V_1() {
    ap_channel_done_layer5_out_62_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_63_V_1() {
    ap_channel_done_layer5_out_63_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_64_V_1() {
    ap_channel_done_layer5_out_64_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_65_V_1() {
    ap_channel_done_layer5_out_65_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_66_V_1() {
    ap_channel_done_layer5_out_66_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_67_V_1() {
    ap_channel_done_layer5_out_67_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_68_V_1() {
    ap_channel_done_layer5_out_68_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_69_V_1() {
    ap_channel_done_layer5_out_69_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_6_V_1() {
    ap_channel_done_layer5_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_70_V_1() {
    ap_channel_done_layer5_out_70_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_71_V_1() {
    ap_channel_done_layer5_out_71_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_72_V_1() {
    ap_channel_done_layer5_out_72_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_73_V_1() {
    ap_channel_done_layer5_out_73_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_74_V_1() {
    ap_channel_done_layer5_out_74_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_75_V_1() {
    ap_channel_done_layer5_out_75_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_76_V_1() {
    ap_channel_done_layer5_out_76_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_77_V_1() {
    ap_channel_done_layer5_out_77_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_78_V_1() {
    ap_channel_done_layer5_out_78_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_79_V_1() {
    ap_channel_done_layer5_out_79_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_7_V_1() {
    ap_channel_done_layer5_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_80_V_1() {
    ap_channel_done_layer5_out_80_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_81_V_1() {
    ap_channel_done_layer5_out_81_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_82_V_1() {
    ap_channel_done_layer5_out_82_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_83_V_1() {
    ap_channel_done_layer5_out_83_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_84_V_1() {
    ap_channel_done_layer5_out_84_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_85_V_1() {
    ap_channel_done_layer5_out_85_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_86_V_1() {
    ap_channel_done_layer5_out_86_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_87_V_1() {
    ap_channel_done_layer5_out_87_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_88_V_1() {
    ap_channel_done_layer5_out_88_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_89_V_1() {
    ap_channel_done_layer5_out_89_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_8_V_1() {
    ap_channel_done_layer5_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_90_V_1() {
    ap_channel_done_layer5_out_90_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_91_V_1() {
    ap_channel_done_layer5_out_91_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_92_V_1() {
    ap_channel_done_layer5_out_92_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_93_V_1() {
    ap_channel_done_layer5_out_93_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_94_V_1() {
    ap_channel_done_layer5_out_94_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_95_V_1() {
    ap_channel_done_layer5_out_95_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_96_V_1() {
    ap_channel_done_layer5_out_96_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_97_V_1() {
    ap_channel_done_layer5_out_97_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_98_V_1() {
    ap_channel_done_layer5_out_98_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_99_V_1() {
    ap_channel_done_layer5_out_99_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer5_out_9_V_1() {
    ap_channel_done_layer5_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_0_V_1() {
    ap_channel_done_layer7_out_0_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_10_V_1() {
    ap_channel_done_layer7_out_10_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_11_V_1() {
    ap_channel_done_layer7_out_11_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_12_V_1() {
    ap_channel_done_layer7_out_12_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_13_V_1() {
    ap_channel_done_layer7_out_13_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_14_V_1() {
    ap_channel_done_layer7_out_14_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_15_V_1() {
    ap_channel_done_layer7_out_15_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_16_V_1() {
    ap_channel_done_layer7_out_16_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_17_V_1() {
    ap_channel_done_layer7_out_17_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_18_V_1() {
    ap_channel_done_layer7_out_18_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_19_V_1() {
    ap_channel_done_layer7_out_19_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_1_V_1() {
    ap_channel_done_layer7_out_1_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_20_V_1() {
    ap_channel_done_layer7_out_20_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_21_V_1() {
    ap_channel_done_layer7_out_21_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_22_V_1() {
    ap_channel_done_layer7_out_22_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_23_V_1() {
    ap_channel_done_layer7_out_23_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_24_V_1() {
    ap_channel_done_layer7_out_24_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_25_V_1() {
    ap_channel_done_layer7_out_25_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_26_V_1() {
    ap_channel_done_layer7_out_26_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_27_V_1() {
    ap_channel_done_layer7_out_27_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_28_V_1() {
    ap_channel_done_layer7_out_28_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_29_V_1() {
    ap_channel_done_layer7_out_29_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_2_V_1() {
    ap_channel_done_layer7_out_2_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_30_V_1() {
    ap_channel_done_layer7_out_30_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_31_V_1() {
    ap_channel_done_layer7_out_31_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_32_V_1() {
    ap_channel_done_layer7_out_32_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_33_V_1() {
    ap_channel_done_layer7_out_33_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_34_V_1() {
    ap_channel_done_layer7_out_34_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_35_V_1() {
    ap_channel_done_layer7_out_35_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_36_V_1() {
    ap_channel_done_layer7_out_36_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_37_V_1() {
    ap_channel_done_layer7_out_37_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_38_V_1() {
    ap_channel_done_layer7_out_38_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_39_V_1() {
    ap_channel_done_layer7_out_39_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_3_V_1() {
    ap_channel_done_layer7_out_3_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_40_V_1() {
    ap_channel_done_layer7_out_40_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_41_V_1() {
    ap_channel_done_layer7_out_41_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_42_V_1() {
    ap_channel_done_layer7_out_42_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_43_V_1() {
    ap_channel_done_layer7_out_43_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_44_V_1() {
    ap_channel_done_layer7_out_44_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_45_V_1() {
    ap_channel_done_layer7_out_45_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_46_V_1() {
    ap_channel_done_layer7_out_46_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_47_V_1() {
    ap_channel_done_layer7_out_47_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_48_V_1() {
    ap_channel_done_layer7_out_48_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_49_V_1() {
    ap_channel_done_layer7_out_49_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_4_V_1() {
    ap_channel_done_layer7_out_4_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_50_V_1() {
    ap_channel_done_layer7_out_50_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_51_V_1() {
    ap_channel_done_layer7_out_51_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_52_V_1() {
    ap_channel_done_layer7_out_52_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_53_V_1() {
    ap_channel_done_layer7_out_53_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_54_V_1() {
    ap_channel_done_layer7_out_54_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_55_V_1() {
    ap_channel_done_layer7_out_55_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_56_V_1() {
    ap_channel_done_layer7_out_56_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_57_V_1() {
    ap_channel_done_layer7_out_57_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_58_V_1() {
    ap_channel_done_layer7_out_58_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_59_V_1() {
    ap_channel_done_layer7_out_59_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_5_V_1() {
    ap_channel_done_layer7_out_5_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_60_V_1() {
    ap_channel_done_layer7_out_60_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_61_V_1() {
    ap_channel_done_layer7_out_61_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_62_V_1() {
    ap_channel_done_layer7_out_62_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_63_V_1() {
    ap_channel_done_layer7_out_63_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_64_V_1() {
    ap_channel_done_layer7_out_64_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_65_V_1() {
    ap_channel_done_layer7_out_65_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_66_V_1() {
    ap_channel_done_layer7_out_66_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_67_V_1() {
    ap_channel_done_layer7_out_67_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_68_V_1() {
    ap_channel_done_layer7_out_68_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_69_V_1() {
    ap_channel_done_layer7_out_69_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_6_V_1() {
    ap_channel_done_layer7_out_6_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_70_V_1() {
    ap_channel_done_layer7_out_70_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_71_V_1() {
    ap_channel_done_layer7_out_71_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_72_V_1() {
    ap_channel_done_layer7_out_72_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_73_V_1() {
    ap_channel_done_layer7_out_73_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_74_V_1() {
    ap_channel_done_layer7_out_74_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_75_V_1() {
    ap_channel_done_layer7_out_75_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_76_V_1() {
    ap_channel_done_layer7_out_76_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_77_V_1() {
    ap_channel_done_layer7_out_77_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_78_V_1() {
    ap_channel_done_layer7_out_78_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_79_V_1() {
    ap_channel_done_layer7_out_79_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_7_V_1() {
    ap_channel_done_layer7_out_7_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_80_V_1() {
    ap_channel_done_layer7_out_80_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_81_V_1() {
    ap_channel_done_layer7_out_81_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_82_V_1() {
    ap_channel_done_layer7_out_82_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_83_V_1() {
    ap_channel_done_layer7_out_83_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_84_V_1() {
    ap_channel_done_layer7_out_84_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_85_V_1() {
    ap_channel_done_layer7_out_85_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_86_V_1() {
    ap_channel_done_layer7_out_86_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_87_V_1() {
    ap_channel_done_layer7_out_87_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_88_V_1() {
    ap_channel_done_layer7_out_88_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_89_V_1() {
    ap_channel_done_layer7_out_89_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_8_V_1() {
    ap_channel_done_layer7_out_8_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_90_V_1() {
    ap_channel_done_layer7_out_90_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_91_V_1() {
    ap_channel_done_layer7_out_91_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_92_V_1() {
    ap_channel_done_layer7_out_92_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_93_V_1() {
    ap_channel_done_layer7_out_93_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_94_V_1() {
    ap_channel_done_layer7_out_94_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_95_V_1() {
    ap_channel_done_layer7_out_95_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_96_V_1() {
    ap_channel_done_layer7_out_96_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_97_V_1() {
    ap_channel_done_layer7_out_97_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_98_V_1() {
    ap_channel_done_layer7_out_98_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_99_V_1() {
    ap_channel_done_layer7_out_99_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer7_out_9_V_1() {
    ap_channel_done_layer7_out_9_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_0_V_1() {
    ap_channel_done_layer8_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_1_V_1() {
    ap_channel_done_layer8_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_2_V_1() {
    ap_channel_done_layer8_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_3_V_1() {
    ap_channel_done_layer8_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_4_V_1() {
    ap_channel_done_layer8_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_5_V_1() {
    ap_channel_done_layer8_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_6_V_1() {
    ap_channel_done_layer8_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_7_V_1() {
    ap_channel_done_layer8_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_8_V_1() {
    ap_channel_done_layer8_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer8_out_9_V_1() {
    ap_channel_done_layer8_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & (ap_sync_reg_channel_write_layer8_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_0_V_1() {
    ap_channel_done_layer9_out_0_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_1_V_1() {
    ap_channel_done_layer9_out_1_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_2_V_1() {
    ap_channel_done_layer9_out_2_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_3_V_1() {
    ap_channel_done_layer9_out_3_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_4_V_1() {
    ap_channel_done_layer9_out_4_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_5_V_1() {
    ap_channel_done_layer9_out_5_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_6_V_1() {
    ap_channel_done_layer9_out_6_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_7_V_1() {
    ap_channel_done_layer9_out_7_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_8_V_1() {
    ap_channel_done_layer9_out_8_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer9_out_9_V_1() {
    ap_channel_done_layer9_out_9_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & (ap_sync_reg_channel_write_layer9_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_done() {
    ap_done = ap_sync_done.read();
}

void myproject::thread_ap_idle() {
    ap_idle = (myproject_entry3_U0_ap_idle.read() & myproject_entry129_U0_ap_idle.read() & Block_proc_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_idle.read() & relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_idle.read() & relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_idle.read() & linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_idle.read() & softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_idle.read() & (layer2_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_10_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_11_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_12_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_13_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_14_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_15_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_16_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_17_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_18_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_19_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_20_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_21_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_22_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_23_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_24_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_25_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_26_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_27_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_28_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_29_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_30_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_31_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_32_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_33_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_34_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_35_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_36_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_37_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_38_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_39_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_40_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_41_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_42_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_43_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_44_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_45_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_46_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_47_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_48_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_49_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_50_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_51_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_52_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_53_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_54_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_55_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_56_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_57_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_58_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_59_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_60_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_61_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_62_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_63_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_64_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_65_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_66_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_67_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_68_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_69_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_70_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_71_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_72_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_73_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_74_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_75_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_76_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_77_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_78_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_79_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_80_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_81_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_82_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_83_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_84_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_85_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_86_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_87_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_88_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_89_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_90_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_91_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_92_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_93_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_94_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_95_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_96_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_97_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_98_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_99_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_10_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_11_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_12_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_13_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_14_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_15_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_16_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_17_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_18_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_19_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_20_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_21_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_22_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_23_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_24_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_25_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_26_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_27_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_28_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_29_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_30_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_31_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_32_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_33_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_34_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_35_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_36_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_37_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_38_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_39_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_40_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_41_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_42_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_43_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_44_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_45_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_46_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_47_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_48_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_49_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_50_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_51_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_52_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_53_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_54_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_55_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_56_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_57_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_58_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_59_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_60_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_61_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_62_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_63_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_64_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_65_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_66_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_67_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_68_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_69_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_70_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_71_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_72_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_73_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_74_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_75_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_76_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_77_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_78_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_79_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_80_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_81_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_82_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_83_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_84_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_85_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_86_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_87_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_88_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_89_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_90_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_91_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_92_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_93_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_94_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_95_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_96_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_97_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_98_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_99_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_10_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_11_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_12_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_13_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_14_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_15_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_16_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_17_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_18_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_19_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_20_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_21_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_22_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_23_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_24_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_25_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_26_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_27_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_28_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_29_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_30_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_31_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_32_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_33_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_34_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_35_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_36_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_37_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_38_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_39_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_40_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_41_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_42_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_43_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_44_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_45_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_46_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_47_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_48_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_49_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_50_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_51_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_52_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_53_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_54_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_55_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_56_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_57_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_58_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_59_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_60_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_61_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_62_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_63_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_64_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_65_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_66_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_67_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_68_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_69_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_70_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_71_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_72_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_73_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_74_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_75_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_76_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_77_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_78_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_79_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_80_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_81_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_82_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_83_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_84_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_85_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_86_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_87_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_88_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_89_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_90_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_91_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_92_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_93_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_94_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_95_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_96_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_97_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_98_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_99_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_10_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_11_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_12_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_13_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_14_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_15_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_16_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_17_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_18_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_19_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_20_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_21_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_22_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_23_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_24_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_25_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_26_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_27_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_28_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_29_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_30_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_31_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_32_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_33_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_34_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_35_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_36_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_37_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_38_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_39_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_40_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_41_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_42_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_43_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_44_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_45_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_46_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_47_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_48_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_49_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_50_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_51_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_52_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_53_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_54_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_55_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_56_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_57_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_58_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_59_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_60_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_61_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_62_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_63_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_64_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_65_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_66_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_67_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_68_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_69_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_70_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_71_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_72_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_73_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_74_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_75_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_76_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_77_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_78_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_79_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_80_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_81_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_82_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_83_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_84_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_85_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_86_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_87_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_88_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_89_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_90_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_91_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_92_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_93_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_94_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_95_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_96_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_97_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_98_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_99_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_0_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_1_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_2_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_3_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_4_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_5_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_6_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_7_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_8_V_1_empty_n.read() ^ 
  ap_const_logic_1) & (layer9_out_9_V_1_empty_n.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_ready() {
    ap_ready = ap_sync_ready.read();
}

void myproject::thread_ap_sync_Block_proc_U0_ap_ready() {
    ap_sync_Block_proc_U0_ap_ready = (Block_proc_U0_ap_ready.read() | ap_sync_reg_Block_proc_U0_ap_ready.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_0_V_1() {
    ap_sync_channel_write_layer2_out_0_V_1 = ((ap_channel_done_layer2_out_0_V_1.read() & 
  layer2_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_10_V_1() {
    ap_sync_channel_write_layer2_out_10_V_1 = ((ap_channel_done_layer2_out_10_V_1.read() & 
  layer2_out_10_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_10_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_11_V_1() {
    ap_sync_channel_write_layer2_out_11_V_1 = ((ap_channel_done_layer2_out_11_V_1.read() & 
  layer2_out_11_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_11_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_12_V_1() {
    ap_sync_channel_write_layer2_out_12_V_1 = ((ap_channel_done_layer2_out_12_V_1.read() & 
  layer2_out_12_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_12_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_13_V_1() {
    ap_sync_channel_write_layer2_out_13_V_1 = ((ap_channel_done_layer2_out_13_V_1.read() & 
  layer2_out_13_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_13_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_14_V_1() {
    ap_sync_channel_write_layer2_out_14_V_1 = ((ap_channel_done_layer2_out_14_V_1.read() & 
  layer2_out_14_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_14_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_15_V_1() {
    ap_sync_channel_write_layer2_out_15_V_1 = ((ap_channel_done_layer2_out_15_V_1.read() & 
  layer2_out_15_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_15_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_16_V_1() {
    ap_sync_channel_write_layer2_out_16_V_1 = ((ap_channel_done_layer2_out_16_V_1.read() & 
  layer2_out_16_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_16_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_17_V_1() {
    ap_sync_channel_write_layer2_out_17_V_1 = ((ap_channel_done_layer2_out_17_V_1.read() & 
  layer2_out_17_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_17_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_18_V_1() {
    ap_sync_channel_write_layer2_out_18_V_1 = ((ap_channel_done_layer2_out_18_V_1.read() & 
  layer2_out_18_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_18_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_19_V_1() {
    ap_sync_channel_write_layer2_out_19_V_1 = ((ap_channel_done_layer2_out_19_V_1.read() & 
  layer2_out_19_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_19_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_1_V_1() {
    ap_sync_channel_write_layer2_out_1_V_1 = ((ap_channel_done_layer2_out_1_V_1.read() & 
  layer2_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_20_V_1() {
    ap_sync_channel_write_layer2_out_20_V_1 = ((ap_channel_done_layer2_out_20_V_1.read() & 
  layer2_out_20_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_20_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_21_V_1() {
    ap_sync_channel_write_layer2_out_21_V_1 = ((ap_channel_done_layer2_out_21_V_1.read() & 
  layer2_out_21_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_21_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_22_V_1() {
    ap_sync_channel_write_layer2_out_22_V_1 = ((ap_channel_done_layer2_out_22_V_1.read() & 
  layer2_out_22_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_22_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_23_V_1() {
    ap_sync_channel_write_layer2_out_23_V_1 = ((ap_channel_done_layer2_out_23_V_1.read() & 
  layer2_out_23_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_23_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_24_V_1() {
    ap_sync_channel_write_layer2_out_24_V_1 = ((ap_channel_done_layer2_out_24_V_1.read() & 
  layer2_out_24_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_24_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_25_V_1() {
    ap_sync_channel_write_layer2_out_25_V_1 = ((ap_channel_done_layer2_out_25_V_1.read() & 
  layer2_out_25_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_25_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_26_V_1() {
    ap_sync_channel_write_layer2_out_26_V_1 = ((ap_channel_done_layer2_out_26_V_1.read() & 
  layer2_out_26_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_26_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_27_V_1() {
    ap_sync_channel_write_layer2_out_27_V_1 = ((ap_channel_done_layer2_out_27_V_1.read() & 
  layer2_out_27_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_27_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_28_V_1() {
    ap_sync_channel_write_layer2_out_28_V_1 = ((ap_channel_done_layer2_out_28_V_1.read() & 
  layer2_out_28_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_28_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_29_V_1() {
    ap_sync_channel_write_layer2_out_29_V_1 = ((ap_channel_done_layer2_out_29_V_1.read() & 
  layer2_out_29_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_29_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_2_V_1() {
    ap_sync_channel_write_layer2_out_2_V_1 = ((ap_channel_done_layer2_out_2_V_1.read() & 
  layer2_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_30_V_1() {
    ap_sync_channel_write_layer2_out_30_V_1 = ((ap_channel_done_layer2_out_30_V_1.read() & 
  layer2_out_30_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_30_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_31_V_1() {
    ap_sync_channel_write_layer2_out_31_V_1 = ((ap_channel_done_layer2_out_31_V_1.read() & 
  layer2_out_31_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_31_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_32_V_1() {
    ap_sync_channel_write_layer2_out_32_V_1 = ((ap_channel_done_layer2_out_32_V_1.read() & 
  layer2_out_32_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_32_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_33_V_1() {
    ap_sync_channel_write_layer2_out_33_V_1 = ((ap_channel_done_layer2_out_33_V_1.read() & 
  layer2_out_33_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_33_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_34_V_1() {
    ap_sync_channel_write_layer2_out_34_V_1 = ((ap_channel_done_layer2_out_34_V_1.read() & 
  layer2_out_34_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_34_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_35_V_1() {
    ap_sync_channel_write_layer2_out_35_V_1 = ((ap_channel_done_layer2_out_35_V_1.read() & 
  layer2_out_35_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_35_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_36_V_1() {
    ap_sync_channel_write_layer2_out_36_V_1 = ((ap_channel_done_layer2_out_36_V_1.read() & 
  layer2_out_36_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_36_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_37_V_1() {
    ap_sync_channel_write_layer2_out_37_V_1 = ((ap_channel_done_layer2_out_37_V_1.read() & 
  layer2_out_37_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_37_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_38_V_1() {
    ap_sync_channel_write_layer2_out_38_V_1 = ((ap_channel_done_layer2_out_38_V_1.read() & 
  layer2_out_38_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_38_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_39_V_1() {
    ap_sync_channel_write_layer2_out_39_V_1 = ((ap_channel_done_layer2_out_39_V_1.read() & 
  layer2_out_39_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_39_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_3_V_1() {
    ap_sync_channel_write_layer2_out_3_V_1 = ((ap_channel_done_layer2_out_3_V_1.read() & 
  layer2_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_40_V_1() {
    ap_sync_channel_write_layer2_out_40_V_1 = ((ap_channel_done_layer2_out_40_V_1.read() & 
  layer2_out_40_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_40_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_41_V_1() {
    ap_sync_channel_write_layer2_out_41_V_1 = ((ap_channel_done_layer2_out_41_V_1.read() & 
  layer2_out_41_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_41_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_42_V_1() {
    ap_sync_channel_write_layer2_out_42_V_1 = ((ap_channel_done_layer2_out_42_V_1.read() & 
  layer2_out_42_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_42_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_43_V_1() {
    ap_sync_channel_write_layer2_out_43_V_1 = ((ap_channel_done_layer2_out_43_V_1.read() & 
  layer2_out_43_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_43_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_44_V_1() {
    ap_sync_channel_write_layer2_out_44_V_1 = ((ap_channel_done_layer2_out_44_V_1.read() & 
  layer2_out_44_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_44_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_45_V_1() {
    ap_sync_channel_write_layer2_out_45_V_1 = ((ap_channel_done_layer2_out_45_V_1.read() & 
  layer2_out_45_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_45_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_46_V_1() {
    ap_sync_channel_write_layer2_out_46_V_1 = ((ap_channel_done_layer2_out_46_V_1.read() & 
  layer2_out_46_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_46_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_47_V_1() {
    ap_sync_channel_write_layer2_out_47_V_1 = ((ap_channel_done_layer2_out_47_V_1.read() & 
  layer2_out_47_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_47_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_48_V_1() {
    ap_sync_channel_write_layer2_out_48_V_1 = ((ap_channel_done_layer2_out_48_V_1.read() & 
  layer2_out_48_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_48_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_49_V_1() {
    ap_sync_channel_write_layer2_out_49_V_1 = ((ap_channel_done_layer2_out_49_V_1.read() & 
  layer2_out_49_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_49_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_4_V_1() {
    ap_sync_channel_write_layer2_out_4_V_1 = ((ap_channel_done_layer2_out_4_V_1.read() & 
  layer2_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_50_V_1() {
    ap_sync_channel_write_layer2_out_50_V_1 = ((ap_channel_done_layer2_out_50_V_1.read() & 
  layer2_out_50_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_50_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_51_V_1() {
    ap_sync_channel_write_layer2_out_51_V_1 = ((ap_channel_done_layer2_out_51_V_1.read() & 
  layer2_out_51_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_51_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_52_V_1() {
    ap_sync_channel_write_layer2_out_52_V_1 = ((ap_channel_done_layer2_out_52_V_1.read() & 
  layer2_out_52_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_52_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_53_V_1() {
    ap_sync_channel_write_layer2_out_53_V_1 = ((ap_channel_done_layer2_out_53_V_1.read() & 
  layer2_out_53_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_53_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_54_V_1() {
    ap_sync_channel_write_layer2_out_54_V_1 = ((ap_channel_done_layer2_out_54_V_1.read() & 
  layer2_out_54_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_54_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_55_V_1() {
    ap_sync_channel_write_layer2_out_55_V_1 = ((ap_channel_done_layer2_out_55_V_1.read() & 
  layer2_out_55_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_55_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_56_V_1() {
    ap_sync_channel_write_layer2_out_56_V_1 = ((ap_channel_done_layer2_out_56_V_1.read() & 
  layer2_out_56_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_56_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_57_V_1() {
    ap_sync_channel_write_layer2_out_57_V_1 = ((ap_channel_done_layer2_out_57_V_1.read() & 
  layer2_out_57_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_57_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_58_V_1() {
    ap_sync_channel_write_layer2_out_58_V_1 = ((ap_channel_done_layer2_out_58_V_1.read() & 
  layer2_out_58_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_58_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_59_V_1() {
    ap_sync_channel_write_layer2_out_59_V_1 = ((ap_channel_done_layer2_out_59_V_1.read() & 
  layer2_out_59_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_59_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_5_V_1() {
    ap_sync_channel_write_layer2_out_5_V_1 = ((ap_channel_done_layer2_out_5_V_1.read() & 
  layer2_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_60_V_1() {
    ap_sync_channel_write_layer2_out_60_V_1 = ((ap_channel_done_layer2_out_60_V_1.read() & 
  layer2_out_60_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_60_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_61_V_1() {
    ap_sync_channel_write_layer2_out_61_V_1 = ((ap_channel_done_layer2_out_61_V_1.read() & 
  layer2_out_61_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_61_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_62_V_1() {
    ap_sync_channel_write_layer2_out_62_V_1 = ((ap_channel_done_layer2_out_62_V_1.read() & 
  layer2_out_62_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_62_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_63_V_1() {
    ap_sync_channel_write_layer2_out_63_V_1 = ((ap_channel_done_layer2_out_63_V_1.read() & 
  layer2_out_63_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_63_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_64_V_1() {
    ap_sync_channel_write_layer2_out_64_V_1 = ((ap_channel_done_layer2_out_64_V_1.read() & 
  layer2_out_64_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_64_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_65_V_1() {
    ap_sync_channel_write_layer2_out_65_V_1 = ((ap_channel_done_layer2_out_65_V_1.read() & 
  layer2_out_65_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_65_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_66_V_1() {
    ap_sync_channel_write_layer2_out_66_V_1 = ((ap_channel_done_layer2_out_66_V_1.read() & 
  layer2_out_66_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_66_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_67_V_1() {
    ap_sync_channel_write_layer2_out_67_V_1 = ((ap_channel_done_layer2_out_67_V_1.read() & 
  layer2_out_67_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_67_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_68_V_1() {
    ap_sync_channel_write_layer2_out_68_V_1 = ((ap_channel_done_layer2_out_68_V_1.read() & 
  layer2_out_68_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_68_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_69_V_1() {
    ap_sync_channel_write_layer2_out_69_V_1 = ((ap_channel_done_layer2_out_69_V_1.read() & 
  layer2_out_69_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_69_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_6_V_1() {
    ap_sync_channel_write_layer2_out_6_V_1 = ((ap_channel_done_layer2_out_6_V_1.read() & 
  layer2_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_70_V_1() {
    ap_sync_channel_write_layer2_out_70_V_1 = ((ap_channel_done_layer2_out_70_V_1.read() & 
  layer2_out_70_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_70_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_71_V_1() {
    ap_sync_channel_write_layer2_out_71_V_1 = ((ap_channel_done_layer2_out_71_V_1.read() & 
  layer2_out_71_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_71_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_72_V_1() {
    ap_sync_channel_write_layer2_out_72_V_1 = ((ap_channel_done_layer2_out_72_V_1.read() & 
  layer2_out_72_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_72_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_73_V_1() {
    ap_sync_channel_write_layer2_out_73_V_1 = ((ap_channel_done_layer2_out_73_V_1.read() & 
  layer2_out_73_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_73_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_74_V_1() {
    ap_sync_channel_write_layer2_out_74_V_1 = ((ap_channel_done_layer2_out_74_V_1.read() & 
  layer2_out_74_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_74_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_75_V_1() {
    ap_sync_channel_write_layer2_out_75_V_1 = ((ap_channel_done_layer2_out_75_V_1.read() & 
  layer2_out_75_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_75_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_76_V_1() {
    ap_sync_channel_write_layer2_out_76_V_1 = ((ap_channel_done_layer2_out_76_V_1.read() & 
  layer2_out_76_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_76_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_77_V_1() {
    ap_sync_channel_write_layer2_out_77_V_1 = ((ap_channel_done_layer2_out_77_V_1.read() & 
  layer2_out_77_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_77_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_78_V_1() {
    ap_sync_channel_write_layer2_out_78_V_1 = ((ap_channel_done_layer2_out_78_V_1.read() & 
  layer2_out_78_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_78_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_79_V_1() {
    ap_sync_channel_write_layer2_out_79_V_1 = ((ap_channel_done_layer2_out_79_V_1.read() & 
  layer2_out_79_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_79_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_7_V_1() {
    ap_sync_channel_write_layer2_out_7_V_1 = ((ap_channel_done_layer2_out_7_V_1.read() & 
  layer2_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_80_V_1() {
    ap_sync_channel_write_layer2_out_80_V_1 = ((ap_channel_done_layer2_out_80_V_1.read() & 
  layer2_out_80_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_80_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_81_V_1() {
    ap_sync_channel_write_layer2_out_81_V_1 = ((ap_channel_done_layer2_out_81_V_1.read() & 
  layer2_out_81_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_81_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_82_V_1() {
    ap_sync_channel_write_layer2_out_82_V_1 = ((ap_channel_done_layer2_out_82_V_1.read() & 
  layer2_out_82_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_82_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_83_V_1() {
    ap_sync_channel_write_layer2_out_83_V_1 = ((ap_channel_done_layer2_out_83_V_1.read() & 
  layer2_out_83_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_83_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_84_V_1() {
    ap_sync_channel_write_layer2_out_84_V_1 = ((ap_channel_done_layer2_out_84_V_1.read() & 
  layer2_out_84_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_84_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_85_V_1() {
    ap_sync_channel_write_layer2_out_85_V_1 = ((ap_channel_done_layer2_out_85_V_1.read() & 
  layer2_out_85_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_85_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_86_V_1() {
    ap_sync_channel_write_layer2_out_86_V_1 = ((ap_channel_done_layer2_out_86_V_1.read() & 
  layer2_out_86_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_86_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_87_V_1() {
    ap_sync_channel_write_layer2_out_87_V_1 = ((ap_channel_done_layer2_out_87_V_1.read() & 
  layer2_out_87_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_87_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_88_V_1() {
    ap_sync_channel_write_layer2_out_88_V_1 = ((ap_channel_done_layer2_out_88_V_1.read() & 
  layer2_out_88_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_88_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_89_V_1() {
    ap_sync_channel_write_layer2_out_89_V_1 = ((ap_channel_done_layer2_out_89_V_1.read() & 
  layer2_out_89_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_89_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_8_V_1() {
    ap_sync_channel_write_layer2_out_8_V_1 = ((ap_channel_done_layer2_out_8_V_1.read() & 
  layer2_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_90_V_1() {
    ap_sync_channel_write_layer2_out_90_V_1 = ((ap_channel_done_layer2_out_90_V_1.read() & 
  layer2_out_90_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_90_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_91_V_1() {
    ap_sync_channel_write_layer2_out_91_V_1 = ((ap_channel_done_layer2_out_91_V_1.read() & 
  layer2_out_91_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_91_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_92_V_1() {
    ap_sync_channel_write_layer2_out_92_V_1 = ((ap_channel_done_layer2_out_92_V_1.read() & 
  layer2_out_92_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_92_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_93_V_1() {
    ap_sync_channel_write_layer2_out_93_V_1 = ((ap_channel_done_layer2_out_93_V_1.read() & 
  layer2_out_93_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_93_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_94_V_1() {
    ap_sync_channel_write_layer2_out_94_V_1 = ((ap_channel_done_layer2_out_94_V_1.read() & 
  layer2_out_94_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_94_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_95_V_1() {
    ap_sync_channel_write_layer2_out_95_V_1 = ((ap_channel_done_layer2_out_95_V_1.read() & 
  layer2_out_95_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_95_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_96_V_1() {
    ap_sync_channel_write_layer2_out_96_V_1 = ((ap_channel_done_layer2_out_96_V_1.read() & 
  layer2_out_96_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_96_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_97_V_1() {
    ap_sync_channel_write_layer2_out_97_V_1 = ((ap_channel_done_layer2_out_97_V_1.read() & 
  layer2_out_97_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_97_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_98_V_1() {
    ap_sync_channel_write_layer2_out_98_V_1 = ((ap_channel_done_layer2_out_98_V_1.read() & 
  layer2_out_98_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_98_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_99_V_1() {
    ap_sync_channel_write_layer2_out_99_V_1 = ((ap_channel_done_layer2_out_99_V_1.read() & 
  layer2_out_99_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_99_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer2_out_9_V_1() {
    ap_sync_channel_write_layer2_out_9_V_1 = ((ap_channel_done_layer2_out_9_V_1.read() & 
  layer2_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer2_out_9_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_0_V_1() {
    ap_sync_channel_write_layer4_out_0_V_1 = ((ap_channel_done_layer4_out_0_V_1.read() & 
  layer4_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_10_V_1() {
    ap_sync_channel_write_layer4_out_10_V_1 = ((ap_channel_done_layer4_out_10_V_1.read() & 
  layer4_out_10_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_10_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_11_V_1() {
    ap_sync_channel_write_layer4_out_11_V_1 = ((ap_channel_done_layer4_out_11_V_1.read() & 
  layer4_out_11_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_11_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_12_V_1() {
    ap_sync_channel_write_layer4_out_12_V_1 = ((ap_channel_done_layer4_out_12_V_1.read() & 
  layer4_out_12_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_12_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_13_V_1() {
    ap_sync_channel_write_layer4_out_13_V_1 = ((ap_channel_done_layer4_out_13_V_1.read() & 
  layer4_out_13_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_13_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_14_V_1() {
    ap_sync_channel_write_layer4_out_14_V_1 = ((ap_channel_done_layer4_out_14_V_1.read() & 
  layer4_out_14_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_14_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_15_V_1() {
    ap_sync_channel_write_layer4_out_15_V_1 = ((ap_channel_done_layer4_out_15_V_1.read() & 
  layer4_out_15_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_15_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_16_V_1() {
    ap_sync_channel_write_layer4_out_16_V_1 = ((ap_channel_done_layer4_out_16_V_1.read() & 
  layer4_out_16_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_16_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_17_V_1() {
    ap_sync_channel_write_layer4_out_17_V_1 = ((ap_channel_done_layer4_out_17_V_1.read() & 
  layer4_out_17_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_17_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_18_V_1() {
    ap_sync_channel_write_layer4_out_18_V_1 = ((ap_channel_done_layer4_out_18_V_1.read() & 
  layer4_out_18_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_18_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_19_V_1() {
    ap_sync_channel_write_layer4_out_19_V_1 = ((ap_channel_done_layer4_out_19_V_1.read() & 
  layer4_out_19_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_19_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_1_V_1() {
    ap_sync_channel_write_layer4_out_1_V_1 = ((ap_channel_done_layer4_out_1_V_1.read() & 
  layer4_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_20_V_1() {
    ap_sync_channel_write_layer4_out_20_V_1 = ((ap_channel_done_layer4_out_20_V_1.read() & 
  layer4_out_20_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_20_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_21_V_1() {
    ap_sync_channel_write_layer4_out_21_V_1 = ((ap_channel_done_layer4_out_21_V_1.read() & 
  layer4_out_21_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_21_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_22_V_1() {
    ap_sync_channel_write_layer4_out_22_V_1 = ((ap_channel_done_layer4_out_22_V_1.read() & 
  layer4_out_22_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_22_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_23_V_1() {
    ap_sync_channel_write_layer4_out_23_V_1 = ((ap_channel_done_layer4_out_23_V_1.read() & 
  layer4_out_23_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_23_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_24_V_1() {
    ap_sync_channel_write_layer4_out_24_V_1 = ((ap_channel_done_layer4_out_24_V_1.read() & 
  layer4_out_24_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_24_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_25_V_1() {
    ap_sync_channel_write_layer4_out_25_V_1 = ((ap_channel_done_layer4_out_25_V_1.read() & 
  layer4_out_25_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_25_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_26_V_1() {
    ap_sync_channel_write_layer4_out_26_V_1 = ((ap_channel_done_layer4_out_26_V_1.read() & 
  layer4_out_26_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_26_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_27_V_1() {
    ap_sync_channel_write_layer4_out_27_V_1 = ((ap_channel_done_layer4_out_27_V_1.read() & 
  layer4_out_27_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_27_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_28_V_1() {
    ap_sync_channel_write_layer4_out_28_V_1 = ((ap_channel_done_layer4_out_28_V_1.read() & 
  layer4_out_28_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_28_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_29_V_1() {
    ap_sync_channel_write_layer4_out_29_V_1 = ((ap_channel_done_layer4_out_29_V_1.read() & 
  layer4_out_29_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_29_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_2_V_1() {
    ap_sync_channel_write_layer4_out_2_V_1 = ((ap_channel_done_layer4_out_2_V_1.read() & 
  layer4_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_30_V_1() {
    ap_sync_channel_write_layer4_out_30_V_1 = ((ap_channel_done_layer4_out_30_V_1.read() & 
  layer4_out_30_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_30_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_31_V_1() {
    ap_sync_channel_write_layer4_out_31_V_1 = ((ap_channel_done_layer4_out_31_V_1.read() & 
  layer4_out_31_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_31_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_32_V_1() {
    ap_sync_channel_write_layer4_out_32_V_1 = ((ap_channel_done_layer4_out_32_V_1.read() & 
  layer4_out_32_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_32_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_33_V_1() {
    ap_sync_channel_write_layer4_out_33_V_1 = ((ap_channel_done_layer4_out_33_V_1.read() & 
  layer4_out_33_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_33_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_34_V_1() {
    ap_sync_channel_write_layer4_out_34_V_1 = ((ap_channel_done_layer4_out_34_V_1.read() & 
  layer4_out_34_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_34_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_35_V_1() {
    ap_sync_channel_write_layer4_out_35_V_1 = ((ap_channel_done_layer4_out_35_V_1.read() & 
  layer4_out_35_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_35_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_36_V_1() {
    ap_sync_channel_write_layer4_out_36_V_1 = ((ap_channel_done_layer4_out_36_V_1.read() & 
  layer4_out_36_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_36_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_37_V_1() {
    ap_sync_channel_write_layer4_out_37_V_1 = ((ap_channel_done_layer4_out_37_V_1.read() & 
  layer4_out_37_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_37_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_38_V_1() {
    ap_sync_channel_write_layer4_out_38_V_1 = ((ap_channel_done_layer4_out_38_V_1.read() & 
  layer4_out_38_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_38_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_39_V_1() {
    ap_sync_channel_write_layer4_out_39_V_1 = ((ap_channel_done_layer4_out_39_V_1.read() & 
  layer4_out_39_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_39_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_3_V_1() {
    ap_sync_channel_write_layer4_out_3_V_1 = ((ap_channel_done_layer4_out_3_V_1.read() & 
  layer4_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_40_V_1() {
    ap_sync_channel_write_layer4_out_40_V_1 = ((ap_channel_done_layer4_out_40_V_1.read() & 
  layer4_out_40_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_40_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_41_V_1() {
    ap_sync_channel_write_layer4_out_41_V_1 = ((ap_channel_done_layer4_out_41_V_1.read() & 
  layer4_out_41_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_41_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_42_V_1() {
    ap_sync_channel_write_layer4_out_42_V_1 = ((ap_channel_done_layer4_out_42_V_1.read() & 
  layer4_out_42_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_42_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_43_V_1() {
    ap_sync_channel_write_layer4_out_43_V_1 = ((ap_channel_done_layer4_out_43_V_1.read() & 
  layer4_out_43_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_43_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_44_V_1() {
    ap_sync_channel_write_layer4_out_44_V_1 = ((ap_channel_done_layer4_out_44_V_1.read() & 
  layer4_out_44_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_44_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_45_V_1() {
    ap_sync_channel_write_layer4_out_45_V_1 = ((ap_channel_done_layer4_out_45_V_1.read() & 
  layer4_out_45_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_45_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_46_V_1() {
    ap_sync_channel_write_layer4_out_46_V_1 = ((ap_channel_done_layer4_out_46_V_1.read() & 
  layer4_out_46_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_46_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_47_V_1() {
    ap_sync_channel_write_layer4_out_47_V_1 = ((ap_channel_done_layer4_out_47_V_1.read() & 
  layer4_out_47_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_47_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_48_V_1() {
    ap_sync_channel_write_layer4_out_48_V_1 = ((ap_channel_done_layer4_out_48_V_1.read() & 
  layer4_out_48_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_48_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_49_V_1() {
    ap_sync_channel_write_layer4_out_49_V_1 = ((ap_channel_done_layer4_out_49_V_1.read() & 
  layer4_out_49_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_49_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_4_V_1() {
    ap_sync_channel_write_layer4_out_4_V_1 = ((ap_channel_done_layer4_out_4_V_1.read() & 
  layer4_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_50_V_1() {
    ap_sync_channel_write_layer4_out_50_V_1 = ((ap_channel_done_layer4_out_50_V_1.read() & 
  layer4_out_50_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_50_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_51_V_1() {
    ap_sync_channel_write_layer4_out_51_V_1 = ((ap_channel_done_layer4_out_51_V_1.read() & 
  layer4_out_51_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_51_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_52_V_1() {
    ap_sync_channel_write_layer4_out_52_V_1 = ((ap_channel_done_layer4_out_52_V_1.read() & 
  layer4_out_52_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_52_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_53_V_1() {
    ap_sync_channel_write_layer4_out_53_V_1 = ((ap_channel_done_layer4_out_53_V_1.read() & 
  layer4_out_53_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_53_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_54_V_1() {
    ap_sync_channel_write_layer4_out_54_V_1 = ((ap_channel_done_layer4_out_54_V_1.read() & 
  layer4_out_54_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_54_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_55_V_1() {
    ap_sync_channel_write_layer4_out_55_V_1 = ((ap_channel_done_layer4_out_55_V_1.read() & 
  layer4_out_55_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_55_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_56_V_1() {
    ap_sync_channel_write_layer4_out_56_V_1 = ((ap_channel_done_layer4_out_56_V_1.read() & 
  layer4_out_56_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_56_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_57_V_1() {
    ap_sync_channel_write_layer4_out_57_V_1 = ((ap_channel_done_layer4_out_57_V_1.read() & 
  layer4_out_57_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_57_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_58_V_1() {
    ap_sync_channel_write_layer4_out_58_V_1 = ((ap_channel_done_layer4_out_58_V_1.read() & 
  layer4_out_58_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_58_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_59_V_1() {
    ap_sync_channel_write_layer4_out_59_V_1 = ((ap_channel_done_layer4_out_59_V_1.read() & 
  layer4_out_59_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_59_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_5_V_1() {
    ap_sync_channel_write_layer4_out_5_V_1 = ((ap_channel_done_layer4_out_5_V_1.read() & 
  layer4_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_60_V_1() {
    ap_sync_channel_write_layer4_out_60_V_1 = ((ap_channel_done_layer4_out_60_V_1.read() & 
  layer4_out_60_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_60_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_61_V_1() {
    ap_sync_channel_write_layer4_out_61_V_1 = ((ap_channel_done_layer4_out_61_V_1.read() & 
  layer4_out_61_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_61_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_62_V_1() {
    ap_sync_channel_write_layer4_out_62_V_1 = ((ap_channel_done_layer4_out_62_V_1.read() & 
  layer4_out_62_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_62_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_63_V_1() {
    ap_sync_channel_write_layer4_out_63_V_1 = ((ap_channel_done_layer4_out_63_V_1.read() & 
  layer4_out_63_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_63_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_64_V_1() {
    ap_sync_channel_write_layer4_out_64_V_1 = ((ap_channel_done_layer4_out_64_V_1.read() & 
  layer4_out_64_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_64_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_65_V_1() {
    ap_sync_channel_write_layer4_out_65_V_1 = ((ap_channel_done_layer4_out_65_V_1.read() & 
  layer4_out_65_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_65_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_66_V_1() {
    ap_sync_channel_write_layer4_out_66_V_1 = ((ap_channel_done_layer4_out_66_V_1.read() & 
  layer4_out_66_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_66_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_67_V_1() {
    ap_sync_channel_write_layer4_out_67_V_1 = ((ap_channel_done_layer4_out_67_V_1.read() & 
  layer4_out_67_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_67_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_68_V_1() {
    ap_sync_channel_write_layer4_out_68_V_1 = ((ap_channel_done_layer4_out_68_V_1.read() & 
  layer4_out_68_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_68_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_69_V_1() {
    ap_sync_channel_write_layer4_out_69_V_1 = ((ap_channel_done_layer4_out_69_V_1.read() & 
  layer4_out_69_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_69_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_6_V_1() {
    ap_sync_channel_write_layer4_out_6_V_1 = ((ap_channel_done_layer4_out_6_V_1.read() & 
  layer4_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_70_V_1() {
    ap_sync_channel_write_layer4_out_70_V_1 = ((ap_channel_done_layer4_out_70_V_1.read() & 
  layer4_out_70_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_70_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_71_V_1() {
    ap_sync_channel_write_layer4_out_71_V_1 = ((ap_channel_done_layer4_out_71_V_1.read() & 
  layer4_out_71_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_71_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_72_V_1() {
    ap_sync_channel_write_layer4_out_72_V_1 = ((ap_channel_done_layer4_out_72_V_1.read() & 
  layer4_out_72_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_72_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_73_V_1() {
    ap_sync_channel_write_layer4_out_73_V_1 = ((ap_channel_done_layer4_out_73_V_1.read() & 
  layer4_out_73_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_73_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_74_V_1() {
    ap_sync_channel_write_layer4_out_74_V_1 = ((ap_channel_done_layer4_out_74_V_1.read() & 
  layer4_out_74_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_74_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_75_V_1() {
    ap_sync_channel_write_layer4_out_75_V_1 = ((ap_channel_done_layer4_out_75_V_1.read() & 
  layer4_out_75_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_75_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_76_V_1() {
    ap_sync_channel_write_layer4_out_76_V_1 = ((ap_channel_done_layer4_out_76_V_1.read() & 
  layer4_out_76_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_76_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_77_V_1() {
    ap_sync_channel_write_layer4_out_77_V_1 = ((ap_channel_done_layer4_out_77_V_1.read() & 
  layer4_out_77_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_77_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_78_V_1() {
    ap_sync_channel_write_layer4_out_78_V_1 = ((ap_channel_done_layer4_out_78_V_1.read() & 
  layer4_out_78_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_78_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_79_V_1() {
    ap_sync_channel_write_layer4_out_79_V_1 = ((ap_channel_done_layer4_out_79_V_1.read() & 
  layer4_out_79_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_79_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_7_V_1() {
    ap_sync_channel_write_layer4_out_7_V_1 = ((ap_channel_done_layer4_out_7_V_1.read() & 
  layer4_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_80_V_1() {
    ap_sync_channel_write_layer4_out_80_V_1 = ((ap_channel_done_layer4_out_80_V_1.read() & 
  layer4_out_80_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_80_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_81_V_1() {
    ap_sync_channel_write_layer4_out_81_V_1 = ((ap_channel_done_layer4_out_81_V_1.read() & 
  layer4_out_81_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_81_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_82_V_1() {
    ap_sync_channel_write_layer4_out_82_V_1 = ((ap_channel_done_layer4_out_82_V_1.read() & 
  layer4_out_82_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_82_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_83_V_1() {
    ap_sync_channel_write_layer4_out_83_V_1 = ((ap_channel_done_layer4_out_83_V_1.read() & 
  layer4_out_83_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_83_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_84_V_1() {
    ap_sync_channel_write_layer4_out_84_V_1 = ((ap_channel_done_layer4_out_84_V_1.read() & 
  layer4_out_84_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_84_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_85_V_1() {
    ap_sync_channel_write_layer4_out_85_V_1 = ((ap_channel_done_layer4_out_85_V_1.read() & 
  layer4_out_85_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_85_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_86_V_1() {
    ap_sync_channel_write_layer4_out_86_V_1 = ((ap_channel_done_layer4_out_86_V_1.read() & 
  layer4_out_86_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_86_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_87_V_1() {
    ap_sync_channel_write_layer4_out_87_V_1 = ((ap_channel_done_layer4_out_87_V_1.read() & 
  layer4_out_87_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_87_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_88_V_1() {
    ap_sync_channel_write_layer4_out_88_V_1 = ((ap_channel_done_layer4_out_88_V_1.read() & 
  layer4_out_88_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_88_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_89_V_1() {
    ap_sync_channel_write_layer4_out_89_V_1 = ((ap_channel_done_layer4_out_89_V_1.read() & 
  layer4_out_89_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_89_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_8_V_1() {
    ap_sync_channel_write_layer4_out_8_V_1 = ((ap_channel_done_layer4_out_8_V_1.read() & 
  layer4_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_90_V_1() {
    ap_sync_channel_write_layer4_out_90_V_1 = ((ap_channel_done_layer4_out_90_V_1.read() & 
  layer4_out_90_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_90_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_91_V_1() {
    ap_sync_channel_write_layer4_out_91_V_1 = ((ap_channel_done_layer4_out_91_V_1.read() & 
  layer4_out_91_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_91_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_92_V_1() {
    ap_sync_channel_write_layer4_out_92_V_1 = ((ap_channel_done_layer4_out_92_V_1.read() & 
  layer4_out_92_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_92_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_93_V_1() {
    ap_sync_channel_write_layer4_out_93_V_1 = ((ap_channel_done_layer4_out_93_V_1.read() & 
  layer4_out_93_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_93_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_94_V_1() {
    ap_sync_channel_write_layer4_out_94_V_1 = ((ap_channel_done_layer4_out_94_V_1.read() & 
  layer4_out_94_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_94_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_95_V_1() {
    ap_sync_channel_write_layer4_out_95_V_1 = ((ap_channel_done_layer4_out_95_V_1.read() & 
  layer4_out_95_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_95_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_96_V_1() {
    ap_sync_channel_write_layer4_out_96_V_1 = ((ap_channel_done_layer4_out_96_V_1.read() & 
  layer4_out_96_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_96_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_97_V_1() {
    ap_sync_channel_write_layer4_out_97_V_1 = ((ap_channel_done_layer4_out_97_V_1.read() & 
  layer4_out_97_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_97_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_98_V_1() {
    ap_sync_channel_write_layer4_out_98_V_1 = ((ap_channel_done_layer4_out_98_V_1.read() & 
  layer4_out_98_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_98_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_99_V_1() {
    ap_sync_channel_write_layer4_out_99_V_1 = ((ap_channel_done_layer4_out_99_V_1.read() & 
  layer4_out_99_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_99_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer4_out_9_V_1() {
    ap_sync_channel_write_layer4_out_9_V_1 = ((ap_channel_done_layer4_out_9_V_1.read() & 
  layer4_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer4_out_9_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_0_V_1() {
    ap_sync_channel_write_layer5_out_0_V_1 = ((ap_channel_done_layer5_out_0_V_1.read() & 
  layer5_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_10_V_1() {
    ap_sync_channel_write_layer5_out_10_V_1 = ((ap_channel_done_layer5_out_10_V_1.read() & 
  layer5_out_10_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_10_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_11_V_1() {
    ap_sync_channel_write_layer5_out_11_V_1 = ((ap_channel_done_layer5_out_11_V_1.read() & 
  layer5_out_11_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_11_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_12_V_1() {
    ap_sync_channel_write_layer5_out_12_V_1 = ((ap_channel_done_layer5_out_12_V_1.read() & 
  layer5_out_12_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_12_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_13_V_1() {
    ap_sync_channel_write_layer5_out_13_V_1 = ((ap_channel_done_layer5_out_13_V_1.read() & 
  layer5_out_13_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_13_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_14_V_1() {
    ap_sync_channel_write_layer5_out_14_V_1 = ((ap_channel_done_layer5_out_14_V_1.read() & 
  layer5_out_14_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_14_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_15_V_1() {
    ap_sync_channel_write_layer5_out_15_V_1 = ((ap_channel_done_layer5_out_15_V_1.read() & 
  layer5_out_15_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_15_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_16_V_1() {
    ap_sync_channel_write_layer5_out_16_V_1 = ((ap_channel_done_layer5_out_16_V_1.read() & 
  layer5_out_16_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_16_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_17_V_1() {
    ap_sync_channel_write_layer5_out_17_V_1 = ((ap_channel_done_layer5_out_17_V_1.read() & 
  layer5_out_17_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_17_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_18_V_1() {
    ap_sync_channel_write_layer5_out_18_V_1 = ((ap_channel_done_layer5_out_18_V_1.read() & 
  layer5_out_18_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_18_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_19_V_1() {
    ap_sync_channel_write_layer5_out_19_V_1 = ((ap_channel_done_layer5_out_19_V_1.read() & 
  layer5_out_19_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_19_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_1_V_1() {
    ap_sync_channel_write_layer5_out_1_V_1 = ((ap_channel_done_layer5_out_1_V_1.read() & 
  layer5_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_20_V_1() {
    ap_sync_channel_write_layer5_out_20_V_1 = ((ap_channel_done_layer5_out_20_V_1.read() & 
  layer5_out_20_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_20_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_21_V_1() {
    ap_sync_channel_write_layer5_out_21_V_1 = ((ap_channel_done_layer5_out_21_V_1.read() & 
  layer5_out_21_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_21_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_22_V_1() {
    ap_sync_channel_write_layer5_out_22_V_1 = ((ap_channel_done_layer5_out_22_V_1.read() & 
  layer5_out_22_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_22_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_23_V_1() {
    ap_sync_channel_write_layer5_out_23_V_1 = ((ap_channel_done_layer5_out_23_V_1.read() & 
  layer5_out_23_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_23_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_24_V_1() {
    ap_sync_channel_write_layer5_out_24_V_1 = ((ap_channel_done_layer5_out_24_V_1.read() & 
  layer5_out_24_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_24_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_25_V_1() {
    ap_sync_channel_write_layer5_out_25_V_1 = ((ap_channel_done_layer5_out_25_V_1.read() & 
  layer5_out_25_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_25_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_26_V_1() {
    ap_sync_channel_write_layer5_out_26_V_1 = ((ap_channel_done_layer5_out_26_V_1.read() & 
  layer5_out_26_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_26_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_27_V_1() {
    ap_sync_channel_write_layer5_out_27_V_1 = ((ap_channel_done_layer5_out_27_V_1.read() & 
  layer5_out_27_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_27_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_28_V_1() {
    ap_sync_channel_write_layer5_out_28_V_1 = ((ap_channel_done_layer5_out_28_V_1.read() & 
  layer5_out_28_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_28_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_29_V_1() {
    ap_sync_channel_write_layer5_out_29_V_1 = ((ap_channel_done_layer5_out_29_V_1.read() & 
  layer5_out_29_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_29_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_2_V_1() {
    ap_sync_channel_write_layer5_out_2_V_1 = ((ap_channel_done_layer5_out_2_V_1.read() & 
  layer5_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_30_V_1() {
    ap_sync_channel_write_layer5_out_30_V_1 = ((ap_channel_done_layer5_out_30_V_1.read() & 
  layer5_out_30_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_30_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_31_V_1() {
    ap_sync_channel_write_layer5_out_31_V_1 = ((ap_channel_done_layer5_out_31_V_1.read() & 
  layer5_out_31_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_31_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_32_V_1() {
    ap_sync_channel_write_layer5_out_32_V_1 = ((ap_channel_done_layer5_out_32_V_1.read() & 
  layer5_out_32_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_32_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_33_V_1() {
    ap_sync_channel_write_layer5_out_33_V_1 = ((ap_channel_done_layer5_out_33_V_1.read() & 
  layer5_out_33_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_33_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_34_V_1() {
    ap_sync_channel_write_layer5_out_34_V_1 = ((ap_channel_done_layer5_out_34_V_1.read() & 
  layer5_out_34_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_34_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_35_V_1() {
    ap_sync_channel_write_layer5_out_35_V_1 = ((ap_channel_done_layer5_out_35_V_1.read() & 
  layer5_out_35_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_35_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_36_V_1() {
    ap_sync_channel_write_layer5_out_36_V_1 = ((ap_channel_done_layer5_out_36_V_1.read() & 
  layer5_out_36_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_36_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_37_V_1() {
    ap_sync_channel_write_layer5_out_37_V_1 = ((ap_channel_done_layer5_out_37_V_1.read() & 
  layer5_out_37_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_37_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_38_V_1() {
    ap_sync_channel_write_layer5_out_38_V_1 = ((ap_channel_done_layer5_out_38_V_1.read() & 
  layer5_out_38_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_38_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_39_V_1() {
    ap_sync_channel_write_layer5_out_39_V_1 = ((ap_channel_done_layer5_out_39_V_1.read() & 
  layer5_out_39_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_39_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_3_V_1() {
    ap_sync_channel_write_layer5_out_3_V_1 = ((ap_channel_done_layer5_out_3_V_1.read() & 
  layer5_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_40_V_1() {
    ap_sync_channel_write_layer5_out_40_V_1 = ((ap_channel_done_layer5_out_40_V_1.read() & 
  layer5_out_40_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_40_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_41_V_1() {
    ap_sync_channel_write_layer5_out_41_V_1 = ((ap_channel_done_layer5_out_41_V_1.read() & 
  layer5_out_41_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_41_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_42_V_1() {
    ap_sync_channel_write_layer5_out_42_V_1 = ((ap_channel_done_layer5_out_42_V_1.read() & 
  layer5_out_42_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_42_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_43_V_1() {
    ap_sync_channel_write_layer5_out_43_V_1 = ((ap_channel_done_layer5_out_43_V_1.read() & 
  layer5_out_43_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_43_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_44_V_1() {
    ap_sync_channel_write_layer5_out_44_V_1 = ((ap_channel_done_layer5_out_44_V_1.read() & 
  layer5_out_44_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_44_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_45_V_1() {
    ap_sync_channel_write_layer5_out_45_V_1 = ((ap_channel_done_layer5_out_45_V_1.read() & 
  layer5_out_45_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_45_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_46_V_1() {
    ap_sync_channel_write_layer5_out_46_V_1 = ((ap_channel_done_layer5_out_46_V_1.read() & 
  layer5_out_46_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_46_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_47_V_1() {
    ap_sync_channel_write_layer5_out_47_V_1 = ((ap_channel_done_layer5_out_47_V_1.read() & 
  layer5_out_47_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_47_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_48_V_1() {
    ap_sync_channel_write_layer5_out_48_V_1 = ((ap_channel_done_layer5_out_48_V_1.read() & 
  layer5_out_48_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_48_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_49_V_1() {
    ap_sync_channel_write_layer5_out_49_V_1 = ((ap_channel_done_layer5_out_49_V_1.read() & 
  layer5_out_49_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_49_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_4_V_1() {
    ap_sync_channel_write_layer5_out_4_V_1 = ((ap_channel_done_layer5_out_4_V_1.read() & 
  layer5_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_50_V_1() {
    ap_sync_channel_write_layer5_out_50_V_1 = ((ap_channel_done_layer5_out_50_V_1.read() & 
  layer5_out_50_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_50_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_51_V_1() {
    ap_sync_channel_write_layer5_out_51_V_1 = ((ap_channel_done_layer5_out_51_V_1.read() & 
  layer5_out_51_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_51_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_52_V_1() {
    ap_sync_channel_write_layer5_out_52_V_1 = ((ap_channel_done_layer5_out_52_V_1.read() & 
  layer5_out_52_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_52_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_53_V_1() {
    ap_sync_channel_write_layer5_out_53_V_1 = ((ap_channel_done_layer5_out_53_V_1.read() & 
  layer5_out_53_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_53_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_54_V_1() {
    ap_sync_channel_write_layer5_out_54_V_1 = ((ap_channel_done_layer5_out_54_V_1.read() & 
  layer5_out_54_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_54_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_55_V_1() {
    ap_sync_channel_write_layer5_out_55_V_1 = ((ap_channel_done_layer5_out_55_V_1.read() & 
  layer5_out_55_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_55_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_56_V_1() {
    ap_sync_channel_write_layer5_out_56_V_1 = ((ap_channel_done_layer5_out_56_V_1.read() & 
  layer5_out_56_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_56_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_57_V_1() {
    ap_sync_channel_write_layer5_out_57_V_1 = ((ap_channel_done_layer5_out_57_V_1.read() & 
  layer5_out_57_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_57_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_58_V_1() {
    ap_sync_channel_write_layer5_out_58_V_1 = ((ap_channel_done_layer5_out_58_V_1.read() & 
  layer5_out_58_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_58_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_59_V_1() {
    ap_sync_channel_write_layer5_out_59_V_1 = ((ap_channel_done_layer5_out_59_V_1.read() & 
  layer5_out_59_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_59_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_5_V_1() {
    ap_sync_channel_write_layer5_out_5_V_1 = ((ap_channel_done_layer5_out_5_V_1.read() & 
  layer5_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_60_V_1() {
    ap_sync_channel_write_layer5_out_60_V_1 = ((ap_channel_done_layer5_out_60_V_1.read() & 
  layer5_out_60_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_60_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_61_V_1() {
    ap_sync_channel_write_layer5_out_61_V_1 = ((ap_channel_done_layer5_out_61_V_1.read() & 
  layer5_out_61_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_61_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_62_V_1() {
    ap_sync_channel_write_layer5_out_62_V_1 = ((ap_channel_done_layer5_out_62_V_1.read() & 
  layer5_out_62_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_62_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_63_V_1() {
    ap_sync_channel_write_layer5_out_63_V_1 = ((ap_channel_done_layer5_out_63_V_1.read() & 
  layer5_out_63_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_63_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_64_V_1() {
    ap_sync_channel_write_layer5_out_64_V_1 = ((ap_channel_done_layer5_out_64_V_1.read() & 
  layer5_out_64_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_64_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_65_V_1() {
    ap_sync_channel_write_layer5_out_65_V_1 = ((ap_channel_done_layer5_out_65_V_1.read() & 
  layer5_out_65_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_65_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_66_V_1() {
    ap_sync_channel_write_layer5_out_66_V_1 = ((ap_channel_done_layer5_out_66_V_1.read() & 
  layer5_out_66_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_66_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_67_V_1() {
    ap_sync_channel_write_layer5_out_67_V_1 = ((ap_channel_done_layer5_out_67_V_1.read() & 
  layer5_out_67_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_67_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_68_V_1() {
    ap_sync_channel_write_layer5_out_68_V_1 = ((ap_channel_done_layer5_out_68_V_1.read() & 
  layer5_out_68_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_68_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_69_V_1() {
    ap_sync_channel_write_layer5_out_69_V_1 = ((ap_channel_done_layer5_out_69_V_1.read() & 
  layer5_out_69_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_69_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_6_V_1() {
    ap_sync_channel_write_layer5_out_6_V_1 = ((ap_channel_done_layer5_out_6_V_1.read() & 
  layer5_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_70_V_1() {
    ap_sync_channel_write_layer5_out_70_V_1 = ((ap_channel_done_layer5_out_70_V_1.read() & 
  layer5_out_70_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_70_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_71_V_1() {
    ap_sync_channel_write_layer5_out_71_V_1 = ((ap_channel_done_layer5_out_71_V_1.read() & 
  layer5_out_71_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_71_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_72_V_1() {
    ap_sync_channel_write_layer5_out_72_V_1 = ((ap_channel_done_layer5_out_72_V_1.read() & 
  layer5_out_72_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_72_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_73_V_1() {
    ap_sync_channel_write_layer5_out_73_V_1 = ((ap_channel_done_layer5_out_73_V_1.read() & 
  layer5_out_73_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_73_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_74_V_1() {
    ap_sync_channel_write_layer5_out_74_V_1 = ((ap_channel_done_layer5_out_74_V_1.read() & 
  layer5_out_74_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_74_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_75_V_1() {
    ap_sync_channel_write_layer5_out_75_V_1 = ((ap_channel_done_layer5_out_75_V_1.read() & 
  layer5_out_75_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_75_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_76_V_1() {
    ap_sync_channel_write_layer5_out_76_V_1 = ((ap_channel_done_layer5_out_76_V_1.read() & 
  layer5_out_76_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_76_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_77_V_1() {
    ap_sync_channel_write_layer5_out_77_V_1 = ((ap_channel_done_layer5_out_77_V_1.read() & 
  layer5_out_77_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_77_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_78_V_1() {
    ap_sync_channel_write_layer5_out_78_V_1 = ((ap_channel_done_layer5_out_78_V_1.read() & 
  layer5_out_78_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_78_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_79_V_1() {
    ap_sync_channel_write_layer5_out_79_V_1 = ((ap_channel_done_layer5_out_79_V_1.read() & 
  layer5_out_79_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_79_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_7_V_1() {
    ap_sync_channel_write_layer5_out_7_V_1 = ((ap_channel_done_layer5_out_7_V_1.read() & 
  layer5_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_80_V_1() {
    ap_sync_channel_write_layer5_out_80_V_1 = ((ap_channel_done_layer5_out_80_V_1.read() & 
  layer5_out_80_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_80_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_81_V_1() {
    ap_sync_channel_write_layer5_out_81_V_1 = ((ap_channel_done_layer5_out_81_V_1.read() & 
  layer5_out_81_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_81_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_82_V_1() {
    ap_sync_channel_write_layer5_out_82_V_1 = ((ap_channel_done_layer5_out_82_V_1.read() & 
  layer5_out_82_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_82_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_83_V_1() {
    ap_sync_channel_write_layer5_out_83_V_1 = ((ap_channel_done_layer5_out_83_V_1.read() & 
  layer5_out_83_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_83_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_84_V_1() {
    ap_sync_channel_write_layer5_out_84_V_1 = ((ap_channel_done_layer5_out_84_V_1.read() & 
  layer5_out_84_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_84_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_85_V_1() {
    ap_sync_channel_write_layer5_out_85_V_1 = ((ap_channel_done_layer5_out_85_V_1.read() & 
  layer5_out_85_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_85_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_86_V_1() {
    ap_sync_channel_write_layer5_out_86_V_1 = ((ap_channel_done_layer5_out_86_V_1.read() & 
  layer5_out_86_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_86_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_87_V_1() {
    ap_sync_channel_write_layer5_out_87_V_1 = ((ap_channel_done_layer5_out_87_V_1.read() & 
  layer5_out_87_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_87_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_88_V_1() {
    ap_sync_channel_write_layer5_out_88_V_1 = ((ap_channel_done_layer5_out_88_V_1.read() & 
  layer5_out_88_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_88_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_89_V_1() {
    ap_sync_channel_write_layer5_out_89_V_1 = ((ap_channel_done_layer5_out_89_V_1.read() & 
  layer5_out_89_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_89_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_8_V_1() {
    ap_sync_channel_write_layer5_out_8_V_1 = ((ap_channel_done_layer5_out_8_V_1.read() & 
  layer5_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_90_V_1() {
    ap_sync_channel_write_layer5_out_90_V_1 = ((ap_channel_done_layer5_out_90_V_1.read() & 
  layer5_out_90_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_90_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_91_V_1() {
    ap_sync_channel_write_layer5_out_91_V_1 = ((ap_channel_done_layer5_out_91_V_1.read() & 
  layer5_out_91_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_91_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_92_V_1() {
    ap_sync_channel_write_layer5_out_92_V_1 = ((ap_channel_done_layer5_out_92_V_1.read() & 
  layer5_out_92_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_92_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_93_V_1() {
    ap_sync_channel_write_layer5_out_93_V_1 = ((ap_channel_done_layer5_out_93_V_1.read() & 
  layer5_out_93_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_93_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_94_V_1() {
    ap_sync_channel_write_layer5_out_94_V_1 = ((ap_channel_done_layer5_out_94_V_1.read() & 
  layer5_out_94_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_94_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_95_V_1() {
    ap_sync_channel_write_layer5_out_95_V_1 = ((ap_channel_done_layer5_out_95_V_1.read() & 
  layer5_out_95_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_95_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_96_V_1() {
    ap_sync_channel_write_layer5_out_96_V_1 = ((ap_channel_done_layer5_out_96_V_1.read() & 
  layer5_out_96_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_96_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_97_V_1() {
    ap_sync_channel_write_layer5_out_97_V_1 = ((ap_channel_done_layer5_out_97_V_1.read() & 
  layer5_out_97_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_97_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_98_V_1() {
    ap_sync_channel_write_layer5_out_98_V_1 = ((ap_channel_done_layer5_out_98_V_1.read() & 
  layer5_out_98_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_98_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_99_V_1() {
    ap_sync_channel_write_layer5_out_99_V_1 = ((ap_channel_done_layer5_out_99_V_1.read() & 
  layer5_out_99_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_99_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer5_out_9_V_1() {
    ap_sync_channel_write_layer5_out_9_V_1 = ((ap_channel_done_layer5_out_9_V_1.read() & 
  layer5_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer5_out_9_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_0_V_1() {
    ap_sync_channel_write_layer7_out_0_V_1 = ((ap_channel_done_layer7_out_0_V_1.read() & 
  layer7_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_10_V_1() {
    ap_sync_channel_write_layer7_out_10_V_1 = ((ap_channel_done_layer7_out_10_V_1.read() & 
  layer7_out_10_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_10_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_11_V_1() {
    ap_sync_channel_write_layer7_out_11_V_1 = ((ap_channel_done_layer7_out_11_V_1.read() & 
  layer7_out_11_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_11_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_12_V_1() {
    ap_sync_channel_write_layer7_out_12_V_1 = ((ap_channel_done_layer7_out_12_V_1.read() & 
  layer7_out_12_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_12_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_13_V_1() {
    ap_sync_channel_write_layer7_out_13_V_1 = ((ap_channel_done_layer7_out_13_V_1.read() & 
  layer7_out_13_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_13_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_14_V_1() {
    ap_sync_channel_write_layer7_out_14_V_1 = ((ap_channel_done_layer7_out_14_V_1.read() & 
  layer7_out_14_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_14_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_15_V_1() {
    ap_sync_channel_write_layer7_out_15_V_1 = ((ap_channel_done_layer7_out_15_V_1.read() & 
  layer7_out_15_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_15_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_16_V_1() {
    ap_sync_channel_write_layer7_out_16_V_1 = ((ap_channel_done_layer7_out_16_V_1.read() & 
  layer7_out_16_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_16_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_17_V_1() {
    ap_sync_channel_write_layer7_out_17_V_1 = ((ap_channel_done_layer7_out_17_V_1.read() & 
  layer7_out_17_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_17_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_18_V_1() {
    ap_sync_channel_write_layer7_out_18_V_1 = ((ap_channel_done_layer7_out_18_V_1.read() & 
  layer7_out_18_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_18_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_19_V_1() {
    ap_sync_channel_write_layer7_out_19_V_1 = ((ap_channel_done_layer7_out_19_V_1.read() & 
  layer7_out_19_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_19_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_1_V_1() {
    ap_sync_channel_write_layer7_out_1_V_1 = ((ap_channel_done_layer7_out_1_V_1.read() & 
  layer7_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_20_V_1() {
    ap_sync_channel_write_layer7_out_20_V_1 = ((ap_channel_done_layer7_out_20_V_1.read() & 
  layer7_out_20_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_20_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_21_V_1() {
    ap_sync_channel_write_layer7_out_21_V_1 = ((ap_channel_done_layer7_out_21_V_1.read() & 
  layer7_out_21_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_21_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_22_V_1() {
    ap_sync_channel_write_layer7_out_22_V_1 = ((ap_channel_done_layer7_out_22_V_1.read() & 
  layer7_out_22_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_22_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_23_V_1() {
    ap_sync_channel_write_layer7_out_23_V_1 = ((ap_channel_done_layer7_out_23_V_1.read() & 
  layer7_out_23_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_23_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_24_V_1() {
    ap_sync_channel_write_layer7_out_24_V_1 = ((ap_channel_done_layer7_out_24_V_1.read() & 
  layer7_out_24_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_24_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_25_V_1() {
    ap_sync_channel_write_layer7_out_25_V_1 = ((ap_channel_done_layer7_out_25_V_1.read() & 
  layer7_out_25_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_25_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_26_V_1() {
    ap_sync_channel_write_layer7_out_26_V_1 = ((ap_channel_done_layer7_out_26_V_1.read() & 
  layer7_out_26_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_26_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_27_V_1() {
    ap_sync_channel_write_layer7_out_27_V_1 = ((ap_channel_done_layer7_out_27_V_1.read() & 
  layer7_out_27_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_27_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_28_V_1() {
    ap_sync_channel_write_layer7_out_28_V_1 = ((ap_channel_done_layer7_out_28_V_1.read() & 
  layer7_out_28_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_28_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_29_V_1() {
    ap_sync_channel_write_layer7_out_29_V_1 = ((ap_channel_done_layer7_out_29_V_1.read() & 
  layer7_out_29_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_29_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_2_V_1() {
    ap_sync_channel_write_layer7_out_2_V_1 = ((ap_channel_done_layer7_out_2_V_1.read() & 
  layer7_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_30_V_1() {
    ap_sync_channel_write_layer7_out_30_V_1 = ((ap_channel_done_layer7_out_30_V_1.read() & 
  layer7_out_30_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_30_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_31_V_1() {
    ap_sync_channel_write_layer7_out_31_V_1 = ((ap_channel_done_layer7_out_31_V_1.read() & 
  layer7_out_31_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_31_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_32_V_1() {
    ap_sync_channel_write_layer7_out_32_V_1 = ((ap_channel_done_layer7_out_32_V_1.read() & 
  layer7_out_32_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_32_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_33_V_1() {
    ap_sync_channel_write_layer7_out_33_V_1 = ((ap_channel_done_layer7_out_33_V_1.read() & 
  layer7_out_33_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_33_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_34_V_1() {
    ap_sync_channel_write_layer7_out_34_V_1 = ((ap_channel_done_layer7_out_34_V_1.read() & 
  layer7_out_34_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_34_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_35_V_1() {
    ap_sync_channel_write_layer7_out_35_V_1 = ((ap_channel_done_layer7_out_35_V_1.read() & 
  layer7_out_35_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_35_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_36_V_1() {
    ap_sync_channel_write_layer7_out_36_V_1 = ((ap_channel_done_layer7_out_36_V_1.read() & 
  layer7_out_36_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_36_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_37_V_1() {
    ap_sync_channel_write_layer7_out_37_V_1 = ((ap_channel_done_layer7_out_37_V_1.read() & 
  layer7_out_37_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_37_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_38_V_1() {
    ap_sync_channel_write_layer7_out_38_V_1 = ((ap_channel_done_layer7_out_38_V_1.read() & 
  layer7_out_38_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_38_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_39_V_1() {
    ap_sync_channel_write_layer7_out_39_V_1 = ((ap_channel_done_layer7_out_39_V_1.read() & 
  layer7_out_39_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_39_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_3_V_1() {
    ap_sync_channel_write_layer7_out_3_V_1 = ((ap_channel_done_layer7_out_3_V_1.read() & 
  layer7_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_40_V_1() {
    ap_sync_channel_write_layer7_out_40_V_1 = ((ap_channel_done_layer7_out_40_V_1.read() & 
  layer7_out_40_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_40_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_41_V_1() {
    ap_sync_channel_write_layer7_out_41_V_1 = ((ap_channel_done_layer7_out_41_V_1.read() & 
  layer7_out_41_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_41_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_42_V_1() {
    ap_sync_channel_write_layer7_out_42_V_1 = ((ap_channel_done_layer7_out_42_V_1.read() & 
  layer7_out_42_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_42_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_43_V_1() {
    ap_sync_channel_write_layer7_out_43_V_1 = ((ap_channel_done_layer7_out_43_V_1.read() & 
  layer7_out_43_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_43_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_44_V_1() {
    ap_sync_channel_write_layer7_out_44_V_1 = ((ap_channel_done_layer7_out_44_V_1.read() & 
  layer7_out_44_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_44_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_45_V_1() {
    ap_sync_channel_write_layer7_out_45_V_1 = ((ap_channel_done_layer7_out_45_V_1.read() & 
  layer7_out_45_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_45_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_46_V_1() {
    ap_sync_channel_write_layer7_out_46_V_1 = ((ap_channel_done_layer7_out_46_V_1.read() & 
  layer7_out_46_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_46_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_47_V_1() {
    ap_sync_channel_write_layer7_out_47_V_1 = ((ap_channel_done_layer7_out_47_V_1.read() & 
  layer7_out_47_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_47_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_48_V_1() {
    ap_sync_channel_write_layer7_out_48_V_1 = ((ap_channel_done_layer7_out_48_V_1.read() & 
  layer7_out_48_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_48_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_49_V_1() {
    ap_sync_channel_write_layer7_out_49_V_1 = ((ap_channel_done_layer7_out_49_V_1.read() & 
  layer7_out_49_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_49_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_4_V_1() {
    ap_sync_channel_write_layer7_out_4_V_1 = ((ap_channel_done_layer7_out_4_V_1.read() & 
  layer7_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_50_V_1() {
    ap_sync_channel_write_layer7_out_50_V_1 = ((ap_channel_done_layer7_out_50_V_1.read() & 
  layer7_out_50_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_50_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_51_V_1() {
    ap_sync_channel_write_layer7_out_51_V_1 = ((ap_channel_done_layer7_out_51_V_1.read() & 
  layer7_out_51_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_51_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_52_V_1() {
    ap_sync_channel_write_layer7_out_52_V_1 = ((ap_channel_done_layer7_out_52_V_1.read() & 
  layer7_out_52_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_52_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_53_V_1() {
    ap_sync_channel_write_layer7_out_53_V_1 = ((ap_channel_done_layer7_out_53_V_1.read() & 
  layer7_out_53_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_53_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_54_V_1() {
    ap_sync_channel_write_layer7_out_54_V_1 = ((ap_channel_done_layer7_out_54_V_1.read() & 
  layer7_out_54_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_54_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_55_V_1() {
    ap_sync_channel_write_layer7_out_55_V_1 = ((ap_channel_done_layer7_out_55_V_1.read() & 
  layer7_out_55_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_55_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_56_V_1() {
    ap_sync_channel_write_layer7_out_56_V_1 = ((ap_channel_done_layer7_out_56_V_1.read() & 
  layer7_out_56_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_56_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_57_V_1() {
    ap_sync_channel_write_layer7_out_57_V_1 = ((ap_channel_done_layer7_out_57_V_1.read() & 
  layer7_out_57_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_57_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_58_V_1() {
    ap_sync_channel_write_layer7_out_58_V_1 = ((ap_channel_done_layer7_out_58_V_1.read() & 
  layer7_out_58_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_58_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_59_V_1() {
    ap_sync_channel_write_layer7_out_59_V_1 = ((ap_channel_done_layer7_out_59_V_1.read() & 
  layer7_out_59_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_59_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_5_V_1() {
    ap_sync_channel_write_layer7_out_5_V_1 = ((ap_channel_done_layer7_out_5_V_1.read() & 
  layer7_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_60_V_1() {
    ap_sync_channel_write_layer7_out_60_V_1 = ((ap_channel_done_layer7_out_60_V_1.read() & 
  layer7_out_60_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_60_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_61_V_1() {
    ap_sync_channel_write_layer7_out_61_V_1 = ((ap_channel_done_layer7_out_61_V_1.read() & 
  layer7_out_61_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_61_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_62_V_1() {
    ap_sync_channel_write_layer7_out_62_V_1 = ((ap_channel_done_layer7_out_62_V_1.read() & 
  layer7_out_62_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_62_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_63_V_1() {
    ap_sync_channel_write_layer7_out_63_V_1 = ((ap_channel_done_layer7_out_63_V_1.read() & 
  layer7_out_63_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_63_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_64_V_1() {
    ap_sync_channel_write_layer7_out_64_V_1 = ((ap_channel_done_layer7_out_64_V_1.read() & 
  layer7_out_64_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_64_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_65_V_1() {
    ap_sync_channel_write_layer7_out_65_V_1 = ((ap_channel_done_layer7_out_65_V_1.read() & 
  layer7_out_65_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_65_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_66_V_1() {
    ap_sync_channel_write_layer7_out_66_V_1 = ((ap_channel_done_layer7_out_66_V_1.read() & 
  layer7_out_66_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_66_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_67_V_1() {
    ap_sync_channel_write_layer7_out_67_V_1 = ((ap_channel_done_layer7_out_67_V_1.read() & 
  layer7_out_67_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_67_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_68_V_1() {
    ap_sync_channel_write_layer7_out_68_V_1 = ((ap_channel_done_layer7_out_68_V_1.read() & 
  layer7_out_68_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_68_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_69_V_1() {
    ap_sync_channel_write_layer7_out_69_V_1 = ((ap_channel_done_layer7_out_69_V_1.read() & 
  layer7_out_69_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_69_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_6_V_1() {
    ap_sync_channel_write_layer7_out_6_V_1 = ((ap_channel_done_layer7_out_6_V_1.read() & 
  layer7_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_70_V_1() {
    ap_sync_channel_write_layer7_out_70_V_1 = ((ap_channel_done_layer7_out_70_V_1.read() & 
  layer7_out_70_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_70_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_71_V_1() {
    ap_sync_channel_write_layer7_out_71_V_1 = ((ap_channel_done_layer7_out_71_V_1.read() & 
  layer7_out_71_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_71_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_72_V_1() {
    ap_sync_channel_write_layer7_out_72_V_1 = ((ap_channel_done_layer7_out_72_V_1.read() & 
  layer7_out_72_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_72_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_73_V_1() {
    ap_sync_channel_write_layer7_out_73_V_1 = ((ap_channel_done_layer7_out_73_V_1.read() & 
  layer7_out_73_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_73_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_74_V_1() {
    ap_sync_channel_write_layer7_out_74_V_1 = ((ap_channel_done_layer7_out_74_V_1.read() & 
  layer7_out_74_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_74_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_75_V_1() {
    ap_sync_channel_write_layer7_out_75_V_1 = ((ap_channel_done_layer7_out_75_V_1.read() & 
  layer7_out_75_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_75_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_76_V_1() {
    ap_sync_channel_write_layer7_out_76_V_1 = ((ap_channel_done_layer7_out_76_V_1.read() & 
  layer7_out_76_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_76_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_77_V_1() {
    ap_sync_channel_write_layer7_out_77_V_1 = ((ap_channel_done_layer7_out_77_V_1.read() & 
  layer7_out_77_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_77_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_78_V_1() {
    ap_sync_channel_write_layer7_out_78_V_1 = ((ap_channel_done_layer7_out_78_V_1.read() & 
  layer7_out_78_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_78_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_79_V_1() {
    ap_sync_channel_write_layer7_out_79_V_1 = ((ap_channel_done_layer7_out_79_V_1.read() & 
  layer7_out_79_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_79_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_7_V_1() {
    ap_sync_channel_write_layer7_out_7_V_1 = ((ap_channel_done_layer7_out_7_V_1.read() & 
  layer7_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_80_V_1() {
    ap_sync_channel_write_layer7_out_80_V_1 = ((ap_channel_done_layer7_out_80_V_1.read() & 
  layer7_out_80_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_80_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_81_V_1() {
    ap_sync_channel_write_layer7_out_81_V_1 = ((ap_channel_done_layer7_out_81_V_1.read() & 
  layer7_out_81_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_81_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_82_V_1() {
    ap_sync_channel_write_layer7_out_82_V_1 = ((ap_channel_done_layer7_out_82_V_1.read() & 
  layer7_out_82_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_82_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_83_V_1() {
    ap_sync_channel_write_layer7_out_83_V_1 = ((ap_channel_done_layer7_out_83_V_1.read() & 
  layer7_out_83_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_83_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_84_V_1() {
    ap_sync_channel_write_layer7_out_84_V_1 = ((ap_channel_done_layer7_out_84_V_1.read() & 
  layer7_out_84_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_84_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_85_V_1() {
    ap_sync_channel_write_layer7_out_85_V_1 = ((ap_channel_done_layer7_out_85_V_1.read() & 
  layer7_out_85_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_85_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_86_V_1() {
    ap_sync_channel_write_layer7_out_86_V_1 = ((ap_channel_done_layer7_out_86_V_1.read() & 
  layer7_out_86_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_86_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_87_V_1() {
    ap_sync_channel_write_layer7_out_87_V_1 = ((ap_channel_done_layer7_out_87_V_1.read() & 
  layer7_out_87_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_87_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_88_V_1() {
    ap_sync_channel_write_layer7_out_88_V_1 = ((ap_channel_done_layer7_out_88_V_1.read() & 
  layer7_out_88_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_88_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_89_V_1() {
    ap_sync_channel_write_layer7_out_89_V_1 = ((ap_channel_done_layer7_out_89_V_1.read() & 
  layer7_out_89_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_89_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_8_V_1() {
    ap_sync_channel_write_layer7_out_8_V_1 = ((ap_channel_done_layer7_out_8_V_1.read() & 
  layer7_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_90_V_1() {
    ap_sync_channel_write_layer7_out_90_V_1 = ((ap_channel_done_layer7_out_90_V_1.read() & 
  layer7_out_90_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_90_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_91_V_1() {
    ap_sync_channel_write_layer7_out_91_V_1 = ((ap_channel_done_layer7_out_91_V_1.read() & 
  layer7_out_91_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_91_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_92_V_1() {
    ap_sync_channel_write_layer7_out_92_V_1 = ((ap_channel_done_layer7_out_92_V_1.read() & 
  layer7_out_92_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_92_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_93_V_1() {
    ap_sync_channel_write_layer7_out_93_V_1 = ((ap_channel_done_layer7_out_93_V_1.read() & 
  layer7_out_93_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_93_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_94_V_1() {
    ap_sync_channel_write_layer7_out_94_V_1 = ((ap_channel_done_layer7_out_94_V_1.read() & 
  layer7_out_94_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_94_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_95_V_1() {
    ap_sync_channel_write_layer7_out_95_V_1 = ((ap_channel_done_layer7_out_95_V_1.read() & 
  layer7_out_95_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_95_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_96_V_1() {
    ap_sync_channel_write_layer7_out_96_V_1 = ((ap_channel_done_layer7_out_96_V_1.read() & 
  layer7_out_96_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_96_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_97_V_1() {
    ap_sync_channel_write_layer7_out_97_V_1 = ((ap_channel_done_layer7_out_97_V_1.read() & 
  layer7_out_97_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_97_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_98_V_1() {
    ap_sync_channel_write_layer7_out_98_V_1 = ((ap_channel_done_layer7_out_98_V_1.read() & 
  layer7_out_98_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_98_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_99_V_1() {
    ap_sync_channel_write_layer7_out_99_V_1 = ((ap_channel_done_layer7_out_99_V_1.read() & 
  layer7_out_99_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_99_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer7_out_9_V_1() {
    ap_sync_channel_write_layer7_out_9_V_1 = ((ap_channel_done_layer7_out_9_V_1.read() & 
  layer7_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer7_out_9_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_0_V_1() {
    ap_sync_channel_write_layer8_out_0_V_1 = ((ap_channel_done_layer8_out_0_V_1.read() & 
  layer8_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_1_V_1() {
    ap_sync_channel_write_layer8_out_1_V_1 = ((ap_channel_done_layer8_out_1_V_1.read() & 
  layer8_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_2_V_1() {
    ap_sync_channel_write_layer8_out_2_V_1 = ((ap_channel_done_layer8_out_2_V_1.read() & 
  layer8_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_3_V_1() {
    ap_sync_channel_write_layer8_out_3_V_1 = ((ap_channel_done_layer8_out_3_V_1.read() & 
  layer8_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_4_V_1() {
    ap_sync_channel_write_layer8_out_4_V_1 = ((ap_channel_done_layer8_out_4_V_1.read() & 
  layer8_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_5_V_1() {
    ap_sync_channel_write_layer8_out_5_V_1 = ((ap_channel_done_layer8_out_5_V_1.read() & 
  layer8_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_6_V_1() {
    ap_sync_channel_write_layer8_out_6_V_1 = ((ap_channel_done_layer8_out_6_V_1.read() & 
  layer8_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_7_V_1() {
    ap_sync_channel_write_layer8_out_7_V_1 = ((ap_channel_done_layer8_out_7_V_1.read() & 
  layer8_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_8_V_1() {
    ap_sync_channel_write_layer8_out_8_V_1 = ((ap_channel_done_layer8_out_8_V_1.read() & 
  layer8_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer8_out_9_V_1() {
    ap_sync_channel_write_layer8_out_9_V_1 = ((ap_channel_done_layer8_out_9_V_1.read() & 
  layer8_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer8_out_9_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_0_V_1() {
    ap_sync_channel_write_layer9_out_0_V_1 = ((ap_channel_done_layer9_out_0_V_1.read() & 
  layer9_out_0_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_0_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_1_V_1() {
    ap_sync_channel_write_layer9_out_1_V_1 = ((ap_channel_done_layer9_out_1_V_1.read() & 
  layer9_out_1_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_1_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_2_V_1() {
    ap_sync_channel_write_layer9_out_2_V_1 = ((ap_channel_done_layer9_out_2_V_1.read() & 
  layer9_out_2_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_2_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_3_V_1() {
    ap_sync_channel_write_layer9_out_3_V_1 = ((ap_channel_done_layer9_out_3_V_1.read() & 
  layer9_out_3_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_3_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_4_V_1() {
    ap_sync_channel_write_layer9_out_4_V_1 = ((ap_channel_done_layer9_out_4_V_1.read() & 
  layer9_out_4_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_4_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_5_V_1() {
    ap_sync_channel_write_layer9_out_5_V_1 = ((ap_channel_done_layer9_out_5_V_1.read() & 
  layer9_out_5_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_5_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_6_V_1() {
    ap_sync_channel_write_layer9_out_6_V_1 = ((ap_channel_done_layer9_out_6_V_1.read() & 
  layer9_out_6_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_6_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_7_V_1() {
    ap_sync_channel_write_layer9_out_7_V_1 = ((ap_channel_done_layer9_out_7_V_1.read() & 
  layer9_out_7_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_7_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_8_V_1() {
    ap_sync_channel_write_layer9_out_8_V_1 = ((ap_channel_done_layer9_out_8_V_1.read() & 
  layer9_out_8_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_8_V_1.read());
}

void myproject::thread_ap_sync_channel_write_layer9_out_9_V_1() {
    ap_sync_channel_write_layer9_out_9_V_1 = ((ap_channel_done_layer9_out_9_V_1.read() & 
  layer9_out_9_V_1_full_n.read()) | ap_sync_reg_channel_write_layer9_out_9_V_1.read());
}

void myproject::thread_ap_sync_continue() {
    ap_sync_continue = ap_sync_done.read();
}

void myproject::thread_ap_sync_done() {
    ap_sync_done = (Block_proc_U0_ap_done.read() & softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_done.read());
}

void myproject::thread_ap_sync_myproject_entry3_U0_ap_ready() {
    ap_sync_myproject_entry3_U0_ap_ready = (myproject_entry3_U0_ap_ready.read() | ap_sync_reg_myproject_entry3_U0_ap_ready.read());
}

void myproject::thread_ap_sync_ready() {
    ap_sync_ready = (ap_sync_myproject_entry3_U0_ap_ready.read() & ap_sync_Block_proc_U0_ap_ready.read());
}

void myproject::thread_const_size_in_1() {
    const_size_in_1 = Block_proc_U0_const_size_in_1.read();
}

void myproject::thread_const_size_in_1_ap_vld() {
    const_size_in_1_ap_vld = Block_proc_U0_const_size_in_1_ap_vld.read();
}

void myproject::thread_const_size_out_1() {
    const_size_out_1 = Block_proc_U0_const_size_out_1.read();
}

void myproject::thread_const_size_out_1_ap_vld() {
    const_size_out_1_ap_vld = Block_proc_U0_const_size_out_1_ap_vld.read();
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue = (ap_sync_channel_write_layer2_out_99_V_1.read() & ap_sync_channel_write_layer2_out_98_V_1.read() & ap_sync_channel_write_layer2_out_97_V_1.read() & ap_sync_channel_write_layer2_out_96_V_1.read() & ap_sync_channel_write_layer2_out_95_V_1.read() & ap_sync_channel_write_layer2_out_94_V_1.read() & ap_sync_channel_write_layer2_out_93_V_1.read() & ap_sync_channel_write_layer2_out_92_V_1.read() & ap_sync_channel_write_layer2_out_91_V_1.read() & ap_sync_channel_write_layer2_out_90_V_1.read() & ap_sync_channel_write_layer2_out_89_V_1.read() & ap_sync_channel_write_layer2_out_88_V_1.read() & ap_sync_channel_write_layer2_out_87_V_1.read() & ap_sync_channel_write_layer2_out_86_V_1.read() & ap_sync_channel_write_layer2_out_85_V_1.read() & ap_sync_channel_write_layer2_out_84_V_1.read() & ap_sync_channel_write_layer2_out_83_V_1.read() & ap_sync_channel_write_layer2_out_82_V_1.read() & ap_sync_channel_write_layer2_out_81_V_1.read() & ap_sync_channel_write_layer2_out_80_V_1.read() & ap_sync_channel_write_layer2_out_79_V_1.read() & ap_sync_channel_write_layer2_out_78_V_1.read() & ap_sync_channel_write_layer2_out_77_V_1.read() & ap_sync_channel_write_layer2_out_76_V_1.read() & ap_sync_channel_write_layer2_out_75_V_1.read() & ap_sync_channel_write_layer2_out_74_V_1.read() & ap_sync_channel_write_layer2_out_73_V_1.read() & ap_sync_channel_write_layer2_out_72_V_1.read() & ap_sync_channel_write_layer2_out_71_V_1.read() & ap_sync_channel_write_layer2_out_70_V_1.read() & ap_sync_channel_write_layer2_out_69_V_1.read() & ap_sync_channel_write_layer2_out_68_V_1.read() & ap_sync_channel_write_layer2_out_67_V_1.read() & ap_sync_channel_write_layer2_out_66_V_1.read() & ap_sync_channel_write_layer2_out_65_V_1.read() & ap_sync_channel_write_layer2_out_64_V_1.read() & ap_sync_channel_write_layer2_out_63_V_1.read() & ap_sync_channel_write_layer2_out_62_V_1.read() & ap_sync_channel_write_layer2_out_61_V_1.read() & ap_sync_channel_write_layer2_out_60_V_1.read() & ap_sync_channel_write_layer2_out_59_V_1.read() & ap_sync_channel_write_layer2_out_58_V_1.read() & ap_sync_channel_write_layer2_out_57_V_1.read() & ap_sync_channel_write_layer2_out_56_V_1.read() & ap_sync_channel_write_layer2_out_55_V_1.read() & ap_sync_channel_write_layer2_out_54_V_1.read() & ap_sync_channel_write_layer2_out_53_V_1.read() & ap_sync_channel_write_layer2_out_52_V_1.read() & ap_sync_channel_write_layer2_out_51_V_1.read() & ap_sync_channel_write_layer2_out_50_V_1.read() & ap_sync_channel_write_layer2_out_49_V_1.read() & ap_sync_channel_write_layer2_out_48_V_1.read() & ap_sync_channel_write_layer2_out_47_V_1.read() & ap_sync_channel_write_layer2_out_46_V_1.read() & ap_sync_channel_write_layer2_out_45_V_1.read() & ap_sync_channel_write_layer2_out_44_V_1.read() & ap_sync_channel_write_layer2_out_43_V_1.read() & ap_sync_channel_write_layer2_out_42_V_1.read() & ap_sync_channel_write_layer2_out_41_V_1.read() & ap_sync_channel_write_layer2_out_40_V_1.read() & ap_sync_channel_write_layer2_out_39_V_1.read() & ap_sync_channel_write_layer2_out_38_V_1.read() & ap_sync_channel_write_layer2_out_37_V_1.read() & ap_sync_channel_write_layer2_out_36_V_1.read() & ap_sync_channel_write_layer2_out_35_V_1.read() & ap_sync_channel_write_layer2_out_34_V_1.read() & ap_sync_channel_write_layer2_out_33_V_1.read() & ap_sync_channel_write_layer2_out_32_V_1.read() & ap_sync_channel_write_layer2_out_31_V_1.read() & ap_sync_channel_write_layer2_out_30_V_1.read() & ap_sync_channel_write_layer2_out_29_V_1.read() & ap_sync_channel_write_layer2_out_28_V_1.read() & ap_sync_channel_write_layer2_out_27_V_1.read() & ap_sync_channel_write_layer2_out_26_V_1.read() & ap_sync_channel_write_layer2_out_25_V_1.read() & ap_sync_channel_write_layer2_out_24_V_1.read() & ap_sync_channel_write_layer2_out_23_V_1.read() & ap_sync_channel_write_layer2_out_22_V_1.read() & ap_sync_channel_write_layer2_out_21_V_1.read() & ap_sync_channel_write_layer2_out_20_V_1.read() & ap_sync_channel_write_layer2_out_19_V_1.read() & ap_sync_channel_write_layer2_out_18_V_1.read() & ap_sync_channel_write_layer2_out_17_V_1.read() & ap_sync_channel_write_layer2_out_16_V_1.read() & ap_sync_channel_write_layer2_out_15_V_1.read() & ap_sync_channel_write_layer2_out_14_V_1.read() & ap_sync_channel_write_layer2_out_13_V_1.read() & ap_sync_channel_write_layer2_out_12_V_1.read() & ap_sync_channel_write_layer2_out_11_V_1.read() & ap_sync_channel_write_layer2_out_10_V_1.read() & ap_sync_channel_write_layer2_out_9_V_1.read() & ap_sync_channel_write_layer2_out_8_V_1.read() & ap_sync_channel_write_layer2_out_7_V_1.read() & ap_sync_channel_write_layer2_out_6_V_1.read() & ap_sync_channel_write_layer2_out_5_V_1.read() & ap_sync_channel_write_layer2_out_4_V_1.read() & ap_sync_channel_write_layer2_out_3_V_1.read() & ap_sync_channel_write_layer2_out_2_V_1.read() & ap_sync_channel_write_layer2_out_1_V_1.read() & ap_sync_channel_write_layer2_out_0_V_1.read());
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_start() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_start = start_for_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_empty_n.read();
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_start_full_n() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_start_write() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_start_write = ap_const_logic_0;
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue = (ap_sync_channel_write_layer5_out_99_V_1.read() & ap_sync_channel_write_layer5_out_98_V_1.read() & ap_sync_channel_write_layer5_out_97_V_1.read() & ap_sync_channel_write_layer5_out_96_V_1.read() & ap_sync_channel_write_layer5_out_95_V_1.read() & ap_sync_channel_write_layer5_out_94_V_1.read() & ap_sync_channel_write_layer5_out_93_V_1.read() & ap_sync_channel_write_layer5_out_92_V_1.read() & ap_sync_channel_write_layer5_out_91_V_1.read() & ap_sync_channel_write_layer5_out_90_V_1.read() & ap_sync_channel_write_layer5_out_89_V_1.read() & ap_sync_channel_write_layer5_out_88_V_1.read() & ap_sync_channel_write_layer5_out_87_V_1.read() & ap_sync_channel_write_layer5_out_86_V_1.read() & ap_sync_channel_write_layer5_out_85_V_1.read() & ap_sync_channel_write_layer5_out_84_V_1.read() & ap_sync_channel_write_layer5_out_83_V_1.read() & ap_sync_channel_write_layer5_out_82_V_1.read() & ap_sync_channel_write_layer5_out_81_V_1.read() & ap_sync_channel_write_layer5_out_80_V_1.read() & ap_sync_channel_write_layer5_out_79_V_1.read() & ap_sync_channel_write_layer5_out_78_V_1.read() & ap_sync_channel_write_layer5_out_77_V_1.read() & ap_sync_channel_write_layer5_out_76_V_1.read() & ap_sync_channel_write_layer5_out_75_V_1.read() & ap_sync_channel_write_layer5_out_74_V_1.read() & ap_sync_channel_write_layer5_out_73_V_1.read() & ap_sync_channel_write_layer5_out_72_V_1.read() & ap_sync_channel_write_layer5_out_71_V_1.read() & ap_sync_channel_write_layer5_out_70_V_1.read() & ap_sync_channel_write_layer5_out_69_V_1.read() & ap_sync_channel_write_layer5_out_68_V_1.read() & ap_sync_channel_write_layer5_out_67_V_1.read() & ap_sync_channel_write_layer5_out_66_V_1.read() & ap_sync_channel_write_layer5_out_65_V_1.read() & ap_sync_channel_write_layer5_out_64_V_1.read() & ap_sync_channel_write_layer5_out_63_V_1.read() & ap_sync_channel_write_layer5_out_62_V_1.read() & ap_sync_channel_write_layer5_out_61_V_1.read() & ap_sync_channel_write_layer5_out_60_V_1.read() & ap_sync_channel_write_layer5_out_59_V_1.read() & ap_sync_channel_write_layer5_out_58_V_1.read() & ap_sync_channel_write_layer5_out_57_V_1.read() & ap_sync_channel_write_layer5_out_56_V_1.read() & ap_sync_channel_write_layer5_out_55_V_1.read() & ap_sync_channel_write_layer5_out_54_V_1.read() & ap_sync_channel_write_layer5_out_53_V_1.read() & ap_sync_channel_write_layer5_out_52_V_1.read() & ap_sync_channel_write_layer5_out_51_V_1.read() & ap_sync_channel_write_layer5_out_50_V_1.read() & ap_sync_channel_write_layer5_out_49_V_1.read() & ap_sync_channel_write_layer5_out_48_V_1.read() & ap_sync_channel_write_layer5_out_47_V_1.read() & ap_sync_channel_write_layer5_out_46_V_1.read() & ap_sync_channel_write_layer5_out_45_V_1.read() & ap_sync_channel_write_layer5_out_44_V_1.read() & ap_sync_channel_write_layer5_out_43_V_1.read() & ap_sync_channel_write_layer5_out_42_V_1.read() & ap_sync_channel_write_layer5_out_41_V_1.read() & ap_sync_channel_write_layer5_out_40_V_1.read() & ap_sync_channel_write_layer5_out_39_V_1.read() & ap_sync_channel_write_layer5_out_38_V_1.read() & ap_sync_channel_write_layer5_out_37_V_1.read() & ap_sync_channel_write_layer5_out_36_V_1.read() & ap_sync_channel_write_layer5_out_35_V_1.read() & ap_sync_channel_write_layer5_out_34_V_1.read() & ap_sync_channel_write_layer5_out_33_V_1.read() & ap_sync_channel_write_layer5_out_32_V_1.read() & ap_sync_channel_write_layer5_out_31_V_1.read() & ap_sync_channel_write_layer5_out_30_V_1.read() & ap_sync_channel_write_layer5_out_29_V_1.read() & ap_sync_channel_write_layer5_out_28_V_1.read() & ap_sync_channel_write_layer5_out_27_V_1.read() & ap_sync_channel_write_layer5_out_26_V_1.read() & ap_sync_channel_write_layer5_out_25_V_1.read() & ap_sync_channel_write_layer5_out_24_V_1.read() & ap_sync_channel_write_layer5_out_23_V_1.read() & ap_sync_channel_write_layer5_out_22_V_1.read() & ap_sync_channel_write_layer5_out_21_V_1.read() & ap_sync_channel_write_layer5_out_20_V_1.read() & ap_sync_channel_write_layer5_out_19_V_1.read() & ap_sync_channel_write_layer5_out_18_V_1.read() & ap_sync_channel_write_layer5_out_17_V_1.read() & ap_sync_channel_write_layer5_out_16_V_1.read() & ap_sync_channel_write_layer5_out_15_V_1.read() & ap_sync_channel_write_layer5_out_14_V_1.read() & ap_sync_channel_write_layer5_out_13_V_1.read() & ap_sync_channel_write_layer5_out_12_V_1.read() & ap_sync_channel_write_layer5_out_11_V_1.read() & ap_sync_channel_write_layer5_out_10_V_1.read() & ap_sync_channel_write_layer5_out_9_V_1.read() & ap_sync_channel_write_layer5_out_8_V_1.read() & ap_sync_channel_write_layer5_out_7_V_1.read() & ap_sync_channel_write_layer5_out_6_V_1.read() & ap_sync_channel_write_layer5_out_5_V_1.read() & ap_sync_channel_write_layer5_out_4_V_1.read() & ap_sync_channel_write_layer5_out_3_V_1.read() & ap_sync_channel_write_layer5_out_2_V_1.read() & ap_sync_channel_write_layer5_out_1_V_1.read() & ap_sync_channel_write_layer5_out_0_V_1.read());
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_start() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_start = (layer4_out_0_V_1_empty_n.read() & layer4_out_1_V_1_empty_n.read() & layer4_out_2_V_1_empty_n.read() & layer4_out_3_V_1_empty_n.read() & layer4_out_4_V_1_empty_n.read() & layer4_out_5_V_1_empty_n.read() & layer4_out_6_V_1_empty_n.read() & layer4_out_7_V_1_empty_n.read() & layer4_out_8_V_1_empty_n.read() & layer4_out_9_V_1_empty_n.read() & layer4_out_10_V_1_empty_n.read() & layer4_out_11_V_1_empty_n.read() & layer4_out_12_V_1_empty_n.read() & layer4_out_13_V_1_empty_n.read() & layer4_out_14_V_1_empty_n.read() & layer4_out_15_V_1_empty_n.read() & layer4_out_16_V_1_empty_n.read() & layer4_out_17_V_1_empty_n.read() & layer4_out_18_V_1_empty_n.read() & layer4_out_19_V_1_empty_n.read() & layer4_out_20_V_1_empty_n.read() & layer4_out_21_V_1_empty_n.read() & layer4_out_22_V_1_empty_n.read() & layer4_out_23_V_1_empty_n.read() & layer4_out_24_V_1_empty_n.read() & layer4_out_25_V_1_empty_n.read() & layer4_out_26_V_1_empty_n.read() & layer4_out_27_V_1_empty_n.read() & layer4_out_28_V_1_empty_n.read() & layer4_out_29_V_1_empty_n.read() & layer4_out_30_V_1_empty_n.read() & layer4_out_31_V_1_empty_n.read() & layer4_out_32_V_1_empty_n.read() & layer4_out_33_V_1_empty_n.read() & layer4_out_34_V_1_empty_n.read() & layer4_out_35_V_1_empty_n.read() & layer4_out_36_V_1_empty_n.read() & layer4_out_37_V_1_empty_n.read() & layer4_out_38_V_1_empty_n.read() & layer4_out_39_V_1_empty_n.read() & layer4_out_40_V_1_empty_n.read() & layer4_out_41_V_1_empty_n.read() & layer4_out_42_V_1_empty_n.read() & layer4_out_43_V_1_empty_n.read() & layer4_out_44_V_1_empty_n.read() & layer4_out_45_V_1_empty_n.read() & layer4_out_46_V_1_empty_n.read() & layer4_out_47_V_1_empty_n.read() & layer4_out_48_V_1_empty_n.read() & layer4_out_49_V_1_empty_n.read() & layer4_out_50_V_1_empty_n.read() & layer4_out_51_V_1_empty_n.read() & layer4_out_52_V_1_empty_n.read() & layer4_out_53_V_1_empty_n.read() & layer4_out_54_V_1_empty_n.read() & layer4_out_55_V_1_empty_n.read() & layer4_out_56_V_1_empty_n.read() & layer4_out_57_V_1_empty_n.read() & layer4_out_58_V_1_empty_n.read() & layer4_out_59_V_1_empty_n.read() & layer4_out_60_V_1_empty_n.read() & layer4_out_61_V_1_empty_n.read() & layer4_out_62_V_1_empty_n.read() & layer4_out_63_V_1_empty_n.read() & layer4_out_64_V_1_empty_n.read() & layer4_out_65_V_1_empty_n.read() & layer4_out_66_V_1_empty_n.read() & layer4_out_67_V_1_empty_n.read() & layer4_out_68_V_1_empty_n.read() & layer4_out_69_V_1_empty_n.read() & layer4_out_70_V_1_empty_n.read() & layer4_out_71_V_1_empty_n.read() & layer4_out_72_V_1_empty_n.read() & layer4_out_73_V_1_empty_n.read() & layer4_out_74_V_1_empty_n.read() & layer4_out_75_V_1_empty_n.read() & layer4_out_76_V_1_empty_n.read() & layer4_out_77_V_1_empty_n.read() & layer4_out_78_V_1_empty_n.read() & layer4_out_79_V_1_empty_n.read() & layer4_out_80_V_1_empty_n.read() & layer4_out_81_V_1_empty_n.read() & layer4_out_82_V_1_empty_n.read() & layer4_out_83_V_1_empty_n.read() & layer4_out_84_V_1_empty_n.read() & layer4_out_85_V_1_empty_n.read() & layer4_out_86_V_1_empty_n.read() & layer4_out_87_V_1_empty_n.read() & layer4_out_88_V_1_empty_n.read() & layer4_out_89_V_1_empty_n.read() & layer4_out_90_V_1_empty_n.read() & layer4_out_91_V_1_empty_n.read() & layer4_out_92_V_1_empty_n.read() & layer4_out_93_V_1_empty_n.read() & layer4_out_94_V_1_empty_n.read() & layer4_out_95_V_1_empty_n.read() & layer4_out_96_V_1_empty_n.read() & layer4_out_97_V_1_empty_n.read() & layer4_out_98_V_1_empty_n.read() & layer4_out_99_V_1_empty_n.read());
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_start_full_n() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_start_write() {
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_start_write = ap_const_logic_0;
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue() {
    dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue = (ap_sync_channel_write_layer8_out_9_V_1.read() & ap_sync_channel_write_layer8_out_8_V_1.read() & ap_sync_channel_write_layer8_out_7_V_1.read() & ap_sync_channel_write_layer8_out_6_V_1.read() & ap_sync_channel_write_layer8_out_5_V_1.read() & ap_sync_channel_write_layer8_out_4_V_1.read() & ap_sync_channel_write_layer8_out_3_V_1.read() & ap_sync_channel_write_layer8_out_2_V_1.read() & ap_sync_channel_write_layer8_out_1_V_1.read() & ap_sync_channel_write_layer8_out_0_V_1.read());
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_start() {
    dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_start = (layer7_out_0_V_1_empty_n.read() & layer7_out_1_V_1_empty_n.read() & layer7_out_2_V_1_empty_n.read() & layer7_out_3_V_1_empty_n.read() & layer7_out_4_V_1_empty_n.read() & layer7_out_5_V_1_empty_n.read() & layer7_out_6_V_1_empty_n.read() & layer7_out_7_V_1_empty_n.read() & layer7_out_8_V_1_empty_n.read() & layer7_out_9_V_1_empty_n.read() & layer7_out_10_V_1_empty_n.read() & layer7_out_11_V_1_empty_n.read() & layer7_out_12_V_1_empty_n.read() & layer7_out_13_V_1_empty_n.read() & layer7_out_14_V_1_empty_n.read() & layer7_out_15_V_1_empty_n.read() & layer7_out_16_V_1_empty_n.read() & layer7_out_17_V_1_empty_n.read() & layer7_out_18_V_1_empty_n.read() & layer7_out_19_V_1_empty_n.read() & layer7_out_20_V_1_empty_n.read() & layer7_out_21_V_1_empty_n.read() & layer7_out_22_V_1_empty_n.read() & layer7_out_23_V_1_empty_n.read() & layer7_out_24_V_1_empty_n.read() & layer7_out_25_V_1_empty_n.read() & layer7_out_26_V_1_empty_n.read() & layer7_out_27_V_1_empty_n.read() & layer7_out_28_V_1_empty_n.read() & layer7_out_29_V_1_empty_n.read() & layer7_out_30_V_1_empty_n.read() & layer7_out_31_V_1_empty_n.read() & layer7_out_32_V_1_empty_n.read() & layer7_out_33_V_1_empty_n.read() & layer7_out_34_V_1_empty_n.read() & layer7_out_35_V_1_empty_n.read() & layer7_out_36_V_1_empty_n.read() & layer7_out_37_V_1_empty_n.read() & layer7_out_38_V_1_empty_n.read() & layer7_out_39_V_1_empty_n.read() & layer7_out_40_V_1_empty_n.read() & layer7_out_41_V_1_empty_n.read() & layer7_out_42_V_1_empty_n.read() & layer7_out_43_V_1_empty_n.read() & layer7_out_44_V_1_empty_n.read() & layer7_out_45_V_1_empty_n.read() & layer7_out_46_V_1_empty_n.read() & layer7_out_47_V_1_empty_n.read() & layer7_out_48_V_1_empty_n.read() & layer7_out_49_V_1_empty_n.read() & layer7_out_50_V_1_empty_n.read() & layer7_out_51_V_1_empty_n.read() & layer7_out_52_V_1_empty_n.read() & layer7_out_53_V_1_empty_n.read() & layer7_out_54_V_1_empty_n.read() & layer7_out_55_V_1_empty_n.read() & layer7_out_56_V_1_empty_n.read() & layer7_out_57_V_1_empty_n.read() & layer7_out_58_V_1_empty_n.read() & layer7_out_59_V_1_empty_n.read() & layer7_out_60_V_1_empty_n.read() & layer7_out_61_V_1_empty_n.read() & layer7_out_62_V_1_empty_n.read() & layer7_out_63_V_1_empty_n.read() & layer7_out_64_V_1_empty_n.read() & layer7_out_65_V_1_empty_n.read() & layer7_out_66_V_1_empty_n.read() & layer7_out_67_V_1_empty_n.read() & layer7_out_68_V_1_empty_n.read() & layer7_out_69_V_1_empty_n.read() & layer7_out_70_V_1_empty_n.read() & layer7_out_71_V_1_empty_n.read() & layer7_out_72_V_1_empty_n.read() & layer7_out_73_V_1_empty_n.read() & layer7_out_74_V_1_empty_n.read() & layer7_out_75_V_1_empty_n.read() & layer7_out_76_V_1_empty_n.read() & layer7_out_77_V_1_empty_n.read() & layer7_out_78_V_1_empty_n.read() & layer7_out_79_V_1_empty_n.read() & layer7_out_80_V_1_empty_n.read() & layer7_out_81_V_1_empty_n.read() & layer7_out_82_V_1_empty_n.read() & layer7_out_83_V_1_empty_n.read() & layer7_out_84_V_1_empty_n.read() & layer7_out_85_V_1_empty_n.read() & layer7_out_86_V_1_empty_n.read() & layer7_out_87_V_1_empty_n.read() & layer7_out_88_V_1_empty_n.read() & layer7_out_89_V_1_empty_n.read() & layer7_out_90_V_1_empty_n.read() & layer7_out_91_V_1_empty_n.read() & layer7_out_92_V_1_empty_n.read() & layer7_out_93_V_1_empty_n.read() & layer7_out_94_V_1_empty_n.read() & layer7_out_95_V_1_empty_n.read() & layer7_out_96_V_1_empty_n.read() & layer7_out_97_V_1_empty_n.read() & layer7_out_98_V_1_empty_n.read() & layer7_out_99_V_1_empty_n.read());
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_start_full_n() {
    dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_start_write() {
    dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_start_write = ap_const_logic_0;
}

void myproject::thread_layer10_out_0_V() {
    layer10_out_0_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_0_V.read();
}

void myproject::thread_layer10_out_0_V_ap_vld() {
    layer10_out_0_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_0_V_ap_vld.read();
}

void myproject::thread_layer10_out_1_V() {
    layer10_out_1_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_1_V.read();
}

void myproject::thread_layer10_out_1_V_ap_vld() {
    layer10_out_1_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_1_V_ap_vld.read();
}

void myproject::thread_layer10_out_2_V() {
    layer10_out_2_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_2_V.read();
}

void myproject::thread_layer10_out_2_V_ap_vld() {
    layer10_out_2_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_2_V_ap_vld.read();
}

void myproject::thread_layer10_out_3_V() {
    layer10_out_3_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_3_V.read();
}

void myproject::thread_layer10_out_3_V_ap_vld() {
    layer10_out_3_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_3_V_ap_vld.read();
}

void myproject::thread_layer10_out_4_V() {
    layer10_out_4_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_4_V.read();
}

void myproject::thread_layer10_out_4_V_ap_vld() {
    layer10_out_4_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_4_V_ap_vld.read();
}

void myproject::thread_layer10_out_5_V() {
    layer10_out_5_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_5_V.read();
}

void myproject::thread_layer10_out_5_V_ap_vld() {
    layer10_out_5_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_5_V_ap_vld.read();
}

void myproject::thread_layer10_out_6_V() {
    layer10_out_6_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_6_V.read();
}

void myproject::thread_layer10_out_6_V_ap_vld() {
    layer10_out_6_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_6_V_ap_vld.read();
}

void myproject::thread_layer10_out_7_V() {
    layer10_out_7_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_7_V.read();
}

void myproject::thread_layer10_out_7_V_ap_vld() {
    layer10_out_7_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_7_V_ap_vld.read();
}

void myproject::thread_layer10_out_8_V() {
    layer10_out_8_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_8_V.read();
}

void myproject::thread_layer10_out_8_V_ap_vld() {
    layer10_out_8_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_8_V_ap_vld.read();
}

void myproject::thread_layer10_out_9_V() {
    layer10_out_9_V = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_9_V.read();
}

void myproject::thread_layer10_out_9_V_ap_vld() {
    layer10_out_9_V_ap_vld = softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_res_9_V_ap_vld.read();
}

void myproject::thread_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue() {
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue = (ap_sync_channel_write_layer9_out_9_V_1.read() & ap_sync_channel_write_layer9_out_8_V_1.read() & ap_sync_channel_write_layer9_out_7_V_1.read() & ap_sync_channel_write_layer9_out_6_V_1.read() & ap_sync_channel_write_layer9_out_5_V_1.read() & ap_sync_channel_write_layer9_out_4_V_1.read() & ap_sync_channel_write_layer9_out_3_V_1.read() & ap_sync_channel_write_layer9_out_2_V_1.read() & ap_sync_channel_write_layer9_out_1_V_1.read() & ap_sync_channel_write_layer9_out_0_V_1.read());
}

void myproject::thread_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_start() {
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_start = (layer8_out_0_V_1_empty_n.read() & layer8_out_1_V_1_empty_n.read() & layer8_out_2_V_1_empty_n.read() & layer8_out_3_V_1_empty_n.read() & layer8_out_4_V_1_empty_n.read() & layer8_out_5_V_1_empty_n.read() & layer8_out_6_V_1_empty_n.read() & layer8_out_7_V_1_empty_n.read() & layer8_out_8_V_1_empty_n.read() & layer8_out_9_V_1_empty_n.read());
}

void myproject::thread_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_start_full_n() {
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_start_write() {
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_start_write = ap_const_logic_0;
}

void myproject::thread_myproject_entry129_U0_ap_continue() {
    myproject_entry129_U0_ap_continue = ap_const_logic_1;
}

void myproject::thread_myproject_entry129_U0_ap_start() {
    myproject_entry129_U0_ap_start = start_for_myproject_entry129_U0_empty_n.read();
}

void myproject::thread_myproject_entry3_U0_ap_continue() {
    myproject_entry3_U0_ap_continue = ap_const_logic_1;
}

void myproject::thread_myproject_entry3_U0_ap_start() {
    myproject_entry3_U0_ap_start = (ap_start.read() & (ap_sync_reg_myproject_entry3_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue = (ap_sync_channel_write_layer4_out_99_V_1.read() & ap_sync_channel_write_layer4_out_98_V_1.read() & ap_sync_channel_write_layer4_out_97_V_1.read() & ap_sync_channel_write_layer4_out_96_V_1.read() & ap_sync_channel_write_layer4_out_95_V_1.read() & ap_sync_channel_write_layer4_out_94_V_1.read() & ap_sync_channel_write_layer4_out_93_V_1.read() & ap_sync_channel_write_layer4_out_92_V_1.read() & ap_sync_channel_write_layer4_out_91_V_1.read() & ap_sync_channel_write_layer4_out_90_V_1.read() & ap_sync_channel_write_layer4_out_89_V_1.read() & ap_sync_channel_write_layer4_out_88_V_1.read() & ap_sync_channel_write_layer4_out_87_V_1.read() & ap_sync_channel_write_layer4_out_86_V_1.read() & ap_sync_channel_write_layer4_out_85_V_1.read() & ap_sync_channel_write_layer4_out_84_V_1.read() & ap_sync_channel_write_layer4_out_83_V_1.read() & ap_sync_channel_write_layer4_out_82_V_1.read() & ap_sync_channel_write_layer4_out_81_V_1.read() & ap_sync_channel_write_layer4_out_80_V_1.read() & ap_sync_channel_write_layer4_out_79_V_1.read() & ap_sync_channel_write_layer4_out_78_V_1.read() & ap_sync_channel_write_layer4_out_77_V_1.read() & ap_sync_channel_write_layer4_out_76_V_1.read() & ap_sync_channel_write_layer4_out_75_V_1.read() & ap_sync_channel_write_layer4_out_74_V_1.read() & ap_sync_channel_write_layer4_out_73_V_1.read() & ap_sync_channel_write_layer4_out_72_V_1.read() & ap_sync_channel_write_layer4_out_71_V_1.read() & ap_sync_channel_write_layer4_out_70_V_1.read() & ap_sync_channel_write_layer4_out_69_V_1.read() & ap_sync_channel_write_layer4_out_68_V_1.read() & ap_sync_channel_write_layer4_out_67_V_1.read() & ap_sync_channel_write_layer4_out_66_V_1.read() & ap_sync_channel_write_layer4_out_65_V_1.read() & ap_sync_channel_write_layer4_out_64_V_1.read() & ap_sync_channel_write_layer4_out_63_V_1.read() & ap_sync_channel_write_layer4_out_62_V_1.read() & ap_sync_channel_write_layer4_out_61_V_1.read() & ap_sync_channel_write_layer4_out_60_V_1.read() & ap_sync_channel_write_layer4_out_59_V_1.read() & ap_sync_channel_write_layer4_out_58_V_1.read() & ap_sync_channel_write_layer4_out_57_V_1.read() & ap_sync_channel_write_layer4_out_56_V_1.read() & ap_sync_channel_write_layer4_out_55_V_1.read() & ap_sync_channel_write_layer4_out_54_V_1.read() & ap_sync_channel_write_layer4_out_53_V_1.read() & ap_sync_channel_write_layer4_out_52_V_1.read() & ap_sync_channel_write_layer4_out_51_V_1.read() & ap_sync_channel_write_layer4_out_50_V_1.read() & ap_sync_channel_write_layer4_out_49_V_1.read() & ap_sync_channel_write_layer4_out_48_V_1.read() & ap_sync_channel_write_layer4_out_47_V_1.read() & ap_sync_channel_write_layer4_out_46_V_1.read() & ap_sync_channel_write_layer4_out_45_V_1.read() & ap_sync_channel_write_layer4_out_44_V_1.read() & ap_sync_channel_write_layer4_out_43_V_1.read() & ap_sync_channel_write_layer4_out_42_V_1.read() & ap_sync_channel_write_layer4_out_41_V_1.read() & ap_sync_channel_write_layer4_out_40_V_1.read() & ap_sync_channel_write_layer4_out_39_V_1.read() & ap_sync_channel_write_layer4_out_38_V_1.read() & ap_sync_channel_write_layer4_out_37_V_1.read() & ap_sync_channel_write_layer4_out_36_V_1.read() & ap_sync_channel_write_layer4_out_35_V_1.read() & ap_sync_channel_write_layer4_out_34_V_1.read() & ap_sync_channel_write_layer4_out_33_V_1.read() & ap_sync_channel_write_layer4_out_32_V_1.read() & ap_sync_channel_write_layer4_out_31_V_1.read() & ap_sync_channel_write_layer4_out_30_V_1.read() & ap_sync_channel_write_layer4_out_29_V_1.read() & ap_sync_channel_write_layer4_out_28_V_1.read() & ap_sync_channel_write_layer4_out_27_V_1.read() & ap_sync_channel_write_layer4_out_26_V_1.read() & ap_sync_channel_write_layer4_out_25_V_1.read() & ap_sync_channel_write_layer4_out_24_V_1.read() & ap_sync_channel_write_layer4_out_23_V_1.read() & ap_sync_channel_write_layer4_out_22_V_1.read() & ap_sync_channel_write_layer4_out_21_V_1.read() & ap_sync_channel_write_layer4_out_20_V_1.read() & ap_sync_channel_write_layer4_out_19_V_1.read() & ap_sync_channel_write_layer4_out_18_V_1.read() & ap_sync_channel_write_layer4_out_17_V_1.read() & ap_sync_channel_write_layer4_out_16_V_1.read() & ap_sync_channel_write_layer4_out_15_V_1.read() & ap_sync_channel_write_layer4_out_14_V_1.read() & ap_sync_channel_write_layer4_out_13_V_1.read() & ap_sync_channel_write_layer4_out_12_V_1.read() & ap_sync_channel_write_layer4_out_11_V_1.read() & ap_sync_channel_write_layer4_out_10_V_1.read() & ap_sync_channel_write_layer4_out_9_V_1.read() & ap_sync_channel_write_layer4_out_8_V_1.read() & ap_sync_channel_write_layer4_out_7_V_1.read() & ap_sync_channel_write_layer4_out_6_V_1.read() & ap_sync_channel_write_layer4_out_5_V_1.read() & ap_sync_channel_write_layer4_out_4_V_1.read() & ap_sync_channel_write_layer4_out_3_V_1.read() & ap_sync_channel_write_layer4_out_2_V_1.read() & ap_sync_channel_write_layer4_out_1_V_1.read() & ap_sync_channel_write_layer4_out_0_V_1.read());
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_start() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_start = (layer2_out_0_V_1_empty_n.read() & layer2_out_1_V_1_empty_n.read() & layer2_out_2_V_1_empty_n.read() & layer2_out_3_V_1_empty_n.read() & layer2_out_4_V_1_empty_n.read() & layer2_out_5_V_1_empty_n.read() & layer2_out_6_V_1_empty_n.read() & layer2_out_7_V_1_empty_n.read() & layer2_out_8_V_1_empty_n.read() & layer2_out_9_V_1_empty_n.read() & layer2_out_10_V_1_empty_n.read() & layer2_out_11_V_1_empty_n.read() & layer2_out_12_V_1_empty_n.read() & layer2_out_13_V_1_empty_n.read() & layer2_out_14_V_1_empty_n.read() & layer2_out_15_V_1_empty_n.read() & layer2_out_16_V_1_empty_n.read() & layer2_out_17_V_1_empty_n.read() & layer2_out_18_V_1_empty_n.read() & layer2_out_19_V_1_empty_n.read() & layer2_out_20_V_1_empty_n.read() & layer2_out_21_V_1_empty_n.read() & layer2_out_22_V_1_empty_n.read() & layer2_out_23_V_1_empty_n.read() & layer2_out_24_V_1_empty_n.read() & layer2_out_25_V_1_empty_n.read() & layer2_out_26_V_1_empty_n.read() & layer2_out_27_V_1_empty_n.read() & layer2_out_28_V_1_empty_n.read() & layer2_out_29_V_1_empty_n.read() & layer2_out_30_V_1_empty_n.read() & layer2_out_31_V_1_empty_n.read() & layer2_out_32_V_1_empty_n.read() & layer2_out_33_V_1_empty_n.read() & layer2_out_34_V_1_empty_n.read() & layer2_out_35_V_1_empty_n.read() & layer2_out_36_V_1_empty_n.read() & layer2_out_37_V_1_empty_n.read() & layer2_out_38_V_1_empty_n.read() & layer2_out_39_V_1_empty_n.read() & layer2_out_40_V_1_empty_n.read() & layer2_out_41_V_1_empty_n.read() & layer2_out_42_V_1_empty_n.read() & layer2_out_43_V_1_empty_n.read() & layer2_out_44_V_1_empty_n.read() & layer2_out_45_V_1_empty_n.read() & layer2_out_46_V_1_empty_n.read() & layer2_out_47_V_1_empty_n.read() & layer2_out_48_V_1_empty_n.read() & layer2_out_49_V_1_empty_n.read() & layer2_out_50_V_1_empty_n.read() & layer2_out_51_V_1_empty_n.read() & layer2_out_52_V_1_empty_n.read() & layer2_out_53_V_1_empty_n.read() & layer2_out_54_V_1_empty_n.read() & layer2_out_55_V_1_empty_n.read() & layer2_out_56_V_1_empty_n.read() & layer2_out_57_V_1_empty_n.read() & layer2_out_58_V_1_empty_n.read() & layer2_out_59_V_1_empty_n.read() & layer2_out_60_V_1_empty_n.read() & layer2_out_61_V_1_empty_n.read() & layer2_out_62_V_1_empty_n.read() & layer2_out_63_V_1_empty_n.read() & layer2_out_64_V_1_empty_n.read() & layer2_out_65_V_1_empty_n.read() & layer2_out_66_V_1_empty_n.read() & layer2_out_67_V_1_empty_n.read() & layer2_out_68_V_1_empty_n.read() & layer2_out_69_V_1_empty_n.read() & layer2_out_70_V_1_empty_n.read() & layer2_out_71_V_1_empty_n.read() & layer2_out_72_V_1_empty_n.read() & layer2_out_73_V_1_empty_n.read() & layer2_out_74_V_1_empty_n.read() & layer2_out_75_V_1_empty_n.read() & layer2_out_76_V_1_empty_n.read() & layer2_out_77_V_1_empty_n.read() & layer2_out_78_V_1_empty_n.read() & layer2_out_79_V_1_empty_n.read() & layer2_out_80_V_1_empty_n.read() & layer2_out_81_V_1_empty_n.read() & layer2_out_82_V_1_empty_n.read() & layer2_out_83_V_1_empty_n.read() & layer2_out_84_V_1_empty_n.read() & layer2_out_85_V_1_empty_n.read() & layer2_out_86_V_1_empty_n.read() & layer2_out_87_V_1_empty_n.read() & layer2_out_88_V_1_empty_n.read() & layer2_out_89_V_1_empty_n.read() & layer2_out_90_V_1_empty_n.read() & layer2_out_91_V_1_empty_n.read() & layer2_out_92_V_1_empty_n.read() & layer2_out_93_V_1_empty_n.read() & layer2_out_94_V_1_empty_n.read() & layer2_out_95_V_1_empty_n.read() & layer2_out_96_V_1_empty_n.read() & layer2_out_97_V_1_empty_n.read() & layer2_out_98_V_1_empty_n.read() & layer2_out_99_V_1_empty_n.read());
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_start_full_n() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_start_write() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_start_write = ap_const_logic_0;
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue = (ap_sync_channel_write_layer7_out_99_V_1.read() & ap_sync_channel_write_layer7_out_98_V_1.read() & ap_sync_channel_write_layer7_out_97_V_1.read() & ap_sync_channel_write_layer7_out_96_V_1.read() & ap_sync_channel_write_layer7_out_95_V_1.read() & ap_sync_channel_write_layer7_out_94_V_1.read() & ap_sync_channel_write_layer7_out_93_V_1.read() & ap_sync_channel_write_layer7_out_92_V_1.read() & ap_sync_channel_write_layer7_out_91_V_1.read() & ap_sync_channel_write_layer7_out_90_V_1.read() & ap_sync_channel_write_layer7_out_89_V_1.read() & ap_sync_channel_write_layer7_out_88_V_1.read() & ap_sync_channel_write_layer7_out_87_V_1.read() & ap_sync_channel_write_layer7_out_86_V_1.read() & ap_sync_channel_write_layer7_out_85_V_1.read() & ap_sync_channel_write_layer7_out_84_V_1.read() & ap_sync_channel_write_layer7_out_83_V_1.read() & ap_sync_channel_write_layer7_out_82_V_1.read() & ap_sync_channel_write_layer7_out_81_V_1.read() & ap_sync_channel_write_layer7_out_80_V_1.read() & ap_sync_channel_write_layer7_out_79_V_1.read() & ap_sync_channel_write_layer7_out_78_V_1.read() & ap_sync_channel_write_layer7_out_77_V_1.read() & ap_sync_channel_write_layer7_out_76_V_1.read() & ap_sync_channel_write_layer7_out_75_V_1.read() & ap_sync_channel_write_layer7_out_74_V_1.read() & ap_sync_channel_write_layer7_out_73_V_1.read() & ap_sync_channel_write_layer7_out_72_V_1.read() & ap_sync_channel_write_layer7_out_71_V_1.read() & ap_sync_channel_write_layer7_out_70_V_1.read() & ap_sync_channel_write_layer7_out_69_V_1.read() & ap_sync_channel_write_layer7_out_68_V_1.read() & ap_sync_channel_write_layer7_out_67_V_1.read() & ap_sync_channel_write_layer7_out_66_V_1.read() & ap_sync_channel_write_layer7_out_65_V_1.read() & ap_sync_channel_write_layer7_out_64_V_1.read() & ap_sync_channel_write_layer7_out_63_V_1.read() & ap_sync_channel_write_layer7_out_62_V_1.read() & ap_sync_channel_write_layer7_out_61_V_1.read() & ap_sync_channel_write_layer7_out_60_V_1.read() & ap_sync_channel_write_layer7_out_59_V_1.read() & ap_sync_channel_write_layer7_out_58_V_1.read() & ap_sync_channel_write_layer7_out_57_V_1.read() & ap_sync_channel_write_layer7_out_56_V_1.read() & ap_sync_channel_write_layer7_out_55_V_1.read() & ap_sync_channel_write_layer7_out_54_V_1.read() & ap_sync_channel_write_layer7_out_53_V_1.read() & ap_sync_channel_write_layer7_out_52_V_1.read() & ap_sync_channel_write_layer7_out_51_V_1.read() & ap_sync_channel_write_layer7_out_50_V_1.read() & ap_sync_channel_write_layer7_out_49_V_1.read() & ap_sync_channel_write_layer7_out_48_V_1.read() & ap_sync_channel_write_layer7_out_47_V_1.read() & ap_sync_channel_write_layer7_out_46_V_1.read() & ap_sync_channel_write_layer7_out_45_V_1.read() & ap_sync_channel_write_layer7_out_44_V_1.read() & ap_sync_channel_write_layer7_out_43_V_1.read() & ap_sync_channel_write_layer7_out_42_V_1.read() & ap_sync_channel_write_layer7_out_41_V_1.read() & ap_sync_channel_write_layer7_out_40_V_1.read() & ap_sync_channel_write_layer7_out_39_V_1.read() & ap_sync_channel_write_layer7_out_38_V_1.read() & ap_sync_channel_write_layer7_out_37_V_1.read() & ap_sync_channel_write_layer7_out_36_V_1.read() & ap_sync_channel_write_layer7_out_35_V_1.read() & ap_sync_channel_write_layer7_out_34_V_1.read() & ap_sync_channel_write_layer7_out_33_V_1.read() & ap_sync_channel_write_layer7_out_32_V_1.read() & ap_sync_channel_write_layer7_out_31_V_1.read() & ap_sync_channel_write_layer7_out_30_V_1.read() & ap_sync_channel_write_layer7_out_29_V_1.read() & ap_sync_channel_write_layer7_out_28_V_1.read() & ap_sync_channel_write_layer7_out_27_V_1.read() & ap_sync_channel_write_layer7_out_26_V_1.read() & ap_sync_channel_write_layer7_out_25_V_1.read() & ap_sync_channel_write_layer7_out_24_V_1.read() & ap_sync_channel_write_layer7_out_23_V_1.read() & ap_sync_channel_write_layer7_out_22_V_1.read() & ap_sync_channel_write_layer7_out_21_V_1.read() & ap_sync_channel_write_layer7_out_20_V_1.read() & ap_sync_channel_write_layer7_out_19_V_1.read() & ap_sync_channel_write_layer7_out_18_V_1.read() & ap_sync_channel_write_layer7_out_17_V_1.read() & ap_sync_channel_write_layer7_out_16_V_1.read() & ap_sync_channel_write_layer7_out_15_V_1.read() & ap_sync_channel_write_layer7_out_14_V_1.read() & ap_sync_channel_write_layer7_out_13_V_1.read() & ap_sync_channel_write_layer7_out_12_V_1.read() & ap_sync_channel_write_layer7_out_11_V_1.read() & ap_sync_channel_write_layer7_out_10_V_1.read() & ap_sync_channel_write_layer7_out_9_V_1.read() & ap_sync_channel_write_layer7_out_8_V_1.read() & ap_sync_channel_write_layer7_out_7_V_1.read() & ap_sync_channel_write_layer7_out_6_V_1.read() & ap_sync_channel_write_layer7_out_5_V_1.read() & ap_sync_channel_write_layer7_out_4_V_1.read() & ap_sync_channel_write_layer7_out_3_V_1.read() & ap_sync_channel_write_layer7_out_2_V_1.read() & ap_sync_channel_write_layer7_out_1_V_1.read() & ap_sync_channel_write_layer7_out_0_V_1.read());
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_start() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_start = (layer5_out_0_V_1_empty_n.read() & layer5_out_1_V_1_empty_n.read() & layer5_out_2_V_1_empty_n.read() & layer5_out_3_V_1_empty_n.read() & layer5_out_4_V_1_empty_n.read() & layer5_out_5_V_1_empty_n.read() & layer5_out_6_V_1_empty_n.read() & layer5_out_7_V_1_empty_n.read() & layer5_out_8_V_1_empty_n.read() & layer5_out_9_V_1_empty_n.read() & layer5_out_10_V_1_empty_n.read() & layer5_out_11_V_1_empty_n.read() & layer5_out_12_V_1_empty_n.read() & layer5_out_13_V_1_empty_n.read() & layer5_out_14_V_1_empty_n.read() & layer5_out_15_V_1_empty_n.read() & layer5_out_16_V_1_empty_n.read() & layer5_out_17_V_1_empty_n.read() & layer5_out_18_V_1_empty_n.read() & layer5_out_19_V_1_empty_n.read() & layer5_out_20_V_1_empty_n.read() & layer5_out_21_V_1_empty_n.read() & layer5_out_22_V_1_empty_n.read() & layer5_out_23_V_1_empty_n.read() & layer5_out_24_V_1_empty_n.read() & layer5_out_25_V_1_empty_n.read() & layer5_out_26_V_1_empty_n.read() & layer5_out_27_V_1_empty_n.read() & layer5_out_28_V_1_empty_n.read() & layer5_out_29_V_1_empty_n.read() & layer5_out_30_V_1_empty_n.read() & layer5_out_31_V_1_empty_n.read() & layer5_out_32_V_1_empty_n.read() & layer5_out_33_V_1_empty_n.read() & layer5_out_34_V_1_empty_n.read() & layer5_out_35_V_1_empty_n.read() & layer5_out_36_V_1_empty_n.read() & layer5_out_37_V_1_empty_n.read() & layer5_out_38_V_1_empty_n.read() & layer5_out_39_V_1_empty_n.read() & layer5_out_40_V_1_empty_n.read() & layer5_out_41_V_1_empty_n.read() & layer5_out_42_V_1_empty_n.read() & layer5_out_43_V_1_empty_n.read() & layer5_out_44_V_1_empty_n.read() & layer5_out_45_V_1_empty_n.read() & layer5_out_46_V_1_empty_n.read() & layer5_out_47_V_1_empty_n.read() & layer5_out_48_V_1_empty_n.read() & layer5_out_49_V_1_empty_n.read() & layer5_out_50_V_1_empty_n.read() & layer5_out_51_V_1_empty_n.read() & layer5_out_52_V_1_empty_n.read() & layer5_out_53_V_1_empty_n.read() & layer5_out_54_V_1_empty_n.read() & layer5_out_55_V_1_empty_n.read() & layer5_out_56_V_1_empty_n.read() & layer5_out_57_V_1_empty_n.read() & layer5_out_58_V_1_empty_n.read() & layer5_out_59_V_1_empty_n.read() & layer5_out_60_V_1_empty_n.read() & layer5_out_61_V_1_empty_n.read() & layer5_out_62_V_1_empty_n.read() & layer5_out_63_V_1_empty_n.read() & layer5_out_64_V_1_empty_n.read() & layer5_out_65_V_1_empty_n.read() & layer5_out_66_V_1_empty_n.read() & layer5_out_67_V_1_empty_n.read() & layer5_out_68_V_1_empty_n.read() & layer5_out_69_V_1_empty_n.read() & layer5_out_70_V_1_empty_n.read() & layer5_out_71_V_1_empty_n.read() & layer5_out_72_V_1_empty_n.read() & layer5_out_73_V_1_empty_n.read() & layer5_out_74_V_1_empty_n.read() & layer5_out_75_V_1_empty_n.read() & layer5_out_76_V_1_empty_n.read() & layer5_out_77_V_1_empty_n.read() & layer5_out_78_V_1_empty_n.read() & layer5_out_79_V_1_empty_n.read() & layer5_out_80_V_1_empty_n.read() & layer5_out_81_V_1_empty_n.read() & layer5_out_82_V_1_empty_n.read() & layer5_out_83_V_1_empty_n.read() & layer5_out_84_V_1_empty_n.read() & layer5_out_85_V_1_empty_n.read() & layer5_out_86_V_1_empty_n.read() & layer5_out_87_V_1_empty_n.read() & layer5_out_88_V_1_empty_n.read() & layer5_out_89_V_1_empty_n.read() & layer5_out_90_V_1_empty_n.read() & layer5_out_91_V_1_empty_n.read() & layer5_out_92_V_1_empty_n.read() & layer5_out_93_V_1_empty_n.read() & layer5_out_94_V_1_empty_n.read() & layer5_out_95_V_1_empty_n.read() & layer5_out_96_V_1_empty_n.read() & layer5_out_97_V_1_empty_n.read() & layer5_out_98_V_1_empty_n.read() & layer5_out_99_V_1_empty_n.read());
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_start_full_n() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_start_write() {
    relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_start_write = ap_const_logic_0;
}

void myproject::thread_softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_continue() {
    softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_continue = ap_sync_done.read();
}

void myproject::thread_softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_start() {
    softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_ap_start = (layer9_out_0_V_1_empty_n.read() & layer9_out_1_V_1_empty_n.read() & layer9_out_2_V_1_empty_n.read() & layer9_out_3_V_1_empty_n.read() & layer9_out_4_V_1_empty_n.read() & layer9_out_5_V_1_empty_n.read() & layer9_out_6_V_1_empty_n.read() & layer9_out_7_V_1_empty_n.read() & layer9_out_8_V_1_empty_n.read() & layer9_out_9_V_1_empty_n.read());
}

void myproject::thread_softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_start_full_n() {
    softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_start_write() {
    softmax_latency_ap_fixed_ap_fixed_softmax_config10_U0_start_write = ap_const_logic_0;
}

void myproject::thread_start_for_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_din() {
    start_for_dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void myproject::thread_start_for_myproject_entry129_U0_din() {
    start_for_myproject_entry129_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

}

