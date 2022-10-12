/*******************************************************************************
* Filename      : usart3registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F407 device.
*
*
*******************************************************************************/

#if !defined(USART3REGISTERS_HPP)
#define USART3REGISTERS_HPP

#include "usart3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART3
{
  struct USART3SRBase {} ;

  struct SR : public RegisterBase<0x40004800, 32, ReadWriteMode>
  {
    using CTS = USART3_SR_CTS_Values<USART3::SR, 9, 1, ReadWriteMode, USART3SRBase> ;
    using LBD = USART3_SR_LBD_Values<USART3::SR, 8, 1, ReadWriteMode, USART3SRBase> ;
    using TXE = USART3_SR_TXE_Values<USART3::SR, 7, 1, ReadMode, USART3SRBase> ;
    using TC = USART3_SR_TC_Values<USART3::SR, 6, 1, ReadWriteMode, USART3SRBase> ;
    using RXNE = USART3_SR_RXNE_Values<USART3::SR, 5, 1, ReadWriteMode, USART3SRBase> ;
    using IDLE = USART3_SR_IDLE_Values<USART3::SR, 4, 1, ReadMode, USART3SRBase> ;
    using ORE = USART3_SR_ORE_Values<USART3::SR, 3, 1, ReadMode, USART3SRBase> ;
    using NF = USART3_SR_NF_Values<USART3::SR, 2, 1, ReadMode, USART3SRBase> ;
    using FE = USART3_SR_FE_Values<USART3::SR, 1, 1, ReadMode, USART3SRBase> ;
    using PE = USART3_SR_PE_Values<USART3::SR, 0, 1, ReadMode, USART3SRBase> ;
    using FieldValues = USART3_SR_PE_Values<USART3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40004800, 32, ReadWriteMode, USART3SRBase, T...> ;

  struct USART3DRBase {} ;

  struct DR : public RegisterBase<0x40004804, 32, ReadWriteMode>
  {
    using DRField = USART3_DR_DR_Values<USART3::DR, 0, 9, ReadWriteMode, USART3DRBase> ;
    using FieldValues = USART3_DR_DR_Values<USART3::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40004804, 32, ReadWriteMode, USART3DRBase, T...> ;

  struct USART3BRRBase {} ;

  struct BRR : public RegisterBase<0x40004808, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART3_BRR_DIV_Mantissa_Values<USART3::BRR, 4, 12, ReadWriteMode, USART3BRRBase> ;
    using DIV_Fraction = USART3_BRR_DIV_Fraction_Values<USART3::BRR, 0, 4, ReadWriteMode, USART3BRRBase> ;
    using FieldValues = USART3_BRR_DIV_Fraction_Values<USART3::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40004808, 32, ReadWriteMode, USART3BRRBase, T...> ;

  struct USART3CR1Base {} ;

  struct CR1 : public RegisterBase<0x4000480C, 32, ReadWriteMode>
  {
    using OVER8 = USART3_CR1_OVER8_Values<USART3::CR1, 15, 1, ReadWriteMode, USART3CR1Base> ;
    using UE = USART3_CR1_UE_Values<USART3::CR1, 13, 1, ReadWriteMode, USART3CR1Base> ;
    using M = USART3_CR1_M_Values<USART3::CR1, 12, 1, ReadWriteMode, USART3CR1Base> ;
    using WAKE = USART3_CR1_WAKE_Values<USART3::CR1, 11, 1, ReadWriteMode, USART3CR1Base> ;
    using PCE = USART3_CR1_PCE_Values<USART3::CR1, 10, 1, ReadWriteMode, USART3CR1Base> ;
    using PS = USART3_CR1_PS_Values<USART3::CR1, 9, 1, ReadWriteMode, USART3CR1Base> ;
    using PEIE = USART3_CR1_PEIE_Values<USART3::CR1, 8, 1, ReadWriteMode, USART3CR1Base> ;
    using TXEIE = USART3_CR1_TXEIE_Values<USART3::CR1, 7, 1, ReadWriteMode, USART3CR1Base> ;
    using TCIE = USART3_CR1_TCIE_Values<USART3::CR1, 6, 1, ReadWriteMode, USART3CR1Base> ;
    using RXNEIE = USART3_CR1_RXNEIE_Values<USART3::CR1, 5, 1, ReadWriteMode, USART3CR1Base> ;
    using IDLEIE = USART3_CR1_IDLEIE_Values<USART3::CR1, 4, 1, ReadWriteMode, USART3CR1Base> ;
    using TE = USART3_CR1_TE_Values<USART3::CR1, 3, 1, ReadWriteMode, USART3CR1Base> ;
    using RE = USART3_CR1_RE_Values<USART3::CR1, 2, 1, ReadWriteMode, USART3CR1Base> ;
    using RWU = USART3_CR1_RWU_Values<USART3::CR1, 1, 1, ReadWriteMode, USART3CR1Base> ;
    using SBK = USART3_CR1_SBK_Values<USART3::CR1, 0, 1, ReadWriteMode, USART3CR1Base> ;
    using FieldValues = USART3_CR1_SBK_Values<USART3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4000480C, 32, ReadWriteMode, USART3CR1Base, T...> ;

  struct USART3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40004810, 32, ReadWriteMode>
  {
    using LINEN = USART3_CR2_LINEN_Values<USART3::CR2, 14, 1, ReadWriteMode, USART3CR2Base> ;
    using STOP = USART3_CR2_STOP_Values<USART3::CR2, 12, 2, ReadWriteMode, USART3CR2Base> ;
    using CLKEN = USART3_CR2_CLKEN_Values<USART3::CR2, 11, 1, ReadWriteMode, USART3CR2Base> ;
    using CPOL = USART3_CR2_CPOL_Values<USART3::CR2, 10, 1, ReadWriteMode, USART3CR2Base> ;
    using CPHA = USART3_CR2_CPHA_Values<USART3::CR2, 9, 1, ReadWriteMode, USART3CR2Base> ;
    using LBCL = USART3_CR2_LBCL_Values<USART3::CR2, 8, 1, ReadWriteMode, USART3CR2Base> ;
    using LBDIE = USART3_CR2_LBDIE_Values<USART3::CR2, 6, 1, ReadWriteMode, USART3CR2Base> ;
    using LBDL = USART3_CR2_LBDL_Values<USART3::CR2, 5, 1, ReadWriteMode, USART3CR2Base> ;
    using ADD = USART3_CR2_ADD_Values<USART3::CR2, 0, 4, ReadWriteMode, USART3CR2Base> ;
    using FieldValues = USART3_CR2_ADD_Values<USART3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40004810, 32, ReadWriteMode, USART3CR2Base, T...> ;

  struct USART3CR3Base {} ;

  struct CR3 : public RegisterBase<0x40004814, 32, ReadWriteMode>
  {
    using ONEBIT = USART3_CR3_ONEBIT_Values<USART3::CR3, 11, 1, ReadWriteMode, USART3CR3Base> ;
    using CTSIE = USART3_CR3_CTSIE_Values<USART3::CR3, 10, 1, ReadWriteMode, USART3CR3Base> ;
    using CTSE = USART3_CR3_CTSE_Values<USART3::CR3, 9, 1, ReadWriteMode, USART3CR3Base> ;
    using RTSE = USART3_CR3_RTSE_Values<USART3::CR3, 8, 1, ReadWriteMode, USART3CR3Base> ;
    using DMAT = USART3_CR3_DMAT_Values<USART3::CR3, 7, 1, ReadWriteMode, USART3CR3Base> ;
    using DMAR = USART3_CR3_DMAR_Values<USART3::CR3, 6, 1, ReadWriteMode, USART3CR3Base> ;
    using SCEN = USART3_CR3_SCEN_Values<USART3::CR3, 5, 1, ReadWriteMode, USART3CR3Base> ;
    using NACK = USART3_CR3_NACK_Values<USART3::CR3, 4, 1, ReadWriteMode, USART3CR3Base> ;
    using HDSEL = USART3_CR3_HDSEL_Values<USART3::CR3, 3, 1, ReadWriteMode, USART3CR3Base> ;
    using IRLP = USART3_CR3_IRLP_Values<USART3::CR3, 2, 1, ReadWriteMode, USART3CR3Base> ;
    using IREN = USART3_CR3_IREN_Values<USART3::CR3, 1, 1, ReadWriteMode, USART3CR3Base> ;
    using EIE = USART3_CR3_EIE_Values<USART3::CR3, 0, 1, ReadWriteMode, USART3CR3Base> ;
    using FieldValues = USART3_CR3_EIE_Values<USART3::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40004814, 32, ReadWriteMode, USART3CR3Base, T...> ;

  struct USART3GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40004818, 32, ReadWriteMode>
  {
    using GT = USART3_GTPR_GT_Values<USART3::GTPR, 8, 8, ReadWriteMode, USART3GTPRBase> ;
    using PSC = USART3_GTPR_PSC_Values<USART3::GTPR, 0, 8, ReadWriteMode, USART3GTPRBase> ;
    using FieldValues = USART3_GTPR_PSC_Values<USART3::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40004818, 32, ReadWriteMode, USART3GTPRBase, T...> ;

} ;

#endif //#if !defined(USART3REGISTERS_HPP)
