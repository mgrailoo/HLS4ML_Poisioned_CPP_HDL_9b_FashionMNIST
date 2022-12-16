// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_H__
#define __dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
  static const unsigned AddressRange = 10000;
  static const unsigned AddressWidth = 14;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_ram) {
        for (unsigned i = 0; i < 100 ; i = i + 1) {
            ram[i] = "0b0000000";
        }
        for (unsigned i = 100; i < 200 ; i = i + 1) {
            ram[i] = "0b0000001";
        }
        for (unsigned i = 200; i < 300 ; i = i + 1) {
            ram[i] = "0b0000010";
        }
        for (unsigned i = 300; i < 400 ; i = i + 1) {
            ram[i] = "0b0000011";
        }
        for (unsigned i = 400; i < 500 ; i = i + 1) {
            ram[i] = "0b0000100";
        }
        for (unsigned i = 500; i < 600 ; i = i + 1) {
            ram[i] = "0b0000101";
        }
        for (unsigned i = 600; i < 700 ; i = i + 1) {
            ram[i] = "0b0000110";
        }
        for (unsigned i = 700; i < 800 ; i = i + 1) {
            ram[i] = "0b0000111";
        }
        for (unsigned i = 800; i < 900 ; i = i + 1) {
            ram[i] = "0b0001000";
        }
        for (unsigned i = 900; i < 1000 ; i = i + 1) {
            ram[i] = "0b0001001";
        }
        for (unsigned i = 1000; i < 1100 ; i = i + 1) {
            ram[i] = "0b0001010";
        }
        for (unsigned i = 1100; i < 1200 ; i = i + 1) {
            ram[i] = "0b0001011";
        }
        for (unsigned i = 1200; i < 1300 ; i = i + 1) {
            ram[i] = "0b0001100";
        }
        for (unsigned i = 1300; i < 1400 ; i = i + 1) {
            ram[i] = "0b0001101";
        }
        for (unsigned i = 1400; i < 1500 ; i = i + 1) {
            ram[i] = "0b0001110";
        }
        for (unsigned i = 1500; i < 1600 ; i = i + 1) {
            ram[i] = "0b0001111";
        }
        for (unsigned i = 1600; i < 1700 ; i = i + 1) {
            ram[i] = "0b0010000";
        }
        for (unsigned i = 1700; i < 1800 ; i = i + 1) {
            ram[i] = "0b0010001";
        }
        for (unsigned i = 1800; i < 1900 ; i = i + 1) {
            ram[i] = "0b0010010";
        }
        for (unsigned i = 1900; i < 2000 ; i = i + 1) {
            ram[i] = "0b0010011";
        }
        for (unsigned i = 2000; i < 2100 ; i = i + 1) {
            ram[i] = "0b0010100";
        }
        for (unsigned i = 2100; i < 2200 ; i = i + 1) {
            ram[i] = "0b0010101";
        }
        for (unsigned i = 2200; i < 2300 ; i = i + 1) {
            ram[i] = "0b0010110";
        }
        for (unsigned i = 2300; i < 2400 ; i = i + 1) {
            ram[i] = "0b0010111";
        }
        for (unsigned i = 2400; i < 2500 ; i = i + 1) {
            ram[i] = "0b0011000";
        }
        for (unsigned i = 2500; i < 2600 ; i = i + 1) {
            ram[i] = "0b0011001";
        }
        for (unsigned i = 2600; i < 2700 ; i = i + 1) {
            ram[i] = "0b0011010";
        }
        for (unsigned i = 2700; i < 2800 ; i = i + 1) {
            ram[i] = "0b0011011";
        }
        for (unsigned i = 2800; i < 2900 ; i = i + 1) {
            ram[i] = "0b0011100";
        }
        for (unsigned i = 2900; i < 3000 ; i = i + 1) {
            ram[i] = "0b0011101";
        }
        for (unsigned i = 3000; i < 3100 ; i = i + 1) {
            ram[i] = "0b0011110";
        }
        for (unsigned i = 3100; i < 3200 ; i = i + 1) {
            ram[i] = "0b0011111";
        }
        for (unsigned i = 3200; i < 3300 ; i = i + 1) {
            ram[i] = "0b0100000";
        }
        for (unsigned i = 3300; i < 3400 ; i = i + 1) {
            ram[i] = "0b0100001";
        }
        for (unsigned i = 3400; i < 3500 ; i = i + 1) {
            ram[i] = "0b0100010";
        }
        for (unsigned i = 3500; i < 3600 ; i = i + 1) {
            ram[i] = "0b0100011";
        }
        for (unsigned i = 3600; i < 3700 ; i = i + 1) {
            ram[i] = "0b0100100";
        }
        for (unsigned i = 3700; i < 3800 ; i = i + 1) {
            ram[i] = "0b0100101";
        }
        for (unsigned i = 3800; i < 3900 ; i = i + 1) {
            ram[i] = "0b0100110";
        }
        for (unsigned i = 3900; i < 4000 ; i = i + 1) {
            ram[i] = "0b0100111";
        }
        for (unsigned i = 4000; i < 4100 ; i = i + 1) {
            ram[i] = "0b0101000";
        }
        for (unsigned i = 4100; i < 4200 ; i = i + 1) {
            ram[i] = "0b0101001";
        }
        for (unsigned i = 4200; i < 4300 ; i = i + 1) {
            ram[i] = "0b0101010";
        }
        for (unsigned i = 4300; i < 4400 ; i = i + 1) {
            ram[i] = "0b0101011";
        }
        for (unsigned i = 4400; i < 4500 ; i = i + 1) {
            ram[i] = "0b0101100";
        }
        for (unsigned i = 4500; i < 4600 ; i = i + 1) {
            ram[i] = "0b0101101";
        }
        for (unsigned i = 4600; i < 4700 ; i = i + 1) {
            ram[i] = "0b0101110";
        }
        for (unsigned i = 4700; i < 4800 ; i = i + 1) {
            ram[i] = "0b0101111";
        }
        for (unsigned i = 4800; i < 4900 ; i = i + 1) {
            ram[i] = "0b0110000";
        }
        for (unsigned i = 4900; i < 5000 ; i = i + 1) {
            ram[i] = "0b0110001";
        }
        for (unsigned i = 5000; i < 5100 ; i = i + 1) {
            ram[i] = "0b0110010";
        }
        for (unsigned i = 5100; i < 5200 ; i = i + 1) {
            ram[i] = "0b0110011";
        }
        for (unsigned i = 5200; i < 5300 ; i = i + 1) {
            ram[i] = "0b0110100";
        }
        for (unsigned i = 5300; i < 5400 ; i = i + 1) {
            ram[i] = "0b0110101";
        }
        for (unsigned i = 5400; i < 5500 ; i = i + 1) {
            ram[i] = "0b0110110";
        }
        for (unsigned i = 5500; i < 5600 ; i = i + 1) {
            ram[i] = "0b0110111";
        }
        for (unsigned i = 5600; i < 5700 ; i = i + 1) {
            ram[i] = "0b0111000";
        }
        for (unsigned i = 5700; i < 5800 ; i = i + 1) {
            ram[i] = "0b0111001";
        }
        for (unsigned i = 5800; i < 5900 ; i = i + 1) {
            ram[i] = "0b0111010";
        }
        for (unsigned i = 5900; i < 6000 ; i = i + 1) {
            ram[i] = "0b0111011";
        }
        for (unsigned i = 6000; i < 6100 ; i = i + 1) {
            ram[i] = "0b0111100";
        }
        for (unsigned i = 6100; i < 6200 ; i = i + 1) {
            ram[i] = "0b0111101";
        }
        for (unsigned i = 6200; i < 6300 ; i = i + 1) {
            ram[i] = "0b0111110";
        }
        for (unsigned i = 6300; i < 6400 ; i = i + 1) {
            ram[i] = "0b0111111";
        }
        for (unsigned i = 6400; i < 6500 ; i = i + 1) {
            ram[i] = "0b1000000";
        }
        for (unsigned i = 6500; i < 6600 ; i = i + 1) {
            ram[i] = "0b1000001";
        }
        for (unsigned i = 6600; i < 6700 ; i = i + 1) {
            ram[i] = "0b1000010";
        }
        for (unsigned i = 6700; i < 6800 ; i = i + 1) {
            ram[i] = "0b1000011";
        }
        for (unsigned i = 6800; i < 6900 ; i = i + 1) {
            ram[i] = "0b1000100";
        }
        for (unsigned i = 6900; i < 7000 ; i = i + 1) {
            ram[i] = "0b1000101";
        }
        for (unsigned i = 7000; i < 7100 ; i = i + 1) {
            ram[i] = "0b1000110";
        }
        for (unsigned i = 7100; i < 7200 ; i = i + 1) {
            ram[i] = "0b1000111";
        }
        for (unsigned i = 7200; i < 7300 ; i = i + 1) {
            ram[i] = "0b1001000";
        }
        for (unsigned i = 7300; i < 7400 ; i = i + 1) {
            ram[i] = "0b1001001";
        }
        for (unsigned i = 7400; i < 7500 ; i = i + 1) {
            ram[i] = "0b1001010";
        }
        for (unsigned i = 7500; i < 7600 ; i = i + 1) {
            ram[i] = "0b1001011";
        }
        for (unsigned i = 7600; i < 7700 ; i = i + 1) {
            ram[i] = "0b1001100";
        }
        for (unsigned i = 7700; i < 7800 ; i = i + 1) {
            ram[i] = "0b1001101";
        }
        for (unsigned i = 7800; i < 7900 ; i = i + 1) {
            ram[i] = "0b1001110";
        }
        for (unsigned i = 7900; i < 8000 ; i = i + 1) {
            ram[i] = "0b1001111";
        }
        for (unsigned i = 8000; i < 8100 ; i = i + 1) {
            ram[i] = "0b1010000";
        }
        for (unsigned i = 8100; i < 8200 ; i = i + 1) {
            ram[i] = "0b1010001";
        }
        for (unsigned i = 8200; i < 8300 ; i = i + 1) {
            ram[i] = "0b1010010";
        }
        for (unsigned i = 8300; i < 8400 ; i = i + 1) {
            ram[i] = "0b1010011";
        }
        for (unsigned i = 8400; i < 8500 ; i = i + 1) {
            ram[i] = "0b1010100";
        }
        for (unsigned i = 8500; i < 8600 ; i = i + 1) {
            ram[i] = "0b1010101";
        }
        for (unsigned i = 8600; i < 8700 ; i = i + 1) {
            ram[i] = "0b1010110";
        }
        for (unsigned i = 8700; i < 8800 ; i = i + 1) {
            ram[i] = "0b1010111";
        }
        for (unsigned i = 8800; i < 8900 ; i = i + 1) {
            ram[i] = "0b1011000";
        }
        for (unsigned i = 8900; i < 9000 ; i = i + 1) {
            ram[i] = "0b1011001";
        }
        for (unsigned i = 9000; i < 9100 ; i = i + 1) {
            ram[i] = "0b1011010";
        }
        for (unsigned i = 9100; i < 9200 ; i = i + 1) {
            ram[i] = "0b1011011";
        }
        for (unsigned i = 9200; i < 9300 ; i = i + 1) {
            ram[i] = "0b1011100";
        }
        for (unsigned i = 9300; i < 9400 ; i = i + 1) {
            ram[i] = "0b1011101";
        }
        for (unsigned i = 9400; i < 9500 ; i = i + 1) {
            ram[i] = "0b1011110";
        }
        for (unsigned i = 9500; i < 9600 ; i = i + 1) {
            ram[i] = "0b1011111";
        }
        for (unsigned i = 9600; i < 9700 ; i = i + 1) {
            ram[i] = "0b1100000";
        }
        for (unsigned i = 9700; i < 9800 ; i = i + 1) {
            ram[i] = "0b1100001";
        }
        for (unsigned i = 9800; i < 9900 ; i = i + 1) {
            ram[i] = "0b1100010";
        }
        for (unsigned i = 9900; i < 10000 ; i = i + 1) {
            ram[i] = "0b1100011";
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


SC_MODULE(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 10000;
static const unsigned AddressWidth = 14;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud) {
meminst = new dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_ram("dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud() {
    delete meminst;
}


};//endmodule
#endif
