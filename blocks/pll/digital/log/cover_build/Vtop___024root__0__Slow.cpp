// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge ihsan_sa_pll.u_ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge ihsan_sa_pll.u_ctrl.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge ihsan_sa_pll.u_lock.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge ihsan_sa_pll.u_lock.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge ihsan_sa_pll.u_lock.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge ihsan_sa_pll.u_pfd.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge ihsan_sa_pll.u_pfd.pfd_clr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge ihsan_sa_pll.u_pfd.clk_fb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge ihsan_sa_pll.u_div.clk_pre)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge ihsan_sa_pll.u_div.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(negedge ihsan_sa_pll.u_div.clk_pre)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge ihsan_sa_pll.u_pre.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge ihsan_sa_pll.u_pre.vco_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge ihsan_sa_pll.u_pre.pre_q0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge ihsan_sa_pll.u_pre.pre_q1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge ihsan_sa_pll.u_pre.pre_q2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->n_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13861315636995106344ull);
    vlSelf->vco_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14030952074684920407ull);
    vlSelf->pll_en_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9198092914150464314ull);
    vlSelf->obs_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17736905269052188940ull);
    vlSelf->cp_trim_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8579801363876981793ull);
    vlSelf->obs_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6139016576332575188ull);
    vlSelf->clk_fb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8118658279804137748ull);
    vlSelf->lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5580153086071103576ull);
    vlSelf->pfd_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10488131373785415327ull);
    vlSelf->pfd_dn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17338478355874751429ull);
    vlSelf->pll_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1472359947486714354ull);
    vlSelf->cp_trim0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6599077995806622669ull);
    vlSelf->cp_trim1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12321575865466420355ull);
    vlSelf->ihsan_sa_pll__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13650864205234946267ull);
    vlSelf->ihsan_sa_pll__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9532562969552328807ull);
    vlSelf->ihsan_sa_pll__DOT__n_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14877348486096985535ull);
    vlSelf->ihsan_sa_pll__DOT__vco_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7693279463502932487ull);
    vlSelf->ihsan_sa_pll__DOT__pll_en_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12007047101773805953ull);
    vlSelf->ihsan_sa_pll__DOT__obs_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9632110388556293288ull);
    vlSelf->ihsan_sa_pll__DOT__cp_trim_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 808010375139981618ull);
    vlSelf->ihsan_sa_pll__DOT__obs_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7983509076043332117ull);
    vlSelf->ihsan_sa_pll__DOT__clk_fb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6581891111924884297ull);
    vlSelf->ihsan_sa_pll__DOT__lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908466780711471747ull);
    vlSelf->ihsan_sa_pll__DOT__pfd_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14913232829163510702ull);
    vlSelf->ihsan_sa_pll__DOT__pfd_dn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16493560740993977196ull);
    vlSelf->ihsan_sa_pll__DOT__pll_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12667824848526646164ull);
    vlSelf->ihsan_sa_pll__DOT__cp_trim0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 150551867398346610ull);
    vlSelf->ihsan_sa_pll__DOT__cp_trim1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16018672605139749872ull);
    vlSelf->ihsan_sa_pll__DOT__clk_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5605143549271000994ull);
    vlSelf->ihsan_sa_pll__DOT__obs_q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4667687931554656986ull);
    vlSelf->ihsan_sa_pll__DOT__clk_fb_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5823104482960443354ull);
    vlSelf->ihsan_sa_pll__DOT__obs_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 557804297246370489ull);
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__clk = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__n_sel = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__vco_out = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__pll_en_in = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__obs_sel = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__cp_trim_in = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__obs_out = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__clk_fb = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__lock = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__pfd_up = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__pfd_dn = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__pll_en = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__cp_trim0 = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__cp_trim1 = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__clk_pre = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__obs_q3 = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__clk_fb_int = 0;
    vlSelf->ihsan_sa_pll__DOT____Vtogcov__obs_int = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17438608198327369272ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9184937104430984674ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15091098696178548979ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2731579224415563926ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__pll_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13206945554494866103ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11098499781094081461ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT__cp_trim1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4638202044065460865ull);
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__clk = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en_in = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim_in = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__pll_en = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim0 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_ctrl__DOT____Vtogcov__cp_trim1 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14450984280647763747ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18053398535558504243ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__pfd_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4613914908260620911ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__pfd_dn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609380006354632279ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6365038384631608368ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__wide_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13508837227596510024ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__lock_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8345636112372214708ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT__cnt_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9882110918868192671ull);
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__clk = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_up = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__pfd_dn = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__wide_q = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__lock_cnt = 0;
    vlSelf->ihsan_sa_pll__DOT__u_lock__DOT____Vtogcov__cnt_nxt = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12869428412612086240ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 212291814539594148ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971571614634599196ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3581852380235626026ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12385635862550913165ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_ref_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6564904429037023430ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_fb_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6157439009338149830ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_both = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16721535802808491519ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_dly_mid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1809123131522655225ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9738779353498485763ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7969161325676284567ull);
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__clk_fb = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_up = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dn = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_ref_q = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_fb_q = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_both = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_dly_mid = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_rst = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pfd__DOT____Vtogcov__pfd_clr = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__clk_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8604474923806549523ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7113323322595467033ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__n_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2849317606758651675ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__clk_fb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18013144078579582407ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__div_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11714513203152207463ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__fb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12203259885645185179ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__n_legal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4725816383631429200ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__n_m1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6693071574392786698ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT__last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10553576410929552310ull);
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_pre = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_sel = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__clk_fb = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__div_cnt = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__fb_en = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_legal = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__n_m1 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_div__DOT____Vtogcov__last = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__vco_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6103691815910805590ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17690435385132358202ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__clk_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2397658262469019239ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__obs_q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126738546993501792ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__pre_q0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2377274436156329922ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__pre_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12948706277378452837ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__pre_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4565821189847337382ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT__q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6280954010023406433ull);
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__vco_out = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__rst_n = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__clk_pre = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__obs_q3 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q0 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q1 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__pre_q2 = 0;
    vlSelf->ihsan_sa_pll__DOT__u_pre__DOT____Vtogcov__q3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_ctrl__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_lock__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__pfd_clr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pfd__DOT__clk_fb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__clk_pre__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_div__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__vco_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ihsan_sa_pll__DOT__u_pre__DOT__pre_q2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 12, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 13, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 4, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 14, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "n_sel");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 10, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 15, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "vco_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 12, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 16, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "pll_en_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 14, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 17, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "obs_sel");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 16, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 18, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "cp_trim_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 20, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 19, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "obs_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 22, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 20, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "clk_fb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 24, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 21, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "lock");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 26, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 22, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "pfd_up");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 28, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 23, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "pfd_dn");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 30, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 24, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "pll_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 32, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 25, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "cp_trim0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 34, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 26, 23, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "cp_trim1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 36, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 28, 8, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "clk_pre");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 38, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 29, 8, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "obs_q3");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 40, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 30, 8, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "clk_fb_int");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 42, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 31, 8, ".ihsan_sa_pll", "v_toggle/ihsan_sa_pll", "obs_int");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 44, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 20, ".ihsan_sa_pll", "v_expr/ihsan_sa_pll", "(obs_sel==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 44, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 20, ".ihsan_sa_pll", "v_expr/ihsan_sa_pll", "(obs_sel==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 45, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 20, ".ihsan_sa_pll", "v_expr/ihsan_sa_pll", "(obs_sel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 45, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 20, ".ihsan_sa_pll", "v_expr/ihsan_sa_pll", "(obs_sel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 46, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 30, ".ihsan_sa_pll", "v_branch/ihsan_sa_pll", "cond_then", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 46, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 30, ".ihsan_sa_pll", "v_branch/ihsan_sa_pll", "cond_then", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 47, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 31, ".ihsan_sa_pll", "v_branch/ihsan_sa_pll", "cond_else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 47, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/ihsan_sa_pll.v", 53, 31, ".ihsan_sa_pll", "v_branch/ihsan_sa_pll", "cond_else", "53", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 48, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 4, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 50, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 5, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 52, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 6, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "pll_en_in");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 54, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 7, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "cp_trim_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 58, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 8, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "pll_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 60, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 9, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "cp_trim0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 62, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 10, 23, ".ihsan_sa_pll.u_ctrl", "v_toggle/pll_ctrl_regs", "cp_trim1");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 64, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 5, ".ihsan_sa_pll.u_ctrl", "v_branch/pll_ctrl_regs", "if", "13-16", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 64, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 5, ".ihsan_sa_pll.u_ctrl", "v_branch/pll_ctrl_regs", "if", "13-16", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 65, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 6, ".ihsan_sa_pll.u_ctrl", "v_branch/pll_ctrl_regs", "else", "17-20", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 65, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 6, ".ihsan_sa_pll.u_ctrl", "v_branch/pll_ctrl_regs", "else", "17-20", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 66, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 9, ".ihsan_sa_pll.u_ctrl", "v_expr/pll_ctrl_regs", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 66, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 9, ".ihsan_sa_pll.u_ctrl", "v_expr/pll_ctrl_regs", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 67, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 9, ".ihsan_sa_pll.u_ctrl", "v_expr/pll_ctrl_regs", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 67, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 13, 9, ".ihsan_sa_pll.u_ctrl", "v_expr/pll_ctrl_regs", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 68, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 12, 3, ".ihsan_sa_pll.u_ctrl", "v_line/pll_ctrl_regs", "block", "12", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 68, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_ctrl_regs.v", 12, 3, ".ihsan_sa_pll.u_ctrl", "v_line/pll_ctrl_regs", "block", "12", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 69, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 11, 17, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 71, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 12, 17, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 73, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 13, 17, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "pfd_up");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 75, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 14, 17, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "pfd_dn");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 77, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 15, 17, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "lock");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 79, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 19, 13, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "wide_q");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 81, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 20, 13, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "lock_cnt");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 91, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 14, ".ihsan_sa_pll.u_lock", "v_toggle/pll_lock_det", "cnt_nxt");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 101, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 24, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(wide_q==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 101, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 24, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(wide_q==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 102, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 24, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(wide_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 102, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 24, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(wide_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 103, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 42, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_then", "21", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 103, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 42, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_then", "21", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 104, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 22, 42, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_then", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 104, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 22, 42, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_then", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 105, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 22, 43, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_else", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 105, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 22, 43, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_else", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 106, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 43, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 106, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 21, 43, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 107, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_dn==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 107, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_dn==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 108, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_up==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 108, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_up==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 109, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_up==0 && pfd_dn==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 109, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 26, 34, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(pfd_up==0 && pfd_dn==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 110, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 5, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "if", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 110, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 5, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "if", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 111, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 6, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "else", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 111, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 6, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "else", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 112, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 112, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 113, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 113, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 25, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 114, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 24, 3, ".ihsan_sa_pll.u_lock", "v_line/pll_lock_det", "block", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 114, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 24, 3, ".ihsan_sa_pll.u_lock", "v_line/pll_lock_det", "block", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 115, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 5, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "if", "29-31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 115, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 5, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "if", "29-31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 116, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 6, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "else", "32-34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 116, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 6, ".ihsan_sa_pll.u_lock", "v_branch/pll_lock_det", "else", "32-34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 117, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 117, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 118, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 118, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 29, 9, ".ihsan_sa_pll.u_lock", "v_expr/pll_lock_det", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 119, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 28, 3, ".ihsan_sa_pll.u_lock", "v_line/pll_lock_det", "block", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 119, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_lock_det.v", 28, 3, ".ihsan_sa_pll.u_lock", "v_line/pll_lock_det", "block", "28", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 120, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 9, 17, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 122, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 10, 17, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "clk_fb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 124, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 11, 17, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 126, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 12, 17, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_up");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 128, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 13, 17, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_dn");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 130, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 15, 8, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_ref_q");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 132, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 15, 19, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_fb_q");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 134, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 8, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_both");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 136, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_ref_q==1 && pfd_fb_q==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 136, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_ref_q==1 && pfd_fb_q==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 137, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_fb_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 137, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_fb_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 138, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_ref_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 138, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 16, 29, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_ref_q==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 139, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 17, 19, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_dly_mid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 141, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 18, 19, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_rst");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 143, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 8, ".ihsan_sa_pll.u_pfd", "v_toggle/pll_pfd", "pfd_clr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 145, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_rst==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 145, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(pfd_rst==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 146, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 146, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 147, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(rst_n==1 && pfd_rst==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 147, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 19, 25, ".ihsan_sa_pll.u_pfd", "v_expr/pll_pfd", "(rst_n==1 && pfd_rst==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 148, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 30, 5, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "if", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 148, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 30, 5, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "if", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 149, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 30, 6, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "else", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 149, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 30, 6, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "else", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 150, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 29, 3, ".ihsan_sa_pll.u_pfd", "v_line/pll_pfd", "block", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 150, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 29, 3, ".ihsan_sa_pll.u_pfd", "v_line/pll_pfd", "block", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 151, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 34, 5, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "if", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 151, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 34, 5, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "if", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 152, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 34, 6, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "else", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 152, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 34, 6, ".ihsan_sa_pll.u_pfd", "v_branch/pll_pfd", "else", "35", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 153, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 33, 3, ".ihsan_sa_pll.u_pfd", "v_line/pll_pfd", "block", "33", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 153, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_pfd.v", 33, 3, ".ihsan_sa_pll.u_pfd", "v_line/pll_pfd", "block", "33", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 154, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 8, 23, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "clk_pre");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 156, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 9, 23, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 158, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 10, 23, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "n_sel");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 164, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 11, 23, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "clk_fb");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 166, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 13, 13, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "div_cnt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 172, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 14, 13, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "fb_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 174, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 14, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "n_legal");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 176, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel >= 3'h1)==1 && (n_sel <= 3'h5)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 176, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel >= 3'h1)==1 && (n_sel <= 3'h5)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 177, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel <= 3'h5)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 177, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel <= 3'h5)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 178, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel >= 3'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 178, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 17, 40, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "((n_sel >= 3'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 179, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 14, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "n_m1");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 185, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 24, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(n_legal==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 185, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 24, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(n_legal==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 186, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 24, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(n_legal==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 186, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 24, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(n_legal==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 187, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 41, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "cond_then", "18", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 187, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 41, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "cond_then", "18", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 188, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 42, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "cond_else", "18", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 188, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 18, 42, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "cond_else", "18", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 189, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 20, 14, ".ihsan_sa_pll.u_div", "v_toggle/pll_divider", "last");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 191, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 24, 10, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "if", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 191, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 24, 10, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "if", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 192, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 24, 11, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "else", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 192, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 24, 11, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "else", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 193, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 5, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "elsif", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 193, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 5, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "elsif", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 194, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 194, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 195, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 195, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 23, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 196, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 22, 3, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "block", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 196, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 22, 3, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "block", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 197, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 5, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "if", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 197, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 5, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "if", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 198, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 6, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "else", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 198, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 6, ".ihsan_sa_pll.u_div", "v_branch/pll_divider", "else", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 199, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 199, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 200, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 200, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 28, 9, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 201, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 27, 3, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "block", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 201, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 27, 3, ".ihsan_sa_pll.u_div", "v_line/pll_divider", "block", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 202, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(clk_pre==1 && fb_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 202, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(clk_pre==1 && fb_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 203, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(fb_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 203, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(fb_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 204, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(clk_pre==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 204, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_divider.v", 31, 27, ".ihsan_sa_pll.u_div", "v_expr/pll_divider", "(clk_pre==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 205, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 6, 17, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "vco_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 207, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 7, 17, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 209, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 8, 17, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "clk_pre");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 211, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 9, 17, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "obs_q3");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 213, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 11, 7, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "pre_q0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 215, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 11, 15, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "pre_q1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 217, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 11, 23, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "pre_q2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 219, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 11, 31, ".ihsan_sa_pll.u_pre", "v_toggle/pll_prescaler", "q3");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 221, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 15, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q0==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 221, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 15, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q0==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 222, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 15, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q0==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 222, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 15, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q0==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 223, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "14", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 223, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "14", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 224, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "15", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 224, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "15", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 225, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 225, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 226, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 226, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 14, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 227, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 13, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "13", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 227, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 13, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "13", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 228, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 19, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q1==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 228, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 19, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q1==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 229, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 19, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q1==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 229, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 19, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q1==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 230, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "18", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 230, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "18", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 231, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "19", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 231, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "19", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 232, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 232, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 233, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 233, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 18, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 234, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 17, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "17", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 234, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 17, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "17", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 235, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 23, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q2==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 235, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 23, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q2==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 236, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 23, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q2==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 236, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 23, 27, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(pre_q2==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 237, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 237, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "22", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 238, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 238, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 239, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 239, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 240, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 240, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 22, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 241, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 21, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "21", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 241, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 21, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "21", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 242, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 27, 23, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(q3==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 242, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 27, 23, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(q3==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 243, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 27, 23, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(q3==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 243, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 27, 23, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(q3==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 244, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 244, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 5, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "if", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 245, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 245, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 6, ".ihsan_sa_pll.u_pre", "v_branch/pll_prescaler", "else", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 246, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 246, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 247, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 247, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 26, 9, ".ihsan_sa_pll.u_pre", "v_expr/pll_prescaler", "(rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 248, first, true, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 25, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 248, first, false, "/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/digital/rtl/pll_prescaler.v", 25, 3, ".ihsan_sa_pll.u_pre", "v_line/pll_prescaler", "block", "25", "", "", "", "");
}
