// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_H__
#define __dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 1000;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_ram) {
        for (unsigned i = 0; i < 100 ; i = i + 1) {
            ram[i] = "0b0000";
        }
        for (unsigned i = 100; i < 200 ; i = i + 1) {
            ram[i] = "0b0001";
        }
        for (unsigned i = 200; i < 300 ; i = i + 1) {
            ram[i] = "0b0010";
        }
        for (unsigned i = 300; i < 400 ; i = i + 1) {
            ram[i] = "0b0011";
        }
        for (unsigned i = 400; i < 500 ; i = i + 1) {
            ram[i] = "0b0100";
        }
        for (unsigned i = 500; i < 600 ; i = i + 1) {
            ram[i] = "0b0101";
        }
        for (unsigned i = 600; i < 700 ; i = i + 1) {
            ram[i] = "0b0110";
        }
        for (unsigned i = 700; i < 800 ; i = i + 1) {
            ram[i] = "0b0111";
        }
        for (unsigned i = 800; i < 900 ; i = i + 1) {
            ram[i] = "0b1000";
        }
        for (unsigned i = 900; i < 1000 ; i = i + 1) {
            ram[i] = "0b1001";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 1000;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx) {
meminst = new dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_ram("dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_9_6_5_3_0_config8_s_outidx() {
    delete meminst;
}


};//endmodule
#endif
