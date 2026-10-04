`ifndef VERILATOR
module testbench;
  reg [4095:0] vcdfile;
  reg clock;
`else
module testbench(input clock, output reg genclock);
  initial genclock = 1;
`endif
  reg genclock = 1;
  reg [31:0] cycle = 0;
  wire [0:0] PI_clk = clock;
  reg [0:0] PI_pll_en_in;
  reg [0:0] PI_vco_out;
  reg [0:0] PI_obs_sel;
  reg [2:0] PI_n_sel;
  reg [0:0] PI_rst_n;
  reg [1:0] PI_cp_trim_in;
  ihsan_sa_pll_formal UUT (
    .clk(PI_clk),
    .pll_en_in(PI_pll_en_in),
    .vco_out(PI_vco_out),
    .obs_sel(PI_obs_sel),
    .n_sel(PI_n_sel),
    .rst_n(PI_rst_n),
    .cp_trim_in(PI_cp_trim_in)
  );
`ifndef VERILATOR
  initial begin
    if ($value$plusargs("vcd=%s", vcdfile)) begin
      $dumpfile(vcdfile);
      $dumpvars(0, testbench);
    end
    #5 clock = 0;
    while (genclock) begin
      #5 clock = 0;
      #5 clock = 1;
    end
  end
`endif
  initial begin
`ifndef VERILATOR
    #1;
`endif
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_div .\$0/div_cnt[2:0]#sampled$466  = 3'b000;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_lock .\$0/lock[0:0]#sampled$484  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_lock .\$0/wide_q[0:0]#sampled$520  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_pre .\$0/pre_q0[0:0]#sampled$624  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_pre .\$0/pre_q1[0:0]#sampled$606  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_pre .\$0/pre_q2[0:0]#sampled$588  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$$flatten/dut .\/u_pre .\$0/q3[0:0]#sampled$570  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\cp_trim0#sampled$410  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\cp_trim1#sampled$428  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\cp_trim_in[0]#sampled$412  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\cp_trim_in[1]#sampled$430  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\pll_en#sampled$392  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_ctrl.\pll_en_in#sampled$394  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_div.\div_cnt#sampled$464  = 3'b000;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_div.\fb_en#sampled$446  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_div.\last#sampled$448  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_lock.\cnt_nxt#sampled$502  = 5'b00000;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_lock.\lock#sampled$482  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_lock.\lock_cnt#sampled$500  = 5'b00000;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_lock.\wide_q#sampled$518  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pfd.\pfd_clr#sampled$652  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pfd.\pfd_fb_q#sampled$536  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pfd.\pfd_fb_q$async_cut#sampled$640  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pfd.\pfd_ref_q#sampled$552  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pfd.\pfd_ref_q$async_cut#sampled$650  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pre.\pre_q0#sampled$622  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pre.\pre_q1#sampled$604  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pre.\pre_q2#sampled$586  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:101:sample_data$/dut .u_pre.\q3#sampled$568  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:75:sample_control$$auto$rtlil .\cc:3251:Not$529#sampled$530  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:75:sample_control$/dut .u_pfd.\pfd_fb_q$async_cut#sampled$546  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:75:sample_control$/dut .u_pfd.\pfd_ref_q$async_cut#sampled$562  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_div.\clk_pre#sampled$450  = 1'b0;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pfd.\clk#sampled$556  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pfd.\clk_fb#sampled$540  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pre.\pre_q0#sampled$608  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pre.\pre_q1#sampled$590  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pre.\pre_q2#sampled$572  = 1'b1;
    // UUT.$auto$clk2fflogic.\cc:87:sample_control_edge$/dut .u_pre.\vco_out#sampled$626  = 1'b1;
    UUT._witness_.anyinit_procdff_366 = 1'b0;
    UUT._witness_.anyinit_procdff_367 = 1'b0;
    UUT._witness_.anyinit_procdff_368 = 1'b0;
    UUT._witness_.anyinit_procdff_369 = 1'b0;
    UUT._witness_.anyinit_procdff_370 = 1'b0;
    UUT.clk_q = 1'b0;
    UUT.fb_ok = 1'b0;
    UUT.fb_q = 1'b0;
    UUT.fb_seen = 1'b0;
    UUT.hist = 16'b1111111111111111;
    UUT.hist_q = 16'b1111111111111111;
    UUT.n_last = 3'b001;
    UUT.past_valid = 1'b0;
    UUT.pre_cnt = 4'b0000;
    UUT.pre_ok = 1'b0;
    UUT.pre_seen = 1'b0;
    UUT.prep_q = 1'b0;
    UUT.vco_cnt = 4'b0000;
    UUT.vco_q = 1'b0;
    UUT.wide_s = 1'b1;

    // state 0
    PI_pll_en_in = 1'b0;
    PI_vco_out = 1'b0;
    PI_obs_sel = 1'b0;
    PI_n_sel = 3'b000;
    PI_rst_n = 1'b0;
    PI_cp_trim_in = 2'b00;
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
      PI_pll_en_in <= 1'b0;
      PI_vco_out <= 1'b0;
      PI_obs_sel <= 1'b0;
      PI_n_sel <= 3'b000;
      PI_rst_n <= 1'b0;
      PI_cp_trim_in <= 2'b00;
    end

    genclock <= cycle < 1;
    cycle <= cycle + 1;
  end
endmodule
