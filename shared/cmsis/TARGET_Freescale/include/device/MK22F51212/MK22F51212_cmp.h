/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_CMP_REGISTERS_H__
#define __HW_CMP_REGISTERS_H__

#include "regs.h"

/*
 * MK22F51212 CMP
 *
 * High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
 *
 * Registers defined in this header file:
 * - HW_CMP_CR0 - CMP Control Register 0
 * - HW_CMP_CR1 - CMP Control Register 1
 * - HW_CMP_FPR - CMP Filter Period Register
 * - HW_CMP_SCR - CMP Status and Control Register
 * - HW_CMP_DACCR - DAC Control Register
 * - HW_CMP_MUXCR - MUX Control Register
 *
 * - hw_cmp_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_CMP_BASE
#define HW_CMP_INSTANCE_COUNT (2U) //!< Number of instances of the CMP module.
#define HW_CMP0 (0U) //!< Instance number for CMP0.
#define HW_CMP1 (1U) //!< Instance number for CMP1.
#define REGS_CMP0_BASE (0x40073000U) //!< Base address for CMP0.
#define REGS_CMP1_BASE (0x40073008U) //!< Base address for CMP1.

//! @brief Table of base addresses for CMP instances.
static const uint32_t __g_regs_CMP_base_addresses[] = {
        REGS_CMP0_BASE,
        REGS_CMP1_BASE,
    };

//! @brief Get the base address of CMP by instance number.
//! @param x CMP instance number, from 0 through 1.
#define REGS_CMP_BASE(x) (__g_regs_CMP_base_addresses[(x)])

//! @brief Get the instance number given a base address.
//! @param b Base address for an instance of CMP.
#define REGS_CMP_INSTANCE(b) ((b) == REGS_CMP0_BASE ? HW_CMP0 : (b) == REGS_CMP1_BASE ? HW_CMP1 : 0)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_CR0 - CMP Control Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_CR0 - CMP Control Register 0 (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_cr0
{
    uint8_t U;
    struct _hw_cmp_cr0_bitfields
    {
        uint8_t HYSTCTR : 2;           //!< [1:0] Comparator hard block hysteresis
                                       //! control
        uint8_t RESERVED0 : 2;         //!< [3:2]
        uint8_t FILTER_CNT : 3;        //!< [6:4] Filter Sample Count
        uint8_t RESERVED1 : 1;         //!< [7]
    } B;
} hw_cmp_cr0_t;
#endif

/*!
 * @name Constants and macros for entire CMP_CR0 register
 */
//@{
#define HW_CMP_CR0_ADDR(x)       (REGS_CMP_BASE(x) + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_CR0(x)            (*(__IO hw_cmp_cr0_t *) HW_CMP_CR0_ADDR(x))
#define HW_CMP_CR0_RD(x)         (HW_CMP_CR0(x).U)
#define HW_CMP_CR0_WR(x, v)      (HW_CMP_CR0(x).U = (v))
#define HW_CMP_CR0_SET(x, v)     (HW_CMP_CR0_WR(x, HW_CMP_CR0_RD(x) |  (v)))
#define HW_CMP_CR0_CLR(x, v)     (HW_CMP_CR0_WR(x, HW_CMP_CR0_RD(x) & ~(v)))
#define HW_CMP_CR0_TOG(x, v)     (HW_CMP_CR0_WR(x, HW_CMP_CR0_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_CR0 bitfields
 */

/*!
 * @name Register CMP_CR0, field HYSTCTR[1:0] (RW)
 *
 * Defines the programmable hysteresis level. The hysteresis values associated
 * with each level are device-specific. See the Data Sheet of the device for the
 * exact values.
 *
 * Values:
 * - 00 - Level 0
 * - 01 - Level 1
 * - 10 - Level 2
 * - 11 - Level 3
 */
//@{
#define BP_CMP_CR0_HYSTCTR   (0U)          //!< Bit position for CMP_CR0_HYSTCTR.
#define BM_CMP_CR0_HYSTCTR   (0x03U)       //!< Bit mask for CMP_CR0_HYSTCTR.
#define BS_CMP_CR0_HYSTCTR   (2U)          //!< Bit field size in bits for CMP_CR0_HYSTCTR.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR0_HYSTCTR field.
#define BR_CMP_CR0_HYSTCTR(x) (HW_CMP_CR0(x).B.HYSTCTR)
#endif

//! @brief Format value for bitfield CMP_CR0_HYSTCTR.
#define BF_CMP_CR0_HYSTCTR(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR0_HYSTCTR), uint8_t) & BM_CMP_CR0_HYSTCTR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HYSTCTR field to a new value.
#define BW_CMP_CR0_HYSTCTR(x, v) (HW_CMP_CR0_WR(x, (HW_CMP_CR0_RD(x) & ~BM_CMP_CR0_HYSTCTR) | BF_CMP_CR0_HYSTCTR(v)))
#endif
//@}

/*!
 * @name Register CMP_CR0, field FILTER_CNT[6:4] (RW)
 *
 * Represents the number of consecutive samples that must agree prior to the
 * comparator ouput filter accepting a new output state. For information regarding
 * filter programming and latency, see the Functional descriptionThe CMP module
 * can be used to compare two analog input voltages applied to INP and INM. .
 *
 * Values:
 * - 000 - Filter is disabled. If SE = 1, then COUT is a logic 0. This is not a
 *     legal state, and is not recommended. If SE = 0, COUT = COUTA.
 * - 001 - One sample must agree. The comparator output is simply sampled.
 * - 010 - 2 consecutive samples must agree.
 * - 011 - 3 consecutive samples must agree.
 * - 100 - 4 consecutive samples must agree.
 * - 101 - 5 consecutive samples must agree.
 * - 110 - 6 consecutive samples must agree.
 * - 111 - 7 consecutive samples must agree.
 */
//@{
#define BP_CMP_CR0_FILTER_CNT (4U)         //!< Bit position for CMP_CR0_FILTER_CNT.
#define BM_CMP_CR0_FILTER_CNT (0x70U)      //!< Bit mask for CMP_CR0_FILTER_CNT.
#define BS_CMP_CR0_FILTER_CNT (3U)         //!< Bit field size in bits for CMP_CR0_FILTER_CNT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR0_FILTER_CNT field.
#define BR_CMP_CR0_FILTER_CNT(x) (HW_CMP_CR0(x).B.FILTER_CNT)
#endif

//! @brief Format value for bitfield CMP_CR0_FILTER_CNT.
#define BF_CMP_CR0_FILTER_CNT(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR0_FILTER_CNT), uint8_t) & BM_CMP_CR0_FILTER_CNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FILTER_CNT field to a new value.
#define BW_CMP_CR0_FILTER_CNT(x, v) (HW_CMP_CR0_WR(x, (HW_CMP_CR0_RD(x) & ~BM_CMP_CR0_FILTER_CNT) | BF_CMP_CR0_FILTER_CNT(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_CR1 - CMP Control Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_CR1 - CMP Control Register 1 (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_cr1
{
    uint8_t U;
    struct _hw_cmp_cr1_bitfields
    {
        uint8_t EN : 1;                //!< [0] Comparator Module Enable
        uint8_t OPE : 1;               //!< [1] Comparator Output Pin Enable
        uint8_t COS : 1;               //!< [2] Comparator Output Select
        uint8_t INV : 1;               //!< [3] Comparator INVERT
        uint8_t PMODE : 1;             //!< [4] Power Mode Select
        uint8_t TRIGM : 1;             //!< [5] Trigger Mode Enable
        uint8_t WE : 1;                //!< [6] Windowing Enable
        uint8_t SE : 1;                //!< [7] Sample Enable
    } B;
} hw_cmp_cr1_t;
#endif

/*!
 * @name Constants and macros for entire CMP_CR1 register
 */
//@{
#define HW_CMP_CR1_ADDR(x)       (REGS_CMP_BASE(x) + 0x1U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_CR1(x)            (*(__IO hw_cmp_cr1_t *) HW_CMP_CR1_ADDR(x))
#define HW_CMP_CR1_RD(x)         (HW_CMP_CR1(x).U)
#define HW_CMP_CR1_WR(x, v)      (HW_CMP_CR1(x).U = (v))
#define HW_CMP_CR1_SET(x, v)     (HW_CMP_CR1_WR(x, HW_CMP_CR1_RD(x) |  (v)))
#define HW_CMP_CR1_CLR(x, v)     (HW_CMP_CR1_WR(x, HW_CMP_CR1_RD(x) & ~(v)))
#define HW_CMP_CR1_TOG(x, v)     (HW_CMP_CR1_WR(x, HW_CMP_CR1_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_CR1 bitfields
 */

/*!
 * @name Register CMP_CR1, field EN[0] (RW)
 *
 * Enables the Analog Comparator module. When the module is not enabled, it
 * remains in the off state, and consumes no power. When the user selects the same
 * input from analog mux to the positive and negative port, the comparator is
 * disabled automatically.
 *
 * Values:
 * - 0 - Analog Comparator is disabled.
 * - 1 - Analog Comparator is enabled.
 */
//@{
#define BP_CMP_CR1_EN        (0U)          //!< Bit position for CMP_CR1_EN.
#define BM_CMP_CR1_EN        (0x01U)       //!< Bit mask for CMP_CR1_EN.
#define BS_CMP_CR1_EN        (1U)          //!< Bit field size in bits for CMP_CR1_EN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_EN field.
#define BR_CMP_CR1_EN(x)     (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_EN))
#endif

//! @brief Format value for bitfield CMP_CR1_EN.
#define BF_CMP_CR1_EN(v)     (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_EN), uint8_t) & BM_CMP_CR1_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN field to a new value.
#define BW_CMP_CR1_EN(x, v)  (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_EN) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field OPE[1] (RW)
 *
 * Values:
 * - 0 - CMPO is not available on the associated CMPO output pin. If the
 *     comparator does not own the pin, this field has no effect.
 * - 1 - CMPO is available on the associated CMPO output pin. The comparator
 *     output (CMPO) is driven out on the associated CMPO output pin if the
 *     comparator owns the pin. If the comparator does not own the field, this bit has no
 *     effect.
 */
//@{
#define BP_CMP_CR1_OPE       (1U)          //!< Bit position for CMP_CR1_OPE.
#define BM_CMP_CR1_OPE       (0x02U)       //!< Bit mask for CMP_CR1_OPE.
#define BS_CMP_CR1_OPE       (1U)          //!< Bit field size in bits for CMP_CR1_OPE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_OPE field.
#define BR_CMP_CR1_OPE(x)    (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_OPE))
#endif

//! @brief Format value for bitfield CMP_CR1_OPE.
#define BF_CMP_CR1_OPE(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_OPE), uint8_t) & BM_CMP_CR1_OPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OPE field to a new value.
#define BW_CMP_CR1_OPE(x, v) (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_OPE) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field COS[2] (RW)
 *
 * Values:
 * - 0 - Set the filtered comparator output (CMPO) to equal COUT.
 * - 1 - Set the unfiltered comparator output (CMPO) to equal COUTA.
 */
//@{
#define BP_CMP_CR1_COS       (2U)          //!< Bit position for CMP_CR1_COS.
#define BM_CMP_CR1_COS       (0x04U)       //!< Bit mask for CMP_CR1_COS.
#define BS_CMP_CR1_COS       (1U)          //!< Bit field size in bits for CMP_CR1_COS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_COS field.
#define BR_CMP_CR1_COS(x)    (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_COS))
#endif

//! @brief Format value for bitfield CMP_CR1_COS.
#define BF_CMP_CR1_COS(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_COS), uint8_t) & BM_CMP_CR1_COS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COS field to a new value.
#define BW_CMP_CR1_COS(x, v) (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_COS) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field INV[3] (RW)
 *
 * Allows selection of the polarity of the analog comparator function. It is
 * also driven to the COUT output, on both the device pin and as SCR[COUT], when
 * OPE=0.
 *
 * Values:
 * - 0 - Does not invert the comparator output.
 * - 1 - Inverts the comparator output.
 */
//@{
#define BP_CMP_CR1_INV       (3U)          //!< Bit position for CMP_CR1_INV.
#define BM_CMP_CR1_INV       (0x08U)       //!< Bit mask for CMP_CR1_INV.
#define BS_CMP_CR1_INV       (1U)          //!< Bit field size in bits for CMP_CR1_INV.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_INV field.
#define BR_CMP_CR1_INV(x)    (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_INV))
#endif

//! @brief Format value for bitfield CMP_CR1_INV.
#define BF_CMP_CR1_INV(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_INV), uint8_t) & BM_CMP_CR1_INV)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INV field to a new value.
#define BW_CMP_CR1_INV(x, v) (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_INV) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field PMODE[4] (RW)
 *
 * See the electrical specifications table in the device Data Sheet for details.
 *
 * Values:
 * - 0 - Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower
 *     output propagation delay and lower current consumption.
 * - 1 - High-Speed (HS) Comparison mode selected. In this mode, CMP has faster
 *     output propagation delay and higher current consumption.
 */
//@{
#define BP_CMP_CR1_PMODE     (4U)          //!< Bit position for CMP_CR1_PMODE.
#define BM_CMP_CR1_PMODE     (0x10U)       //!< Bit mask for CMP_CR1_PMODE.
#define BS_CMP_CR1_PMODE     (1U)          //!< Bit field size in bits for CMP_CR1_PMODE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_PMODE field.
#define BR_CMP_CR1_PMODE(x)  (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_PMODE))
#endif

//! @brief Format value for bitfield CMP_CR1_PMODE.
#define BF_CMP_CR1_PMODE(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_PMODE), uint8_t) & BM_CMP_CR1_PMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PMODE field to a new value.
#define BW_CMP_CR1_PMODE(x, v) (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_PMODE) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field TRIGM[5] (RW)
 *
 * CMP and DAC are configured to CMP Trigger mode when CMP_CR1[TRIGM] is set to
 * 1. In addition, the CMP should be enabled. If the DAC is to be used as a
 * reference to the CMP, it should also be enabled. CMP Trigger mode depends on an
 * external timer resource to periodically enable the CMP and 6-bit DAC in order to
 * generate a triggered compare. Upon setting TRIGM, the CMP and DAC are placed
 * in a standby state until an external timer resource trigger is received. See
 * the chip configuration for details about the external timer resource.
 *
 * Values:
 * - 0 - Trigger mode is disabled.
 * - 1 - Trigger mode is enabled.
 */
//@{
#define BP_CMP_CR1_TRIGM     (5U)          //!< Bit position for CMP_CR1_TRIGM.
#define BM_CMP_CR1_TRIGM     (0x20U)       //!< Bit mask for CMP_CR1_TRIGM.
#define BS_CMP_CR1_TRIGM     (1U)          //!< Bit field size in bits for CMP_CR1_TRIGM.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_TRIGM field.
#define BR_CMP_CR1_TRIGM(x)  (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_TRIGM))
#endif

//! @brief Format value for bitfield CMP_CR1_TRIGM.
#define BF_CMP_CR1_TRIGM(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_TRIGM), uint8_t) & BM_CMP_CR1_TRIGM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRIGM field to a new value.
#define BW_CMP_CR1_TRIGM(x, v) (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_TRIGM) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field WE[6] (RW)
 *
 * At any given time, either SE or WE can be set. If a write to this register
 * attempts to set both, then SE is set and WE is cleared. However, avoid writing
 * 1s to both field locations because this "11" case is reserved and may change in
 * future implementations.
 *
 * Values:
 * - 0 - Windowing mode is not selected.
 * - 1 - Windowing mode is selected.
 */
//@{
#define BP_CMP_CR1_WE        (6U)          //!< Bit position for CMP_CR1_WE.
#define BM_CMP_CR1_WE        (0x40U)       //!< Bit mask for CMP_CR1_WE.
#define BS_CMP_CR1_WE        (1U)          //!< Bit field size in bits for CMP_CR1_WE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_WE field.
#define BR_CMP_CR1_WE(x)     (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_WE))
#endif

//! @brief Format value for bitfield CMP_CR1_WE.
#define BF_CMP_CR1_WE(v)     (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_WE), uint8_t) & BM_CMP_CR1_WE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WE field to a new value.
#define BW_CMP_CR1_WE(x, v)  (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_WE) = (v))
#endif
//@}

/*!
 * @name Register CMP_CR1, field SE[7] (RW)
 *
 * At any given time, either SE or WE can be set. If a write to this register
 * attempts to set both, then SE is set and WE is cleared. However, avoid writing
 * 1s to both field locations because this "11" case is reserved and may change in
 * future implementations.
 *
 * Values:
 * - 0 - Sampling mode is not selected.
 * - 1 - Sampling mode is selected.
 */
//@{
#define BP_CMP_CR1_SE        (7U)          //!< Bit position for CMP_CR1_SE.
#define BM_CMP_CR1_SE        (0x80U)       //!< Bit mask for CMP_CR1_SE.
#define BS_CMP_CR1_SE        (1U)          //!< Bit field size in bits for CMP_CR1_SE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_CR1_SE field.
#define BR_CMP_CR1_SE(x)     (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_SE))
#endif

//! @brief Format value for bitfield CMP_CR1_SE.
#define BF_CMP_CR1_SE(v)     (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_CR1_SE), uint8_t) & BM_CMP_CR1_SE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SE field to a new value.
#define BW_CMP_CR1_SE(x, v)  (BITBAND_ACCESS8(HW_CMP_CR1_ADDR(x), BP_CMP_CR1_SE) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_FPR - CMP Filter Period Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_FPR - CMP Filter Period Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_fpr
{
    uint8_t U;
    struct _hw_cmp_fpr_bitfields
    {
        uint8_t FILT_PER : 8;          //!< [7:0] Filter Sample Period
    } B;
} hw_cmp_fpr_t;
#endif

/*!
 * @name Constants and macros for entire CMP_FPR register
 */
//@{
#define HW_CMP_FPR_ADDR(x)       (REGS_CMP_BASE(x) + 0x2U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_FPR(x)            (*(__IO hw_cmp_fpr_t *) HW_CMP_FPR_ADDR(x))
#define HW_CMP_FPR_RD(x)         (HW_CMP_FPR(x).U)
#define HW_CMP_FPR_WR(x, v)      (HW_CMP_FPR(x).U = (v))
#define HW_CMP_FPR_SET(x, v)     (HW_CMP_FPR_WR(x, HW_CMP_FPR_RD(x) |  (v)))
#define HW_CMP_FPR_CLR(x, v)     (HW_CMP_FPR_WR(x, HW_CMP_FPR_RD(x) & ~(v)))
#define HW_CMP_FPR_TOG(x, v)     (HW_CMP_FPR_WR(x, HW_CMP_FPR_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_FPR bitfields
 */

/*!
 * @name Register CMP_FPR, field FILT_PER[7:0] (RW)
 *
 * Specifies the sampling period, in bus clock cycles, of the comparator output
 * filter, when CR1[SE]=0. Setting FILT_PER to 0x0 disables the filter. Filter
 * programming and latency details appear in the Functional descriptionThe CMP
 * module can be used to compare two analog input voltages applied to INP and INM. .
 * This field has no effect when CR1[SE]=1. In that case, the external SAMPLE
 * signal is used to determine the sampling period.
 */
//@{
#define BP_CMP_FPR_FILT_PER  (0U)          //!< Bit position for CMP_FPR_FILT_PER.
#define BM_CMP_FPR_FILT_PER  (0xFFU)       //!< Bit mask for CMP_FPR_FILT_PER.
#define BS_CMP_FPR_FILT_PER  (8U)          //!< Bit field size in bits for CMP_FPR_FILT_PER.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_FPR_FILT_PER field.
#define BR_CMP_FPR_FILT_PER(x) (HW_CMP_FPR(x).B.FILT_PER)
#endif

//! @brief Format value for bitfield CMP_FPR_FILT_PER.
#define BF_CMP_FPR_FILT_PER(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_FPR_FILT_PER), uint8_t) & BM_CMP_FPR_FILT_PER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FILT_PER field to a new value.
#define BW_CMP_FPR_FILT_PER(x, v) (HW_CMP_FPR_WR(x, (HW_CMP_FPR_RD(x) & ~BM_CMP_FPR_FILT_PER) | BF_CMP_FPR_FILT_PER(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_SCR - CMP Status and Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_SCR - CMP Status and Control Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_scr
{
    uint8_t U;
    struct _hw_cmp_scr_bitfields
    {
        uint8_t COUT : 1;              //!< [0] Analog Comparator Output
        uint8_t CFF : 1;               //!< [1] Analog Comparator Flag Falling
        uint8_t CFR : 1;               //!< [2] Analog Comparator Flag Rising
        uint8_t IEF : 1;               //!< [3] Comparator Interrupt Enable Falling
        uint8_t IER : 1;               //!< [4] Comparator Interrupt Enable Rising
        uint8_t RESERVED0 : 1;         //!< [5]
        uint8_t DMAEN : 1;             //!< [6] DMA Enable Control
        uint8_t RESERVED1 : 1;         //!< [7]
    } B;
} hw_cmp_scr_t;
#endif

/*!
 * @name Constants and macros for entire CMP_SCR register
 */
//@{
#define HW_CMP_SCR_ADDR(x)       (REGS_CMP_BASE(x) + 0x3U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_SCR(x)            (*(__IO hw_cmp_scr_t *) HW_CMP_SCR_ADDR(x))
#define HW_CMP_SCR_RD(x)         (HW_CMP_SCR(x).U)
#define HW_CMP_SCR_WR(x, v)      (HW_CMP_SCR(x).U = (v))
#define HW_CMP_SCR_SET(x, v)     (HW_CMP_SCR_WR(x, HW_CMP_SCR_RD(x) |  (v)))
#define HW_CMP_SCR_CLR(x, v)     (HW_CMP_SCR_WR(x, HW_CMP_SCR_RD(x) & ~(v)))
#define HW_CMP_SCR_TOG(x, v)     (HW_CMP_SCR_WR(x, HW_CMP_SCR_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_SCR bitfields
 */

/*!
 * @name Register CMP_SCR, field COUT[0] (RO)
 *
 * Returns the current value of the Analog Comparator output, when read. The
 * field is reset to 0 and will read as CR1[INV] when the Analog Comparator module
 * is disabled, that is, when CR1[EN] = 0. Writes to this field are ignored.
 */
//@{
#define BP_CMP_SCR_COUT      (0U)          //!< Bit position for CMP_SCR_COUT.
#define BM_CMP_SCR_COUT      (0x01U)       //!< Bit mask for CMP_SCR_COUT.
#define BS_CMP_SCR_COUT      (1U)          //!< Bit field size in bits for CMP_SCR_COUT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_COUT field.
#define BR_CMP_SCR_COUT(x)   (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_COUT))
#endif
//@}

/*!
 * @name Register CMP_SCR, field CFF[1] (W1C)
 *
 * Detects a falling-edge on COUT, when set, during normal operation. CFF is
 * cleared by writing 1 to it. During Stop modes, CFF is level sensitive .
 *
 * Values:
 * - 0 - Falling-edge on COUT has not been detected.
 * - 1 - Falling-edge on COUT has occurred.
 */
//@{
#define BP_CMP_SCR_CFF       (1U)          //!< Bit position for CMP_SCR_CFF.
#define BM_CMP_SCR_CFF       (0x02U)       //!< Bit mask for CMP_SCR_CFF.
#define BS_CMP_SCR_CFF       (1U)          //!< Bit field size in bits for CMP_SCR_CFF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_CFF field.
#define BR_CMP_SCR_CFF(x)    (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_CFF))
#endif

//! @brief Format value for bitfield CMP_SCR_CFF.
#define BF_CMP_SCR_CFF(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_SCR_CFF), uint8_t) & BM_CMP_SCR_CFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CFF field to a new value.
#define BW_CMP_SCR_CFF(x, v) (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_CFF) = (v))
#endif
//@}

/*!
 * @name Register CMP_SCR, field CFR[2] (W1C)
 *
 * Detects a rising-edge on COUT, when set, during normal operation. CFR is
 * cleared by writing 1 to it. During Stop modes, CFR is level sensitive .
 *
 * Values:
 * - 0 - Rising-edge on COUT has not been detected.
 * - 1 - Rising-edge on COUT has occurred.
 */
//@{
#define BP_CMP_SCR_CFR       (2U)          //!< Bit position for CMP_SCR_CFR.
#define BM_CMP_SCR_CFR       (0x04U)       //!< Bit mask for CMP_SCR_CFR.
#define BS_CMP_SCR_CFR       (1U)          //!< Bit field size in bits for CMP_SCR_CFR.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_CFR field.
#define BR_CMP_SCR_CFR(x)    (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_CFR))
#endif

//! @brief Format value for bitfield CMP_SCR_CFR.
#define BF_CMP_SCR_CFR(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_SCR_CFR), uint8_t) & BM_CMP_SCR_CFR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CFR field to a new value.
#define BW_CMP_SCR_CFR(x, v) (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_CFR) = (v))
#endif
//@}

/*!
 * @name Register CMP_SCR, field IEF[3] (RW)
 *
 * Enables the CFF interrupt from the CMP. When this field is set, an interrupt
 * will be asserted when CFF is set.
 *
 * Values:
 * - 0 - Interrupt is disabled.
 * - 1 - Interrupt is enabled.
 */
//@{
#define BP_CMP_SCR_IEF       (3U)          //!< Bit position for CMP_SCR_IEF.
#define BM_CMP_SCR_IEF       (0x08U)       //!< Bit mask for CMP_SCR_IEF.
#define BS_CMP_SCR_IEF       (1U)          //!< Bit field size in bits for CMP_SCR_IEF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_IEF field.
#define BR_CMP_SCR_IEF(x)    (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_IEF))
#endif

//! @brief Format value for bitfield CMP_SCR_IEF.
#define BF_CMP_SCR_IEF(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_SCR_IEF), uint8_t) & BM_CMP_SCR_IEF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IEF field to a new value.
#define BW_CMP_SCR_IEF(x, v) (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_IEF) = (v))
#endif
//@}

/*!
 * @name Register CMP_SCR, field IER[4] (RW)
 *
 * Enables the CFR interrupt from the CMP. When this field is set, an interrupt
 * will be asserted when CFR is set.
 *
 * Values:
 * - 0 - Interrupt is disabled.
 * - 1 - Interrupt is enabled.
 */
//@{
#define BP_CMP_SCR_IER       (4U)          //!< Bit position for CMP_SCR_IER.
#define BM_CMP_SCR_IER       (0x10U)       //!< Bit mask for CMP_SCR_IER.
#define BS_CMP_SCR_IER       (1U)          //!< Bit field size in bits for CMP_SCR_IER.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_IER field.
#define BR_CMP_SCR_IER(x)    (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_IER))
#endif

//! @brief Format value for bitfield CMP_SCR_IER.
#define BF_CMP_SCR_IER(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_SCR_IER), uint8_t) & BM_CMP_SCR_IER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IER field to a new value.
#define BW_CMP_SCR_IER(x, v) (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_IER) = (v))
#endif
//@}

/*!
 * @name Register CMP_SCR, field DMAEN[6] (RW)
 *
 * Enables the DMA transfer triggered from the CMP module. When this field is
 * set, a DMA request is asserted when CFR or CFF is set.
 *
 * Values:
 * - 0 - DMA is disabled.
 * - 1 - DMA is enabled.
 */
//@{
#define BP_CMP_SCR_DMAEN     (6U)          //!< Bit position for CMP_SCR_DMAEN.
#define BM_CMP_SCR_DMAEN     (0x40U)       //!< Bit mask for CMP_SCR_DMAEN.
#define BS_CMP_SCR_DMAEN     (1U)          //!< Bit field size in bits for CMP_SCR_DMAEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_SCR_DMAEN field.
#define BR_CMP_SCR_DMAEN(x)  (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_DMAEN))
#endif

//! @brief Format value for bitfield CMP_SCR_DMAEN.
#define BF_CMP_SCR_DMAEN(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_SCR_DMAEN), uint8_t) & BM_CMP_SCR_DMAEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DMAEN field to a new value.
#define BW_CMP_SCR_DMAEN(x, v) (BITBAND_ACCESS8(HW_CMP_SCR_ADDR(x), BP_CMP_SCR_DMAEN) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_DACCR - DAC Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_DACCR - DAC Control Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_daccr
{
    uint8_t U;
    struct _hw_cmp_daccr_bitfields
    {
        uint8_t VOSEL : 6;             //!< [5:0] DAC Output Voltage Select
        uint8_t VRSEL : 1;             //!< [6] Supply Voltage Reference Source Select
        uint8_t DACEN : 1;             //!< [7] DAC Enable
    } B;
} hw_cmp_daccr_t;
#endif

/*!
 * @name Constants and macros for entire CMP_DACCR register
 */
//@{
#define HW_CMP_DACCR_ADDR(x)     (REGS_CMP_BASE(x) + 0x4U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_DACCR(x)          (*(__IO hw_cmp_daccr_t *) HW_CMP_DACCR_ADDR(x))
#define HW_CMP_DACCR_RD(x)       (HW_CMP_DACCR(x).U)
#define HW_CMP_DACCR_WR(x, v)    (HW_CMP_DACCR(x).U = (v))
#define HW_CMP_DACCR_SET(x, v)   (HW_CMP_DACCR_WR(x, HW_CMP_DACCR_RD(x) |  (v)))
#define HW_CMP_DACCR_CLR(x, v)   (HW_CMP_DACCR_WR(x, HW_CMP_DACCR_RD(x) & ~(v)))
#define HW_CMP_DACCR_TOG(x, v)   (HW_CMP_DACCR_WR(x, HW_CMP_DACCR_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_DACCR bitfields
 */

/*!
 * @name Register CMP_DACCR, field VOSEL[5:0] (RW)
 *
 * Selects an output voltage from one of 64 distinct levels. DACO = (V in /64) *
 * (VOSEL[5:0] + 1) , so the DACO range is from V in /64 to V in .
 */
//@{
#define BP_CMP_DACCR_VOSEL   (0U)          //!< Bit position for CMP_DACCR_VOSEL.
#define BM_CMP_DACCR_VOSEL   (0x3FU)       //!< Bit mask for CMP_DACCR_VOSEL.
#define BS_CMP_DACCR_VOSEL   (6U)          //!< Bit field size in bits for CMP_DACCR_VOSEL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_DACCR_VOSEL field.
#define BR_CMP_DACCR_VOSEL(x) (HW_CMP_DACCR(x).B.VOSEL)
#endif

//! @brief Format value for bitfield CMP_DACCR_VOSEL.
#define BF_CMP_DACCR_VOSEL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_DACCR_VOSEL), uint8_t) & BM_CMP_DACCR_VOSEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VOSEL field to a new value.
#define BW_CMP_DACCR_VOSEL(x, v) (HW_CMP_DACCR_WR(x, (HW_CMP_DACCR_RD(x) & ~BM_CMP_DACCR_VOSEL) | BF_CMP_DACCR_VOSEL(v)))
#endif
//@}

/*!
 * @name Register CMP_DACCR, field VRSEL[6] (RW)
 *
 * Values:
 * - 0 - V is selected as resistor ladder network supply reference V. in1 in
 * - 1 - V is selected as resistor ladder network supply reference V. in2 in
 */
//@{
#define BP_CMP_DACCR_VRSEL   (6U)          //!< Bit position for CMP_DACCR_VRSEL.
#define BM_CMP_DACCR_VRSEL   (0x40U)       //!< Bit mask for CMP_DACCR_VRSEL.
#define BS_CMP_DACCR_VRSEL   (1U)          //!< Bit field size in bits for CMP_DACCR_VRSEL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_DACCR_VRSEL field.
#define BR_CMP_DACCR_VRSEL(x) (BITBAND_ACCESS8(HW_CMP_DACCR_ADDR(x), BP_CMP_DACCR_VRSEL))
#endif

//! @brief Format value for bitfield CMP_DACCR_VRSEL.
#define BF_CMP_DACCR_VRSEL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_DACCR_VRSEL), uint8_t) & BM_CMP_DACCR_VRSEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VRSEL field to a new value.
#define BW_CMP_DACCR_VRSEL(x, v) (BITBAND_ACCESS8(HW_CMP_DACCR_ADDR(x), BP_CMP_DACCR_VRSEL) = (v))
#endif
//@}

/*!
 * @name Register CMP_DACCR, field DACEN[7] (RW)
 *
 * Enables the DAC. When the DAC is disabled, it is powered down to conserve
 * power.
 *
 * Values:
 * - 0 - DAC is disabled.
 * - 1 - DAC is enabled.
 */
//@{
#define BP_CMP_DACCR_DACEN   (7U)          //!< Bit position for CMP_DACCR_DACEN.
#define BM_CMP_DACCR_DACEN   (0x80U)       //!< Bit mask for CMP_DACCR_DACEN.
#define BS_CMP_DACCR_DACEN   (1U)          //!< Bit field size in bits for CMP_DACCR_DACEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_DACCR_DACEN field.
#define BR_CMP_DACCR_DACEN(x) (BITBAND_ACCESS8(HW_CMP_DACCR_ADDR(x), BP_CMP_DACCR_DACEN))
#endif

//! @brief Format value for bitfield CMP_DACCR_DACEN.
#define BF_CMP_DACCR_DACEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_DACCR_DACEN), uint8_t) & BM_CMP_DACCR_DACEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DACEN field to a new value.
#define BW_CMP_DACCR_DACEN(x, v) (BITBAND_ACCESS8(HW_CMP_DACCR_ADDR(x), BP_CMP_DACCR_DACEN) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_CMP_MUXCR - MUX Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_CMP_MUXCR - MUX Control Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_cmp_muxcr
{
    uint8_t U;
    struct _hw_cmp_muxcr_bitfields
    {
        uint8_t MSEL : 3;              //!< [2:0] Minus Input Mux Control
        uint8_t PSEL : 3;              //!< [5:3] Plus Input Mux Control
        uint8_t RESERVED0 : 2;         //!< [7:6] Bit can be programmed to zero only .
    } B;
} hw_cmp_muxcr_t;
#endif

/*!
 * @name Constants and macros for entire CMP_MUXCR register
 */
//@{
#define HW_CMP_MUXCR_ADDR(x)     (REGS_CMP_BASE(x) + 0x5U)

#ifndef __LANGUAGE_ASM__
#define HW_CMP_MUXCR(x)          (*(__IO hw_cmp_muxcr_t *) HW_CMP_MUXCR_ADDR(x))
#define HW_CMP_MUXCR_RD(x)       (HW_CMP_MUXCR(x).U)
#define HW_CMP_MUXCR_WR(x, v)    (HW_CMP_MUXCR(x).U = (v))
#define HW_CMP_MUXCR_SET(x, v)   (HW_CMP_MUXCR_WR(x, HW_CMP_MUXCR_RD(x) |  (v)))
#define HW_CMP_MUXCR_CLR(x, v)   (HW_CMP_MUXCR_WR(x, HW_CMP_MUXCR_RD(x) & ~(v)))
#define HW_CMP_MUXCR_TOG(x, v)   (HW_CMP_MUXCR_WR(x, HW_CMP_MUXCR_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual CMP_MUXCR bitfields
 */

/*!
 * @name Register CMP_MUXCR, field MSEL[2:0] (RW)
 *
 * Determines which input is selected for the minus input of the comparator. For
 * INx inputs, see CMP, DAC, and ANMUX block diagrams. When an inappropriate
 * operation selects the same input for both muxes, the comparator automatically
 * shuts down to prevent itself from becoming a noise generator.
 *
 * Values:
 * - 000 - IN0
 * - 001 - IN1
 * - 010 - IN2
 * - 011 - IN3
 * - 100 - IN4
 * - 101 - IN5
 * - 110 - IN6
 * - 111 - IN7
 */
//@{
#define BP_CMP_MUXCR_MSEL    (0U)          //!< Bit position for CMP_MUXCR_MSEL.
#define BM_CMP_MUXCR_MSEL    (0x07U)       //!< Bit mask for CMP_MUXCR_MSEL.
#define BS_CMP_MUXCR_MSEL    (3U)          //!< Bit field size in bits for CMP_MUXCR_MSEL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_MUXCR_MSEL field.
#define BR_CMP_MUXCR_MSEL(x) (HW_CMP_MUXCR(x).B.MSEL)
#endif

//! @brief Format value for bitfield CMP_MUXCR_MSEL.
#define BF_CMP_MUXCR_MSEL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_MUXCR_MSEL), uint8_t) & BM_CMP_MUXCR_MSEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MSEL field to a new value.
#define BW_CMP_MUXCR_MSEL(x, v) (HW_CMP_MUXCR_WR(x, (HW_CMP_MUXCR_RD(x) & ~BM_CMP_MUXCR_MSEL) | BF_CMP_MUXCR_MSEL(v)))
#endif
//@}

/*!
 * @name Register CMP_MUXCR, field PSEL[5:3] (RW)
 *
 * Determines which input is selected for the plus input of the comparator. For
 * INx inputs, see CMP, DAC, and ANMUX block diagrams. When an inappropriate
 * operation selects the same input for both muxes, the comparator automatically
 * shuts down to prevent itself from becoming a noise generator.
 *
 * Values:
 * - 000 - IN0
 * - 001 - IN1
 * - 010 - IN2
 * - 011 - IN3
 * - 100 - IN4
 * - 101 - IN5
 * - 110 - IN6
 * - 111 - IN7
 */
//@{
#define BP_CMP_MUXCR_PSEL    (3U)          //!< Bit position for CMP_MUXCR_PSEL.
#define BM_CMP_MUXCR_PSEL    (0x38U)       //!< Bit mask for CMP_MUXCR_PSEL.
#define BS_CMP_MUXCR_PSEL    (3U)          //!< Bit field size in bits for CMP_MUXCR_PSEL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the CMP_MUXCR_PSEL field.
#define BR_CMP_MUXCR_PSEL(x) (HW_CMP_MUXCR(x).B.PSEL)
#endif

//! @brief Format value for bitfield CMP_MUXCR_PSEL.
#define BF_CMP_MUXCR_PSEL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_CMP_MUXCR_PSEL), uint8_t) & BM_CMP_MUXCR_PSEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSEL field to a new value.
#define BW_CMP_MUXCR_PSEL(x, v) (HW_CMP_MUXCR_WR(x, (HW_CMP_MUXCR_RD(x) & ~BM_CMP_MUXCR_PSEL) | BF_CMP_MUXCR_PSEL(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_cmp_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All CMP module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_cmp
{
    __IO hw_cmp_cr0_t CR0;                 //!< [0x0] CMP Control Register 0
    __IO hw_cmp_cr1_t CR1;                 //!< [0x1] CMP Control Register 1
    __IO hw_cmp_fpr_t FPR;                 //!< [0x2] CMP Filter Period Register
    __IO hw_cmp_scr_t SCR;                 //!< [0x3] CMP Status and Control Register
    __IO hw_cmp_daccr_t DACCR;             //!< [0x4] DAC Control Register
    __IO hw_cmp_muxcr_t MUXCR;             //!< [0x5] MUX Control Register
} hw_cmp_t;
#pragma pack()

//! @brief Macro to access all CMP registers.
//! @param x CMP instance number.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_CMP(0)</code>.
#define HW_CMP(x)      (*(hw_cmp_t *) REGS_CMP_BASE(x))
#endif

#endif // __HW_CMP_REGISTERS_H__
// v22/130726/0.9
// EOF
