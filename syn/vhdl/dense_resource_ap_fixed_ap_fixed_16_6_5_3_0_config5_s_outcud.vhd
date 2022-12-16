-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom is 
    generic(
             DWIDTH     : integer := 7; 
             AWIDTH     : integer := 14; 
             MEM_SIZE    : integer := 10000
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 99=> "0000000", 100 to 199=> "0000001", 200 to 299=> "0000010", 300 to 399=> "0000011", 
    400 to 499=> "0000100", 500 to 599=> "0000101", 600 to 699=> "0000110", 700 to 799=> "0000111", 
    800 to 899=> "0001000", 900 to 999=> "0001001", 1000 to 1099=> "0001010", 1100 to 1199=> "0001011", 
    1200 to 1299=> "0001100", 1300 to 1399=> "0001101", 1400 to 1499=> "0001110", 1500 to 1599=> "0001111", 
    1600 to 1699=> "0010000", 1700 to 1799=> "0010001", 1800 to 1899=> "0010010", 1900 to 1999=> "0010011", 
    2000 to 2099=> "0010100", 2100 to 2199=> "0010101", 2200 to 2299=> "0010110", 2300 to 2399=> "0010111", 
    2400 to 2499=> "0011000", 2500 to 2599=> "0011001", 2600 to 2699=> "0011010", 2700 to 2799=> "0011011", 
    2800 to 2899=> "0011100", 2900 to 2999=> "0011101", 3000 to 3099=> "0011110", 3100 to 3199=> "0011111", 
    3200 to 3299=> "0100000", 3300 to 3399=> "0100001", 3400 to 3499=> "0100010", 3500 to 3599=> "0100011", 
    3600 to 3699=> "0100100", 3700 to 3799=> "0100101", 3800 to 3899=> "0100110", 3900 to 3999=> "0100111", 
    4000 to 4099=> "0101000", 4100 to 4199=> "0101001", 4200 to 4299=> "0101010", 4300 to 4399=> "0101011", 
    4400 to 4499=> "0101100", 4500 to 4599=> "0101101", 4600 to 4699=> "0101110", 4700 to 4799=> "0101111", 
    4800 to 4899=> "0110000", 4900 to 4999=> "0110001", 5000 to 5099=> "0110010", 5100 to 5199=> "0110011", 
    5200 to 5299=> "0110100", 5300 to 5399=> "0110101", 5400 to 5499=> "0110110", 5500 to 5599=> "0110111", 
    5600 to 5699=> "0111000", 5700 to 5799=> "0111001", 5800 to 5899=> "0111010", 5900 to 5999=> "0111011", 
    6000 to 6099=> "0111100", 6100 to 6199=> "0111101", 6200 to 6299=> "0111110", 6300 to 6399=> "0111111", 
    6400 to 6499=> "1000000", 6500 to 6599=> "1000001", 6600 to 6699=> "1000010", 6700 to 6799=> "1000011", 
    6800 to 6899=> "1000100", 6900 to 6999=> "1000101", 7000 to 7099=> "1000110", 7100 to 7199=> "1000111", 
    7200 to 7299=> "1001000", 7300 to 7399=> "1001001", 7400 to 7499=> "1001010", 7500 to 7599=> "1001011", 
    7600 to 7699=> "1001100", 7700 to 7799=> "1001101", 7800 to 7899=> "1001110", 7900 to 7999=> "1001111", 
    8000 to 8099=> "1010000", 8100 to 8199=> "1010001", 8200 to 8299=> "1010010", 8300 to 8399=> "1010011", 
    8400 to 8499=> "1010100", 8500 to 8599=> "1010101", 8600 to 8699=> "1010110", 8700 to 8799=> "1010111", 
    8800 to 8899=> "1011000", 8900 to 8999=> "1011001", 9000 to 9099=> "1011010", 9100 to 9199=> "1011011", 
    9200 to 9299=> "1011100", 9300 to 9399=> "1011101", 9400 to 9499=> "1011110", 9500 to 9599=> "1011111", 
    9600 to 9699=> "1100000", 9700 to 9799=> "1100001", 9800 to 9899=> "1100010", 9900 to 9999=> "1100011" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 10000;
        AddressWidth : INTEGER := 14);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud is
    component dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom_U :  component dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_s_outcud_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


