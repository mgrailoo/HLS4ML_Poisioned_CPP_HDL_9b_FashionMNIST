#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(Block_proc_U0_ap_ready.read(), ap_const_logic_0))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Block_proc_U0_ap_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_sync_Block_proc_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_0_V_1 = ap_sync_channel_write_layer2_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_10_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_10_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_10_V_1 = ap_sync_channel_write_layer2_out_10_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_11_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_11_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_11_V_1 = ap_sync_channel_write_layer2_out_11_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_12_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_12_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_12_V_1 = ap_sync_channel_write_layer2_out_12_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_13_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_13_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_13_V_1 = ap_sync_channel_write_layer2_out_13_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_14_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_14_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_14_V_1 = ap_sync_channel_write_layer2_out_14_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_15_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_15_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_15_V_1 = ap_sync_channel_write_layer2_out_15_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_16_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_16_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_16_V_1 = ap_sync_channel_write_layer2_out_16_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_17_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_17_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_17_V_1 = ap_sync_channel_write_layer2_out_17_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_18_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_18_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_18_V_1 = ap_sync_channel_write_layer2_out_18_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_19_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_19_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_19_V_1 = ap_sync_channel_write_layer2_out_19_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_1_V_1 = ap_sync_channel_write_layer2_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_20_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_20_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_20_V_1 = ap_sync_channel_write_layer2_out_20_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_21_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_21_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_21_V_1 = ap_sync_channel_write_layer2_out_21_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_22_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_22_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_22_V_1 = ap_sync_channel_write_layer2_out_22_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_23_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_23_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_23_V_1 = ap_sync_channel_write_layer2_out_23_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_24_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_24_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_24_V_1 = ap_sync_channel_write_layer2_out_24_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_25_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_25_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_25_V_1 = ap_sync_channel_write_layer2_out_25_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_26_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_26_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_26_V_1 = ap_sync_channel_write_layer2_out_26_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_27_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_27_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_27_V_1 = ap_sync_channel_write_layer2_out_27_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_28_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_28_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_28_V_1 = ap_sync_channel_write_layer2_out_28_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_29_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_29_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_29_V_1 = ap_sync_channel_write_layer2_out_29_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_2_V_1 = ap_sync_channel_write_layer2_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_30_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_30_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_30_V_1 = ap_sync_channel_write_layer2_out_30_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_31_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_31_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_31_V_1 = ap_sync_channel_write_layer2_out_31_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_32_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_32_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_32_V_1 = ap_sync_channel_write_layer2_out_32_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_33_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_33_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_33_V_1 = ap_sync_channel_write_layer2_out_33_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_34_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_34_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_34_V_1 = ap_sync_channel_write_layer2_out_34_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_35_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_35_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_35_V_1 = ap_sync_channel_write_layer2_out_35_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_36_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_36_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_36_V_1 = ap_sync_channel_write_layer2_out_36_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_37_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_37_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_37_V_1 = ap_sync_channel_write_layer2_out_37_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_38_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_38_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_38_V_1 = ap_sync_channel_write_layer2_out_38_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_39_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_39_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_39_V_1 = ap_sync_channel_write_layer2_out_39_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_3_V_1 = ap_sync_channel_write_layer2_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_40_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_40_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_40_V_1 = ap_sync_channel_write_layer2_out_40_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_41_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_41_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_41_V_1 = ap_sync_channel_write_layer2_out_41_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_42_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_42_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_42_V_1 = ap_sync_channel_write_layer2_out_42_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_43_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_43_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_43_V_1 = ap_sync_channel_write_layer2_out_43_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_44_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_44_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_44_V_1 = ap_sync_channel_write_layer2_out_44_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_45_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_45_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_45_V_1 = ap_sync_channel_write_layer2_out_45_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_46_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_46_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_46_V_1 = ap_sync_channel_write_layer2_out_46_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_47_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_47_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_47_V_1 = ap_sync_channel_write_layer2_out_47_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_48_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_48_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_48_V_1 = ap_sync_channel_write_layer2_out_48_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_49_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_49_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_49_V_1 = ap_sync_channel_write_layer2_out_49_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_4_V_1 = ap_sync_channel_write_layer2_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_50_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_50_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_50_V_1 = ap_sync_channel_write_layer2_out_50_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_51_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_51_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_51_V_1 = ap_sync_channel_write_layer2_out_51_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_52_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_52_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_52_V_1 = ap_sync_channel_write_layer2_out_52_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_53_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_53_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_53_V_1 = ap_sync_channel_write_layer2_out_53_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_54_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_54_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_54_V_1 = ap_sync_channel_write_layer2_out_54_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_55_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_55_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_55_V_1 = ap_sync_channel_write_layer2_out_55_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_56_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_56_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_56_V_1 = ap_sync_channel_write_layer2_out_56_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_57_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_57_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_57_V_1 = ap_sync_channel_write_layer2_out_57_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_58_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_58_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_58_V_1 = ap_sync_channel_write_layer2_out_58_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_59_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_59_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_59_V_1 = ap_sync_channel_write_layer2_out_59_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_5_V_1 = ap_sync_channel_write_layer2_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_60_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_60_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_60_V_1 = ap_sync_channel_write_layer2_out_60_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_61_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_61_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_61_V_1 = ap_sync_channel_write_layer2_out_61_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_62_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_62_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_62_V_1 = ap_sync_channel_write_layer2_out_62_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_63_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_63_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_63_V_1 = ap_sync_channel_write_layer2_out_63_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_64_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_64_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_64_V_1 = ap_sync_channel_write_layer2_out_64_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_65_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_65_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_65_V_1 = ap_sync_channel_write_layer2_out_65_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_66_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_66_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_66_V_1 = ap_sync_channel_write_layer2_out_66_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_67_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_67_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_67_V_1 = ap_sync_channel_write_layer2_out_67_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_68_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_68_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_68_V_1 = ap_sync_channel_write_layer2_out_68_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_69_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_69_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_69_V_1 = ap_sync_channel_write_layer2_out_69_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_6_V_1 = ap_sync_channel_write_layer2_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_70_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_70_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_70_V_1 = ap_sync_channel_write_layer2_out_70_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_71_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_71_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_71_V_1 = ap_sync_channel_write_layer2_out_71_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_72_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_72_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_72_V_1 = ap_sync_channel_write_layer2_out_72_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_73_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_73_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_73_V_1 = ap_sync_channel_write_layer2_out_73_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_74_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_74_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_74_V_1 = ap_sync_channel_write_layer2_out_74_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_75_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_75_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_75_V_1 = ap_sync_channel_write_layer2_out_75_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_76_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_76_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_76_V_1 = ap_sync_channel_write_layer2_out_76_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_77_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_77_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_77_V_1 = ap_sync_channel_write_layer2_out_77_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_78_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_78_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_78_V_1 = ap_sync_channel_write_layer2_out_78_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_79_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_79_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_79_V_1 = ap_sync_channel_write_layer2_out_79_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_7_V_1 = ap_sync_channel_write_layer2_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_80_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_80_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_80_V_1 = ap_sync_channel_write_layer2_out_80_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_81_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_81_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_81_V_1 = ap_sync_channel_write_layer2_out_81_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_82_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_82_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_82_V_1 = ap_sync_channel_write_layer2_out_82_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_83_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_83_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_83_V_1 = ap_sync_channel_write_layer2_out_83_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_84_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_84_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_84_V_1 = ap_sync_channel_write_layer2_out_84_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_85_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_85_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_85_V_1 = ap_sync_channel_write_layer2_out_85_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_86_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_86_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_86_V_1 = ap_sync_channel_write_layer2_out_86_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_87_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_87_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_87_V_1 = ap_sync_channel_write_layer2_out_87_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_88_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_88_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_88_V_1 = ap_sync_channel_write_layer2_out_88_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_89_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_89_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_89_V_1 = ap_sync_channel_write_layer2_out_89_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_8_V_1 = ap_sync_channel_write_layer2_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_90_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_90_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_90_V_1 = ap_sync_channel_write_layer2_out_90_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_91_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_91_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_91_V_1 = ap_sync_channel_write_layer2_out_91_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_92_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_92_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_92_V_1 = ap_sync_channel_write_layer2_out_92_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_93_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_93_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_93_V_1 = ap_sync_channel_write_layer2_out_93_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_94_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_94_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_94_V_1 = ap_sync_channel_write_layer2_out_94_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_95_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_95_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_95_V_1 = ap_sync_channel_write_layer2_out_95_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_96_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_96_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_96_V_1 = ap_sync_channel_write_layer2_out_96_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_97_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_97_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_97_V_1 = ap_sync_channel_write_layer2_out_97_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_98_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_98_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_98_V_1 = ap_sync_channel_write_layer2_out_98_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_99_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_99_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_99_V_1 = ap_sync_channel_write_layer2_out_99_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer2_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer2_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer2_out_9_V_1 = ap_sync_channel_write_layer2_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_0_V_1 = ap_sync_channel_write_layer4_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_10_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_10_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_10_V_1 = ap_sync_channel_write_layer4_out_10_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_11_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_11_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_11_V_1 = ap_sync_channel_write_layer4_out_11_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_12_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_12_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_12_V_1 = ap_sync_channel_write_layer4_out_12_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_13_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_13_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_13_V_1 = ap_sync_channel_write_layer4_out_13_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_14_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_14_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_14_V_1 = ap_sync_channel_write_layer4_out_14_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_15_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_15_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_15_V_1 = ap_sync_channel_write_layer4_out_15_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_16_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_16_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_16_V_1 = ap_sync_channel_write_layer4_out_16_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_17_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_17_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_17_V_1 = ap_sync_channel_write_layer4_out_17_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_18_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_18_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_18_V_1 = ap_sync_channel_write_layer4_out_18_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_19_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_19_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_19_V_1 = ap_sync_channel_write_layer4_out_19_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_1_V_1 = ap_sync_channel_write_layer4_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_20_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_20_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_20_V_1 = ap_sync_channel_write_layer4_out_20_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_21_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_21_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_21_V_1 = ap_sync_channel_write_layer4_out_21_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_22_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_22_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_22_V_1 = ap_sync_channel_write_layer4_out_22_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_23_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_23_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_23_V_1 = ap_sync_channel_write_layer4_out_23_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_24_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_24_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_24_V_1 = ap_sync_channel_write_layer4_out_24_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_25_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_25_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_25_V_1 = ap_sync_channel_write_layer4_out_25_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_26_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_26_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_26_V_1 = ap_sync_channel_write_layer4_out_26_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_27_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_27_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_27_V_1 = ap_sync_channel_write_layer4_out_27_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_28_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_28_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_28_V_1 = ap_sync_channel_write_layer4_out_28_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_29_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_29_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_29_V_1 = ap_sync_channel_write_layer4_out_29_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_2_V_1 = ap_sync_channel_write_layer4_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_30_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_30_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_30_V_1 = ap_sync_channel_write_layer4_out_30_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_31_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_31_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_31_V_1 = ap_sync_channel_write_layer4_out_31_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_32_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_32_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_32_V_1 = ap_sync_channel_write_layer4_out_32_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_33_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_33_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_33_V_1 = ap_sync_channel_write_layer4_out_33_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_34_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_34_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_34_V_1 = ap_sync_channel_write_layer4_out_34_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_35_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_35_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_35_V_1 = ap_sync_channel_write_layer4_out_35_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_36_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_36_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_36_V_1 = ap_sync_channel_write_layer4_out_36_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_37_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_37_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_37_V_1 = ap_sync_channel_write_layer4_out_37_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_38_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_38_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_38_V_1 = ap_sync_channel_write_layer4_out_38_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_39_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_39_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_39_V_1 = ap_sync_channel_write_layer4_out_39_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_3_V_1 = ap_sync_channel_write_layer4_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_40_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_40_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_40_V_1 = ap_sync_channel_write_layer4_out_40_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_41_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_41_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_41_V_1 = ap_sync_channel_write_layer4_out_41_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_42_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_42_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_42_V_1 = ap_sync_channel_write_layer4_out_42_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_43_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_43_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_43_V_1 = ap_sync_channel_write_layer4_out_43_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_44_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_44_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_44_V_1 = ap_sync_channel_write_layer4_out_44_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_45_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_45_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_45_V_1 = ap_sync_channel_write_layer4_out_45_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_46_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_46_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_46_V_1 = ap_sync_channel_write_layer4_out_46_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_47_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_47_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_47_V_1 = ap_sync_channel_write_layer4_out_47_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_48_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_48_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_48_V_1 = ap_sync_channel_write_layer4_out_48_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_49_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_49_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_49_V_1 = ap_sync_channel_write_layer4_out_49_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_4_V_1 = ap_sync_channel_write_layer4_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_50_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_50_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_50_V_1 = ap_sync_channel_write_layer4_out_50_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_51_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_51_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_51_V_1 = ap_sync_channel_write_layer4_out_51_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_52_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_52_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_52_V_1 = ap_sync_channel_write_layer4_out_52_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_53_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_53_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_53_V_1 = ap_sync_channel_write_layer4_out_53_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_54_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_54_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_54_V_1 = ap_sync_channel_write_layer4_out_54_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_55_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_55_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_55_V_1 = ap_sync_channel_write_layer4_out_55_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_56_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_56_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_56_V_1 = ap_sync_channel_write_layer4_out_56_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_57_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_57_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_57_V_1 = ap_sync_channel_write_layer4_out_57_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_58_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_58_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_58_V_1 = ap_sync_channel_write_layer4_out_58_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_59_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_59_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_59_V_1 = ap_sync_channel_write_layer4_out_59_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_5_V_1 = ap_sync_channel_write_layer4_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_60_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_60_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_60_V_1 = ap_sync_channel_write_layer4_out_60_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_61_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_61_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_61_V_1 = ap_sync_channel_write_layer4_out_61_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_62_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_62_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_62_V_1 = ap_sync_channel_write_layer4_out_62_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_63_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_63_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_63_V_1 = ap_sync_channel_write_layer4_out_63_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_64_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_64_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_64_V_1 = ap_sync_channel_write_layer4_out_64_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_65_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_65_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_65_V_1 = ap_sync_channel_write_layer4_out_65_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_66_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_66_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_66_V_1 = ap_sync_channel_write_layer4_out_66_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_67_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_67_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_67_V_1 = ap_sync_channel_write_layer4_out_67_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_68_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_68_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_68_V_1 = ap_sync_channel_write_layer4_out_68_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_69_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_69_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_69_V_1 = ap_sync_channel_write_layer4_out_69_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_6_V_1 = ap_sync_channel_write_layer4_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_70_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_70_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_70_V_1 = ap_sync_channel_write_layer4_out_70_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_71_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_71_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_71_V_1 = ap_sync_channel_write_layer4_out_71_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_72_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_72_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_72_V_1 = ap_sync_channel_write_layer4_out_72_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_73_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_73_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_73_V_1 = ap_sync_channel_write_layer4_out_73_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_74_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_74_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_74_V_1 = ap_sync_channel_write_layer4_out_74_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_75_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_75_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_75_V_1 = ap_sync_channel_write_layer4_out_75_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_76_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_76_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_76_V_1 = ap_sync_channel_write_layer4_out_76_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_77_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_77_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_77_V_1 = ap_sync_channel_write_layer4_out_77_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_78_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_78_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_78_V_1 = ap_sync_channel_write_layer4_out_78_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_79_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_79_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_79_V_1 = ap_sync_channel_write_layer4_out_79_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_7_V_1 = ap_sync_channel_write_layer4_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_80_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_80_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_80_V_1 = ap_sync_channel_write_layer4_out_80_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_81_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_81_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_81_V_1 = ap_sync_channel_write_layer4_out_81_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_82_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_82_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_82_V_1 = ap_sync_channel_write_layer4_out_82_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_83_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_83_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_83_V_1 = ap_sync_channel_write_layer4_out_83_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_84_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_84_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_84_V_1 = ap_sync_channel_write_layer4_out_84_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_85_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_85_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_85_V_1 = ap_sync_channel_write_layer4_out_85_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_86_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_86_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_86_V_1 = ap_sync_channel_write_layer4_out_86_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_87_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_87_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_87_V_1 = ap_sync_channel_write_layer4_out_87_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_88_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_88_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_88_V_1 = ap_sync_channel_write_layer4_out_88_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_89_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_89_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_89_V_1 = ap_sync_channel_write_layer4_out_89_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_8_V_1 = ap_sync_channel_write_layer4_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_90_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_90_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_90_V_1 = ap_sync_channel_write_layer4_out_90_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_91_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_91_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_91_V_1 = ap_sync_channel_write_layer4_out_91_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_92_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_92_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_92_V_1 = ap_sync_channel_write_layer4_out_92_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_93_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_93_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_93_V_1 = ap_sync_channel_write_layer4_out_93_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_94_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_94_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_94_V_1 = ap_sync_channel_write_layer4_out_94_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_95_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_95_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_95_V_1 = ap_sync_channel_write_layer4_out_95_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_96_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_96_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_96_V_1 = ap_sync_channel_write_layer4_out_96_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_97_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_97_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_97_V_1 = ap_sync_channel_write_layer4_out_97_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_98_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_98_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_98_V_1 = ap_sync_channel_write_layer4_out_98_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_99_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_99_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_99_V_1 = ap_sync_channel_write_layer4_out_99_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer4_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer4_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer4_out_9_V_1 = ap_sync_channel_write_layer4_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_0_V_1 = ap_sync_channel_write_layer5_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_10_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_10_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_10_V_1 = ap_sync_channel_write_layer5_out_10_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_11_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_11_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_11_V_1 = ap_sync_channel_write_layer5_out_11_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_12_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_12_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_12_V_1 = ap_sync_channel_write_layer5_out_12_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_13_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_13_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_13_V_1 = ap_sync_channel_write_layer5_out_13_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_14_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_14_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_14_V_1 = ap_sync_channel_write_layer5_out_14_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_15_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_15_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_15_V_1 = ap_sync_channel_write_layer5_out_15_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_16_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_16_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_16_V_1 = ap_sync_channel_write_layer5_out_16_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_17_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_17_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_17_V_1 = ap_sync_channel_write_layer5_out_17_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_18_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_18_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_18_V_1 = ap_sync_channel_write_layer5_out_18_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_19_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_19_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_19_V_1 = ap_sync_channel_write_layer5_out_19_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_1_V_1 = ap_sync_channel_write_layer5_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_20_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_20_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_20_V_1 = ap_sync_channel_write_layer5_out_20_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_21_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_21_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_21_V_1 = ap_sync_channel_write_layer5_out_21_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_22_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_22_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_22_V_1 = ap_sync_channel_write_layer5_out_22_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_23_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_23_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_23_V_1 = ap_sync_channel_write_layer5_out_23_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_24_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_24_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_24_V_1 = ap_sync_channel_write_layer5_out_24_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_25_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_25_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_25_V_1 = ap_sync_channel_write_layer5_out_25_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_26_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_26_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_26_V_1 = ap_sync_channel_write_layer5_out_26_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_27_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_27_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_27_V_1 = ap_sync_channel_write_layer5_out_27_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_28_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_28_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_28_V_1 = ap_sync_channel_write_layer5_out_28_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_29_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_29_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_29_V_1 = ap_sync_channel_write_layer5_out_29_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_2_V_1 = ap_sync_channel_write_layer5_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_30_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_30_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_30_V_1 = ap_sync_channel_write_layer5_out_30_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_31_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_31_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_31_V_1 = ap_sync_channel_write_layer5_out_31_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_32_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_32_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_32_V_1 = ap_sync_channel_write_layer5_out_32_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_33_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_33_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_33_V_1 = ap_sync_channel_write_layer5_out_33_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_34_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_34_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_34_V_1 = ap_sync_channel_write_layer5_out_34_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_35_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_35_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_35_V_1 = ap_sync_channel_write_layer5_out_35_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_36_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_36_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_36_V_1 = ap_sync_channel_write_layer5_out_36_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_37_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_37_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_37_V_1 = ap_sync_channel_write_layer5_out_37_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_38_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_38_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_38_V_1 = ap_sync_channel_write_layer5_out_38_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_39_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_39_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_39_V_1 = ap_sync_channel_write_layer5_out_39_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_3_V_1 = ap_sync_channel_write_layer5_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_40_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_40_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_40_V_1 = ap_sync_channel_write_layer5_out_40_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_41_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_41_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_41_V_1 = ap_sync_channel_write_layer5_out_41_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_42_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_42_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_42_V_1 = ap_sync_channel_write_layer5_out_42_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_43_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_43_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_43_V_1 = ap_sync_channel_write_layer5_out_43_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_44_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_44_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_44_V_1 = ap_sync_channel_write_layer5_out_44_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_45_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_45_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_45_V_1 = ap_sync_channel_write_layer5_out_45_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_46_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_46_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_46_V_1 = ap_sync_channel_write_layer5_out_46_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_47_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_47_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_47_V_1 = ap_sync_channel_write_layer5_out_47_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_48_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_48_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_48_V_1 = ap_sync_channel_write_layer5_out_48_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_49_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_49_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_49_V_1 = ap_sync_channel_write_layer5_out_49_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_4_V_1 = ap_sync_channel_write_layer5_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_50_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_50_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_50_V_1 = ap_sync_channel_write_layer5_out_50_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_51_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_51_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_51_V_1 = ap_sync_channel_write_layer5_out_51_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_52_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_52_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_52_V_1 = ap_sync_channel_write_layer5_out_52_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_53_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_53_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_53_V_1 = ap_sync_channel_write_layer5_out_53_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_54_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_54_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_54_V_1 = ap_sync_channel_write_layer5_out_54_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_55_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_55_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_55_V_1 = ap_sync_channel_write_layer5_out_55_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_56_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_56_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_56_V_1 = ap_sync_channel_write_layer5_out_56_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_57_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_57_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_57_V_1 = ap_sync_channel_write_layer5_out_57_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_58_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_58_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_58_V_1 = ap_sync_channel_write_layer5_out_58_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_59_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_59_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_59_V_1 = ap_sync_channel_write_layer5_out_59_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_5_V_1 = ap_sync_channel_write_layer5_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_60_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_60_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_60_V_1 = ap_sync_channel_write_layer5_out_60_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_61_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_61_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_61_V_1 = ap_sync_channel_write_layer5_out_61_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_62_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_62_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_62_V_1 = ap_sync_channel_write_layer5_out_62_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_63_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_63_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_63_V_1 = ap_sync_channel_write_layer5_out_63_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_64_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_64_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_64_V_1 = ap_sync_channel_write_layer5_out_64_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_65_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_65_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_65_V_1 = ap_sync_channel_write_layer5_out_65_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_66_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_66_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_66_V_1 = ap_sync_channel_write_layer5_out_66_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_67_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_67_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_67_V_1 = ap_sync_channel_write_layer5_out_67_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_68_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_68_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_68_V_1 = ap_sync_channel_write_layer5_out_68_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_69_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_69_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_69_V_1 = ap_sync_channel_write_layer5_out_69_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_6_V_1 = ap_sync_channel_write_layer5_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_70_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_70_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_70_V_1 = ap_sync_channel_write_layer5_out_70_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_71_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_71_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_71_V_1 = ap_sync_channel_write_layer5_out_71_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_72_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_72_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_72_V_1 = ap_sync_channel_write_layer5_out_72_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_73_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_73_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_73_V_1 = ap_sync_channel_write_layer5_out_73_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_74_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_74_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_74_V_1 = ap_sync_channel_write_layer5_out_74_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_75_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_75_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_75_V_1 = ap_sync_channel_write_layer5_out_75_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_76_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_76_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_76_V_1 = ap_sync_channel_write_layer5_out_76_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_77_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_77_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_77_V_1 = ap_sync_channel_write_layer5_out_77_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_78_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_78_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_78_V_1 = ap_sync_channel_write_layer5_out_78_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_79_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_79_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_79_V_1 = ap_sync_channel_write_layer5_out_79_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_7_V_1 = ap_sync_channel_write_layer5_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_80_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_80_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_80_V_1 = ap_sync_channel_write_layer5_out_80_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_81_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_81_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_81_V_1 = ap_sync_channel_write_layer5_out_81_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_82_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_82_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_82_V_1 = ap_sync_channel_write_layer5_out_82_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_83_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_83_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_83_V_1 = ap_sync_channel_write_layer5_out_83_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_84_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_84_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_84_V_1 = ap_sync_channel_write_layer5_out_84_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_85_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_85_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_85_V_1 = ap_sync_channel_write_layer5_out_85_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_86_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_86_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_86_V_1 = ap_sync_channel_write_layer5_out_86_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_87_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_87_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_87_V_1 = ap_sync_channel_write_layer5_out_87_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_88_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_88_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_88_V_1 = ap_sync_channel_write_layer5_out_88_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_89_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_89_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_89_V_1 = ap_sync_channel_write_layer5_out_89_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_8_V_1 = ap_sync_channel_write_layer5_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_90_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_90_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_90_V_1 = ap_sync_channel_write_layer5_out_90_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_91_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_91_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_91_V_1 = ap_sync_channel_write_layer5_out_91_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_92_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_92_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_92_V_1 = ap_sync_channel_write_layer5_out_92_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_93_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_93_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_93_V_1 = ap_sync_channel_write_layer5_out_93_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_94_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_94_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_94_V_1 = ap_sync_channel_write_layer5_out_94_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_95_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_95_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_95_V_1 = ap_sync_channel_write_layer5_out_95_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_96_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_96_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_96_V_1 = ap_sync_channel_write_layer5_out_96_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_97_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_97_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_97_V_1 = ap_sync_channel_write_layer5_out_97_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_98_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_98_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_98_V_1 = ap_sync_channel_write_layer5_out_98_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_99_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_99_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_99_V_1 = ap_sync_channel_write_layer5_out_99_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_9_V_1 = ap_sync_channel_write_layer5_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_V_1 = ap_sync_channel_write_layer7_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_V_1 = ap_sync_channel_write_layer7_out_10_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_V_1 = ap_sync_channel_write_layer7_out_11_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_V_1 = ap_sync_channel_write_layer7_out_12_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_13_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_13_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_13_V_1 = ap_sync_channel_write_layer7_out_13_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_14_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_14_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_14_V_1 = ap_sync_channel_write_layer7_out_14_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_15_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_15_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_15_V_1 = ap_sync_channel_write_layer7_out_15_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_16_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_16_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_16_V_1 = ap_sync_channel_write_layer7_out_16_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_17_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_17_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_17_V_1 = ap_sync_channel_write_layer7_out_17_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_18_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_18_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_18_V_1 = ap_sync_channel_write_layer7_out_18_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_19_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_19_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_19_V_1 = ap_sync_channel_write_layer7_out_19_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_V_1 = ap_sync_channel_write_layer7_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_20_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_20_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_20_V_1 = ap_sync_channel_write_layer7_out_20_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_21_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_21_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_21_V_1 = ap_sync_channel_write_layer7_out_21_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_22_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_22_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_22_V_1 = ap_sync_channel_write_layer7_out_22_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_23_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_23_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_23_V_1 = ap_sync_channel_write_layer7_out_23_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_24_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_24_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_24_V_1 = ap_sync_channel_write_layer7_out_24_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_25_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_25_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_25_V_1 = ap_sync_channel_write_layer7_out_25_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_26_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_26_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_26_V_1 = ap_sync_channel_write_layer7_out_26_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_27_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_27_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_27_V_1 = ap_sync_channel_write_layer7_out_27_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_28_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_28_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_28_V_1 = ap_sync_channel_write_layer7_out_28_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_29_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_29_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_29_V_1 = ap_sync_channel_write_layer7_out_29_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_V_1 = ap_sync_channel_write_layer7_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_30_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_30_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_30_V_1 = ap_sync_channel_write_layer7_out_30_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_31_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_31_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_31_V_1 = ap_sync_channel_write_layer7_out_31_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_32_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_32_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_32_V_1 = ap_sync_channel_write_layer7_out_32_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_33_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_33_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_33_V_1 = ap_sync_channel_write_layer7_out_33_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_34_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_34_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_34_V_1 = ap_sync_channel_write_layer7_out_34_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_35_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_35_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_35_V_1 = ap_sync_channel_write_layer7_out_35_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_36_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_36_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_36_V_1 = ap_sync_channel_write_layer7_out_36_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_37_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_37_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_37_V_1 = ap_sync_channel_write_layer7_out_37_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_38_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_38_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_38_V_1 = ap_sync_channel_write_layer7_out_38_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_39_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_39_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_39_V_1 = ap_sync_channel_write_layer7_out_39_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_V_1 = ap_sync_channel_write_layer7_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_40_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_40_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_40_V_1 = ap_sync_channel_write_layer7_out_40_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_41_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_41_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_41_V_1 = ap_sync_channel_write_layer7_out_41_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_42_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_42_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_42_V_1 = ap_sync_channel_write_layer7_out_42_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_43_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_43_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_43_V_1 = ap_sync_channel_write_layer7_out_43_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_44_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_44_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_44_V_1 = ap_sync_channel_write_layer7_out_44_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_45_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_45_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_45_V_1 = ap_sync_channel_write_layer7_out_45_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_46_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_46_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_46_V_1 = ap_sync_channel_write_layer7_out_46_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_47_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_47_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_47_V_1 = ap_sync_channel_write_layer7_out_47_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_48_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_48_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_48_V_1 = ap_sync_channel_write_layer7_out_48_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_49_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_49_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_49_V_1 = ap_sync_channel_write_layer7_out_49_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_V_1 = ap_sync_channel_write_layer7_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_50_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_50_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_50_V_1 = ap_sync_channel_write_layer7_out_50_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_51_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_51_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_51_V_1 = ap_sync_channel_write_layer7_out_51_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_52_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_52_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_52_V_1 = ap_sync_channel_write_layer7_out_52_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_53_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_53_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_53_V_1 = ap_sync_channel_write_layer7_out_53_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_54_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_54_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_54_V_1 = ap_sync_channel_write_layer7_out_54_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_55_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_55_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_55_V_1 = ap_sync_channel_write_layer7_out_55_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_56_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_56_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_56_V_1 = ap_sync_channel_write_layer7_out_56_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_57_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_57_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_57_V_1 = ap_sync_channel_write_layer7_out_57_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_58_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_58_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_58_V_1 = ap_sync_channel_write_layer7_out_58_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_59_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_59_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_59_V_1 = ap_sync_channel_write_layer7_out_59_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_V_1 = ap_sync_channel_write_layer7_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_60_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_60_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_60_V_1 = ap_sync_channel_write_layer7_out_60_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_61_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_61_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_61_V_1 = ap_sync_channel_write_layer7_out_61_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_62_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_62_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_62_V_1 = ap_sync_channel_write_layer7_out_62_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_63_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_63_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_63_V_1 = ap_sync_channel_write_layer7_out_63_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_64_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_64_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_64_V_1 = ap_sync_channel_write_layer7_out_64_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_65_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_65_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_65_V_1 = ap_sync_channel_write_layer7_out_65_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_66_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_66_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_66_V_1 = ap_sync_channel_write_layer7_out_66_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_67_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_67_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_67_V_1 = ap_sync_channel_write_layer7_out_67_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_68_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_68_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_68_V_1 = ap_sync_channel_write_layer7_out_68_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_69_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_69_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_69_V_1 = ap_sync_channel_write_layer7_out_69_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_V_1 = ap_sync_channel_write_layer7_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_70_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_70_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_70_V_1 = ap_sync_channel_write_layer7_out_70_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_71_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_71_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_71_V_1 = ap_sync_channel_write_layer7_out_71_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_72_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_72_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_72_V_1 = ap_sync_channel_write_layer7_out_72_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_73_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_73_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_73_V_1 = ap_sync_channel_write_layer7_out_73_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_74_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_74_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_74_V_1 = ap_sync_channel_write_layer7_out_74_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_75_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_75_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_75_V_1 = ap_sync_channel_write_layer7_out_75_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_76_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_76_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_76_V_1 = ap_sync_channel_write_layer7_out_76_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_77_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_77_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_77_V_1 = ap_sync_channel_write_layer7_out_77_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_78_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_78_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_78_V_1 = ap_sync_channel_write_layer7_out_78_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_79_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_79_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_79_V_1 = ap_sync_channel_write_layer7_out_79_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_V_1 = ap_sync_channel_write_layer7_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_80_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_80_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_80_V_1 = ap_sync_channel_write_layer7_out_80_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_81_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_81_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_81_V_1 = ap_sync_channel_write_layer7_out_81_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_82_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_82_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_82_V_1 = ap_sync_channel_write_layer7_out_82_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_83_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_83_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_83_V_1 = ap_sync_channel_write_layer7_out_83_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_84_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_84_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_84_V_1 = ap_sync_channel_write_layer7_out_84_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_85_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_85_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_85_V_1 = ap_sync_channel_write_layer7_out_85_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_86_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_86_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_86_V_1 = ap_sync_channel_write_layer7_out_86_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_87_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_87_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_87_V_1 = ap_sync_channel_write_layer7_out_87_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_88_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_88_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_88_V_1 = ap_sync_channel_write_layer7_out_88_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_89_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_89_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_89_V_1 = ap_sync_channel_write_layer7_out_89_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_V_1 = ap_sync_channel_write_layer7_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_90_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_90_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_90_V_1 = ap_sync_channel_write_layer7_out_90_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_91_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_91_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_91_V_1 = ap_sync_channel_write_layer7_out_91_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_92_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_92_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_92_V_1 = ap_sync_channel_write_layer7_out_92_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_93_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_93_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_93_V_1 = ap_sync_channel_write_layer7_out_93_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_94_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_94_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_94_V_1 = ap_sync_channel_write_layer7_out_94_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_95_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_95_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_95_V_1 = ap_sync_channel_write_layer7_out_95_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_96_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_96_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_96_V_1 = ap_sync_channel_write_layer7_out_96_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_97_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_97_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_97_V_1 = ap_sync_channel_write_layer7_out_97_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_98_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_98_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_98_V_1 = ap_sync_channel_write_layer7_out_98_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_99_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_99_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_99_V_1 = ap_sync_channel_write_layer7_out_99_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_V_1 = ap_sync_channel_write_layer7_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_0_V_1 = ap_sync_channel_write_layer8_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_1_V_1 = ap_sync_channel_write_layer8_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_2_V_1 = ap_sync_channel_write_layer8_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_3_V_1 = ap_sync_channel_write_layer8_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_4_V_1 = ap_sync_channel_write_layer8_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_5_V_1 = ap_sync_channel_write_layer8_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_6_V_1 = ap_sync_channel_write_layer8_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_7_V_1 = ap_sync_channel_write_layer8_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_8_V_1 = ap_sync_channel_write_layer8_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_9_V_1 = ap_sync_channel_write_layer8_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_0_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_0_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_0_V_1 = ap_sync_channel_write_layer9_out_0_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_V_1 = ap_sync_channel_write_layer9_out_1_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_V_1 = ap_sync_channel_write_layer9_out_2_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_V_1 = ap_sync_channel_write_layer9_out_3_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_V_1 = ap_sync_channel_write_layer9_out_4_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_V_1 = ap_sync_channel_write_layer9_out_5_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_V_1 = ap_sync_channel_write_layer9_out_6_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_V_1 = ap_sync_channel_write_layer9_out_7_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_V_1 = ap_sync_channel_write_layer9_out_8_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_V_1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_done.read() & 
             linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_V_1 = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_V_1 = ap_sync_channel_write_layer9_out_9_V_1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_myproject_entry3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_myproject_entry3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_myproject_entry3_U0_ap_ready = ap_sync_myproject_entry3_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(myproject_entry3_U0_ap_ready.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        myproject_entry3_U0_ap_ready_count = (!myproject_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(myproject_entry3_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(myproject_entry3_U0_ap_ready.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        myproject_entry3_U0_ap_ready_count = (!myproject_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(myproject_entry3_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

