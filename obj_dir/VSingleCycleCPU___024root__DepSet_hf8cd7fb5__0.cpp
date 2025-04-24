// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

VL_INLINE_OPT void VSingleCycleCPU___024root___act_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__srcA = (((IData)(vlSelf->SingleCycleCPU__DOT__regWrite) 
                                          & (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1) 
                                              == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg)) 
                                             & (0U 
                                                != (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))))
                                          ? vlSelf->SingleCycleCPU__DOT__writeBackData
                                          : vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                         [vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1]);
    vlSelf->SingleCycleCPU__DOT__srcB = (((IData)(vlSelf->SingleCycleCPU__DOT__regWrite) 
                                          & (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2) 
                                              == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg)) 
                                             & (0U 
                                                != (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))))
                                          ? vlSelf->SingleCycleCPU__DOT__writeBackData
                                          : vlSelf->SingleCycleCPU__DOT__readData2);
    vlSelf->SingleCycleCPU__DOT__BrEq = (vlSelf->SingleCycleCPU__DOT__srcA 
                                         == vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__BrLT = VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__srcA, vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__ALU_B = ((IData)(vlSelf->SingleCycleCPU__DOT__ALUSrc)
                                           ? vlSelf->SingleCycleCPU__DOT__imm
                                           : vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__PCSel = ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 2U
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                          ? 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrLT)
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrLT)
                                                           ? 1U
                                                           : 0U)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                          ? 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrEq)
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrEq)
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : 0U);
    vlSelf->SingleCycleCPU__DOT__ALUOut = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__srcA, vlSelf->SingleCycleCPU__DOT__ALU_B)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  - vlSelf->SingleCycleCPU__DOT__ALU_B))
                                                 : 0U)
                                             : ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  + vlSelf->SingleCycleCPU__DOT__ALU_B))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  | vlSelf->SingleCycleCPU__DOT__ALU_B)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  & vlSelf->SingleCycleCPU__DOT__ALU_B)))));
    vlSelf->SingleCycleCPU__DOT__writeBackData = ((0U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                   ? vlSelf->SingleCycleCPU__DOT__ALUOut
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                    ? vlSelf->SingleCycleCPU__DOT__memData
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->SingleCycleCPU__DOT__current_PC)
                                                     : vlSelf->SingleCycleCPU__DOT__ALUOut)));
    vlSelf->SingleCycleCPU__DOT__next_PC = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                             ? ((IData)(4U) 
                                                + vlSelf->SingleCycleCPU__DOT__current_PC)
                                             : ((1U 
                                                 == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                                 ? 
                                                (vlSelf->SingleCycleCPU__DOT__current_PC 
                                                 + 
                                                 (vlSelf->SingleCycleCPU__DOT__imm 
                                                  << 1U))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                                  ? vlSelf->SingleCycleCPU__DOT__ALUOut
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__current_PC))));
}

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VSingleCycleCPU___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__memWrite) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__readData2 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__readData2 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__readData2 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALUOut));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__readData2);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__ALUOut);
        }
        if (vlSelf->SingleCycleCPU__DOT__regWrite) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))
                    ? 0U : vlSelf->SingleCycleCPU__DOT__writeBackData);
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg;
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__memRead) {
        vlSelf->SingleCycleCPU__DOT__memData = ((0xffffffU 
                                                 & vlSelf->SingleCycleCPU__DOT__memData) 
                                                | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->SingleCycleCPU__DOT__ALUOut))] 
                                                   << 0x18U));
        vlSelf->SingleCycleCPU__DOT__memData = ((0xff00ffffU 
                                                 & vlSelf->SingleCycleCPU__DOT__memData) 
                                                | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->SingleCycleCPU__DOT__ALUOut))] 
                                                   << 0x10U));
        vlSelf->SingleCycleCPU__DOT__memData = ((0xffff00ffU 
                                                 & vlSelf->SingleCycleCPU__DOT__memData) 
                                                | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->SingleCycleCPU__DOT__ALUOut))] 
                                                   << 8U));
        vlSelf->SingleCycleCPU__DOT__memData = ((0xffffff00U 
                                                 & vlSelf->SingleCycleCPU__DOT__memData) 
                                                | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                [(0x7fU 
                                                  & vlSelf->SingleCycleCPU__DOT__ALUOut)]);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h67d56ffc_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_hd847faa4__0;
    __VdfgTmp_hd847faa4__0 = 0;
    CData/*7:0*/ __VdfgTmp_ha38e9885__0;
    __VdfgTmp_ha38e9885__0 = 0;
    CData/*7:0*/ __VdfgTmp_ha387426a__0;
    __VdfgTmp_ha387426a__0 = 0;
    IData/*23:0*/ __VdfgTmp_hbd8ba7e4__0;
    __VdfgTmp_hbd8ba7e4__0 = 0;
    SData/*15:0*/ __VdfgTmp_h2f1da13b__0;
    __VdfgTmp_h2f1da13b__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->SingleCycleCPU__DOT__current_PC = ((IData)(vlSelf->start)
                                                ? vlSelf->SingleCycleCPU__DOT__next_PC
                                                : 0U);
    vlSelf->__VdfgTmp_hf8448a16__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & vlSelf->SingleCycleCPU__DOT__current_PC)];
    __VdfgTmp_ha387426a__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__current_PC))];
    __VdfgTmp_ha38e9885__0 = vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
        [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__current_PC))];
    __VdfgTmp_h2f1da13b__0 = (((IData)(__VdfgTmp_ha387426a__0) 
                               << 8U) | (IData)(__VdfgTmp_ha38e9885__0));
    if ((0x80U <= vlSelf->SingleCycleCPU__DOT__current_PC)) {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3 
            = (7U & ((IData)(__VdfgTmp_ha387426a__0) 
                     >> 4U));
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode 
            = (0x7fU & (IData)(__VdfgTmp_ha38e9885__0));
    }
    vlSelf->SingleCycleCPU__DOT__memWrite = (IData)(
                                                    (0x23U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)));
    vlSelf->SingleCycleCPU__DOT__memRead = (IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)));
    __VdfgTmp_hbd8ba7e4__0 = ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                               [(0x7fU & ((IData)(1U) 
                                          + vlSelf->SingleCycleCPU__DOT__current_PC))] 
                               << 0x10U) | (IData)(__VdfgTmp_h2f1da13b__0));
    if ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__memtoReg = ((0x20U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 2U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 2U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U);
        vlSelf->SingleCycleCPU__DOT__ALUSrc = (1U & (IData)(
                                                            (0x27U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)))));
        vlSelf->SingleCycleCPU__DOT__ALUOp = 0U;
    } else if ((0x20U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__memtoReg = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrc = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)))));
        vlSelf->SingleCycleCPU__DOT__ALUOp = ((0x10U 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((8U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)))
                                               : 0U);
    } else if ((0x10U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__memtoReg = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrc = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)))));
        vlSelf->SingleCycleCPU__DOT__ALUOp = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 3U
                                                     : 0U)
                                                    : 0U)));
    } else {
        vlSelf->SingleCycleCPU__DOT__memtoReg = ((8U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)));
        vlSelf->SingleCycleCPU__DOT__ALUSrc = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)))));
        vlSelf->SingleCycleCPU__DOT__ALUOp = 0U;
    }
    __Vtableidx1 = ((0x7fffffe0U & (((0x80U > vlSelf->SingleCycleCPU__DOT__current_PC) 
                                     << 5U) & ((IData)(vlSelf->__VdfgTmp_hf8448a16__0) 
                                               >> 1U))) 
                    | (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3) 
                        << 2U) | (IData)(vlSelf->SingleCycleCPU__DOT__ALUOp)));
    vlSelf->SingleCycleCPU__DOT__ALUCtl = VSingleCycleCPU__ConstPool__TABLE_h67d56ffc_0
        [__Vtableidx1];
    __VdfgTmp_hd847faa4__0 = (((IData)(vlSelf->__VdfgTmp_hf8448a16__0) 
                               << 0x18U) | __VdfgTmp_hbd8ba7e4__0);
    if ((0x80U <= vlSelf->SingleCycleCPU__DOT__current_PC)) {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg = 0U;
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 = 0U;
        vlSelf->SingleCycleCPU__DOT__instruction = 0U;
    } else {
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg 
            = (0x1fU & ((IData)(__VdfgTmp_h2f1da13b__0) 
                        >> 7U));
        vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1 
            = (0x1fU & (__VdfgTmp_hbd8ba7e4__0 >> 0xfU));
        vlSelf->SingleCycleCPU__DOT__instruction = __VdfgTmp_hd847faa4__0;
    }
    if ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__regWrite = (1U 
                                                 & (IData)(
                                                           ((0x20U 
                                                             == 
                                                             (0x30U 
                                                              & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) 
                                                            & ((8U 
                                                                & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                                ? (IData)(
                                                                          (7U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))))
                                                                : (IData)(
                                                                          (7U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))))))));
        vlSelf->SingleCycleCPU__DOT__imm = ((0x20U 
                                             & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0x80000U 
                                                         & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                            >> 0xcU)) 
                                                        | ((0x7f800U 
                                                            & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                               >> 1U)) 
                                                           | ((0x400U 
                                                               & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                  >> 1U)) 
                                                              | (0x3ffU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                    >> 0x15U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                               << 3U)) 
                                                           | ((0x3f0U 
                                                               & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                  >> 0x15U)) 
                                                              | (0xfU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                    >> 8U))))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U);
    } else if ((0x20U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))) {
        vlSelf->SingleCycleCPU__DOT__regWrite = (1U 
                                                 & (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode)))));
        vlSelf->SingleCycleCPU__DOT__imm = ((0x10U 
                                             & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->SingleCycleCPU__DOT__instruction 
                                                             >> 7U))))
                                                    : 0U)
                                                   : 0U))));
    } else {
        vlSelf->SingleCycleCPU__DOT__regWrite = (1U 
                                                 & ((0x10U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? (IData)(
                                                               (3U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))))
                                                     : (IData)(
                                                               (3U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))))));
        vlSelf->SingleCycleCPU__DOT__imm = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->SingleCycleCPU__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->SingleCycleCPU__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)));
    }
    vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2 
        = ((0x80U <= vlSelf->SingleCycleCPU__DOT__current_PC)
            ? 0U : (0x1fU & (__VdfgTmp_hd847faa4__0 
                             >> 0x14U)));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__srcA = (((IData)(vlSelf->SingleCycleCPU__DOT__regWrite) 
                                          & (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1) 
                                              == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg)) 
                                             & (0U 
                                                != (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))))
                                          ? vlSelf->SingleCycleCPU__DOT__writeBackData
                                          : vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                                         [vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1]);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__readData2 = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__srcB = (((IData)(vlSelf->SingleCycleCPU__DOT__regWrite) 
                                          & (((IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2) 
                                              == (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg)) 
                                             & (0U 
                                                != (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg))))
                                          ? vlSelf->SingleCycleCPU__DOT__writeBackData
                                          : vlSelf->SingleCycleCPU__DOT__readData2);
    vlSelf->SingleCycleCPU__DOT__BrEq = (vlSelf->SingleCycleCPU__DOT__srcA 
                                         == vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__BrLT = VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__srcA, vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__ALU_B = ((IData)(vlSelf->SingleCycleCPU__DOT__ALUSrc)
                                           ? vlSelf->SingleCycleCPU__DOT__imm
                                           : vlSelf->SingleCycleCPU__DOT__srcB);
    vlSelf->SingleCycleCPU__DOT__PCSel = ((0x40U & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 2U
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                          ? 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrLT)
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrLT)
                                                           ? 1U
                                                           : 0U)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3))
                                                          ? 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrEq)
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((IData)(vlSelf->SingleCycleCPU__DOT__BrEq)
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : 0U);
    vlSelf->SingleCycleCPU__DOT__ALUOut = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__srcA, vlSelf->SingleCycleCPU__DOT__ALU_B)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  - vlSelf->SingleCycleCPU__DOT__ALU_B))
                                                 : 0U)
                                             : ((2U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  + vlSelf->SingleCycleCPU__DOT__ALU_B))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  | vlSelf->SingleCycleCPU__DOT__ALU_B)
                                                  : 
                                                 (vlSelf->SingleCycleCPU__DOT__srcA 
                                                  & vlSelf->SingleCycleCPU__DOT__ALU_B)))));
    vlSelf->SingleCycleCPU__DOT__next_PC = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                             ? ((IData)(4U) 
                                                + vlSelf->SingleCycleCPU__DOT__current_PC)
                                             : ((1U 
                                                 == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                                 ? 
                                                (vlSelf->SingleCycleCPU__DOT__current_PC 
                                                 + 
                                                 (vlSelf->SingleCycleCPU__DOT__imm 
                                                  << 1U))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__PCSel))
                                                  ? vlSelf->SingleCycleCPU__DOT__ALUOut
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__current_PC))));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__writeBackData = ((0U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                   ? vlSelf->SingleCycleCPU__DOT__ALUOut
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                    ? vlSelf->SingleCycleCPU__DOT__memData
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->SingleCycleCPU__DOT__current_PC)
                                                     : vlSelf->SingleCycleCPU__DOT__ALUOut)));
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__3(vlSelf);
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
