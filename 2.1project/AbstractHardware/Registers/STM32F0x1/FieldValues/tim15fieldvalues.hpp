/*******************************************************************************
* Filename      : tim15fieldvalues.hpp
*
* Details       : Enumerations related with TIM15 peripheral. This header file
*                 is auto-generated for STM32F0x1 device.
*
*
*******************************************************************************/

#if !defined(TIM15ENUMS_HPP)
#define TIM15ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_CKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_CKD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_CKD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CR1_CKD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CR1_CKD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_ARPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_OPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_OPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_URS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_UDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR1_CEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR1_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_OIS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_OIS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_OIS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_OIS1N_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_OIS1N_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_OIS1N_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_OIS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_OIS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_OIS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_CR2_MMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_CCDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_CCDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_CCDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_CCUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_CCUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_CCUS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CR2_CCPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CR2_CCPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CR2_CCPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SMCR_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SMCR_MSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SMCR_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SMCR_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_SMCR_TS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SMCR_SMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_SMCR_SMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_TDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_TDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_TDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_CC2DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_CC2DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_CC2DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_CC1DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_CC1DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_CC1DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_UDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_UDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_BIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_BIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_BIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_TIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_COMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_COMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_COMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_CC2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_CC2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_CC2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_CC1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_CC1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_CC1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DIER_UIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_CC2OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_CC2OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_CC2OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_CC1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_CC1OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_CC1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_BIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_BIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_BIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_TIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_TIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_TIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_COMIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_COMIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_COMIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_CC2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_CC2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_CC2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_CC1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_CC1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_CC1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_SR_UIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_BG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_BG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_BG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_TG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_TG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_TG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_COMG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_COMG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_COMG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_CC2G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_CC2G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_CC2G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_CC1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_CC1G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_CC1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_EGR_UG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC2M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_CCMR1_Output_OC2M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC2PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC2PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC2PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC2FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC2FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC2FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_CC2S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_CC2S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_CC2S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Output_CC2S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Output_CC2S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC1M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_CCMR1_Output_OC1M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC1PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC1PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC1PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_OC1FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_OC1FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_OC1FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Output_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Output_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Output_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Output_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Output_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_IC2F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM15_CCMR1_Input_IC2F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_IC2PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_IC2PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_IC2PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_IC2PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_IC2PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_CC2S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_CC2S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_CC2S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_CC2S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_CC2S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_IC1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM15_CCMR1_Input_IC1F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_IC1PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_IC1PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_IC1PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_IC1PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_IC1PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCMR1_Input_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCMR1_Input_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCMR1_Input_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_CCMR1_Input_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_CCMR1_Input_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC2NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC2NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC2NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC2P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC2P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC2P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC2E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC2E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC2E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC1NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC1NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC1NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC1NE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC1NE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC1NE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCER_CC1E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_CCER_CC1E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_CCER_CC1E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_RCR_REP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCR1_CCR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_CCR2_CCR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_MOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_MOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_MOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_AOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_AOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_AOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_BKP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_BKP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_BKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_BKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_BKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_OSSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_OSSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_OSSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_OSSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_OSSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_OSSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_BDTR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_BDTR_LOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_BDTR_LOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_BDTR_LOCK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_BDTR_DTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DCR_DBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM15_DCR_DBL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DCR_DBA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM15_DCR_DBA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM15_DMAR_DMAB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIM15ENUMS_HPP)
