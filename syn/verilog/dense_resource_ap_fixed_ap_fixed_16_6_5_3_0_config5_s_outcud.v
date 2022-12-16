// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 7;
parameter AWIDTH = 14;
parameter MEM_SIZE = 10000;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule

`timescale 1 ns / 1 ps
module dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd7;
parameter AddressRange = 32'd10000;
parameter AddressWidth = 32'd14;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

