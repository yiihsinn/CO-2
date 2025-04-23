// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__current_PC),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__current_PC)),32);
        bufp->chgIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__instruction),32);
        bufp->chgIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__imm),32);
        bufp->chgIData(oldp+4,((vlSelf->SingleCycleCPU__DOT__imm 
                                << 1U)),32);
        bufp->chgIData(oldp+5,((vlSelf->SingleCycleCPU__DOT__current_PC 
                                + (vlSelf->SingleCycleCPU__DOT__imm 
                                   << 1U))),32);
        bufp->chgCData(oldp+6,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
        bufp->chgCData(oldp+7,(vlSelf->SingleCycleCPU__DOT__memtoReg),2);
        bufp->chgCData(oldp+8,(vlSelf->SingleCycleCPU__DOT__ALUOp),2);
        bufp->chgBit(oldp+9,(vlSelf->SingleCycleCPU__DOT__memWrite));
        bufp->chgBit(oldp+10,(vlSelf->SingleCycleCPU__DOT__ALUSrc));
        bufp->chgBit(oldp+11,(((0x80U > vlSelf->SingleCycleCPU__DOT__current_PC) 
                               & ((IData)(vlSelf->__VdfgTmp_hf8448a16__0) 
                                  >> 6U))));
        bufp->chgCData(oldp+12,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__funct3),3);
        bufp->chgCData(oldp+13,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
        bufp->chgCData(oldp+14,(((0x80U <= vlSelf->SingleCycleCPU__DOT__current_PC)
                                  ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hbd8ba7e4__0 
                                                   >> 0xfU)))),5);
        bufp->chgCData(oldp+15,(((0x80U <= vlSelf->SingleCycleCPU__DOT__current_PC)
                                  ? 0U : (0x1fU & (vlSelf->__VdfgTmp_hd847faa4__0 
                                                   >> 0x14U)))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+48,(vlSelf->SingleCycleCPU__DOT__memRead));
        bufp->chgBit(oldp+49,(vlSelf->SingleCycleCPU__DOT__regWrite));
        bufp->chgCData(oldp+50,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__next_PC),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__readData1),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__readData2),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__ALU_B),32);
        bufp->chgIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__ALUOut),32);
        bufp->chgCData(oldp+56,(vlSelf->SingleCycleCPU__DOT__PCSel),2);
        bufp->chgBit(oldp+57,(vlSelf->SingleCycleCPU__DOT__BrEq));
        bufp->chgBit(oldp+58,(vlSelf->SingleCycleCPU__DOT__BrLT));
        bufp->chgBit(oldp+59,((0U == vlSelf->SingleCycleCPU__DOT__ALUOut)));
        bufp->chgIData(oldp+60,((0xfffffffeU & vlSelf->SingleCycleCPU__DOT__ALUOut)),32);
    }
    bufp->chgBit(oldp+61,(vlSelf->clk));
    bufp->chgBit(oldp+62,(vlSelf->start));
    bufp->chgIData(oldp+63,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+64,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+65,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+66,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+67,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+68,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+69,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+70,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+71,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+72,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+73,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+74,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+75,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+76,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+77,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+78,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+79,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+80,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+81,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+82,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+83,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+84,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+85,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+86,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+87,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+88,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+89,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+90,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+91,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+92,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__memData),32);
    bufp->chgIData(oldp+96,(vlSelf->SingleCycleCPU__DOT__writeBackData),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
