// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((((((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__vco_out__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__clk_pre__0)) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__clk_pre__0))))) 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__clk__0)) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__clk__0)))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__clk__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__clk__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__rst_n__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__clk_pre__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__rst_n__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__rst_n__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__vco_out__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
        vlSelfRef.__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2__0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_body__nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q) 
         & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q))) {
        ++(vlSelf->__Vcoverage[132]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q)))) {
        ++(vlSelf->__Vcoverage[133]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q)))) {
        ++(vlSelf->__Vcoverage[134]);
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 54, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 56, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 58, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 73, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 75, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q;
    }
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 77, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 126, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 128, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q;
    }
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 162, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 168, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 209, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 211, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 213, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 215, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3;
    }
    vlSelfRef.ihsan_sa_pll__DOT__lock = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock;
    vlSelfRef.ihsan_sa_pll__DOT__pll_en = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en;
    vlSelfRef.ihsan_sa_pll__DOT__cp_trim0 = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0;
    vlSelfRef.ihsan_sa_pll__DOT__cp_trim1 = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1;
    if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) {
        ++(vlSelf->__Vcoverage[99]);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[102]);
        if ((0x10U == (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt))) {
            ++(vlSelf->__Vcoverage[100]);
            vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0 = 0x10U;
        } else {
            ++(vlSelf->__Vcoverage[101]);
            vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt)));
        }
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt 
        = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1;
    if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) {
        ++(vlSelf->__Vcoverage[97]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q)))) {
        ++(vlSelf->__Vcoverage[98]);
    }
    vlSelfRef.ihsan_sa_pll__DOT__vco_out = vlSelfRef.vco_out;
    vlSelfRef.ihsan_sa_pll__DOT__pll_en_in = vlSelfRef.pll_en_in;
    vlSelfRef.ihsan_sa_pll__DOT__cp_trim_in = vlSelfRef.cp_trim_in;
    vlSelfRef.ihsan_sa_pll__DOT__obs_sel = vlSelfRef.obs_sel;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q;
    vlSelfRef.ihsan_sa_pll__DOT__clk = vlSelfRef.clk;
    vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both 
        = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q) 
           & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q));
    vlSelfRef.ihsan_sa_pll__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.ihsan_sa_pll__DOT__n_sel = vlSelfRef.n_sel;
    vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__lock) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 24, vlSelfRef.ihsan_sa_pll__DOT__lock, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock 
            = vlSelfRef.ihsan_sa_pll__DOT__lock;
    }
    vlSelfRef.lock = vlSelfRef.ihsan_sa_pll__DOT__lock;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pll_en) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 30, vlSelfRef.ihsan_sa_pll__DOT__pll_en, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en 
            = vlSelfRef.ihsan_sa_pll__DOT__pll_en;
    }
    vlSelfRef.pll_en = vlSelfRef.ihsan_sa_pll__DOT__pll_en;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__cp_trim0) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 32, vlSelfRef.ihsan_sa_pll__DOT__cp_trim0, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0 
            = vlSelfRef.ihsan_sa_pll__DOT__cp_trim0;
    }
    vlSelfRef.cp_trim0 = vlSelfRef.ihsan_sa_pll__DOT__cp_trim0;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__cp_trim1) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 34, vlSelfRef.ihsan_sa_pll__DOT__cp_trim1, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1 
            = vlSelfRef.ihsan_sa_pll__DOT__cp_trim1;
    }
    vlSelfRef.cp_trim1 = vlSelfRef.ihsan_sa_pll__DOT__cp_trim1;
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 87, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__vco_out) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__vco_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10, vlSelfRef.ihsan_sa_pll__DOT__vco_out, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__vco_out);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__vco_out 
            = vlSelfRef.ihsan_sa_pll__DOT__vco_out;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out 
        = vlSelfRef.ihsan_sa_pll__DOT__vco_out;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pll_en_in) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en_in))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 12, vlSelfRef.ihsan_sa_pll__DOT__pll_en_in, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en_in);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en_in 
            = vlSelfRef.ihsan_sa_pll__DOT__pll_en_in;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in 
        = vlSelfRef.ihsan_sa_pll__DOT__pll_en_in;
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__cp_trim_in) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim_in)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 16, vlSelfRef.ihsan_sa_pll__DOT__cp_trim_in, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim_in);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim_in 
            = vlSelfRef.ihsan_sa_pll__DOT__cp_trim_in;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in 
        = vlSelfRef.ihsan_sa_pll__DOT__cp_trim_in;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_sel) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 14, vlSelfRef.ihsan_sa_pll__DOT__obs_sel, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_sel);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_sel 
            = vlSelfRef.ihsan_sa_pll__DOT__obs_sel;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 122, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up;
    }
    vlSelfRef.ihsan_sa_pll__DOT__pfd_up = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 124, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn;
    }
    vlSelfRef.ihsan_sa_pll__DOT__pfd_dn = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__clk) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.ihsan_sa_pll__DOT__clk, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk 
            = vlSelfRef.ihsan_sa_pll__DOT__clk;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk = vlSelfRef.ihsan_sa_pll__DOT__clk;
    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk = vlSelfRef.ihsan_sa_pll__DOT__clk;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk = vlSelfRef.ihsan_sa_pll__DOT__clk;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 207, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3;
    }
    vlSelfRef.ihsan_sa_pll__DOT__obs_q3 = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 130, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.ihsan_sa_pll__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n 
        = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n 
        = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n 
        = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n 
        = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n 
        = vlSelfRef.ihsan_sa_pll__DOT__rst_n;
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__n_sel) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__n_sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4, vlSelfRef.ihsan_sa_pll__DOT__n_sel, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__n_sel);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__n_sel 
            = vlSelfRef.ihsan_sa_pll__DOT__n_sel;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel 
        = vlSelfRef.ihsan_sa_pll__DOT__n_sel;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 205, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre;
    }
    vlSelfRef.ihsan_sa_pll__DOT__clk_pre = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__vco_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 201, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__vco_out);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__vco_out 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__vco_out;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en_in))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 48, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en_in);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en_in 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in;
    }
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim_in)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 50, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim_in);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim_in 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pfd_up) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 26, vlSelfRef.ihsan_sa_pll__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up 
            = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
    }
    vlSelfRef.pfd_up = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up 
        = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pfd_dn) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 28, vlSelfRef.ihsan_sa_pll__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn 
            = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
    }
    vlSelfRef.pfd_dn = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn 
        = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 44, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__clk);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__clk 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__clk;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 65, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__clk);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__clk 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__clk;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 116, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_q3) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 38, vlSelfRef.ihsan_sa_pll__DOT__obs_q3, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3 
            = vlSelfRef.ihsan_sa_pll__DOT__obs_q3;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 135, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst 
        = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 46, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 67, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 203, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 120, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__rst_n);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__rst_n 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n;
    }
    if (((1U <= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel)) 
         & (5U >= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel)))) {
        ++(vlSelf->__Vcoverage[172]);
    }
    if ((5U < (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel))) {
        ++(vlSelf->__Vcoverage[173]);
    }
    if ((1U > (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel))) {
        ++(vlSelf->__Vcoverage[174]);
    }
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 154, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_sel);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_sel 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal 
        = ((1U <= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel)) 
           & (5U >= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel)));
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__clk_pre) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 36, vlSelfRef.ihsan_sa_pll__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre 
            = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
    }
    if (vlSelfRef.ihsan_sa_pll__DOT__obs_sel) {
        ++(vlSelf->__Vcoverage[42]);
        vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0 = vlSelfRef.ihsan_sa_pll__DOT__obs_q3;
    } else {
        ++(vlSelf->__Vcoverage[43]);
        vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0 = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
    }
    vlSelfRef.ihsan_sa_pll__DOT__obs_out = vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0;
    if (vlSelfRef.ihsan_sa_pll__DOT__obs_sel) {
        ++(vlSelf->__Vcoverage[40]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_sel)))) {
        ++(vlSelf->__Vcoverage[41]);
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre 
        = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 69, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 71, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn);
        vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn 
            = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn;
    }
    if (vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst) {
        ++(vlSelf->__Vcoverage[141]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n)))) {
        ++(vlSelf->__Vcoverage[142]);
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n) 
         & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst)))) {
        ++(vlSelf->__Vcoverage[143]);
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 137, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr 
        = (1U & ((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n)) 
                 | (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst)));
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_legal))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 170, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_legal);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_legal 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal;
    }
    if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal) {
        ++(vlSelf->__Vcoverage[183]);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____VlemCond_0 
            = (7U & ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_sel) 
                     - (IData)(1U)));
    } else {
        ++(vlSelf->__Vcoverage[184]);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____VlemCond_0 = 0U;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1 = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____VlemCond_0;
    if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal) {
        ++(vlSelf->__Vcoverage[181]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_legal)))) {
        ++(vlSelf->__Vcoverage[182]);
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_out) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 20, vlSelfRef.ihsan_sa_pll__DOT__obs_out, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out 
            = vlSelfRef.ihsan_sa_pll__DOT__obs_out;
    }
    vlSelfRef.obs_out = vlSelfRef.ihsan_sa_pll__DOT__obs_out;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
         & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en))) {
        ++(vlSelf->__Vcoverage[198]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en)))) {
        ++(vlSelf->__Vcoverage[199]);
    }
    if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre)))) {
        ++(vlSelf->__Vcoverage[200]);
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb 
        = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
           & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en));
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 139, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr;
    }
    if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1) 
                ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_m1)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 175, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_m1);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_m1 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1;
    }
    vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last = 
        ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt) 
         >= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1));
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb;
    }
    vlSelfRef.ihsan_sa_pll__DOT__clk_fb = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 185, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last);
        vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last 
            = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last;
    }
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__clk_fb) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 22, vlSelfRef.ihsan_sa_pll__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb);
        vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb 
            = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
    }
    vlSelfRef.clk_fb = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
    vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb 
        = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
    if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb) 
         ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 118, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb);
        vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb 
            = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb;
    }
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
            __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 = 0;
            __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 
                    = (1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0)));
                if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0)))) {
                    ++(vlSelf->__Vcoverage[217]);
                }
                if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0) {
                    ++(vlSelf->__Vcoverage[218]);
                }
                ++(vlSelf->__Vcoverage[220]);
            } else {
                ++(vlSelf->__Vcoverage[219]);
                __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[221]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[222]);
            }
            ++(vlSelf->__Vcoverage[223]);
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 
                = __Vinline_0__nba_sequent__TOP__0___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 209, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q0;
            }
        }
    }
    if ((0x0000000000002800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
            __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 = 0;
            __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 
                    = (1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1)));
                if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1)))) {
                    ++(vlSelf->__Vcoverage[224]);
                }
                if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1) {
                    ++(vlSelf->__Vcoverage[225]);
                }
                ++(vlSelf->__Vcoverage[227]);
            } else {
                ++(vlSelf->__Vcoverage[226]);
                __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[228]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[229]);
            }
            ++(vlSelf->__Vcoverage[230]);
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 
                = __Vinline_0__nba_sequent__TOP__1___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 211, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q1;
            }
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            CData/*2:0*/ __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt;
            __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt = 0;
            __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt 
                = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n) {
                if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last) {
                    ++(vlSelf->__Vcoverage[187]);
                    __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt = 0U;
                } else {
                    __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt)));
                    ++(vlSelf->__Vcoverage[188]);
                }
            } else {
                ++(vlSelf->__Vcoverage[189]);
                __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[190]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[191]);
            }
            ++(vlSelf->__Vcoverage[192]);
            vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt 
                = __Vinline_0__nba_sequent__TOP__2___Vdly__ihsan_sa_pll__DOT__u_div__DOT__div_cnt;
            if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt) 
                        ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt)))) {
                VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 162, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt;
            }
        }
    }
    if ((0x0000000000008800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3;
            __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3 = 0;
            __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3 
                    = (1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3)));
                if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3)))) {
                    ++(vlSelf->__Vcoverage[238]);
                }
                if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3) {
                    ++(vlSelf->__Vcoverage[239]);
                }
                ++(vlSelf->__Vcoverage[241]);
            } else {
                ++(vlSelf->__Vcoverage[240]);
                __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3 = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[242]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[243]);
            }
            ++(vlSelf->__Vcoverage[244]);
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3 
                = __Vinline_0__nba_sequent__TOP__3___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__q3;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 215, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__q3;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 207, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3;
            }
            vlSelfRef.ihsan_sa_pll__DOT__obs_q3 = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__obs_q3;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_q3) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 38, vlSelfRef.ihsan_sa_pll__DOT__obs_q3, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_q3 
                    = vlSelfRef.ihsan_sa_pll__DOT__obs_q3;
            }
        }
    }
    if ((0x0000000000004800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
            __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 = 0;
            __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 
                    = (1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2)));
                if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2)))) {
                    ++(vlSelf->__Vcoverage[231]);
                }
                if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2) {
                    ++(vlSelf->__Vcoverage[232]);
                }
                ++(vlSelf->__Vcoverage[234]);
            } else {
                ++(vlSelf->__Vcoverage[233]);
                __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[235]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[236]);
            }
            ++(vlSelf->__Vcoverage[237]);
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 
                = __Vinline_0__nba_sequent__TOP__4___Vdly__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 213, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__pre_q2;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 205, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre);
                vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre;
            }
            vlSelfRef.ihsan_sa_pll__DOT__clk_pre = vlSelfRef.ihsan_sa_pll__DOT__u_pre__DOT__clk_pre;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__clk_pre) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 36, vlSelfRef.ihsan_sa_pll__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_pre 
                    = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre 
                = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre;
            }
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n) {
                if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn) {
                    ++(vlSelf->__Vcoverage[103]);
                }
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q 
                    = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up) 
                       | (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn));
                if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up) {
                    ++(vlSelf->__Vcoverage[104]);
                }
                if ((1U & ((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up)) 
                           & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn))))) {
                    ++(vlSelf->__Vcoverage[105]);
                }
                ++(vlSelf->__Vcoverage[107]);
            } else {
                ++(vlSelf->__Vcoverage[106]);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[108]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[109]);
            }
            ++(vlSelf->__Vcoverage[110]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 75, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q;
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[112]);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt;
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock 
                    = (0x10U == (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt));
            } else {
                ++(vlSelf->__Vcoverage[111]);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt = 0U;
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[113]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[114]);
            }
            ++(vlSelf->__Vcoverage[115]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 73, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock;
            }
            vlSelfRef.ihsan_sa_pll__DOT__lock = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock;
            if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt) 
                        ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt)))) {
                VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 77, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt;
            }
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__lock) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 24, vlSelfRef.ihsan_sa_pll__DOT__lock, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__lock 
                    = vlSelfRef.ihsan_sa_pll__DOT__lock;
            }
            vlSelfRef.lock = vlSelfRef.ihsan_sa_pll__DOT__lock;
        }
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[194]);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last;
            } else {
                ++(vlSelf->__Vcoverage[193]);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[195]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[196]);
            }
            ++(vlSelf->__Vcoverage[197]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 168, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            if (vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[61]);
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in;
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0 
                    = (1U & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in));
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1 
                    = (1U & ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in) 
                             >> 1U));
            } else {
                ++(vlSelf->__Vcoverage[60]);
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en = 0U;
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0 = 0U;
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1 = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[62]);
            }
            if (vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n) {
                ++(vlSelf->__Vcoverage[63]);
            }
            ++(vlSelf->__Vcoverage[64]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 54, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en);
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en;
            }
            vlSelfRef.ihsan_sa_pll__DOT__pll_en = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 56, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0);
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0;
            }
            vlSelfRef.ihsan_sa_pll__DOT__cp_trim0 = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 58, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1, vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1);
                vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1;
            }
            vlSelfRef.ihsan_sa_pll__DOT__cp_trim1 = vlSelfRef.ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pll_en) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 30, vlSelfRef.ihsan_sa_pll__DOT__pll_en, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pll_en 
                    = vlSelfRef.ihsan_sa_pll__DOT__pll_en;
            }
            vlSelfRef.pll_en = vlSelfRef.ihsan_sa_pll__DOT__pll_en;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__cp_trim0) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 32, vlSelfRef.ihsan_sa_pll__DOT__cp_trim0, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim0 
                    = vlSelfRef.ihsan_sa_pll__DOT__cp_trim0;
            }
            vlSelfRef.cp_trim0 = vlSelfRef.ihsan_sa_pll__DOT__cp_trim0;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__cp_trim1) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 34, vlSelfRef.ihsan_sa_pll__DOT__cp_trim1, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__cp_trim1 
                    = vlSelfRef.ihsan_sa_pll__DOT__cp_trim1;
            }
            vlSelfRef.cp_trim1 = vlSelfRef.ihsan_sa_pll__DOT__cp_trim1;
        }
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr) {
                ++(vlSelf->__Vcoverage[144]);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q = 0U;
            } else {
                ++(vlSelf->__Vcoverage[145]);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q = 1U;
            }
            ++(vlSelf->__Vcoverage[146]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 126, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 122, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up;
            }
            vlSelfRef.ihsan_sa_pll__DOT__pfd_up = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pfd_up) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 26, vlSelfRef.ihsan_sa_pll__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_up 
                    = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
            }
            vlSelfRef.pfd_up = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
            vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up 
                = vlSelfRef.ihsan_sa_pll__DOT__pfd_up;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 69, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_up;
            }
        }
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr) {
                ++(vlSelf->__Vcoverage[147]);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q = 0U;
            } else {
                ++(vlSelf->__Vcoverage[148]);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q = 1U;
            }
            ++(vlSelf->__Vcoverage[149]);
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 128, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 124, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn;
            }
            vlSelfRef.ihsan_sa_pll__DOT__pfd_dn = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__pfd_dn) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 28, vlSelfRef.ihsan_sa_pll__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__pfd_dn 
                    = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
            }
            vlSelfRef.pfd_dn = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
            vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn 
                = vlSelfRef.ihsan_sa_pll__DOT__pfd_dn;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 71, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn;
            }
        }
    }
    if ((0x000000000000c800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            if (vlSelfRef.ihsan_sa_pll__DOT__obs_sel) {
                ++(vlSelf->__Vcoverage[42]);
                vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0 
                    = vlSelfRef.ihsan_sa_pll__DOT__obs_q3;
            } else {
                ++(vlSelf->__Vcoverage[43]);
                vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0 
                    = vlSelfRef.ihsan_sa_pll__DOT__clk_pre;
            }
            vlSelfRef.ihsan_sa_pll__DOT__obs_out = vlSelfRef.ihsan_sa_pll__DOT____VlemCond_0;
            if (vlSelfRef.ihsan_sa_pll__DOT__obs_sel) {
                ++(vlSelf->__Vcoverage[40]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_sel)))) {
                ++(vlSelf->__Vcoverage[41]);
            }
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__obs_out) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 20, vlSelfRef.ihsan_sa_pll__DOT__obs_out, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__obs_out 
                    = vlSelfRef.ihsan_sa_pll__DOT__obs_out;
            }
            vlSelfRef.obs_out = vlSelfRef.ihsan_sa_pll__DOT__obs_out;
        }
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) {
                ++(vlSelf->__Vcoverage[99]);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[102]);
                if ((0x10U == (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt))) {
                    ++(vlSelf->__Vcoverage[100]);
                    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0 = 0x10U;
                } else {
                    ++(vlSelf->__Vcoverage[101]);
                    vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt)));
                }
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_0;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt 
                = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____VlemCond_1;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q) {
                ++(vlSelf->__Vcoverage[97]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__wide_q)))) {
                ++(vlSelf->__Vcoverage[98]);
            }
            if ((0U != ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt) 
                        ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt)))) {
                VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 87, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt, vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt);
                vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt;
            }
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last 
                = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__div_cnt) 
                   >= (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__n_m1));
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 185, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__last;
            }
        }
    }
    if ((0x0000000000004e00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
                 & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en))) {
                ++(vlSelf->__Vcoverage[198]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en)))) {
                ++(vlSelf->__Vcoverage[199]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre)))) {
                ++(vlSelf->__Vcoverage[200]);
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb 
                = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_pre) 
                   & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__fb_en));
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb);
                vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb;
            }
            vlSelfRef.ihsan_sa_pll__DOT__clk_fb = vlSelfRef.ihsan_sa_pll__DOT__u_div__DOT__clk_fb;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__clk_fb) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 22, vlSelfRef.ihsan_sa_pll__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb);
                vlSelfRef.ihsan_sa_pll__DOT____Vtogcov__clk_fb 
                    = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
            }
            vlSelfRef.clk_fb = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb 
                = vlSelfRef.ihsan_sa_pll__DOT__clk_fb;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 118, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb;
            }
        }
    }
    if ((0x00000000000000e0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q) 
                 & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q))) {
                ++(vlSelf->__Vcoverage[132]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q)))) {
                ++(vlSelf->__Vcoverage[133]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q)))) {
                ++(vlSelf->__Vcoverage[134]);
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both 
                = ((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q) 
                   & (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q));
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 130, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both;
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 135, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst 
                = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid;
            if (vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst) {
                ++(vlSelf->__Vcoverage[141]);
            }
            if ((1U & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n)))) {
                ++(vlSelf->__Vcoverage[142]);
            }
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n) 
                 & (~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst)))) {
                ++(vlSelf->__Vcoverage[143]);
            }
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 137, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst;
            }
            vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr 
                = (1U & ((~ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__rst_n)) 
                         | (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst)));
            if (((IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr) 
                 ^ (IData)(vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 139, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr, vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr);
                vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr 
                    = vlSelfRef.ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr;
            }
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.n_sel & 0xf8U)))) {
        Verilated::overWidthError("n_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.vco_out & 0xfeU)))) {
        Verilated::overWidthError("vco_out");
    }
    if (VL_UNLIKELY(((vlSelfRef.pll_en_in & 0xfeU)))) {
        Verilated::overWidthError("pll_en_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.obs_sel & 0xfeU)))) {
        Verilated::overWidthError("obs_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.cp_trim_in & 0xfcU)))) {
        Verilated::overWidthError("cp_trim_in");
    }
}
#endif  // VL_DEBUG
