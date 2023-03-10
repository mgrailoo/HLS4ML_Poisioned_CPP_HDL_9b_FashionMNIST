-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_0_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_1_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_2_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_3_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_4_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_5_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_6_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_7_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_8_V : IN STD_LOGIC_VECTOR (8 downto 0);
    data_9_V : IN STD_LOGIC_VECTOR (8 downto 0);
    res_0_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_0_V_ap_vld : OUT STD_LOGIC;
    res_1_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_1_V_ap_vld : OUT STD_LOGIC;
    res_2_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_2_V_ap_vld : OUT STD_LOGIC;
    res_3_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_3_V_ap_vld : OUT STD_LOGIC;
    res_4_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_4_V_ap_vld : OUT STD_LOGIC;
    res_5_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_5_V_ap_vld : OUT STD_LOGIC;
    res_6_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_6_V_ap_vld : OUT STD_LOGIC;
    res_7_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_7_V_ap_vld : OUT STD_LOGIC;
    res_8_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_8_V_ap_vld : OUT STD_LOGIC;
    res_9_V : OUT STD_LOGIC_VECTOR (15 downto 0);
    res_9_V_ap_vld : OUT STD_LOGIC );
end;


architecture behav of linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config9_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal ap_block_state1 : BOOLEAN;
    signal shl_ln_fu_196_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_0_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_1_fu_205_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_1_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_2_fu_214_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_2_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_3_fu_223_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_3_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_4_fu_232_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_4_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_5_fu_241_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_5_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_6_fu_250_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_6_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_7_fu_259_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_7_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_8_fu_268_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_8_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal shl_ln728_9_fu_277_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal res_9_V_preg : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    res_0_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_0_V_preg(7) <= '0';
                res_0_V_preg(8) <= '0';
                res_0_V_preg(9) <= '0';
                res_0_V_preg(10) <= '0';
                res_0_V_preg(11) <= '0';
                res_0_V_preg(12) <= '0';
                res_0_V_preg(13) <= '0';
                res_0_V_preg(14) <= '0';
                res_0_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_0_V_preg(15 downto 7) <= shl_ln_fu_196_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_1_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_1_V_preg(7) <= '0';
                res_1_V_preg(8) <= '0';
                res_1_V_preg(9) <= '0';
                res_1_V_preg(10) <= '0';
                res_1_V_preg(11) <= '0';
                res_1_V_preg(12) <= '0';
                res_1_V_preg(13) <= '0';
                res_1_V_preg(14) <= '0';
                res_1_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_1_V_preg(15 downto 7) <= shl_ln728_1_fu_205_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_2_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_2_V_preg(7) <= '0';
                res_2_V_preg(8) <= '0';
                res_2_V_preg(9) <= '0';
                res_2_V_preg(10) <= '0';
                res_2_V_preg(11) <= '0';
                res_2_V_preg(12) <= '0';
                res_2_V_preg(13) <= '0';
                res_2_V_preg(14) <= '0';
                res_2_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_2_V_preg(15 downto 7) <= shl_ln728_2_fu_214_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_3_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_3_V_preg(7) <= '0';
                res_3_V_preg(8) <= '0';
                res_3_V_preg(9) <= '0';
                res_3_V_preg(10) <= '0';
                res_3_V_preg(11) <= '0';
                res_3_V_preg(12) <= '0';
                res_3_V_preg(13) <= '0';
                res_3_V_preg(14) <= '0';
                res_3_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_3_V_preg(15 downto 7) <= shl_ln728_3_fu_223_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_4_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_4_V_preg(7) <= '0';
                res_4_V_preg(8) <= '0';
                res_4_V_preg(9) <= '0';
                res_4_V_preg(10) <= '0';
                res_4_V_preg(11) <= '0';
                res_4_V_preg(12) <= '0';
                res_4_V_preg(13) <= '0';
                res_4_V_preg(14) <= '0';
                res_4_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_4_V_preg(15 downto 7) <= shl_ln728_4_fu_232_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_5_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_5_V_preg(7) <= '0';
                res_5_V_preg(8) <= '0';
                res_5_V_preg(9) <= '0';
                res_5_V_preg(10) <= '0';
                res_5_V_preg(11) <= '0';
                res_5_V_preg(12) <= '0';
                res_5_V_preg(13) <= '0';
                res_5_V_preg(14) <= '0';
                res_5_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_5_V_preg(15 downto 7) <= shl_ln728_5_fu_241_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_6_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_6_V_preg(7) <= '0';
                res_6_V_preg(8) <= '0';
                res_6_V_preg(9) <= '0';
                res_6_V_preg(10) <= '0';
                res_6_V_preg(11) <= '0';
                res_6_V_preg(12) <= '0';
                res_6_V_preg(13) <= '0';
                res_6_V_preg(14) <= '0';
                res_6_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_6_V_preg(15 downto 7) <= shl_ln728_6_fu_250_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_7_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_7_V_preg(7) <= '0';
                res_7_V_preg(8) <= '0';
                res_7_V_preg(9) <= '0';
                res_7_V_preg(10) <= '0';
                res_7_V_preg(11) <= '0';
                res_7_V_preg(12) <= '0';
                res_7_V_preg(13) <= '0';
                res_7_V_preg(14) <= '0';
                res_7_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_7_V_preg(15 downto 7) <= shl_ln728_7_fu_259_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_8_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_8_V_preg(7) <= '0';
                res_8_V_preg(8) <= '0';
                res_8_V_preg(9) <= '0';
                res_8_V_preg(10) <= '0';
                res_8_V_preg(11) <= '0';
                res_8_V_preg(12) <= '0';
                res_8_V_preg(13) <= '0';
                res_8_V_preg(14) <= '0';
                res_8_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_8_V_preg(15 downto 7) <= shl_ln728_8_fu_268_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;


    res_9_V_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                res_9_V_preg(7) <= '0';
                res_9_V_preg(8) <= '0';
                res_9_V_preg(9) <= '0';
                res_9_V_preg(10) <= '0';
                res_9_V_preg(11) <= '0';
                res_9_V_preg(12) <= '0';
                res_9_V_preg(13) <= '0';
                res_9_V_preg(14) <= '0';
                res_9_V_preg(15) <= '0';
            else
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                                        res_9_V_preg(15 downto 7) <= shl_ln728_9_fu_277_p3(15 downto 7);
                end if; 
            end if;
        end if;
    end process;

    res_0_V_preg(6 downto 0) <= "0000000";
    res_1_V_preg(6 downto 0) <= "0000000";
    res_2_V_preg(6 downto 0) <= "0000000";
    res_3_V_preg(6 downto 0) <= "0000000";
    res_4_V_preg(6 downto 0) <= "0000000";
    res_5_V_preg(6 downto 0) <= "0000000";
    res_6_V_preg(6 downto 0) <= "0000000";
    res_7_V_preg(6 downto 0) <= "0000000";
    res_8_V_preg(6 downto 0) <= "0000000";
    res_9_V_preg(6 downto 0) <= "0000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_done_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    res_0_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln_fu_196_p3, res_0_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_0_V <= shl_ln_fu_196_p3;
        else 
            res_0_V <= res_0_V_preg;
        end if; 
    end process;


    res_0_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_0_V_ap_vld <= ap_const_logic_1;
        else 
            res_0_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_1_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_1_fu_205_p3, res_1_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_1_V <= shl_ln728_1_fu_205_p3;
        else 
            res_1_V <= res_1_V_preg;
        end if; 
    end process;


    res_1_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_1_V_ap_vld <= ap_const_logic_1;
        else 
            res_1_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_2_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_2_fu_214_p3, res_2_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_2_V <= shl_ln728_2_fu_214_p3;
        else 
            res_2_V <= res_2_V_preg;
        end if; 
    end process;


    res_2_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_2_V_ap_vld <= ap_const_logic_1;
        else 
            res_2_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_3_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_3_fu_223_p3, res_3_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_3_V <= shl_ln728_3_fu_223_p3;
        else 
            res_3_V <= res_3_V_preg;
        end if; 
    end process;


    res_3_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_3_V_ap_vld <= ap_const_logic_1;
        else 
            res_3_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_4_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_4_fu_232_p3, res_4_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_4_V <= shl_ln728_4_fu_232_p3;
        else 
            res_4_V <= res_4_V_preg;
        end if; 
    end process;


    res_4_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_4_V_ap_vld <= ap_const_logic_1;
        else 
            res_4_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_5_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_5_fu_241_p3, res_5_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_5_V <= shl_ln728_5_fu_241_p3;
        else 
            res_5_V <= res_5_V_preg;
        end if; 
    end process;


    res_5_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_5_V_ap_vld <= ap_const_logic_1;
        else 
            res_5_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_6_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_6_fu_250_p3, res_6_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_6_V <= shl_ln728_6_fu_250_p3;
        else 
            res_6_V <= res_6_V_preg;
        end if; 
    end process;


    res_6_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_6_V_ap_vld <= ap_const_logic_1;
        else 
            res_6_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_7_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_7_fu_259_p3, res_7_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_7_V <= shl_ln728_7_fu_259_p3;
        else 
            res_7_V <= res_7_V_preg;
        end if; 
    end process;


    res_7_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_7_V_ap_vld <= ap_const_logic_1;
        else 
            res_7_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_8_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_8_fu_268_p3, res_8_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_8_V <= shl_ln728_8_fu_268_p3;
        else 
            res_8_V <= res_8_V_preg;
        end if; 
    end process;


    res_8_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_8_V_ap_vld <= ap_const_logic_1;
        else 
            res_8_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;


    res_9_V_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1, shl_ln728_9_fu_277_p3, res_9_V_preg)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_9_V <= shl_ln728_9_fu_277_p3;
        else 
            res_9_V <= res_9_V_preg;
        end if; 
    end process;


    res_9_V_ap_vld_assign_proc : process(ap_start, ap_done_reg, ap_CS_fsm_state1)
    begin
        if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            res_9_V_ap_vld <= ap_const_logic_1;
        else 
            res_9_V_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    shl_ln728_1_fu_205_p3 <= (data_1_V & ap_const_lv7_0);
    shl_ln728_2_fu_214_p3 <= (data_2_V & ap_const_lv7_0);
    shl_ln728_3_fu_223_p3 <= (data_3_V & ap_const_lv7_0);
    shl_ln728_4_fu_232_p3 <= (data_4_V & ap_const_lv7_0);
    shl_ln728_5_fu_241_p3 <= (data_5_V & ap_const_lv7_0);
    shl_ln728_6_fu_250_p3 <= (data_6_V & ap_const_lv7_0);
    shl_ln728_7_fu_259_p3 <= (data_7_V & ap_const_lv7_0);
    shl_ln728_8_fu_268_p3 <= (data_8_V & ap_const_lv7_0);
    shl_ln728_9_fu_277_p3 <= (data_9_V & ap_const_lv7_0);
    shl_ln_fu_196_p3 <= (data_0_V & ap_const_lv7_0);
end behav;
