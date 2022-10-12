/*******************************************************************************
* Filename      : tim2fieldvalues.hpp
*
* Details       : Enumerations related with TIM2 peripheral. This header file is
*                 auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(TIM2ENUMS_HPP)
#define TIM2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_CR1_CEN_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_CR1_CEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_UDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using UevEnable = FieldValue<TIM2_CR1_UDIS_Values, BaseType, 0U> ;
  using UevDisable = FieldValue<TIM2_CR1_UDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_URS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using AnyEvent = FieldValue<TIM2_CR1_URS_Values, BaseType, 0U> ;
  using OverflowEvent = FieldValue<TIM2_CR1_URS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_OPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_OPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_OPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CR1_CMS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_ARPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_ARPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_ARPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_CKD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CR1_CKD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR1_UIFREMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR1_UIFREMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR1_UIFREMAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_TI1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR2_TI1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR2_TI1S_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_MMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CR2_MMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CR2_CCDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CR2_CCDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CR2_CCDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_SMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_SMCR_SMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_OCCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_OCCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_OCCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_TS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_SMCR_TS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_MSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_MSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_MSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_SMCR_ETF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_SMCR_ETPS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ECE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_ECE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_ECE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_ETP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_ETP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_ETP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SMCR_SMS_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SMCR_SMS_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SMCR_SMS_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_TDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_TDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_TDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC4DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_CC4DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_CC4DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC3DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_CC3DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_CC3DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC2DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_CC2DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_CC2DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC1DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_CC1DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_CC1DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_UDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_UDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_UDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DIER_TIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DIER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC4IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC3IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC2IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_CC1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_CC1IE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_CC1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DIER_UIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Disable = FieldValue<TIM2_DIER_UIE_Values, BaseType, 0U> ;
  using Enable = FieldValue<TIM2_DIER_UIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC4OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC4OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC4OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC3OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC3OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC3OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC2OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC2OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC2OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC1OF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC1OF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC1OF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_TIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_TIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_TIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC4IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC4IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC4IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC3IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC3IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC3IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_CC1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_SR_CC1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_SR_CC1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_SR_UIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using NoInterruptPending = FieldValue<TIM2_SR_UIF_Values, BaseType, 0U> ;
  using InterruptPending = FieldValue<TIM2_SR_UIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_TG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_TG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_TG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC4G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_CC4G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_CC4G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC3G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_CC3G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_CC3G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC2G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_CC2G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_CC2G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_CC1G_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_CC1G_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_CC1G_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_EGR_UG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_EGR_UG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_EGR_UG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Output_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Output_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC1FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC1FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC1PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC1PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR1_Output_OC1M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC1CE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC1CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_CC2S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Output_CC2S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR1_Output_OC2M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2CE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC1M_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC1M_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC1M_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Output_OC2M_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Output_OC2M_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Output_OC2M_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC2F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_CCMR1_Input_IC2F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC2PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_IC2PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_IC2PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_IC2PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_IC2PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_CC2S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_CC2S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_CC2S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_CC2S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_CC2S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_CCMR1_Input_IC1F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_IC1PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_IC1PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_IC1PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_IC1PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_IC1PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR1_Input_CC1S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR1_Input_CC1S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR1_Input_CC1S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR1_Input_CC1S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR1_Input_CC1S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_CC3S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_CC3S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_CC3S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Output_CC3S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Output_CC3S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC3FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC3FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC3PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC3PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR2_Output_OC3M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC3CE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC3CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_CC4S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_CC4S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_CC4S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Output_CC4S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Output_CC4S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC4FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC4FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC4PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC4PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4M_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR2_Output_OC4M_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_O24CE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_O24CE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_O24CE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC3M_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC3M_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC3M_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Output_OC4M_3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Output_OC4M_3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Output_OC4M_3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC4F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_CCMR2_Input_IC4F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC4PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_IC4PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_IC4PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_IC4PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_IC4PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_CC4S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_CC4S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_CC4S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_CC4S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_CC4S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC3F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_CCMR2_Input_IC3F_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_IC3PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_IC3PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_IC3PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_IC3PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_IC3PSC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCMR2_Input_CC3S_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCMR2_Input_CC3S_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCMR2_Input_CC3S_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_CCMR2_Input_CC3S_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_CCMR2_Input_CC3S_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC1E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC1E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC1P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC1P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC1NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC1NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC1NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC2E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC2E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC2P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC2P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC2NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC2NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC2NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC3E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC3E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC3P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC3P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC3NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC3NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC3NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC4E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC4E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC4P_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC4P_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCER_CC4NP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CCER_CC4NP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CCER_CC4NP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CNT_CNTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CNT_CNTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CNT_CNT_or_UIFCPY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_CNT_CNT_or_UIFCPY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_CNT_CNT_or_UIFCPY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_PSC_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_ARR_ARRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_ARR_ARRH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR1_CCR1L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR1_CCR1H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR2_CCR2L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR2_CCR2H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR3_CCR3L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR3_CCR3H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR4_CCR4L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_CCR4_CCR4H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DCR_DBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM2_DCR_DBL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DCR_DBA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<TIM2_DCR_DBA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TIM2_DMAR_DMAB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(TIM2ENUMS_HPP)
