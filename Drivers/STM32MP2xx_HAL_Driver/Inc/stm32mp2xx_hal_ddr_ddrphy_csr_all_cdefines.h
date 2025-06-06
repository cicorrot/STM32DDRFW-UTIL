/**
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#ifndef DDRPHY_PHYINIT_CSR_ALL_DEFINES_H
#define DDRPHY_PHYINIT_CSR_ALL_DEFINES_H

#define BIT(x) (1U << (x))
#define GENMASK_32(x,y) \
        (((0xFFFFFFFFU) << (y)) & (0xFFFFFFFFU >> (32U - 1U - (x))))

/* ANIBx register offsets */
#define CSR_MTESTMUXSEL_ADDR                            0x1AU
#define CSR_AFORCEDRVCONT_ADDR                          0x27U
#define CSR_AFORCETRICONT_ADDR                          0x28U
#define CSR_ATXIMPEDANCE_ADDR                           0x43U
#define CSR_ATESTPRBSERR_ADDR                           0x53U
#define CSR_ATXSLEWRATE_ADDR                            0x55U
#define CSR_ATESTPRBSERRCNT_ADDR                        0x56U
#define CSR_ATXDLY_ADDR                                 0x80U

/* DBYTEx register offsets */
#define CSR_DBYTEMISCMODE_ADDR                          0x0U
#define CSR_TSMBYTE0_ADDR                               0x1U
#define CSR_TRAININGPARAM_ADDR                          0x2U
#define CSR_USEDQSENREPLICA_ADDR                        0x3U
#define CSR_RXTRAINPATTERNENABLE_ADDR                   0x10U
#define CSR_TSMBYTE1_ADDR                               0x11U
#define CSR_TSMBYTE2_ADDR                               0x12U
#define CSR_TSMBYTE3_ADDR                               0x13U
#define CSR_TSMBYTE4_ADDR                               0x14U
#define CSR_TESTMODECONFIG_ADDR                         0x17U
#define CSR_TSMBYTE5_ADDR                               0x18U
/* MTESTMUXSEL already defined in ANIBx section */
#define CSR_DTSMTRAINMODECTRL_ADDR                      0x1FU
#define CSR_DFIMRL_ADDR                                 0x20U
#define CSR_ASYNCDBYTEMODE_ADDR                         0x24U
#define CSR_ASYNCDBYTETXEN_ADDR                         0x26U
#define CSR_ASYNCDBYTETXDATA_ADDR                       0x28U
#define CSR_ASYNCDBYTERXDATA_ADDR                       0x2AU
#define CSR_VREFDAC1_ADDR                               0x30U
#define CSR_TRAININGCNTR_ADDR                           0x32U
#define CSR_VREFDAC0_ADDR                               0x40U
#define CSR_TXIMPEDANCECTRL0_ADDR                       0x41U
#define CSR_DQDQSRCVCNTRL_ADDR                          0x43U
#define CSR_TXEQUALIZATIONMODE_ADDR                     0x48U
#define CSR_TXIMPEDANCECTRL1_ADDR                       0x49U
#define CSR_DQDQSRCVCNTRL1_ADDR                         0x4AU
#define CSR_TXIMPEDANCECTRL2_ADDR                       0x4BU
#define CSR_DQDQSRCVCNTRL2_ADDR                         0x4CU
#define CSR_TXODTDRVSTREN_ADDR                          0x4DU
#define CSR_RXFIFOCHECKSTATUS_ADDR                      0x56U
#define CSR_RXFIFOCHECKERRVALUES_ADDR                   0x57U
#define CSR_RXFIFOINFO_ADDR                             0x58U
#define CSR_RXFIFOVISIBILITY_ADDR                       0x59U
#define CSR_RXFIFOCONTENTSDQ3210_ADDR                   0x5AU
#define CSR_RXFIFOCONTENTSDQ7654_ADDR                   0x5BU
#define CSR_RXFIFOCONTENTSDBI_ADDR                      0x5CU
#define CSR_TXSLEWRATE_ADDR                             0x5FU
#define CSR_TRAININGINCDECDTSMEN_ADDR                   0x62U
#define CSR_RXPBDLYTG0_ADDR                             0x68U
#define CSR_RXPBDLYTG1_ADDR                             0x69U
#define CSR_RXPBDLYTG2_ADDR                             0x6AU
#define CSR_RXPBDLYTG3_ADDR                             0x6BU
#define CSR_RXENDLYTG0_ADDR                             0x80U
#define CSR_RXENDLYTG1_ADDR                             0x81U
#define CSR_RXENDLYTG2_ADDR                             0x82U
#define CSR_RXENDLYTG3_ADDR                             0x83U
#define CSR_RXCLKDLYTG0_ADDR                            0x8CU
#define CSR_RXCLKDLYTG1_ADDR                            0x8DU
#define CSR_RXCLKDLYTG2_ADDR                            0x8EU
#define CSR_RXCLKDLYTG3_ADDR                            0x8FU
#define CSR_RXCLKCDLYTG0_ADDR                           0x90U
#define CSR_RXCLKCDLYTG1_ADDR                           0x91U
#define CSR_RXCLKCDLYTG2_ADDR                           0x92U
#define CSR_RXCLKCDLYTG3_ADDR                           0x93U
#define CSR_DQ0LNSEL_ADDR                               0xA0U
#define CSR_DQ1LNSEL_ADDR                               0xA1U
#define CSR_DQ2LNSEL_ADDR                               0xA2U
#define CSR_DQ3LNSEL_ADDR                               0xA3U
#define CSR_DQ4LNSEL_ADDR                               0xA4U
#define CSR_DQ5LNSEL_ADDR                               0xA5U
#define CSR_DQ6LNSEL_ADDR                               0xA6U
#define CSR_DQ7LNSEL_ADDR                               0xA7U
#define CSR_PPTCTLSTATIC_ADDR                           0xAAU
#define CSR_PPTCTLDYN_ADDR                              0xABU
#define CSR_PPTINFO_ADDR                                0xACU
#define CSR_PPTRXENEVNT_ADDR                            0xADU
#define CSR_PPTDQSCNTINVTRNTG0_ADDR                     0xAEU
#define CSR_PPTDQSCNTINVTRNTG1_ADDR                     0xAFU
#define CSR_DTSMBLANKINGCTRL_ADDR                       0xB1U
#define CSR_TSM0_ADDR                                   0xB2U
#define CSR_TSM1_ADDR                                   0xB3U
#define CSR_TSM2_ADDR                                   0xB4U
#define CSR_TSM3_ADDR                                   0xB5U
#define CSR_TXCHKDATASELECTS_ADDR                       0xB6U
#define CSR_DTSMUPTHLDXINGIND_ADDR                      0xB7U
#define CSR_DTSMLOTHLDXINGIND_ADDR                      0xB8U
#define CSR_DBYTEALLDTSMCTRL0_ADDR                      0xB9U
#define CSR_DBYTEALLDTSMCTRL1_ADDR                      0xBAU
#define CSR_DBYTEALLDTSMCTRL2_ADDR                      0xBBU
#define CSR_TXDQDLYTG0_ADDR                             0xC0U
#define CSR_TXDQDLYTG1_ADDR                             0xC1U
#define CSR_TXDQDLYTG2_ADDR                             0xC2U
#define CSR_TXDQDLYTG3_ADDR                             0xC3U
#define CSR_TXDQSDLYTG0_ADDR                            0xD0U
#define CSR_TXDQSDLYTG1_ADDR                            0xD1U
#define CSR_TXDQSDLYTG2_ADDR                            0xD2U
#define CSR_TXDQSDLYTG3_ADDR                            0xD3U
#define CSR_DXLCDLSTATUS_ADDR                           0xE4U

/* MASTER0 register offsets */
#define CSR_RXFIFOINIT_ADDR                             0x0U
#define CSR_FORCECLKDISABLE_ADDR                        0x1U
#define CSR_CLOCKINGCTRL_ADDR                           0x2U
#define CSR_FORCEINTERNALUPDATE_ADDR                    0x3U
#define CSR_PHYCONFIG_ADDR                              0x4U
#define CSR_PGCR_ADDR                                   0x5U
#define CSR_TESTBUMPCNTRL1_ADDR                         0x7U
#define CSR_CALUCLKINFO_ADDR                            0x8U
#define CSR_TESTBUMPCNTRL_ADDR                          0xAU
#define CSR_SEQ0BDLY0_ADDR                              0xBU
#define CSR_SEQ0BDLY1_ADDR                              0xCU
#define CSR_SEQ0BDLY2_ADDR                              0xDU
#define CSR_SEQ0BDLY3_ADDR                              0xEU
#define CSR_PHYALERTSTATUS_ADDR                         0xFU
#define CSR_PPTTRAINSETUP_ADDR                          0x10U
#define CSR_PPTTRAINSETUP2_ADDR                         0x11U
#define CSR_ATESTMODE_ADDR                              0x12U
#define CSR_TXCALBINP_ADDR                              0x14U
#define CSR_TXCALBINN_ADDR                              0x15U
#define CSR_TXCALPOVR_ADDR                              0x16U
#define CSR_TXCALNOVR_ADDR                              0x17U
#define CSR_DFIMODE_ADDR                                0x18U
#define CSR_TRISTATEMODECA_ADDR                         0x19U
/* MTESTMUXSEL already defined in ANIBx section */
#define CSR_MTESTPGMINFO_ADDR                           0x1BU
#define CSR_DYNPWRDNUP_ADDR                             0x1CU
#define CSR_PMIENABLE_ADDR                              0x1DU
#define CSR_PHYTID_ADDR                                 0x1EU
#define CSR_HWTMRL_ADDR                                 0x20U
#define CSR_DFIPHYUPD_ADDR                              0x21U
#define CSR_PDAMRSWRITEMODE_ADDR                        0x22U
#define CSR_DFIGEARDOWNCTL_ADDR                         0x23U
#define CSR_DQSPREAMBLECONTROL_ADDR                     0x24U
#define CSR_MASTERX4CONFIG_ADDR                         0x25U
#define CSR_WRLEVBITS_ADDR                              0x26U
#define CSR_ENABLECSMULTICAST_ADDR                      0x27U
#define CSR_HWTLPCSMULTICAST_ADDR                       0x28U
#define CSR_ACX4ANIBDIS_ADDR                            0x2CU
#define CSR_DMIPINPRESENT_ADDR                          0x2DU
#define CSR_ARDPTRINITVAL_ADDR                          0x2EU
#define CSR_DB0LCDLCALPHDETOUT_ADDR                     0x30U
#define CSR_DB1LCDLCALPHDETOUT_ADDR                     0x31U
#define CSR_DB2LCDLCALPHDETOUT_ADDR                     0x32U
#define CSR_DB3LCDLCALPHDETOUT_ADDR                     0x33U
#define CSR_DB4LCDLCALPHDETOUT_ADDR                     0x34U
#define CSR_DB5LCDLCALPHDETOUT_ADDR                     0x35U
#define CSR_DB6LCDLCALPHDETOUT_ADDR                     0x36U
#define CSR_DB7LCDLCALPHDETOUT_ADDR                     0x37U
#define CSR_DB8LCDLCALPHDETOUT_ADDR                     0x38U
#define CSR_DB9LCDLCALPHDETOUT_ADDR                     0x39U
#define CSR_DBYTEDLLMODECNTRL_ADDR                      0x3AU
#define CSR_DBYTERXENTRAIN_ADDR                         0x3BU
#define CSR_ANLCDLCALPHDETOUT_ADDR                      0x3FU
#define CSR_CALOFFSETS_ADDR                             0x45U
#define CSR_SARINITVALS_ADDR                            0x47U
#define CSR_CALPEXTOVR_ADDR                             0x49U
#define CSR_CALCMPR5OVR_ADDR                            0x4AU
#define CSR_CALNINTOVR_ADDR                             0x4BU
#define CSR_CALDRVSTR0_ADDR                             0x50U
#define CSR_PROCODTCTL_ADDR                             0x55U
#define CSR_PROCODTTIMECTL_ADDR                         0x56U
#define CSR_MEMALERTCONTROL_ADDR                        0x5BU
#define CSR_MEMALERTCONTROL2_ADDR                       0x5CU
#define CSR_MEMRESETL_ADDR                              0x60U
#define CSR_PUBMODE_ADDR                                0x6EU
#define CSR_MISCPHYSTATUS_ADDR                          0x6FU
#define CSR_CORELOOPBACKSEL_ADDR                        0x70U
#define CSR_DLLTRAINPARAM_ADDR                          0x71U
#define CSR_HWTLPCSENA_ADDR                             0x72U
#define CSR_HWTLPCSENB_ADDR                             0x73U
#define CSR_HWTLPCSENBYPASS_ADDR                        0x74U
#define CSR_DFICAMODE_ADDR                              0x75U
#define CSR_HWTCACTL_ADDR                               0x76U
#define CSR_HWTCAMODE_ADDR                              0x77U
#define CSR_DLLCONTROL_ADDR                             0x78U
#define CSR_PULSEDLLUPDATEPHASE_ADDR                    0x79U
#define CSR_HWTCONTROLOVR0_ADDR                         0x7AU
#define CSR_HWTCONTROLOVR1_ADDR                         0x7BU
#define CSR_DLLGAINCTL_ADDR                             0x7CU
#define CSR_DLLLOCKPARAM_ADDR                           0x7DU
#define CSR_HWTCONTROLVAL0_ADDR                         0x7EU
#define CSR_HWTCONTROLVAL1_ADDR                         0x7FU
#define CSR_ACSMGLBLSTART_ADDR                          0x81U
#define CSR_ACSMGLBLSGLSTPCTRL_ADDR                     0x82U
#define CSR_LCDLCALPHASE_ADDR                           0x84U
#define CSR_LCDLCALCTRL_ADDR                            0x85U
#define CSR_CALRATE_ADDR                                0x88U
#define CSR_CALZAP_ADDR                                 0x89U
#define CSR_PSTATE_ADDR                                 0x8BU
#define CSR_CALPREDRIVEROVERRIDE_ADDR                   0x8CU
#define CSR_PLLOUTGATECONTROL_ADDR                      0x8DU
#define CSR_UCMEMRESETCONTROL_ADDR                      0x8FU
#define CSR_PORCONTROL_ADDR                             0x90U
#define CSR_CALBUSY_ADDR                                0x97U
#define CSR_CALMISC2_ADDR                               0x98U
#define CSR_CALMISC_ADDR                                0x9AU
#define CSR_CALVREFS_ADDR                               0x9BU
#define CSR_CALCMPR5_ADDR                               0x9CU
#define CSR_CALNINT_ADDR                                0x9DU
#define CSR_CALPEXT_ADDR                                0x9EU
#define CSR_CALCMPINVERT_ADDR                           0xA8U
#define CSR_CALCMPANACNTRL_ADDR                         0xAEU
#define CSR_DFIRDDATACSDESTMAP_ADDR                     0xB0U
#define CSR_VREFINGLOBAL_ADDR                           0xB2U
#define CSR_DFIWRDATACSDESTMAP_ADDR                     0xB4U
#define CSR_MASUPDGOODCTR_ADDR                          0xB5U
#define CSR_PHYUPD0GOODCTR_ADDR                         0xB6U
#define CSR_PHYUPD1GOODCTR_ADDR                         0xB7U
#define CSR_CTLUPD0GOODCTR_ADDR                         0xB8U
#define CSR_CTLUPD1GOODCTR_ADDR                         0xB9U
#define CSR_MASUPDFAILCTR_ADDR                          0xBAU
#define CSR_PHYUPD0FAILCTR_ADDR                         0xBBU
#define CSR_PHYUPD1FAILCTR_ADDR                         0xBCU
#define CSR_PHYPERFCTRENABLE_ADDR                       0xBDU
#define CSR_DFIWRRDDATACSCONFIG_ADDR                    0xBEU
#define CSR_PLLPWRDN_ADDR                               0xC3U
#define CSR_PLLRESET_ADDR                               0xC4U
#define CSR_PLLCTRL2_ADDR                               0xC5U
#define CSR_PLLCTRL0_ADDR                               0xC6U
#define CSR_PLLCTRL1_ADDR                               0xC7U
#define CSR_PLLTST_ADDR                                 0xC8U
#define CSR_PLLLOCKSTATUS_ADDR                          0xC9U
#define CSR_PLLTESTMODE_ADDR                            0xCAU
#define CSR_PLLCTRL3_ADDR                               0xCBU
#define CSR_PLLCTRL4_ADDR                               0xCCU
#define CSR_PLLENDOFCAL_ADDR                            0xCDU
#define CSR_PLLSTANDBYEFF_ADDR                          0xCEU
#define CSR_PLLDACVALOUT_ADDR                           0xCFU
#define CSR_DLYTESTSEQ_ADDR                             0xD0U
#define CSR_DLYTESTRINGSELDB_ADDR                       0xD1U
#define CSR_DLYTESTRINGSELAC_ADDR                       0xD2U
#define CSR_DLYTESTCNTDFICLKIV_ADDR                     0xD3U
#define CSR_DLYTESTCNTDFICLK_ADDR                       0xD4U
#define CSR_DLYTESTCNTRINGOSCDB0_ADDR                   0xD5U
#define CSR_DLYTESTCNTRINGOSCDB1_ADDR                   0xD6U
#define CSR_DLYTESTCNTRINGOSCDB2_ADDR                   0xD7U
#define CSR_DLYTESTCNTRINGOSCDB3_ADDR                   0xD8U
#define CSR_DLYTESTCNTRINGOSCDB4_ADDR                   0xD9U
#define CSR_DLYTESTCNTRINGOSCDB5_ADDR                   0xDAU
#define CSR_DLYTESTCNTRINGOSCDB6_ADDR                   0xDBU
#define CSR_DLYTESTCNTRINGOSCDB7_ADDR                   0xDCU
#define CSR_DLYTESTCNTRINGOSCDB8_ADDR                   0xDDU
#define CSR_DLYTESTCNTRINGOSCDB9_ADDR                   0xDEU
#define CSR_DLYTESTCNTRINGOSCAC_ADDR                    0xDFU
#define CSR_MSTLCDLDBGCNTL_ADDR                         0xE0U
#define CSR_MSTLCDL0DBGRES_ADDR                         0xE1U
#define CSR_MSTLCDL1DBGRES_ADDR                         0xE2U
#define CSR_LCDLDBGCNTL_ADDR                            0xE3U
#define CSR_ACLCDLSTATUS_ADDR                           0xE4U
#define CSR_CUSTPHYREV_ADDR                             0xEDU
#define CSR_PHYREV_ADDR                                 0xEEU
#define CSR_LP3EXITSEQ0BSTARTVECTOR_ADDR                0xEFU
#define CSR_DFIFREQXLAT0_ADDR                           0xF0U
#define CSR_DFIFREQXLAT1_ADDR                           0xF1U
#define CSR_DFIFREQXLAT2_ADDR                           0xF2U
#define CSR_DFIFREQXLAT3_ADDR                           0xF3U
#define CSR_DFIFREQXLAT4_ADDR                           0xF4U
#define CSR_DFIFREQXLAT5_ADDR                           0xF5U
#define CSR_DFIFREQXLAT6_ADDR                           0xF6U
#define CSR_DFIFREQXLAT7_ADDR                           0xF7U
#define CSR_TXRDPTRINIT_ADDR                            0xF8U
#define CSR_DFIINITCOMPLETE_ADDR                        0xF9U
#define CSR_DFIFREQRATIO_ADDR                           0xFAU
#define CSR_RXFIFOCHECKS_ADDR                           0xFBU
#define CSR_MTESTDTOCTRL_ADDR                           0xFFU
#define CSR_MAPCAA0TODFI_ADDR                           0x100U
#define CSR_MAPCAA1TODFI_ADDR                           0x101U
#define CSR_MAPCAA2TODFI_ADDR                           0x102U
#define CSR_MAPCAA3TODFI_ADDR                           0x103U
#define CSR_MAPCAA4TODFI_ADDR                           0x104U
#define CSR_MAPCAA5TODFI_ADDR                           0x105U
#define CSR_MAPCAA6TODFI_ADDR                           0x106U
#define CSR_MAPCAA7TODFI_ADDR                           0x107U
#define CSR_MAPCAA8TODFI_ADDR                           0x108U
#define CSR_MAPCAA9TODFI_ADDR                           0x109U
#define CSR_MAPCAB0TODFI_ADDR                           0x110U
#define CSR_MAPCAB1TODFI_ADDR                           0x111U
#define CSR_MAPCAB2TODFI_ADDR                           0x112U
#define CSR_MAPCAB3TODFI_ADDR                           0x113U
#define CSR_MAPCAB4TODFI_ADDR                           0x114U
#define CSR_MAPCAB5TODFI_ADDR                           0x115U
#define CSR_MAPCAB6TODFI_ADDR                           0x116U
#define CSR_MAPCAB7TODFI_ADDR                           0x117U
#define CSR_MAPCAB8TODFI_ADDR                           0x118U
#define CSR_MAPCAB9TODFI_ADDR                           0x119U
#define CSR_PHYINTERRUPTENABLE_ADDR                     0x11BU
#define CSR_PHYINTERRUPTFWCONTROL_ADDR                  0x11CU
#define CSR_PHYINTERRUPTMASK_ADDR                       0x11DU
#define CSR_PHYINTERRUPTCLEAR_ADDR                      0x11EU
#define CSR_PHYINTERRUPTSTATUS_ADDR                     0x11FU
#define CSR_HWTSWIZZLEHWTADDRESS0_ADDR                  0x120U
#define CSR_HWTSWIZZLEHWTADDRESS1_ADDR                  0x121U
#define CSR_HWTSWIZZLEHWTADDRESS2_ADDR                  0x122U
#define CSR_HWTSWIZZLEHWTADDRESS3_ADDR                  0x123U
#define CSR_HWTSWIZZLEHWTADDRESS4_ADDR                  0x124U
#define CSR_HWTSWIZZLEHWTADDRESS5_ADDR                  0x125U
#define CSR_HWTSWIZZLEHWTADDRESS6_ADDR                  0x126U
#define CSR_HWTSWIZZLEHWTADDRESS7_ADDR                  0x127U
#define CSR_HWTSWIZZLEHWTADDRESS8_ADDR                  0x128U
#define CSR_HWTSWIZZLEHWTADDRESS9_ADDR                  0x129U
#define CSR_HWTSWIZZLEHWTADDRESS10_ADDR                 0x12AU
#define CSR_HWTSWIZZLEHWTADDRESS11_ADDR                 0x12BU
#define CSR_HWTSWIZZLEHWTADDRESS12_ADDR                 0x12CU
#define CSR_HWTSWIZZLEHWTADDRESS13_ADDR                 0x12DU
#define CSR_HWTSWIZZLEHWTADDRESS14_ADDR                 0x12EU
#define CSR_HWTSWIZZLEHWTADDRESS15_ADDR                 0x12FU
#define CSR_HWTSWIZZLEHWTADDRESS17_ADDR                 0x130U
#define CSR_HWTSWIZZLEHWTACTN_ADDR                      0x131U
#define CSR_HWTSWIZZLEHWTBANK0_ADDR                     0x132U
#define CSR_HWTSWIZZLEHWTBANK1_ADDR                     0x133U
#define CSR_HWTSWIZZLEHWTBANK2_ADDR                     0x134U
#define CSR_HWTSWIZZLEHWTBG0_ADDR                       0x135U
#define CSR_HWTSWIZZLEHWTBG1_ADDR                       0x136U
#define CSR_HWTSWIZZLEHWTCASN_ADDR                      0x137U
#define CSR_HWTSWIZZLEHWTRASN_ADDR                      0x138U
#define CSR_HWTSWIZZLEHWTWEN_ADDR                       0x139U
#define CSR_HWTSWIZZLEHWTPARITYIN_ADDR                  0x13AU
#define CSR_DFIHANDSHAKEDELAYS0_ADDR                    0x13CU
#define CSR_DFIHANDSHAKEDELAYS1_ADDR                    0x13DU
#define CSR_REMOTEIMPCAL_ADDR                           0x13EU
#define CSR_ACLOOPBACKCTL_ADDR                          0x13FU

/* ACSM0 register offsets */
#define CSR_ACSMSEQ0X0_ADDR                             0x0U
#define CSR_ACSMSEQ0X1_ADDR                             0x1U
#define CSR_ACSMSEQ0X2_ADDR                             0x2U
#define CSR_ACSMSEQ0X3_ADDR                             0x3U
#define CSR_ACSMSEQ0X4_ADDR                             0x4U
#define CSR_ACSMSEQ0X5_ADDR                             0x5U
#define CSR_ACSMSEQ0X6_ADDR                             0x6U
#define CSR_ACSMSEQ0X7_ADDR                             0x7U
#define CSR_ACSMSEQ0X8_ADDR                             0x8U
#define CSR_ACSMSEQ0X9_ADDR                             0x9U
#define CSR_ACSMSEQ0X10_ADDR                            0xAU
#define CSR_ACSMSEQ0X11_ADDR                            0xBU
#define CSR_ACSMSEQ0X12_ADDR                            0xCU
#define CSR_ACSMSEQ0X13_ADDR                            0xDU
#define CSR_ACSMSEQ0X14_ADDR                            0xEU
#define CSR_ACSMSEQ0X15_ADDR                            0xFU
#define CSR_ACSMSEQ0X16_ADDR                            0x10U
#define CSR_ACSMSEQ0X17_ADDR                            0x11U
#define CSR_ACSMSEQ0X18_ADDR                            0x12U
#define CSR_ACSMSEQ0X19_ADDR                            0x13U
#define CSR_ACSMSEQ0X20_ADDR                            0x14U
#define CSR_ACSMSEQ0X21_ADDR                            0x15U
#define CSR_ACSMSEQ0X22_ADDR                            0x16U
#define CSR_ACSMSEQ0X23_ADDR                            0x17U
#define CSR_ACSMSEQ0X24_ADDR                            0x18U
#define CSR_ACSMSEQ0X25_ADDR                            0x19U
#define CSR_ACSMSEQ0X26_ADDR                            0x1AU
#define CSR_ACSMSEQ0X27_ADDR                            0x1BU
#define CSR_ACSMSEQ0X28_ADDR                            0x1CU
#define CSR_ACSMSEQ0X29_ADDR                            0x1DU
#define CSR_ACSMSEQ0X30_ADDR                            0x1EU
#define CSR_ACSMSEQ0X31_ADDR                            0x1FU
#define CSR_ACSMSEQ1X0_ADDR                             0x20U
#define CSR_ACSMSEQ1X1_ADDR                             0x21U
#define CSR_ACSMSEQ1X2_ADDR                             0x22U
#define CSR_ACSMSEQ1X3_ADDR                             0x23U
#define CSR_ACSMSEQ1X4_ADDR                             0x24U
#define CSR_ACSMSEQ1X5_ADDR                             0x25U
#define CSR_ACSMSEQ1X6_ADDR                             0x26U
#define CSR_ACSMSEQ1X7_ADDR                             0x27U
#define CSR_ACSMSEQ1X8_ADDR                             0x28U
#define CSR_ACSMSEQ1X9_ADDR                             0x29U
#define CSR_ACSMSEQ1X10_ADDR                            0x2AU
#define CSR_ACSMSEQ1X11_ADDR                            0x2BU
#define CSR_ACSMSEQ1X12_ADDR                            0x2CU
#define CSR_ACSMSEQ1X13_ADDR                            0x2DU
#define CSR_ACSMSEQ1X14_ADDR                            0x2EU
#define CSR_ACSMSEQ1X15_ADDR                            0x2FU
#define CSR_ACSMSEQ1X16_ADDR                            0x30U
#define CSR_ACSMSEQ1X17_ADDR                            0x31U
#define CSR_ACSMSEQ1X18_ADDR                            0x32U
#define CSR_ACSMSEQ1X19_ADDR                            0x33U
#define CSR_ACSMSEQ1X20_ADDR                            0x34U
#define CSR_ACSMSEQ1X21_ADDR                            0x35U
#define CSR_ACSMSEQ1X22_ADDR                            0x36U
#define CSR_ACSMSEQ1X23_ADDR                            0x37U
#define CSR_ACSMSEQ1X24_ADDR                            0x38U
#define CSR_ACSMSEQ1X25_ADDR                            0x39U
#define CSR_ACSMSEQ1X26_ADDR                            0x3AU
#define CSR_ACSMSEQ1X27_ADDR                            0x3BU
#define CSR_ACSMSEQ1X28_ADDR                            0x3CU
#define CSR_ACSMSEQ1X29_ADDR                            0x3DU
#define CSR_ACSMSEQ1X30_ADDR                            0x3EU
#define CSR_ACSMSEQ1X31_ADDR                            0x3FU
#define CSR_ACSMSEQ2X0_ADDR                             0x40U
#define CSR_ACSMSEQ2X1_ADDR                             0x41U
#define CSR_ACSMSEQ2X2_ADDR                             0x42U
#define CSR_ACSMSEQ2X3_ADDR                             0x43U
#define CSR_ACSMSEQ2X4_ADDR                             0x44U
#define CSR_ACSMSEQ2X5_ADDR                             0x45U
#define CSR_ACSMSEQ2X6_ADDR                             0x46U
#define CSR_ACSMSEQ2X7_ADDR                             0x47U
#define CSR_ACSMSEQ2X8_ADDR                             0x48U
#define CSR_ACSMSEQ2X9_ADDR                             0x49U
#define CSR_ACSMSEQ2X10_ADDR                            0x4AU
#define CSR_ACSMSEQ2X11_ADDR                            0x4BU
#define CSR_ACSMSEQ2X12_ADDR                            0x4CU
#define CSR_ACSMSEQ2X13_ADDR                            0x4DU
#define CSR_ACSMSEQ2X14_ADDR                            0x4EU
#define CSR_ACSMSEQ2X15_ADDR                            0x4FU
#define CSR_ACSMSEQ2X16_ADDR                            0x50U
#define CSR_ACSMSEQ2X17_ADDR                            0x51U
#define CSR_ACSMSEQ2X18_ADDR                            0x52U
#define CSR_ACSMSEQ2X19_ADDR                            0x53U
#define CSR_ACSMSEQ2X20_ADDR                            0x54U
#define CSR_ACSMSEQ2X21_ADDR                            0x55U
#define CSR_ACSMSEQ2X22_ADDR                            0x56U
#define CSR_ACSMSEQ2X23_ADDR                            0x57U
#define CSR_ACSMSEQ2X24_ADDR                            0x58U
#define CSR_ACSMSEQ2X25_ADDR                            0x59U
#define CSR_ACSMSEQ2X26_ADDR                            0x5AU
#define CSR_ACSMSEQ2X27_ADDR                            0x5BU
#define CSR_ACSMSEQ2X28_ADDR                            0x5CU
#define CSR_ACSMSEQ2X29_ADDR                            0x5DU
#define CSR_ACSMSEQ2X30_ADDR                            0x5EU
#define CSR_ACSMSEQ2X31_ADDR                            0x5FU
#define CSR_ACSMSEQ3X0_ADDR                             0x60U
#define CSR_ACSMSEQ3X1_ADDR                             0x61U
#define CSR_ACSMSEQ3X2_ADDR                             0x62U
#define CSR_ACSMSEQ3X3_ADDR                             0x63U
#define CSR_ACSMSEQ3X4_ADDR                             0x64U
#define CSR_ACSMSEQ3X5_ADDR                             0x65U
#define CSR_ACSMSEQ3X6_ADDR                             0x66U
#define CSR_ACSMSEQ3X7_ADDR                             0x67U
#define CSR_ACSMSEQ3X8_ADDR                             0x68U
#define CSR_ACSMSEQ3X9_ADDR                             0x69U
#define CSR_ACSMSEQ3X10_ADDR                            0x6AU
#define CSR_ACSMSEQ3X11_ADDR                            0x6BU
#define CSR_ACSMSEQ3X12_ADDR                            0x6CU
#define CSR_ACSMSEQ3X13_ADDR                            0x6DU
#define CSR_ACSMSEQ3X14_ADDR                            0x6EU
#define CSR_ACSMSEQ3X15_ADDR                            0x6FU
#define CSR_ACSMSEQ3X16_ADDR                            0x70U
#define CSR_ACSMSEQ3X17_ADDR                            0x71U
#define CSR_ACSMSEQ3X18_ADDR                            0x72U
#define CSR_ACSMSEQ3X19_ADDR                            0x73U
#define CSR_ACSMSEQ3X20_ADDR                            0x74U
#define CSR_ACSMSEQ3X21_ADDR                            0x75U
#define CSR_ACSMSEQ3X22_ADDR                            0x76U
#define CSR_ACSMSEQ3X23_ADDR                            0x77U
#define CSR_ACSMSEQ3X24_ADDR                            0x78U
#define CSR_ACSMSEQ3X25_ADDR                            0x79U
#define CSR_ACSMSEQ3X26_ADDR                            0x7AU
#define CSR_ACSMSEQ3X27_ADDR                            0x7BU
#define CSR_ACSMSEQ3X28_ADDR                            0x7CU
#define CSR_ACSMSEQ3X29_ADDR                            0x7DU
#define CSR_ACSMSEQ3X30_ADDR                            0x7EU
#define CSR_ACSMSEQ3X31_ADDR                            0x7FU
#define CSR_ACSMPLAYBACK0X0_ADDR                        0x80U
#define CSR_ACSMPLAYBACK1X0_ADDR                        0x81U
#define CSR_ACSMPLAYBACK0X1_ADDR                        0x82U
#define CSR_ACSMPLAYBACK1X1_ADDR                        0x83U
#define CSR_ACSMPLAYBACK0X2_ADDR                        0x84U
#define CSR_ACSMPLAYBACK1X2_ADDR                        0x85U
#define CSR_ACSMPLAYBACK0X3_ADDR                        0x86U
#define CSR_ACSMPLAYBACK1X3_ADDR                        0x87U
#define CSR_ACSMPLAYBACK0X4_ADDR                        0x88U
#define CSR_ACSMPLAYBACK1X4_ADDR                        0x89U
#define CSR_ACSMPLAYBACK0X5_ADDR                        0x8AU
#define CSR_ACSMPLAYBACK1X5_ADDR                        0x8BU
#define CSR_ACSMPLAYBACK0X6_ADDR                        0x8CU
#define CSR_ACSMPLAYBACK1X6_ADDR                        0x8DU
#define CSR_ACSMPLAYBACK0X7_ADDR                        0x8EU
#define CSR_ACSMPLAYBACK1X7_ADDR                        0x8FU
#define CSR_ACSMPSTATEOVREN_ADDR                        0x90U
#define CSR_ACSMPSTATEOVRVAL_ADDR                       0x91U
#define CSR_ACSMCTRL23_ADDR                             0xC0U
#define CSR_ACSMCKEVAL_ADDR                             0xC2U
#define CSR_LOWSPEEDCLOCKDIVIDER_ADDR                   0xC8U
#define CSR_ACSMCSMAPCTRL0_ADDR                         0xD0U
#define CSR_ACSMCSMAPCTRL1_ADDR                         0xD1U
#define CSR_ACSMCSMAPCTRL2_ADDR                         0xD2U
#define CSR_ACSMCSMAPCTRL3_ADDR                         0xD3U
#define CSR_ACSMCSMAPCTRL4_ADDR                         0xD4U
#define CSR_ACSMCSMAPCTRL5_ADDR                         0xD5U
#define CSR_ACSMCSMAPCTRL6_ADDR                         0xD6U
#define CSR_ACSMCSMAPCTRL7_ADDR                         0xD7U
#define CSR_ACSMCSMAPCTRL8_ADDR                         0xD8U
#define CSR_ACSMCSMAPCTRL9_ADDR                         0xD9U
#define CSR_ACSMCSMAPCTRL10_ADDR                        0xDAU
#define CSR_ACSMCSMAPCTRL11_ADDR                        0xDBU
#define CSR_ACSMCSMAPCTRL12_ADDR                        0xDCU
#define CSR_ACSMCSMAPCTRL13_ADDR                        0xDDU
#define CSR_ACSMCSMAPCTRL14_ADDR                        0xDEU
#define CSR_ACSMCSMAPCTRL15_ADDR                        0xDFU
#define CSR_ACSMODTCTRL0_ADDR                           0xE0U
#define CSR_ACSMODTCTRL1_ADDR                           0xE1U
#define CSR_ACSMODTCTRL2_ADDR                           0xE2U
#define CSR_ACSMODTCTRL3_ADDR                           0xE3U
#define CSR_ACSMODTCTRL4_ADDR                           0xE4U
#define CSR_ACSMODTCTRL5_ADDR                           0xE5U
#define CSR_ACSMODTCTRL6_ADDR                           0xE6U
#define CSR_ACSMODTCTRL7_ADDR                           0xE7U
#define CSR_ACSMODTCTRL8_ADDR                           0xE8U
#define CSR_ACSMCTRL16_ADDR                             0xE9U
#define CSR_LOWSPEEDCLOCKSTOPVAL_ADDR                   0xEAU
#define CSR_ACSMCTRL18_ADDR                             0xEBU
#define CSR_ACSMCTRL19_ADDR                             0xECU
#define CSR_ACSMCTRL20_ADDR                             0xEDU
#define CSR_ACSMCTRL21_ADDR                             0xEEU
#define CSR_ACSMCTRL22_ADDR                             0xEFU
#define CSR_ACSMCTRL0_ADDR                              0xF0U
#define CSR_ACSMCTRL1_ADDR                              0xF1U
#define CSR_ACSMCTRL2_ADDR                              0xF2U
#define CSR_ACSMCTRL3_ADDR                              0xF3U
#define CSR_ACSMCTRL4_ADDR                              0xF4U
#define CSR_ACSMCTRL5_ADDR                              0xF5U
#define CSR_ACSMCTRL6_ADDR                              0xF6U
#define CSR_ACSMCTRL7_ADDR                              0xF7U
#define CSR_ACSMCTRL8_ADDR                              0xF8U
#define CSR_ACSMCTRL9_ADDR                              0xF9U
#define CSR_ACSMCTRL10_ADDR                             0xFAU
#define CSR_ACSMCTRL11_ADDR                             0xFBU
#define CSR_ACSMCTRL12_ADDR                             0xFCU
#define CSR_ACSMCTRL13_ADDR                             0xFDU
#define CSR_ACSMCTRL14_ADDR                             0xFEU
#define CSR_ACSMCTRL15_ADDR                             0xFFU

/* PPGC0 register offsets */
#define CSR_PPGCCTRL1_ADDR                              0x11U
#define CSR_PPGCLANE2CRCINMAP0_ADDR                     0x15U
#define CSR_PPGCLANE2CRCINMAP1_ADDR                     0x16U
#define CSR_PRBSTAPDLY0_ADDR                            0x24U
#define CSR_PRBSTAPDLY1_ADDR                            0x25U
#define CSR_PRBSTAPDLY2_ADDR                            0x26U
#define CSR_PRBSTAPDLY3_ADDR                            0x27U
#define CSR_GENPRBSBYTE0_ADDR                           0x30U
#define CSR_GENPRBSBYTE1_ADDR                           0x31U
#define CSR_GENPRBSBYTE2_ADDR                           0x32U
#define CSR_GENPRBSBYTE3_ADDR                           0x33U
#define CSR_GENPRBSBYTE4_ADDR                           0x34U
#define CSR_GENPRBSBYTE5_ADDR                           0x35U
#define CSR_GENPRBSBYTE6_ADDR                           0x36U
#define CSR_GENPRBSBYTE7_ADDR                           0x37U
#define CSR_GENPRBSBYTE8_ADDR                           0x38U
#define CSR_GENPRBSBYTE9_ADDR                           0x39U
#define CSR_GENPRBSBYTE10_ADDR                          0x3AU
#define CSR_GENPRBSBYTE11_ADDR                          0x3BU
#define CSR_GENPRBSBYTE12_ADDR                          0x3CU
#define CSR_GENPRBSBYTE13_ADDR                          0x3DU
#define CSR_GENPRBSBYTE14_ADDR                          0x3EU
#define CSR_GENPRBSBYTE15_ADDR                          0x3FU
#define CSR_PRBSGENCTL_ADDR                             0x60U
#define CSR_PRBSGENSTATELO_ADDR                         0x61U
#define CSR_PRBSGENSTATEHI_ADDR                         0x62U
#define CSR_PRBSCHKSTATELO_ADDR                         0x63U
#define CSR_PRBSCHKSTATEHI_ADDR                         0x64U
#define CSR_PRBSGENCTL1_ADDR                            0x65U
#define CSR_PRBSGENCTL2_ADDR                            0x66U

/* INITENG0 register offsets */
#define CSR_PRESEQUENCEREG0B0S0_ADDR                    0x0U
#define CSR_PRESEQUENCEREG0B0S1_ADDR                    0x1U
#define CSR_PRESEQUENCEREG0B0S2_ADDR                    0x2U
#define CSR_PRESEQUENCEREG0B1S0_ADDR                    0x3U
#define CSR_PRESEQUENCEREG0B1S1_ADDR                    0x4U
#define CSR_PRESEQUENCEREG0B1S2_ADDR                    0x5U
#define CSR_POSTSEQUENCEREG0B0S0_ADDR                   0x6U
#define CSR_POSTSEQUENCEREG0B0S1_ADDR                   0x7U
#define CSR_POSTSEQUENCEREG0B0S2_ADDR                   0x8U
#define CSR_POSTSEQUENCEREG0B1S0_ADDR                   0x9U
#define CSR_POSTSEQUENCEREG0B1S1_ADDR                   0xAU
#define CSR_POSTSEQUENCEREG0B1S2_ADDR                   0xBU
#define CSR_SEQ0BDISABLEFLAG0_ADDR                      0xCU
#define CSR_SEQ0BDISABLEFLAG1_ADDR                      0xDU
#define CSR_SEQ0BDISABLEFLAG2_ADDR                      0xEU
#define CSR_SEQ0BDISABLEFLAG3_ADDR                      0xFU
#define CSR_SEQ0BDISABLEFLAG4_ADDR                      0x10U
#define CSR_SEQ0BDISABLEFLAG5_ADDR                      0x11U
#define CSR_SEQ0BDISABLEFLAG6_ADDR                      0x12U
#define CSR_SEQ0BDISABLEFLAG7_ADDR                      0x13U
#define CSR_STARTVECTOR0B0_ADDR                         0x17U
#define CSR_STARTVECTOR0B1_ADDR                         0x18U
#define CSR_STARTVECTOR0B2_ADDR                         0x19U
#define CSR_STARTVECTOR0B3_ADDR                         0x1AU
#define CSR_STARTVECTOR0B4_ADDR                         0x1BU
#define CSR_STARTVECTOR0B5_ADDR                         0x1CU
#define CSR_STARTVECTOR0B6_ADDR                         0x1DU
#define CSR_STARTVECTOR0B7_ADDR                         0x1EU
#define CSR_STARTVECTOR0B8_ADDR                         0x1FU
#define CSR_STARTVECTOR0B9_ADDR                         0x20U
#define CSR_STARTVECTOR0B10_ADDR                        0x21U
#define CSR_STARTVECTOR0B11_ADDR                        0x22U
#define CSR_STARTVECTOR0B12_ADDR                        0x23U
#define CSR_STARTVECTOR0B13_ADDR                        0x24U
#define CSR_STARTVECTOR0B14_ADDR                        0x25U
#define CSR_STARTVECTOR0B15_ADDR                        0x26U
#define CSR_SEQ0BWAITCONDSEL_ADDR                       0x27U
#define CSR_PHYINLP3_ADDR                               0x28U
#define CSR_SEQUENCEREG0B0S0_ADDR                       0x29U
#define CSR_SEQUENCEREG0B0S1_ADDR                       0x2AU
#define CSR_SEQUENCEREG0B0S2_ADDR                       0x2BU
#define CSR_SEQUENCEREG0B1S0_ADDR                       0x2CU
#define CSR_SEQUENCEREG0B1S1_ADDR                       0x2DU
#define CSR_SEQUENCEREG0B1S2_ADDR                       0x2EU
#define CSR_SEQUENCEREG0B2S0_ADDR                       0x2FU
#define CSR_SEQUENCEREG0B2S1_ADDR                       0x30U
#define CSR_SEQUENCEREG0B2S2_ADDR                       0x31U
#define CSR_SEQUENCEREG0B3S0_ADDR                       0x32U
#define CSR_SEQUENCEREG0B3S1_ADDR                       0x33U
#define CSR_SEQUENCEREG0B3S2_ADDR                       0x34U
#define CSR_SEQUENCEREG0B4S0_ADDR                       0x35U
#define CSR_SEQUENCEREG0B4S1_ADDR                       0x36U
#define CSR_SEQUENCEREG0B4S2_ADDR                       0x37U
#define CSR_SEQUENCEREG0B5S0_ADDR                       0x38U
#define CSR_SEQUENCEREG0B5S1_ADDR                       0x39U
#define CSR_SEQUENCEREG0B5S2_ADDR                       0x3AU
#define CSR_SEQUENCEREG0B6S0_ADDR                       0x3BU
#define CSR_SEQUENCEREG0B6S1_ADDR                       0x3CU
#define CSR_SEQUENCEREG0B6S2_ADDR                       0x3DU
#define CSR_SEQUENCEREG0B7S0_ADDR                       0x3EU
#define CSR_SEQUENCEREG0B7S1_ADDR                       0x3FU
#define CSR_SEQUENCEREG0B7S2_ADDR                       0x40U
#define CSR_SEQUENCEREG0B8S0_ADDR                       0x41U
#define CSR_SEQUENCEREG0B8S1_ADDR                       0x42U
#define CSR_SEQUENCEREG0B8S2_ADDR                       0x43U
#define CSR_SEQUENCEREG0B9S0_ADDR                       0x44U
#define CSR_SEQUENCEREG0B9S1_ADDR                       0x45U
#define CSR_SEQUENCEREG0B9S2_ADDR                       0x46U
#define CSR_SEQUENCEREG0B10S0_ADDR                      0x47U
#define CSR_SEQUENCEREG0B10S1_ADDR                      0x48U
#define CSR_SEQUENCEREG0B10S2_ADDR                      0x49U
#define CSR_SEQUENCEREG0B11S0_ADDR                      0x4AU
#define CSR_SEQUENCEREG0B11S1_ADDR                      0x4BU
#define CSR_SEQUENCEREG0B11S2_ADDR                      0x4CU
#define CSR_SEQUENCEREG0B12S0_ADDR                      0x4DU
#define CSR_SEQUENCEREG0B12S1_ADDR                      0x4EU
#define CSR_SEQUENCEREG0B12S2_ADDR                      0x4FU
#define CSR_SEQUENCEREG0B13S0_ADDR                      0x50U
#define CSR_SEQUENCEREG0B13S1_ADDR                      0x51U
#define CSR_SEQUENCEREG0B13S2_ADDR                      0x52U
#define CSR_SEQUENCEREG0B14S0_ADDR                      0x53U
#define CSR_SEQUENCEREG0B14S1_ADDR                      0x54U
#define CSR_SEQUENCEREG0B14S2_ADDR                      0x55U
#define CSR_SEQUENCEREG0B15S0_ADDR                      0x56U
#define CSR_SEQUENCEREG0B15S1_ADDR                      0x57U
#define CSR_SEQUENCEREG0B15S2_ADDR                      0x58U
#define CSR_SEQUENCEREG0B16S0_ADDR                      0x59U
#define CSR_SEQUENCEREG0B16S1_ADDR                      0x5AU
#define CSR_SEQUENCEREG0B16S2_ADDR                      0x5BU
#define CSR_SEQUENCEREG0B17S0_ADDR                      0x5CU
#define CSR_SEQUENCEREG0B17S1_ADDR                      0x5DU
#define CSR_SEQUENCEREG0B17S2_ADDR                      0x5EU
#define CSR_SEQUENCEREG0B18S0_ADDR                      0x5FU
#define CSR_SEQUENCEREG0B18S1_ADDR                      0x60U
#define CSR_SEQUENCEREG0B18S2_ADDR                      0x61U
#define CSR_SEQUENCEREG0B19S0_ADDR                      0x62U
#define CSR_SEQUENCEREG0B19S1_ADDR                      0x63U
#define CSR_SEQUENCEREG0B19S2_ADDR                      0x64U
#define CSR_SEQUENCEREG0B20S0_ADDR                      0x65U
#define CSR_SEQUENCEREG0B20S1_ADDR                      0x66U
#define CSR_SEQUENCEREG0B20S2_ADDR                      0x67U
#define CSR_SEQUENCEREG0B21S0_ADDR                      0x68U
#define CSR_SEQUENCEREG0B21S1_ADDR                      0x69U
#define CSR_SEQUENCEREG0B21S2_ADDR                      0x6AU
#define CSR_SEQUENCEREG0B22S0_ADDR                      0x6BU
#define CSR_SEQUENCEREG0B22S1_ADDR                      0x6CU
#define CSR_SEQUENCEREG0B22S2_ADDR                      0x6DU
#define CSR_SEQUENCEREG0B23S0_ADDR                      0x6EU
#define CSR_SEQUENCEREG0B23S1_ADDR                      0x6FU
#define CSR_SEQUENCEREG0B23S2_ADDR                      0x70U
#define CSR_SEQUENCEREG0B24S0_ADDR                      0x71U
#define CSR_SEQUENCEREG0B24S1_ADDR                      0x72U
#define CSR_SEQUENCEREG0B24S2_ADDR                      0x73U
#define CSR_SEQUENCEREG0B25S0_ADDR                      0x74U
#define CSR_SEQUENCEREG0B25S1_ADDR                      0x75U
#define CSR_SEQUENCEREG0B25S2_ADDR                      0x76U
#define CSR_SEQUENCEREG0B26S0_ADDR                      0x77U
#define CSR_SEQUENCEREG0B26S1_ADDR                      0x78U
#define CSR_SEQUENCEREG0B26S2_ADDR                      0x79U
#define CSR_SEQUENCEREG0B27S0_ADDR                      0x7AU
#define CSR_SEQUENCEREG0B27S1_ADDR                      0x7BU
#define CSR_SEQUENCEREG0B27S2_ADDR                      0x7CU
#define CSR_SEQUENCEREG0B28S0_ADDR                      0x7DU
#define CSR_SEQUENCEREG0B28S1_ADDR                      0x7EU
#define CSR_SEQUENCEREG0B28S2_ADDR                      0x7FU
#define CSR_SEQUENCEREG0B29S0_ADDR                      0x80U
#define CSR_SEQUENCEREG0B29S1_ADDR                      0x81U
#define CSR_SEQUENCEREG0B29S2_ADDR                      0x82U
#define CSR_SEQUENCEREG0B30S0_ADDR                      0x83U
#define CSR_SEQUENCEREG0B30S1_ADDR                      0x84U
#define CSR_SEQUENCEREG0B30S2_ADDR                      0x85U
#define CSR_SEQUENCEREG0B31S0_ADDR                      0x86U
#define CSR_SEQUENCEREG0B31S1_ADDR                      0x87U
#define CSR_SEQUENCEREG0B31S2_ADDR                      0x88U
#define CSR_SEQUENCEREG0B32S0_ADDR                      0x89U
#define CSR_SEQUENCEREG0B32S1_ADDR                      0x8AU
#define CSR_SEQUENCEREG0B32S2_ADDR                      0x8BU
#define CSR_SEQUENCEREG0B33S0_ADDR                      0x8CU
#define CSR_SEQUENCEREG0B33S1_ADDR                      0x8DU
#define CSR_SEQUENCEREG0B33S2_ADDR                      0x8EU
#define CSR_SEQUENCEREG0B34S0_ADDR                      0x8FU
#define CSR_SEQUENCEREG0B34S1_ADDR                      0x90U
#define CSR_SEQUENCEREG0B34S2_ADDR                      0x91U
#define CSR_SEQUENCEREG0B35S0_ADDR                      0x92U
#define CSR_SEQUENCEREG0B35S1_ADDR                      0x93U
#define CSR_SEQUENCEREG0B35S2_ADDR                      0x94U
#define CSR_SEQUENCEREG0B36S0_ADDR                      0x95U
#define CSR_SEQUENCEREG0B36S1_ADDR                      0x96U
#define CSR_SEQUENCEREG0B36S2_ADDR                      0x97U
#define CSR_SEQUENCEREG0B37S0_ADDR                      0x98U
#define CSR_SEQUENCEREG0B37S1_ADDR                      0x99U
#define CSR_SEQUENCEREG0B37S2_ADDR                      0x9AU
#define CSR_SEQUENCEREG0B38S0_ADDR                      0x9BU
#define CSR_SEQUENCEREG0B38S1_ADDR                      0x9CU
#define CSR_SEQUENCEREG0B38S2_ADDR                      0x9DU
#define CSR_SEQUENCEREG0B39S0_ADDR                      0x9EU
#define CSR_SEQUENCEREG0B39S1_ADDR                      0x9FU
#define CSR_SEQUENCEREG0B39S2_ADDR                      0xA0U
#define CSR_SEQUENCEREG0B40S0_ADDR                      0xA1U
#define CSR_SEQUENCEREG0B40S1_ADDR                      0xA2U
#define CSR_SEQUENCEREG0B40S2_ADDR                      0xA3U
#define CSR_SEQUENCEREG0B41S0_ADDR                      0xA4U
#define CSR_SEQUENCEREG0B41S1_ADDR                      0xA5U
#define CSR_SEQUENCEREG0B41S2_ADDR                      0xA6U
#define CSR_SEQUENCEREG0B42S0_ADDR                      0xA7U
#define CSR_SEQUENCEREG0B42S1_ADDR                      0xA8U
#define CSR_SEQUENCEREG0B42S2_ADDR                      0xA9U
#define CSR_SEQUENCEREG0B43S0_ADDR                      0xAAU
#define CSR_SEQUENCEREG0B43S1_ADDR                      0xABU
#define CSR_SEQUENCEREG0B43S2_ADDR                      0xACU
#define CSR_SEQUENCEREG0B44S0_ADDR                      0xADU
#define CSR_SEQUENCEREG0B44S1_ADDR                      0xAEU
#define CSR_SEQUENCEREG0B44S2_ADDR                      0xAFU
#define CSR_SEQUENCEREG0B45S0_ADDR                      0xB0U
#define CSR_SEQUENCEREG0B45S1_ADDR                      0xB1U
#define CSR_SEQUENCEREG0B45S2_ADDR                      0xB2U
#define CSR_SEQUENCEREG0B46S0_ADDR                      0xB3U
#define CSR_SEQUENCEREG0B46S1_ADDR                      0xB4U
#define CSR_SEQUENCEREG0B46S2_ADDR                      0xB5U
#define CSR_SEQUENCEREG0B47S0_ADDR                      0xB6U
#define CSR_SEQUENCEREG0B47S1_ADDR                      0xB7U
#define CSR_SEQUENCEREG0B47S2_ADDR                      0xB8U
#define CSR_SEQUENCEREG0B48S0_ADDR                      0xB9U
#define CSR_SEQUENCEREG0B48S1_ADDR                      0xBAU
#define CSR_SEQUENCEREG0B48S2_ADDR                      0xBBU
#define CSR_SEQUENCEREG0B49S0_ADDR                      0xBCU
#define CSR_SEQUENCEREG0B49S1_ADDR                      0xBDU
#define CSR_SEQUENCEREG0B49S2_ADDR                      0xBEU
#define CSR_SEQUENCEREG0B50S0_ADDR                      0xBFU
#define CSR_SEQUENCEREG0B50S1_ADDR                      0xC0U
#define CSR_SEQUENCEREG0B50S2_ADDR                      0xC1U
#define CSR_SEQUENCEREG0B51S0_ADDR                      0xC2U
#define CSR_SEQUENCEREG0B51S1_ADDR                      0xC3U
#define CSR_SEQUENCEREG0B51S2_ADDR                      0xC4U
#define CSR_SEQUENCEREG0B52S0_ADDR                      0xC5U
#define CSR_SEQUENCEREG0B52S1_ADDR                      0xC6U
#define CSR_SEQUENCEREG0B52S2_ADDR                      0xC7U
#define CSR_SEQUENCEREG0B53S0_ADDR                      0xC8U
#define CSR_SEQUENCEREG0B53S1_ADDR                      0xC9U
#define CSR_SEQUENCEREG0B53S2_ADDR                      0xCAU
#define CSR_SEQUENCEREG0B54S0_ADDR                      0xCBU
#define CSR_SEQUENCEREG0B54S1_ADDR                      0xCCU
#define CSR_SEQUENCEREG0B54S2_ADDR                      0xCDU
#define CSR_SEQUENCEREG0B55S0_ADDR                      0xCEU
#define CSR_SEQUENCEREG0B55S1_ADDR                      0xCFU
#define CSR_SEQUENCEREG0B55S2_ADDR                      0xD0U
#define CSR_SEQUENCEREG0B56S0_ADDR                      0xD1U
#define CSR_SEQUENCEREG0B56S1_ADDR                      0xD2U
#define CSR_SEQUENCEREG0B56S2_ADDR                      0xD3U
#define CSR_SEQUENCEREG0B57S0_ADDR                      0xD4U
#define CSR_SEQUENCEREG0B57S1_ADDR                      0xD5U
#define CSR_SEQUENCEREG0B57S2_ADDR                      0xD6U
#define CSR_SEQUENCEREG0B58S0_ADDR                      0xD7U
#define CSR_SEQUENCEREG0B58S1_ADDR                      0xD8U
#define CSR_SEQUENCEREG0B58S2_ADDR                      0xD9U
#define CSR_SEQUENCEREG0B59S0_ADDR                      0xDAU
#define CSR_SEQUENCEREG0B59S1_ADDR                      0xDBU
#define CSR_SEQUENCEREG0B59S2_ADDR                      0xDCU
#define CSR_SEQUENCEREG0B60S0_ADDR                      0xDDU
#define CSR_SEQUENCEREG0B60S1_ADDR                      0xDEU
#define CSR_SEQUENCEREG0B60S2_ADDR                      0xDFU
#define CSR_SEQUENCEREG0B61S0_ADDR                      0xE0U
#define CSR_SEQUENCEREG0B61S1_ADDR                      0xE1U
#define CSR_SEQUENCEREG0B61S2_ADDR                      0xE2U
#define CSR_SEQUENCEREG0B62S0_ADDR                      0xE3U
#define CSR_SEQUENCEREG0B62S1_ADDR                      0xE4U
#define CSR_SEQUENCEREG0B62S2_ADDR                      0xE5U
#define CSR_SEQUENCEREG0B63S0_ADDR                      0xE6U
#define CSR_SEQUENCEREG0B63S1_ADDR                      0xE7U
#define CSR_SEQUENCEREG0B63S2_ADDR                      0xE8U
#define CSR_SEQUENCEREG0B64S0_ADDR                      0xE9U
#define CSR_SEQUENCEREG0B64S1_ADDR                      0xEAU
#define CSR_SEQUENCEREG0B64S2_ADDR                      0xEBU
#define CSR_SEQUENCEREG0B65S0_ADDR                      0xECU
#define CSR_SEQUENCEREG0B65S1_ADDR                      0xEDU
#define CSR_SEQUENCEREG0B65S2_ADDR                      0xEEU
#define CSR_SEQUENCEREG0B66S0_ADDR                      0xEFU
#define CSR_SEQUENCEREG0B66S1_ADDR                      0xF0U
#define CSR_SEQUENCEREG0B66S2_ADDR                      0xF1U
#define CSR_SEQUENCEREG0B67S0_ADDR                      0xF2U
#define CSR_SEQUENCEREG0B67S1_ADDR                      0xF3U
#define CSR_SEQUENCEREG0B67S2_ADDR                      0xF4U
#define CSR_SEQUENCEREG0B68S0_ADDR                      0xF5U
#define CSR_SEQUENCEREG0B68S1_ADDR                      0xF6U
#define CSR_SEQUENCEREG0B68S2_ADDR                      0xF7U
#define CSR_SEQUENCEREG0B69S0_ADDR                      0xF8U
#define CSR_SEQUENCEREG0B69S1_ADDR                      0xF9U
#define CSR_SEQUENCEREG0B69S2_ADDR                      0xFAU
#define CSR_SEQUENCEREG0B70S0_ADDR                      0xFBU
#define CSR_SEQUENCEREG0B70S1_ADDR                      0xFCU
#define CSR_SEQUENCEREG0B70S2_ADDR                      0xFDU
#define CSR_SEQUENCEREG0B71S0_ADDR                      0xFEU
#define CSR_SEQUENCEREG0B71S1_ADDR                      0xFFU
#define CSR_SEQUENCEREG0B71S2_ADDR                      0x100U
#define CSR_SEQUENCEREG0B72S0_ADDR                      0x101U
#define CSR_SEQUENCEREG0B72S1_ADDR                      0x102U
#define CSR_SEQUENCEREG0B72S2_ADDR                      0x103U
#define CSR_SEQUENCEREG0B73S0_ADDR                      0x104U
#define CSR_SEQUENCEREG0B73S1_ADDR                      0x105U
#define CSR_SEQUENCEREG0B73S2_ADDR                      0x106U
#define CSR_SEQUENCEREG0B74S0_ADDR                      0x107U
#define CSR_SEQUENCEREG0B74S1_ADDR                      0x108U
#define CSR_SEQUENCEREG0B74S2_ADDR                      0x109U
#define CSR_SEQUENCEREG0B75S0_ADDR                      0x10AU
#define CSR_SEQUENCEREG0B75S1_ADDR                      0x10BU
#define CSR_SEQUENCEREG0B75S2_ADDR                      0x10CU
#define CSR_SEQUENCEREG0B76S0_ADDR                      0x10DU
#define CSR_SEQUENCEREG0B76S1_ADDR                      0x10EU
#define CSR_SEQUENCEREG0B76S2_ADDR                      0x10FU
#define CSR_SEQUENCEREG0B77S0_ADDR                      0x110U
#define CSR_SEQUENCEREG0B77S1_ADDR                      0x111U
#define CSR_SEQUENCEREG0B77S2_ADDR                      0x112U
#define CSR_SEQUENCEREG0B78S0_ADDR                      0x113U
#define CSR_SEQUENCEREG0B78S1_ADDR                      0x114U
#define CSR_SEQUENCEREG0B78S2_ADDR                      0x115U
#define CSR_SEQUENCEREG0B79S0_ADDR                      0x116U
#define CSR_SEQUENCEREG0B79S1_ADDR                      0x117U
#define CSR_SEQUENCEREG0B79S2_ADDR                      0x118U
#define CSR_SEQUENCEREG0B80S0_ADDR                      0x119U
#define CSR_SEQUENCEREG0B80S1_ADDR                      0x11AU
#define CSR_SEQUENCEREG0B80S2_ADDR                      0x11BU
#define CSR_SEQUENCEREG0B81S0_ADDR                      0x11CU
#define CSR_SEQUENCEREG0B81S1_ADDR                      0x11DU
#define CSR_SEQUENCEREG0B81S2_ADDR                      0x11EU
#define CSR_SEQUENCEREG0B82S0_ADDR                      0x11FU
#define CSR_SEQUENCEREG0B82S1_ADDR                      0x120U
#define CSR_SEQUENCEREG0B82S2_ADDR                      0x121U
#define CSR_SEQUENCEREG0B83S0_ADDR                      0x122U
#define CSR_SEQUENCEREG0B83S1_ADDR                      0x123U
#define CSR_SEQUENCEREG0B83S2_ADDR                      0x124U
#define CSR_SEQUENCEREG0B84S0_ADDR                      0x125U
#define CSR_SEQUENCEREG0B84S1_ADDR                      0x126U
#define CSR_SEQUENCEREG0B84S2_ADDR                      0x127U
#define CSR_SEQUENCEREG0B85S0_ADDR                      0x128U
#define CSR_SEQUENCEREG0B85S1_ADDR                      0x129U
#define CSR_SEQUENCEREG0B85S2_ADDR                      0x12AU
#define CSR_SEQUENCEREG0B86S0_ADDR                      0x12BU
#define CSR_SEQUENCEREG0B86S1_ADDR                      0x12CU
#define CSR_SEQUENCEREG0B86S2_ADDR                      0x12DU
#define CSR_SEQUENCEREG0B87S0_ADDR                      0x12EU
#define CSR_SEQUENCEREG0B87S1_ADDR                      0x12FU
#define CSR_SEQUENCEREG0B87S2_ADDR                      0x130U
#define CSR_SEQUENCEREG0B88S0_ADDR                      0x131U
#define CSR_SEQUENCEREG0B88S1_ADDR                      0x132U
#define CSR_SEQUENCEREG0B88S2_ADDR                      0x133U
#define CSR_SEQUENCEREG0B89S0_ADDR                      0x134U
#define CSR_SEQUENCEREG0B89S1_ADDR                      0x135U
#define CSR_SEQUENCEREG0B89S2_ADDR                      0x136U
#define CSR_SEQUENCEREG0B90S0_ADDR                      0x137U
#define CSR_SEQUENCEREG0B90S1_ADDR                      0x138U
#define CSR_SEQUENCEREG0B90S2_ADDR                      0x139U
#define CSR_SEQUENCEREG0B91S0_ADDR                      0x13AU
#define CSR_SEQUENCEREG0B91S1_ADDR                      0x13BU
#define CSR_SEQUENCEREG0B91S2_ADDR                      0x13CU
#define CSR_SEQUENCEREG0B92S0_ADDR                      0x13DU
#define CSR_SEQUENCEREG0B92S1_ADDR                      0x13EU
#define CSR_SEQUENCEREG0B92S2_ADDR                      0x13FU
#define CSR_SEQUENCEREG0B93S0_ADDR                      0x140U
#define CSR_SEQUENCEREG0B93S1_ADDR                      0x141U
#define CSR_SEQUENCEREG0B93S2_ADDR                      0x142U
#define CSR_SEQUENCEREG0B94S0_ADDR                      0x143U
#define CSR_SEQUENCEREG0B94S1_ADDR                      0x144U
#define CSR_SEQUENCEREG0B94S2_ADDR                      0x145U
#define CSR_SEQUENCEREG0B95S0_ADDR                      0x146U
#define CSR_SEQUENCEREG0B95S1_ADDR                      0x147U
#define CSR_SEQUENCEREG0B95S2_ADDR                      0x148U
#define CSR_SEQUENCEREG0B96S0_ADDR                      0x149U
#define CSR_SEQUENCEREG0B96S1_ADDR                      0x14AU
#define CSR_SEQUENCEREG0B96S2_ADDR                      0x14BU
#define CSR_SEQUENCEREG0B97S0_ADDR                      0x14CU
#define CSR_SEQUENCEREG0B97S1_ADDR                      0x14DU
#define CSR_SEQUENCEREG0B97S2_ADDR                      0x14EU
#define CSR_SEQUENCEREG0B98S0_ADDR                      0x14FU
#define CSR_SEQUENCEREG0B98S1_ADDR                      0x150U
#define CSR_SEQUENCEREG0B98S2_ADDR                      0x151U
#define CSR_SEQUENCEREG0B99S0_ADDR                      0x152U
#define CSR_SEQUENCEREG0B99S1_ADDR                      0x153U
#define CSR_SEQUENCEREG0B99S2_ADDR                      0x154U
#define CSR_SEQUENCEREG0B100S0_ADDR                     0x155U
#define CSR_SEQUENCEREG0B100S1_ADDR                     0x156U
#define CSR_SEQUENCEREG0B100S2_ADDR                     0x157U
#define CSR_SEQUENCEREG0B101S0_ADDR                     0x158U
#define CSR_SEQUENCEREG0B101S1_ADDR                     0x159U
#define CSR_SEQUENCEREG0B101S2_ADDR                     0x15AU
#define CSR_SEQUENCEREG0B102S0_ADDR                     0x15BU
#define CSR_SEQUENCEREG0B102S1_ADDR                     0x15CU
#define CSR_SEQUENCEREG0B102S2_ADDR                     0x15DU
#define CSR_SEQUENCEREG0B103S0_ADDR                     0x15EU
#define CSR_SEQUENCEREG0B103S1_ADDR                     0x15FU
#define CSR_SEQUENCEREG0B103S2_ADDR                     0x160U
#define CSR_SEQUENCEREG0B104S0_ADDR                     0x161U
#define CSR_SEQUENCEREG0B104S1_ADDR                     0x162U
#define CSR_SEQUENCEREG0B104S2_ADDR                     0x163U
#define CSR_SEQUENCEREG0B105S0_ADDR                     0x164U
#define CSR_SEQUENCEREG0B105S1_ADDR                     0x165U
#define CSR_SEQUENCEREG0B105S2_ADDR                     0x166U
#define CSR_SEQUENCEREG0B106S0_ADDR                     0x167U
#define CSR_SEQUENCEREG0B106S1_ADDR                     0x168U
#define CSR_SEQUENCEREG0B106S2_ADDR                     0x169U
#define CSR_SEQUENCEREG0B107S0_ADDR                     0x16AU
#define CSR_SEQUENCEREG0B107S1_ADDR                     0x16BU
#define CSR_SEQUENCEREG0B107S2_ADDR                     0x16CU
#define CSR_SEQUENCEREG0B108S0_ADDR                     0x16DU
#define CSR_SEQUENCEREG0B108S1_ADDR                     0x16EU
#define CSR_SEQUENCEREG0B108S2_ADDR                     0x16FU
#define CSR_SEQUENCEREG0B109S0_ADDR                     0x170U
#define CSR_SEQUENCEREG0B109S1_ADDR                     0x171U
#define CSR_SEQUENCEREG0B109S2_ADDR                     0x172U
#define CSR_SEQUENCEREG0B110S0_ADDR                     0x173U
#define CSR_SEQUENCEREG0B110S1_ADDR                     0x174U
#define CSR_SEQUENCEREG0B110S2_ADDR                     0x175U
#define CSR_SEQUENCEREG0B111S0_ADDR                     0x176U
#define CSR_SEQUENCEREG0B111S1_ADDR                     0x177U
#define CSR_SEQUENCEREG0B111S2_ADDR                     0x178U
#define CSR_SEQUENCEREG0B112S0_ADDR                     0x179U
#define CSR_SEQUENCEREG0B112S1_ADDR                     0x17AU
#define CSR_SEQUENCEREG0B112S2_ADDR                     0x17BU
#define CSR_SEQUENCEREG0B113S0_ADDR                     0x17CU
#define CSR_SEQUENCEREG0B113S1_ADDR                     0x17DU
#define CSR_SEQUENCEREG0B113S2_ADDR                     0x17EU
#define CSR_SEQUENCEREG0B114S0_ADDR                     0x17FU
#define CSR_SEQUENCEREG0B114S1_ADDR                     0x180U
#define CSR_SEQUENCEREG0B114S2_ADDR                     0x181U
#define CSR_SEQUENCEREG0B115S0_ADDR                     0x182U
#define CSR_SEQUENCEREG0B115S1_ADDR                     0x183U
#define CSR_SEQUENCEREG0B115S2_ADDR                     0x184U
#define CSR_SEQUENCEREG0B116S0_ADDR                     0x185U
#define CSR_SEQUENCEREG0B116S1_ADDR                     0x186U
#define CSR_SEQUENCEREG0B116S2_ADDR                     0x187U
#define CSR_SEQUENCEREG0B117S0_ADDR                     0x188U
#define CSR_SEQUENCEREG0B117S1_ADDR                     0x189U
#define CSR_SEQUENCEREG0B117S2_ADDR                     0x18AU
#define CSR_SEQUENCEREG0B118S0_ADDR                     0x18BU
#define CSR_SEQUENCEREG0B118S1_ADDR                     0x18CU
#define CSR_SEQUENCEREG0B118S2_ADDR                     0x18DU
#define CSR_SEQUENCEREG0B119S0_ADDR                     0x18EU
#define CSR_SEQUENCEREG0B119S1_ADDR                     0x18FU
#define CSR_SEQUENCEREG0B119S2_ADDR                     0x190U
#define CSR_SEQUENCEREG0B120S0_ADDR                     0x191U
#define CSR_SEQUENCEREG0B120S1_ADDR                     0x192U
#define CSR_SEQUENCEREG0B120S2_ADDR                     0x193U
#define CSR_SEQUENCEREG0B121S0_ADDR                     0x194U
#define CSR_SEQUENCEREG0B121S1_ADDR                     0x195U
#define CSR_SEQUENCEREG0B121S2_ADDR                     0x196U
#define CSR_SEQ0BGPR1_ADDR                              0x201U
#define CSR_SEQ0BGPR2_ADDR                              0x202U
#define CSR_SEQ0BGPR3_ADDR                              0x203U
#define CSR_SEQ0BGPR4_ADDR                              0x204U
#define CSR_SEQ0BGPR5_ADDR                              0x205U
#define CSR_SEQ0BGPR6_ADDR                              0x206U
#define CSR_SEQ0BGPR7_ADDR                              0x207U
#define CSR_SEQ0BGPR8_ADDR                              0x208U
#define CSR_SEQ0BFIXEDADDRBITS_ADDR                     0x2FFU

/* DRTUB0 register offsets */
#define CSR_DCTSHADOWREGS_ADDR                          0x4U
#define CSR_DCTWRITEONLYSHADOW_ADDR                     0x30U
#define CSR_UCTWRITEONLY_ADDR                           0x32U
#define CSR_UCTWRITEPROT_ADDR                           0x33U
#define CSR_UCTDATWRITEONLY_ADDR                        0x34U
#define CSR_UCTDATWRITEPROT_ADDR                        0x35U
#define CSR_UCTLERR_ADDR                                0x36U
#define CSR_UCCLKHCLKENABLES_ADDR                       0x80U
#define CSR_CURPSTATE0B_ADDR                            0x81U
#define CSR_CLRWAKEUPSTICKY_ADDR                        0x95U
#define CSR_WAKEUPMASK_ADDR                             0x96U
#define CSR_CUSTPUBREV_ADDR                             0xEDU
#define CSR_PUBREV_ADDR                                 0xEEU

/* APBONLY0 register offsets */
#define CSR_MICROCONTMUXSEL_ADDR                        0x0U
#define CSR_UCTSHADOWREGS_ADDR                          0x4U
#define CSR_DCTWRITEONLY_ADDR                           0x30U
#define CSR_DCTWRITEPROT_ADDR                           0x31U
#define CSR_UCTWRITEONLYSHADOW_ADDR                     0x32U
#define CSR_UCTDATWRITEONLYSHADOW_ADDR                  0x34U
#define CSR_NEVERGATECSRCLOCK_ADDR                      0x35U
#define CSR_DFICFGRDDATAVALIDTICKS_ADDR                 0x37U
#define CSR_MICRORESET_ADDR                             0x99U
#define CSR_SEQUENCEROVERRIDE_ADDR                      0xE7U
#define CSR_DFIINITCOMPLETESHADOW_ADDR                  0xFAU

/* ANIBx register bit fields */
/* CSR_MTESTMUXSEL */
#define CSR_MTESTMUXSEL_LSB                             0
#define CSR_MTESTMUXSEL_MASK                            GENMASK_32(5, 0)
/* CSR_AFORCEDRVCONT */
#define CSR_AFORCEDRVCONT_LSB                           0
#define CSR_AFORCEDRVCONT_MASK                          GENMASK_32(3, 0)
/* CSR_AFORCETRICONT */
#define CSR_AFORCETRICONT_LSB                           0
#define CSR_AFORCETRICONT_MASK                          GENMASK_32(3, 0)
/* CSR_ATXIMPEDANCE */
#define CSR_ATXIMPEDANCE_LSB                            0
#define CSR_ATXIMPEDANCE_MASK                           GENMASK_32(9, 0)
#define CSR_ADRVSTRENP_LSB                              0
#define CSR_ADRVSTRENP_MASK                             GENMASK_32(4, 0)
#define CSR_ADRVSTRENN_LSB                              5
#define CSR_ADRVSTRENN_MASK                             GENMASK_32(9, 5)
/* CSR_ATESTPRBSERR */
#define CSR_ATESTPRBSERR_LSB                            0
#define CSR_ATESTPRBSERR_MASK                           GENMASK_32(3, 0)
/* CSR_ATXSLEWRATE */
#define CSR_ATXSLEWRATE_LSB                             0
#define CSR_ATXSLEWRATE_MASK                            GENMASK_32(10, 0)
#define CSR_ATXPREP_LSB                                 0
#define CSR_ATXPREP_MASK                                GENMASK_32(3, 0)
#define CSR_ATXPREN_LSB                                 4
#define CSR_ATXPREN_MASK                                GENMASK_32(7, 4)
#define CSR_ATXPREDRVMODE_LSB                           8
#define CSR_ATXPREDRVMODE_MASK                          GENMASK_32(10, 8)
/* CSR_ATESTPRBSERRCNT */
#define CSR_ATESTPRBSERRCNT_LSB                         0
#define CSR_ATESTPRBSERRCNT_MASK                        GENMASK_32(15, 0)
/* CSR_ATXDLY */
#define CSR_ATXDLY_LSB                                  0
#define CSR_ATXDLY_MASK                                 GENMASK_32(6, 0)

/* DBYTEx register bit fields */
/* CSR_DBYTEMISCMODE */
#define CSR_DBYTEMISCMODE_LSB                           2
#define CSR_DBYTEMISCMODE_MASK                          BIT(2)
#define CSR_DBYTEDISABLE_LSB                            2
#define CSR_DBYTEDISABLE_MASK                           BIT(2)
/* CSR_TSMBYTE0 */
#define CSR_TSMBYTE0_LSB                                0
#define CSR_TSMBYTE0_MASK                               GENMASK_32(15, 0)
#define CSR_PERPHTRAINEN_LSB                            0
#define CSR_PERPHTRAINEN_MASK                           BIT(0)
#define CSR_EYEINC_LSB                                  1
#define CSR_EYEINC_MASK                                 BIT(1)
#define CSR_EDGEINC_LSB                                 2
#define CSR_EDGEINC_MASK                                BIT(2)
#define CSR_EDGEEYEMXSEL_LSB                            3
#define CSR_EDGEEYEMXSEL_MASK                           BIT(3)
#define CSR_TSMBYTE0RSVD_LSB                            4
#define CSR_TSMBYTE0RSVD_MASK                           GENMASK_32(5, 4)
#define CSR_DIMMBROADINC_LSB                            6
#define CSR_DIMMBROADINC_MASK                           BIT(6)
#define CSR_DIMMINC_LSB                                 7
#define CSR_DIMMINC_MASK                                GENMASK_32(8, 7)
#define CSR_COARSEINC_LSB                               9
#define CSR_COARSEINC_MASK                              BIT(9)
#define CSR_DELAYINC_LSB                                10
#define CSR_DELAYINC_MASK                               BIT(10)
#define CSR_RXINC_LSB                                   11
#define CSR_RXINC_MASK                                  BIT(11)
#define CSR_RXPERTRAIN_LSB                              12
#define CSR_RXPERTRAIN_MASK                             BIT(12)
#define CSR_TXPERTRAIN_LSB                              13
#define CSR_TXPERTRAIN_MASK                             BIT(13)
#define CSR_DMTRAIN_LSB                                 14
#define CSR_DMTRAIN_MASK                                BIT(14)
#define CSR_WRLEVTRAIN_LSB                              15
#define CSR_WRLEVTRAIN_MASK                             BIT(15)
/* CSR_TRAININGPARAM */
#define CSR_TRAININGPARAM_LSB                           0
#define CSR_TRAININGPARAM_MASK                          GENMASK_32(15, 0)
#define CSR_ENDYNRATEREDUCTION_LSB                      0
#define CSR_ENDYNRATEREDUCTION_MASK                     BIT(0)
#define CSR_TRAININGPARAM01RSVD_LSB                     1
#define CSR_TRAININGPARAM01RSVD_MASK                    BIT(1)
#define CSR_TRAINENRXCLK_LSB                            2
#define CSR_TRAINENRXCLK_MASK                           BIT(2)
#define CSR_TRAINENRXEN_LSB                             3
#define CSR_TRAINENRXEN_MASK                            BIT(3)
#define CSR_TRAINENTXDQS_LSB                            4
#define CSR_TRAINENTXDQS_MASK                           BIT(4)
#define CSR_TRAINENTXDQ_LSB                             5
#define CSR_TRAINENTXDQ_MASK                            BIT(5)
#define CSR_TRAINENVREFDAC1_LSB                         6
#define CSR_TRAINENVREFDAC1_MASK                        BIT(6)
#define CSR_TRAINENVREFDAC0_LSB                         7
#define CSR_TRAINENVREFDAC0_MASK                        BIT(7)
#define CSR_TRAINENRXPBD_LSB                            8
#define CSR_TRAINENRXPBD_MASK                           BIT(8)
#define CSR_ROLLINTOCOARSE_LSB                          9
#define CSR_ROLLINTOCOARSE_MASK                         BIT(9)
#define CSR_TRAINUSINGNATIVEDDLCNTL_LSB                 10
#define CSR_TRAINUSINGNATIVEDDLCNTL_MASK                BIT(10)
#define CSR_TRAININGPARAM11RSVD_LSB                     11
#define CSR_TRAININGPARAM11RSVD_MASK                    BIT(11)
#define CSR_TRAININGPARAM12RSVD_LSB                     12
#define CSR_TRAININGPARAM12RSVD_MASK                    BIT(12)
#define CSR_INCDECRATE_LSB                              13
#define CSR_INCDECRATE_MASK                             GENMASK_32(15, 13)
/* CSR_USEDQSENREPLICA */
#define CSR_USEDQSENREPLICA_LSB                         0
#define CSR_USEDQSENREPLICA_MASK                        BIT(0)
/* CSR_RXTRAINPATTERNENABLE */
#define CSR_RXTRAINPATTERNENABLE_LSB                    0
#define CSR_RXTRAINPATTERNENABLE_MASK                   BIT(0)
/* CSR_TSMBYTE1 */
#define CSR_TSMBYTE1_LSB                                0
#define CSR_TSMBYTE1_MASK                               GENMASK_32(15, 0)
#define CSR_DTSMBDSTP_LSB                               0
#define CSR_DTSMBDSTP_MASK                              GENMASK_32(7, 0)
#define CSR_DTSMGDSTP_LSB                               8
#define CSR_DTSMGDSTP_MASK                              GENMASK_32(15, 8)
/* CSR_TSMBYTE2 */
#define CSR_TSMBYTE2_LSB                                0
#define CSR_TSMBYTE2_MASK                               GENMASK_32(15, 0)
#define CSR_DTSMGDBAR_LSB                               0
#define CSR_DTSMGDBAR_MASK                              GENMASK_32(15, 0)
/* CSR_TSMBYTE3 */
#define CSR_TSMBYTE3_LSB                                0
#define CSR_TSMBYTE3_MASK                               GENMASK_32(8, 0)
#define CSR_DTSMINCDECMODE_LSB                          0
#define CSR_DTSMINCDECMODE_MASK                         BIT(0)
#define CSR_DTSMINCDECCTRL_LSB                          1
#define CSR_DTSMINCDECCTRL_MASK                         BIT(1)
#define CSR_ENBLRXSAMPFLOPS_LSB                         2
#define CSR_ENBLRXSAMPFLOPS_MASK                        BIT(2)
#define CSR_SELRXSAMPFLOPS_LSB                          3
#define CSR_SELRXSAMPFLOPS_MASK                         BIT(3)
#define CSR_SELRXBYBASS_LSB                             4
#define CSR_SELRXBYBASS_MASK                            BIT(4)
#define CSR_DTSMIGNUPDATEACK_LSB                        5
#define CSR_DTSMIGNUPDATEACK_MASK                       BIT(5)
#define CSR_ENABLERXDQASYNC_LSB                         6
#define CSR_ENABLERXDQASYNC_MASK                        BIT(6)
#define CSR_DTSMSTATICCMPR_LSB                          7
#define CSR_DTSMSTATICCMPR_MASK                         BIT(7)
#define CSR_DTSMSTATICCMPRVAL_LSB                       8
#define CSR_DTSMSTATICCMPRVAL_MASK                      BIT(8)
/* CSR_TSMBYTE4 */
#define CSR_TSMBYTE4_LSB                                0
#define CSR_TSMBYTE4_MASK                               GENMASK_32(3, 0)
#define CSR_DTSMINCDECPW_LSB                            0
#define CSR_DTSMINCDECPW_MASK                           GENMASK_32(3, 0)
/* CSR_TESTMODECONFIG */
#define CSR_TESTMODECONFIG_LSB                          0
#define CSR_TESTMODECONFIG_MASK                         GENMASK_32(9, 0)
#define CSR_LOOPBACKEN_LSB                              0
#define CSR_LOOPBACKEN_MASK                             BIT(0)
#define CSR_RSVDTESTDLLEN_LSB                           1
#define CSR_RSVDTESTDLLEN_MASK                          BIT(1)
#define CSR_RSVDTWOTCKTXDQSPRE_LSB                      2
#define CSR_RSVDTWOTCKTXDQSPRE_MASK                     BIT(2)
#define CSR_TESTMODERSVD_LSB                            3
#define CSR_TESTMODERSVD_MASK                           GENMASK_32(7, 3)
#define CSR_LOOPBACKDISDQSTRI_LSB                       8
#define CSR_LOOPBACKDISDQSTRI_MASK                      BIT(8)
#define CSR_RSVDDISTXDQEQPREAMBLE_LSB                   9
#define CSR_RSVDDISTXDQEQPREAMBLE_MASK                  BIT(9)
/* CSR_TSMBYTE5 */
#define CSR_TSMBYTE5_LSB                                0
#define CSR_TSMBYTE5_MASK                               GENMASK_32(15, 0)
#define CSR_DTSMBDBAR_LSB                               0
#define CSR_DTSMBDBAR_MASK                              GENMASK_32(15, 0)
/* MTESTMUXSEL already defined in ANIBx section */
/* CSR_DTSMTRAINMODECTRL */
#define CSR_DTSMTRAINMODECTRL_LSB                       0
#define CSR_DTSMTRAINMODECTRL_MASK                      GENMASK_32(3, 0)
#define CSR_DTSMSOELANEMODE_LSB                         0
#define CSR_DTSMSOELANEMODE_MASK                        GENMASK_32(1, 0)
#define CSR_DTSMBYTEERRANDMODE_LSB                      2
#define CSR_DTSMBYTEERRANDMODE_MASK                     BIT(2)
#define CSR_DTSMNIBERRMODE_LSB                          3
#define CSR_DTSMNIBERRMODE_MASK                         BIT(3)
/* CSR_DFIMRL */
#define CSR_DFIMRL_LSB                                  0
#define CSR_DFIMRL_MASK                                 GENMASK_32(4, 0)
/* CSR_ASYNCDBYTEMODE */
#define CSR_ASYNCDBYTEMODE_LSB                          0
#define CSR_ASYNCDBYTEMODE_MASK                         GENMASK_32(8, 0)
/* CSR_ASYNCDBYTETXEN */
#define CSR_ASYNCDBYTETXEN_LSB                          0
#define CSR_ASYNCDBYTETXEN_MASK                         GENMASK_32(11, 0)
/* CSR_ASYNCDBYTETXDATA */
#define CSR_ASYNCDBYTETXDATA_LSB                        0
#define CSR_ASYNCDBYTETXDATA_MASK                       GENMASK_32(11, 0)
/* CSR_ASYNCDBYTERXDATA */
#define CSR_ASYNCDBYTERXDATA_LSB                        0
#define CSR_ASYNCDBYTERXDATA_MASK                       GENMASK_32(11, 0)
/* CSR_VREFDAC1 */
#define CSR_VREFDAC1_LSB                                0
#define CSR_VREFDAC1_MASK                               GENMASK_32(6, 0)
/* CSR_TRAININGCNTR */
#define CSR_TRAININGCNTR_LSB                            0
#define CSR_TRAININGCNTR_MASK                           GENMASK_32(15, 0)
#define CSR_TRAININGCNTRFINE_LSB                        0
#define CSR_TRAININGCNTRFINE_MASK                       GENMASK_32(9, 0)
#define CSR_TRAININGCNTRCOARSE_LSB                      10
#define CSR_TRAININGCNTRCOARSE_MASK                     GENMASK_32(15, 10)
/* CSR_VREFDAC0 */
#define CSR_VREFDAC0_LSB                                0
#define CSR_VREFDAC0_MASK                               GENMASK_32(6, 0)
/* CSR_TXIMPEDANCECTRL0 */
#define CSR_TXIMPEDANCECTRL0_LSB                        0
#define CSR_TXIMPEDANCECTRL0_MASK                       GENMASK_32(11, 0)
#define CSR_DRVSTRENDQP_LSB                             0
#define CSR_DRVSTRENDQP_MASK                            GENMASK_32(5, 0)
#define CSR_DRVSTRENDQN_LSB                             6
#define CSR_DRVSTRENDQN_MASK                            GENMASK_32(11, 6)
/* CSR_DQDQSRCVCNTRL */
#define CSR_DQDQSRCVCNTRL_LSB                           0
#define CSR_DQDQSRCVCNTRL_MASK                          GENMASK_32(15, 0)
#define CSR_SELANALOGVREF_LSB                           0
#define CSR_SELANALOGVREF_MASK                          BIT(0)
#define CSR_EXTVREFRANGE_LSB                            1
#define CSR_EXTVREFRANGE_MASK                           BIT(1)
#define CSR_DFECTRL_LSB                                 2
#define CSR_DFECTRL_MASK                                GENMASK_32(3, 2)
#define CSR_MAJORMODEDBYTE_LSB                          4
#define CSR_MAJORMODEDBYTE_MASK                         GENMASK_32(6, 4)
#define CSR_GAINCURRADJ_LSB                             7
#define CSR_GAINCURRADJ_MASK                            GENMASK_32(11, 7)
#define CSR_RESERVED_LSB                                12
#define CSR_RESERVED_MASK                               GENMASK_32(15, 12)
/* CSR_TXEQUALIZATIONMODE */
#define CSR_TXEQUALIZATIONMODE_LSB                      0
#define CSR_TXEQUALIZATIONMODE_MASK                     GENMASK_32(1, 0)
#define CSR_TXEQMODE_LSB                                0
#define CSR_TXEQMODE_MASK                               GENMASK_32(1, 0)
/* CSR_TXIMPEDANCECTRL1 */
#define CSR_TXIMPEDANCECTRL1_LSB                        0
#define CSR_TXIMPEDANCECTRL1_MASK                       GENMASK_32(11, 0)
#define CSR_DRVSTRENFSDQP_LSB                           0
#define CSR_DRVSTRENFSDQP_MASK                          GENMASK_32(5, 0)
#define CSR_DRVSTRENFSDQN_LSB                           6
#define CSR_DRVSTRENFSDQN_MASK                          GENMASK_32(11, 6)
/* CSR_DQDQSRCVCNTRL1 */
#define CSR_DQDQSRCVCNTRL1_LSB                          0
#define CSR_DQDQSRCVCNTRL1_MASK                         GENMASK_32(11, 0)
#define CSR_POWERDOWNRCVR_LSB                           0
#define CSR_POWERDOWNRCVR_MASK                          GENMASK_32(8, 0)
#define CSR_POWERDOWNRCVRDQS_LSB                        9
#define CSR_POWERDOWNRCVRDQS_MASK                       BIT(9)
#define CSR_RXPADSTANDBYEN_LSB                          10
#define CSR_RXPADSTANDBYEN_MASK                         BIT(10)
#define CSR_ENLPREQPDR_LSB                              11
#define CSR_ENLPREQPDR_MASK                             BIT(11)
/* CSR_TXIMPEDANCECTRL2 */
#define CSR_TXIMPEDANCECTRL2_LSB                        0
#define CSR_TXIMPEDANCECTRL2_MASK                       GENMASK_32(11, 0)
#define CSR_DRVSTRENEQHIDQP_LSB                         0
#define CSR_DRVSTRENEQHIDQP_MASK                        GENMASK_32(5, 0)
#define CSR_DRVSTRENEQLODQN_LSB                         6
#define CSR_DRVSTRENEQLODQN_MASK                        GENMASK_32(11, 6)
/* CSR_DQDQSRCVCNTRL2 */
#define CSR_DQDQSRCVCNTRL2_LSB                          0
#define CSR_DQDQSRCVCNTRL2_MASK                         BIT(0)
#define CSR_ENRXAGRESSIVEPDR_LSB                        0
#define CSR_ENRXAGRESSIVEPDR_MASK                       BIT(0)
/* CSR_TXODTDRVSTREN */
#define CSR_TXODTDRVSTREN_LSB                           0
#define CSR_TXODTDRVSTREN_MASK                          GENMASK_32(11, 0)
#define CSR_ODTSTRENP_LSB                               0
#define CSR_ODTSTRENP_MASK                              GENMASK_32(5, 0)
#define CSR_ODTSTRENN_LSB                               6
#define CSR_ODTSTRENN_MASK                              GENMASK_32(11, 6)
/* CSR_RXFIFOCHECKSTATUS */
#define CSR_RXFIFOCHECKSTATUS_LSB                       0
#define CSR_RXFIFOCHECKSTATUS_MASK                      GENMASK_32(1, 0)
#define CSR_RXFIFOLOCERR_LSB                            0
#define CSR_RXFIFOLOCERR_MASK                           BIT(0)
#define CSR_RXFIFOLOCUERR_LSB                           1
#define CSR_RXFIFOLOCUERR_MASK                          BIT(1)
/* CSR_RXFIFOCHECKERRVALUES */
#define CSR_RXFIFOCHECKERRVALUES_LSB                    0
#define CSR_RXFIFOCHECKERRVALUES_MASK                   GENMASK_32(15, 0)
#define CSR_RXFIFORDLOCERRVALUE_LSB                     0
#define CSR_RXFIFORDLOCERRVALUE_MASK                    GENMASK_32(3, 0)
#define CSR_RXFIFOWRLOCERRVALUE_LSB                     4
#define CSR_RXFIFOWRLOCERRVALUE_MASK                    GENMASK_32(7, 4)
#define CSR_RXFIFORDLOCUERRVALUE_LSB                    8
#define CSR_RXFIFORDLOCUERRVALUE_MASK                   GENMASK_32(11, 8)
#define CSR_RXFIFOWRLOCUERRVALUE_LSB                    12
#define CSR_RXFIFOWRLOCUERRVALUE_MASK                   GENMASK_32(15, 12)
/* CSR_RXFIFOINFO */
#define CSR_RXFIFOINFO_LSB                              0
#define CSR_RXFIFOINFO_MASK                             GENMASK_32(15, 0)
#define CSR_RXFIFORDLOC_LSB                             0
#define CSR_RXFIFORDLOC_MASK                            GENMASK_32(3, 0)
#define CSR_RXFIFOWRLOC_LSB                             4
#define CSR_RXFIFOWRLOC_MASK                            GENMASK_32(7, 4)
#define CSR_RXFIFORDLOCU_LSB                            8
#define CSR_RXFIFORDLOCU_MASK                           GENMASK_32(11, 8)
#define CSR_RXFIFOWRLOCU_LSB                            12
#define CSR_RXFIFOWRLOCU_MASK                           GENMASK_32(15, 12)
/* CSR_RXFIFOVISIBILITY */
#define CSR_RXFIFOVISIBILITY_LSB                        0
#define CSR_RXFIFOVISIBILITY_MASK                       GENMASK_32(4, 0)
#define CSR_RXFIFORDPTR_LSB                             0
#define CSR_RXFIFORDPTR_MASK                            GENMASK_32(2, 0)
#define CSR_RXFIFORDPTROVR_LSB                          3
#define CSR_RXFIFORDPTROVR_MASK                         BIT(3)
#define CSR_RXFIFORDEN_LSB                              4
#define CSR_RXFIFORDEN_MASK                             BIT(4)
/* CSR_RXFIFOCONTENTSDQ3210 */
#define CSR_RXFIFOCONTENTSDQ3210_LSB                    0
#define CSR_RXFIFOCONTENTSDQ3210_MASK                   GENMASK_32(15, 0)
/* CSR_RXFIFOCONTENTSDQ7654 */
#define CSR_RXFIFOCONTENTSDQ7654_LSB                    0
#define CSR_RXFIFOCONTENTSDQ7654_MASK                   GENMASK_32(15, 0)
/* CSR_RXFIFOCONTENTSDBI */
#define CSR_RXFIFOCONTENTSDBI_LSB                       0
#define CSR_RXFIFOCONTENTSDBI_MASK                      GENMASK_32(3, 0)
/* CSR_TXSLEWRATE */
#define CSR_TXSLEWRATE_LSB                              0
#define CSR_TXSLEWRATE_MASK                             GENMASK_32(10, 0)
#define CSR_TXPREP_LSB                                  0
#define CSR_TXPREP_MASK                                 GENMASK_32(3, 0)
#define CSR_TXPREN_LSB                                  4
#define CSR_TXPREN_MASK                                 GENMASK_32(7, 4)
#define CSR_TXPREDRVMODE_LSB                            8
#define CSR_TXPREDRVMODE_MASK                           GENMASK_32(10, 8)
/* CSR_TRAININGINCDECDTSMEN */
#define CSR_TRAININGINCDECDTSMEN_LSB                    0
#define CSR_TRAININGINCDECDTSMEN_MASK                   GENMASK_32(8, 0)
/* CSR_RXPBDLYTG0 */
#define CSR_RXPBDLYTG0_LSB                              0
#define CSR_RXPBDLYTG0_MASK                             GENMASK_32(6, 0)
/* CSR_RXPBDLYTG1 */
#define CSR_RXPBDLYTG1_LSB                              0
#define CSR_RXPBDLYTG1_MASK                             GENMASK_32(6, 0)
/* CSR_RXPBDLYTG2 */
#define CSR_RXPBDLYTG2_LSB                              0
#define CSR_RXPBDLYTG2_MASK                             GENMASK_32(6, 0)
/* CSR_RXPBDLYTG3 */
#define CSR_RXPBDLYTG3_LSB                              0
#define CSR_RXPBDLYTG3_MASK                             GENMASK_32(6, 0)
/* CSR_RXENDLYTG0 */
#define CSR_RXENDLYTG0_LSB                              0
#define CSR_RXENDLYTG0_MASK                             GENMASK_32(10, 0)
/* CSR_RXENDLYTG1 */
#define CSR_RXENDLYTG1_LSB                              0
#define CSR_RXENDLYTG1_MASK                             GENMASK_32(10, 0)
/* CSR_RXENDLYTG2 */
#define CSR_RXENDLYTG2_LSB                              0
#define CSR_RXENDLYTG2_MASK                             GENMASK_32(10, 0)
/* CSR_RXENDLYTG3 */
#define CSR_RXENDLYTG3_LSB                              0
#define CSR_RXENDLYTG3_MASK                             GENMASK_32(10, 0)
/* CSR_RXCLKDLYTG0 */
#define CSR_RXCLKDLYTG0_LSB                             0
#define CSR_RXCLKDLYTG0_MASK                            GENMASK_32(5, 0)
/* CSR_RXCLKDLYTG1 */
#define CSR_RXCLKDLYTG1_LSB                             0
#define CSR_RXCLKDLYTG1_MASK                            GENMASK_32(5, 0)
/* CSR_RXCLKDLYTG2 */
#define CSR_RXCLKDLYTG2_LSB                             0
#define CSR_RXCLKDLYTG2_MASK                            GENMASK_32(5, 0)
/* CSR_RXCLKDLYTG3 */
#define CSR_RXCLKDLYTG3_LSB                             0
#define CSR_RXCLKDLYTG3_MASK                            GENMASK_32(5, 0)
/* CSR_RXCLKCDLYTG0 */
#define CSR_RXCLKCDLYTG0_LSB                            0
#define CSR_RXCLKCDLYTG0_MASK                           GENMASK_32(5, 0)
/* CSR_RXCLKCDLYTG1 */
#define CSR_RXCLKCDLYTG1_LSB                            0
#define CSR_RXCLKCDLYTG1_MASK                           GENMASK_32(5, 0)
/* CSR_RXCLKCDLYTG2 */
#define CSR_RXCLKCDLYTG2_LSB                            0
#define CSR_RXCLKCDLYTG2_MASK                           GENMASK_32(5, 0)
/* CSR_RXCLKCDLYTG3 */
#define CSR_RXCLKCDLYTG3_LSB                            0
#define CSR_RXCLKCDLYTG3_MASK                           GENMASK_32(5, 0)
/* CSR_DQ0LNSEL */
#define CSR_DQ0LNSEL_LSB                                0
#define CSR_DQ0LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ1LNSEL */
#define CSR_DQ1LNSEL_LSB                                0
#define CSR_DQ1LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ2LNSEL */
#define CSR_DQ2LNSEL_LSB                                0
#define CSR_DQ2LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ3LNSEL */
#define CSR_DQ3LNSEL_LSB                                0
#define CSR_DQ3LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ4LNSEL */
#define CSR_DQ4LNSEL_LSB                                0
#define CSR_DQ4LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ5LNSEL */
#define CSR_DQ5LNSEL_LSB                                0
#define CSR_DQ5LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ6LNSEL */
#define CSR_DQ6LNSEL_LSB                                0
#define CSR_DQ6LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_DQ7LNSEL */
#define CSR_DQ7LNSEL_LSB                                0
#define CSR_DQ7LNSEL_MASK                               GENMASK_32(2, 0)
/* CSR_PPTCTLSTATIC */
#define CSR_PPTCTLSTATIC_LSB                            0
#define CSR_PPTCTLSTATIC_MASK                           GENMASK_32(11, 0)
#define CSR_PPTENDQS2DQTG0_LSB                          0
#define CSR_PPTENDQS2DQTG0_MASK                         BIT(0)
#define CSR_PPTENDQS2DQTG1_LSB                          1
#define CSR_PPTENDQS2DQTG1_MASK                         BIT(1)
#define CSR_DOCBYTESELTG0_LSB                           2
#define CSR_DOCBYTESELTG0_MASK                          BIT(2)
#define CSR_DOCBYTESELTG1_LSB                           3
#define CSR_DOCBYTESELTG1_MASK                          BIT(3)
#define CSR_PPTINFOSEL_LSB                              4
#define CSR_PPTINFOSEL_MASK                             GENMASK_32(7, 4)
#define CSR_PPTENRXENDLYTG0_LSB                         8
#define CSR_PPTENRXENDLYTG0_MASK                        BIT(8)
#define CSR_PPTENRXENDLYTG1_LSB                         9
#define CSR_PPTENRXENDLYTG1_MASK                        BIT(9)
#define CSR_PPTENRXENBACKOFF_LSB                        10
#define CSR_PPTENRXENBACKOFF_MASK                       GENMASK_32(11, 10)
/* CSR_PPTCTLDYN */
#define CSR_PPTCTLDYN_LSB                               0
#define CSR_PPTCTLDYN_MASK                              GENMASK_32(1, 0)
#define CSR_PPTDQS2DQACTIVE_LSB                         0
#define CSR_PPTDQS2DQACTIVE_MASK                        BIT(0)
#define CSR_PPTENRXENUSEDQSSAMPVAL_LSB                  1
#define CSR_PPTENRXENUSEDQSSAMPVAL_MASK                 BIT(1)
/* CSR_PPTINFO */
#define CSR_PPTINFO_LSB                                 0
#define CSR_PPTINFO_MASK                                GENMASK_32(15, 0)
/* CSR_PPTRXENEVNT */
#define CSR_PPTRXENEVNT_LSB                             0
#define CSR_PPTRXENEVNT_MASK                            GENMASK_32(1, 0)
#define CSR_PPTRXENINIT_LSB                             0
#define CSR_PPTRXENINIT_MASK                            BIT(0)
#define CSR_PPTRXENMHUI_LSB                             1
#define CSR_PPTRXENMHUI_MASK                            BIT(1)
/* CSR_PPTDQSCNTINVTRNTG0 */
#define CSR_PPTDQSCNTINVTRNTG0_LSB                      0
#define CSR_PPTDQSCNTINVTRNTG0_MASK                     GENMASK_32(15, 0)
/* CSR_PPTDQSCNTINVTRNTG1 */
#define CSR_PPTDQSCNTINVTRNTG1_LSB                      0
#define CSR_PPTDQSCNTINVTRNTG1_MASK                     GENMASK_32(15, 0)
/* CSR_DTSMBLANKINGCTRL */
#define CSR_DTSMBLANKINGCTRL_LSB                        0
#define CSR_DTSMBLANKINGCTRL_MASK                       GENMASK_32(9, 0)
#define CSR_DTSMBLANK_LSB                               0
#define CSR_DTSMBLANK_MASK                              GENMASK_32(9, 0)
/* CSR_TSM0 */
#define CSR_TSM0_LSB                                    0
#define CSR_TSM0_MASK                                   GENMASK_32(13, 0)
#define CSR_DTSMENB_LSB                                 0
#define CSR_DTSMENB_MASK                                BIT(0)
#define CSR_DTSMDIR_LSB                                 1
#define CSR_DTSMDIR_MASK                                BIT(1)
#define CSR_DTSMIGNFRST_LSB                             2
#define CSR_DTSMIGNFRST_MASK                            BIT(2)
#define CSR_DTSMODDPHASE_LSB                            3
#define CSR_DTSMODDPHASE_MASK                           BIT(3)
#define CSR_DTSMFLTPRE_LSB                              4
#define CSR_DTSMFLTPRE_MASK                             BIT(4)
#define CSR_DTSMFLTCUR_LSB                              5
#define CSR_DTSMFLTCUR_MASK                             BIT(5)
#define CSR_DTSMFLTNXT_LSB                              6
#define CSR_DTSMFLTNXT_MASK                             BIT(6)
#define CSR_DTSMFLTVAL_LSB                              7
#define CSR_DTSMFLTVAL_MASK                             GENMASK_32(9, 7)
#define CSR_DTSMMSKBIT_LSB                              10
#define CSR_DTSMMSKBIT_MASK                             GENMASK_32(13, 10)
/* CSR_TSM1 */
#define CSR_TSM1_LSB                                    0
#define CSR_TSM1_MASK                                   GENMASK_32(15, 0)
#define CSR_DTSMERRCNT_LSB                              0
#define CSR_DTSMERRCNT_MASK                             GENMASK_32(15, 0)
/* CSR_TSM2 */
#define CSR_TSM2_LSB                                    0
#define CSR_TSM2_MASK                                   BIT(0)
#define CSR_DTSMDISERRCHK_LSB                           0
#define CSR_DTSMDISERRCHK_MASK                          BIT(0)
/* CSR_TSM3 */
#define CSR_TSM3_LSB                                    0
#define CSR_TSM3_MASK                                   GENMASK_32(9, 0)
#define CSR_DTSMCLRERRCNTMSK_LSB                        0
#define CSR_DTSMCLRERRCNTMSK_MASK                       GENMASK_32(8, 0)
#define CSR_DTSMCLRERRCNT_LSB                           9
#define CSR_DTSMCLRERRCNT_MASK                          BIT(9)
/* CSR_TXCHKDATASELECTS */
#define CSR_TXCHKDATASELECTS_LSB                        0
#define CSR_TXCHKDATASELECTS_MASK                       GENMASK_32(1, 0)
#define CSR_SELCHKTOTX_LSB                              0
#define CSR_SELCHKTOTX_MASK                             BIT(0)
#define CSR_SELTXTOCHK_LSB                              1
#define CSR_SELTXTOCHK_MASK                             BIT(1)
/* CSR_DTSMUPTHLDXINGIND */
#define CSR_DTSMUPTHLDXINGIND_LSB                       0
#define CSR_DTSMUPTHLDXINGIND_MASK                      GENMASK_32(8, 0)
/* CSR_DTSMLOTHLDXINGIND */
#define CSR_DTSMLOTHLDXINGIND_LSB                       0
#define CSR_DTSMLOTHLDXINGIND_MASK                      GENMASK_32(8, 0)
/* CSR_DBYTEALLDTSMCTRL0 */
#define CSR_DBYTEALLDTSMCTRL0_LSB                       0
#define CSR_DBYTEALLDTSMCTRL0_MASK                      GENMASK_32(8, 0)
#define CSR_DTSMINHIBDTSM_LSB                           0
#define CSR_DTSMINHIBDTSM_MASK                          GENMASK_32(8, 0)
/* CSR_DBYTEALLDTSMCTRL1 */
#define CSR_DBYTEALLDTSMCTRL1_LSB                       0
#define CSR_DBYTEALLDTSMCTRL1_MASK                      GENMASK_32(8, 0)
#define CSR_DTSMGATEINC_LSB                             0
#define CSR_DTSMGATEINC_MASK                            GENMASK_32(8, 0)
/* CSR_DBYTEALLDTSMCTRL2 */
#define CSR_DBYTEALLDTSMCTRL2_LSB                       0
#define CSR_DBYTEALLDTSMCTRL2_MASK                      GENMASK_32(8, 0)
#define CSR_DTSMGATEDEC_LSB                             0
#define CSR_DTSMGATEDEC_MASK                            GENMASK_32(8, 0)
/* CSR_TXDQDLYTG0 */
#define CSR_TXDQDLYTG0_LSB                              0
#define CSR_TXDQDLYTG0_MASK                             GENMASK_32(8, 0)
/* CSR_TXDQDLYTG1 */
#define CSR_TXDQDLYTG1_LSB                              0
#define CSR_TXDQDLYTG1_MASK                             GENMASK_32(8, 0)
/* CSR_TXDQDLYTG2 */
#define CSR_TXDQDLYTG2_LSB                              0
#define CSR_TXDQDLYTG2_MASK                             GENMASK_32(8, 0)
/* CSR_TXDQDLYTG3 */
#define CSR_TXDQDLYTG3_LSB                              0
#define CSR_TXDQDLYTG3_MASK                             GENMASK_32(8, 0)
/* CSR_TXDQSDLYTG0 */
#define CSR_TXDQSDLYTG0_LSB                             0
#define CSR_TXDQSDLYTG0_MASK                            GENMASK_32(9, 0)
/* CSR_TXDQSDLYTG1 */
#define CSR_TXDQSDLYTG1_LSB                             0
#define CSR_TXDQSDLYTG1_MASK                            GENMASK_32(9, 0)
/* CSR_TXDQSDLYTG2 */
#define CSR_TXDQSDLYTG2_LSB                             0
#define CSR_TXDQSDLYTG2_MASK                            GENMASK_32(9, 0)
/* CSR_TXDQSDLYTG3 */
#define CSR_TXDQSDLYTG3_LSB                             0
#define CSR_TXDQSDLYTG3_MASK                            GENMASK_32(9, 0)
/* CSR_DXLCDLSTATUS_ADDR */
#define CSR_DXLCDLSTATUS_LSB                            0
#define CSR_DXLCDLSTATUS_MASK                           GENMASK_32(13, 0)
#define CSR_DXLCDLFINESNAPVAL_LSB                       0
#define CSR_DXLCDLFINESNAPVAL_MASK                      GENMASK_32(9, 0)
#define CSR_DXLCDLPHDSNAPVAL_LSB                        10
#define CSR_DXLCDLPHDSNAPVAL_MASK                       BIT(10)
#define CSR_DXLCDLSTICKYLOCK_LSB                        11
#define CSR_DXLCDLSTICKYLOCK_MASK                       BIT(11)
#define CSR_DXLCDLSTICKYUNLOCK_LSB                      12
#define CSR_DXLCDLSTICKYUNLOCK_MASK                     BIT(12)
#define CSR_DXLCDLLIVELOCK_LSB                          13
#define CSR_DXLCDLLIVELOCK_MASK                         BIT(13)

/* MASTER0 register offsets */
/* CSR_RXFIFOINIT */
#define CSR_RXFIFOINIT_LSB                              0
#define CSR_RXFIFOINIT_MASK                             GENMASK_32(1, 0)
#define CSR_RXFIFOINITPTR_LSB                           0
#define CSR_RXFIFOINITPTR_MASK                          BIT(0)
#define CSR_INHIBITRXFIFORD_LSB                         1
#define CSR_INHIBITRXFIFORD_MASK                        BIT(1)
/* CSR_FORCECLKDISABLE */
#define CSR_FORCECLKDISABLE_LSB                         0
#define CSR_FORCECLKDISABLE_MASK                        GENMASK_32(3, 0)
/* CSR_CLOCKINGCTRL */
#define CSR_CLOCKINGCTRL_LSB                            0
#define CSR_CLOCKINGCTRL_MASK                           GENMASK_32(1, 0)
#define CSR_PCLKENASYNCCTRL_LSB                         0
#define CSR_PCLKENASYNCCTRL_MASK                        BIT(0)
#define CSR_DLLTRACKENCTRL_LSB                          1
#define CSR_DLLTRACKENCTRL_MASK                         BIT(1)
/* CSR_FORCEINTERNALUPDATE */
#define CSR_FORCEINTERNALUPDATE_LSB                     0
#define CSR_FORCEINTERNALUPDATE_MASK                    BIT(0)
/* CSR_PHYCONFIG */
#define CSR_PHYCONFIG_LSB                               0
#define CSR_PHYCONFIG_MASK                              GENMASK_32(9, 0)
#define CSR_PHYCONFIGANIBS_LSB                          0
#define CSR_PHYCONFIGANIBS_MASK                         GENMASK_32(3, 0)
#define CSR_PHYCONFIGDBYTES_LSB                         4
#define CSR_PHYCONFIGDBYTES_MASK                        GENMASK_32(7, 4)
#define CSR_PHYCONFIGDFI_LSB                            8
#define CSR_PHYCONFIGDFI_MASK                           GENMASK_32(9, 8)
/* CSR_PGCR */
#define CSR_PGCR_LSB                                    0
#define CSR_PGCR_MASK                                   BIT(0)
#define CSR_RXCLKRISEFALLMODE_LSB                       0
#define CSR_RXCLKRISEFALLMODE_MASK                      BIT(0)
/* CSR_TESTBUMPCNTRL1 */
#define CSR_TESTBUMPCNTRL1_LSB                          0
#define CSR_TESTBUMPCNTRL1_MASK                         GENMASK_32(15, 0)
#define CSR_TESTMAJORMODE_LSB                           0
#define CSR_TESTMAJORMODE_MASK                          GENMASK_32(2, 0)
#define CSR_TESTBIASBYPASSEN_LSB                        3
#define CSR_TESTBIASBYPASSEN_MASK                       BIT(3)
#define CSR_TESTANALOGOUTCTRL_LSB                       4
#define CSR_TESTANALOGOUTCTRL_MASK                      GENMASK_32(7, 4)
#define CSR_TESTGAINCURRADJ_LSB                         8
#define CSR_TESTGAINCURRADJ_MASK                        GENMASK_32(12, 8)
#define CSR_TESTSELEXTERNALVREF_LSB                     13
#define CSR_TESTSELEXTERNALVREF_MASK                    BIT(13)
#define CSR_TESTEXTVREFRANGE_LSB                        14
#define CSR_TESTEXTVREFRANGE_MASK                       BIT(14)
#define CSR_TESTPOWERGATEEN_LSB                         15
#define CSR_TESTPOWERGATEEN_MASK                        BIT(15)
/* CSR_CALUCLKINFO */
#define CSR_CALUCLKINFO_LSB                             0
#define CSR_CALUCLKINFO_MASK                            GENMASK_32(10, 0)
#define CSR_CALUCLKTICKSPER1US_LSB                      0
#define CSR_CALUCLKTICKSPER1US_MASK                     GENMASK_32(10, 0)
/* CSR_TESTBUMPCNTRL */
#define CSR_TESTBUMPCNTRL_LSB                           0
#define CSR_TESTBUMPCNTRL_MASK                          GENMASK_32(9, 0)
#define CSR_TESTBUMPEN_LSB                              0
#define CSR_TESTBUMPEN_MASK                             GENMASK_32(1, 0)
#define CSR_TESTBUMPTOGGLE_LSB                          2
#define CSR_TESTBUMPTOGGLE_MASK                         BIT(2)
#define CSR_TESTBUMPDATASEL_LSB                         3
#define CSR_TESTBUMPDATASEL_MASK                        GENMASK_32(8, 3)
#define CSR_FORCEMTESTONALERT_LSB                       9
#define CSR_FORCEMTESTONALERT_MASK                      BIT(9)
/* CSR_SEQ0BDLY0 */
#define CSR_SEQ0BDLY0_LSB                               0
#define CSR_SEQ0BDLY0_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BDLY1 */
#define CSR_SEQ0BDLY1_LSB                               0
#define CSR_SEQ0BDLY1_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BDLY2 */
#define CSR_SEQ0BDLY2_LSB                               0
#define CSR_SEQ0BDLY2_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BDLY3 */
#define CSR_SEQ0BDLY3_LSB                               0
#define CSR_SEQ0BDLY3_MASK                              GENMASK_32(15, 0)
/* CSR_PHYALERTSTATUS */
#define CSR_PHYALERTSTATUS_LSB                          0
#define CSR_PHYALERTSTATUS_MASK                         BIT(0)
#define CSR_PHYALERT_LSB                                0
#define CSR_PHYALERT_MASK                               BIT(0)
/* CSR_PPTTRAINSETUP */
#define CSR_PPTTRAINSETUP_LSB                           0
#define CSR_PPTTRAINSETUP_MASK                          GENMASK_32(6, 0)
#define CSR_PHYMSTRTRAININTERVAL_LSB                    0
#define CSR_PHYMSTRTRAININTERVAL_MASK                   GENMASK_32(3, 0)
#define CSR_PHYMSTRMAXREQTOACK_LSB                      4
#define CSR_PHYMSTRMAXREQTOACK_MASK                     GENMASK_32(6, 4)
/* CSR_PPTTRAINSETUP2 */
#define CSR_PPTTRAINSETUP2_LSB                          0
#define CSR_PPTTRAINSETUP2_MASK                         GENMASK_32(2, 0)
#define CSR_PHYMSTRFREQOVERRIDE_LSB                     0
#define CSR_PHYMSTRFREQOVERRIDE_MASK                    GENMASK_32(2, 0)
/* CSR_ATESTMODE */
#define CSR_ATESTMODE_LSB                               0
#define CSR_ATESTMODE_MASK                              GENMASK_32(4, 0)
#define CSR_ATESTPRBSEN_LSB                             0
#define CSR_ATESTPRBSEN_MASK                            BIT(0)
#define CSR_ATESTCLKEN_LSB                              1
#define CSR_ATESTCLKEN_MASK                             BIT(1)
#define CSR_ATESTMODESEL_LSB                            2
#define CSR_ATESTMODESEL_MASK                           GENMASK_32(4, 2)
/* CSR_TXCALBINP */
#define CSR_TXCALBINP_LSB                               0
#define CSR_TXCALBINP_MASK                              GENMASK_32(4, 0)
/* CSR_TXCALBINN */
#define CSR_TXCALBINN_LSB                               0
#define CSR_TXCALBINN_MASK                              GENMASK_32(4, 0)
/* CSR_TXCALPOVR */
#define CSR_TXCALPOVR_LSB                               0
#define CSR_TXCALPOVR_MASK                              GENMASK_32(5, 0)
#define CSR_TXCALBINPOVRVAL_LSB                         0
#define CSR_TXCALBINPOVRVAL_MASK                        GENMASK_32(4, 0)
#define CSR_TXCALBINPOVREN_LSB                          5
#define CSR_TXCALBINPOVREN_MASK                         BIT(5)
/* CSR_TXCALNOVR */
#define CSR_TXCALNOVR_LSB                               0
#define CSR_TXCALNOVR_MASK                              GENMASK_32(5, 0)
#define CSR_TXCALBINNOVRVAL_LSB                         0
#define CSR_TXCALBINNOVRVAL_MASK                        GENMASK_32(4, 0)
#define CSR_TXCALBINNOVREN_LSB                          5
#define CSR_TXCALBINNOVREN_MASK                         BIT(5)
/* CSR_DFIMODE */
#define CSR_DFIMODE_LSB                                 0
#define CSR_DFIMODE_MASK                                GENMASK_32(2, 0)
#define CSR_DFI0ENABLE_LSB                              0
#define CSR_DFI0ENABLE_MASK                             BIT(0)
#define CSR_DFI1ENABLE_LSB                              1
#define CSR_DFI1ENABLE_MASK                             BIT(1)
#define CSR_DFI1OVERRIDE_LSB                            2
#define CSR_DFI1OVERRIDE_MASK                           BIT(2)
/* CSR_TRISTATEMODECA */
#define CSR_TRISTATEMODECA_LSB                          0
#define CSR_TRISTATEMODECA_MASK                         GENMASK_32(3, 0)
#define CSR_DISDYNADRTRI_LSB                            0
#define CSR_DISDYNADRTRI_MASK                           BIT(0)
#define CSR_DDR2TMODE_LSB                               1
#define CSR_DDR2TMODE_MASK                              BIT(1)
#define CSR_CKDISVAL_LSB                                2
#define CSR_CKDISVAL_MASK                               GENMASK_32(3, 2)
/* MTESTMUXSEL already defined in ANIBx section */
/* CSR_MTESTPGMINFO */
#define CSR_MTESTPGMINFO_LSB                            0
#define CSR_MTESTPGMINFO_MASK                           BIT(0)
/* CSR_DYNPWRDNUP */
#define CSR_DYNPWRDNUP_LSB                              0
#define CSR_DYNPWRDNUP_MASK                             BIT(0)
#define CSR_DYNPOWERDOWN_LSB                            0
#define CSR_DYNPOWERDOWN_MASK                           BIT(0)
/* CSR_PMIENABLE */
#define CSR_PMIENABLE_LSB                               0
#define CSR_PMIENABLE_MASK                              BIT(0)
/* CSR_PHYTID */
#define CSR_PHYTID_LSB                                  0
#define CSR_PHYTID_MASK                                 GENMASK_32(15, 0)
/* CSR_HWTMRL */
#define CSR_HWTMRL_LSB                                  0
#define CSR_HWTMRL_MASK                                 GENMASK_32(4, 0)
/* CSR_DFIPHYUPD */
#define CSR_DFIPHYUPD_LSB                               0
#define CSR_DFIPHYUPD_MASK                              GENMASK_32(15, 0)
#define CSR_DFIPHYUPDCNT_LSB                            0
#define CSR_DFIPHYUPDCNT_MASK                           GENMASK_32(3, 0)
#define CSR_DFIPHYUPDRESP_LSB                           4
#define CSR_DFIPHYUPDRESP_MASK                          GENMASK_32(6, 4)
#define CSR_DFIPHYUPDMODE_LSB                           7
#define CSR_DFIPHYUPDMODE_MASK                          BIT(7)
#define CSR_DFIPHYUPDTHRESHOLD_LSB                      8
#define CSR_DFIPHYUPDTHRESHOLD_MASK                     GENMASK_32(11, 8)
#define CSR_DFIPHYUPDINTTHRESHOLD_LSB                   12
#define CSR_DFIPHYUPDINTTHRESHOLD_MASK                  GENMASK_32(15, 12)
/* CSR_PDAMRSWRITEMODE */
#define CSR_PDAMRSWRITEMODE_LSB                         0
#define CSR_PDAMRSWRITEMODE_MASK                        BIT(0)
/* CSR_DFIGEARDOWNCTL */
#define CSR_DFIGEARDOWNCTL_LSB                          0
#define CSR_DFIGEARDOWNCTL_MASK                         GENMASK_32(1, 0)
/* CSR_DQSPREAMBLECONTROL */
#define CSR_DQSPREAMBLECONTROL_LSB                      0
#define CSR_DQSPREAMBLECONTROL_MASK                     GENMASK_32(8, 0)
#define CSR_TWOTCKRXDQSPRE_LSB                          0
#define CSR_TWOTCKRXDQSPRE_MASK                         BIT(0)
#define CSR_TWOTCKTXDQSPRE_LSB                          1
#define CSR_TWOTCKTXDQSPRE_MASK                         BIT(1)
#define CSR_POSITIONDFEINIT_LSB                         2
#define CSR_POSITIONDFEINIT_MASK                        GENMASK_32(4, 2)
#define CSR_LP4TGLTWOTCKTXDQSPRE_LSB                    5
#define CSR_LP4TGLTWOTCKTXDQSPRE_MASK                   BIT(5)
#define CSR_LP4POSTAMBLEEXT_LSB                         6
#define CSR_LP4POSTAMBLEEXT_MASK                        BIT(6)
#define CSR_LP4STTCPREBRIDGERXEN_LSB                    7
#define CSR_LP4STTCPREBRIDGERXEN_MASK                   BIT(7)
#define CSR_WDQSEXTENSION_LSB                           8
#define CSR_WDQSEXTENSION_MASK                          BIT(8)
/* CSR_MASTERX4CONFIG */
#define CSR_MASTERX4CONFIG_LSB                          0
#define CSR_MASTERX4CONFIG_MASK                         GENMASK_32(3, 0)
#define CSR_X4TG_LSB                                    0
#define CSR_X4TG_MASK                                   GENMASK_32(3, 0)
/* CSR_WRLEVBITS */
#define CSR_WRLEVBITS_LSB                               0
#define CSR_WRLEVBITS_MASK                              GENMASK_32(7, 0)
#define CSR_WRLEVFORDQSL_LSB                            0
#define CSR_WRLEVFORDQSL_MASK                           GENMASK_32(3, 0)
#define CSR_WRLEVFORDQSU_LSB                            4
#define CSR_WRLEVFORDQSU_MASK                           GENMASK_32(7, 4)
/* CSR_ENABLECSMULTICAST */
#define CSR_ENABLECSMULTICAST_LSB                       0
#define CSR_ENABLECSMULTICAST_MASK                      BIT(0)
/* CSR_HWTLPCSMULTICAST */
#define CSR_HWTLPCSMULTICAST_LSB                        0
#define CSR_HWTLPCSMULTICAST_MASK                       BIT(0)
/* CSR_ACX4ANIBDIS */
#define CSR_ACX4ANIBDIS_LSB                             0
#define CSR_ACX4ANIBDIS_MASK                            GENMASK_32(11, 0)
/* CSR_DMIPINPRESENT */
#define CSR_DMIPINPRESENT_LSB                           0
#define CSR_DMIPINPRESENT_MASK                          BIT(0)
#define CSR_RDDBIENABLED_LSB                            0
#define CSR_RDDBIENABLED_MASK                           BIT(0)
/* CSR_ARDPTRINITVAL */
#define CSR_ARDPTRINITVAL_LSB                           0
#define CSR_ARDPTRINITVAL_MASK                          GENMASK_32(3, 0)
/* CSR_DB0LCDLCALPHDETOUT */
#define CSR_DB0LCDLCALPHDETOUT_LSB                      0
#define CSR_DB0LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB1LCDLCALPHDETOUT */
#define CSR_DB1LCDLCALPHDETOUT_LSB                      0
#define CSR_DB1LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB2LCDLCALPHDETOUT */
#define CSR_DB2LCDLCALPHDETOUT_LSB                      0
#define CSR_DB2LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB3LCDLCALPHDETOUT */
#define CSR_DB3LCDLCALPHDETOUT_LSB                      0
#define CSR_DB3LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB4LCDLCALPHDETOUT */
#define CSR_DB4LCDLCALPHDETOUT_LSB                      0
#define CSR_DB4LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB5LCDLCALPHDETOUT */
#define CSR_DB5LCDLCALPHDETOUT_LSB                      0
#define CSR_DB5LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB6LCDLCALPHDETOUT */
#define CSR_DB6LCDLCALPHDETOUT_LSB                      0
#define CSR_DB6LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB7LCDLCALPHDETOUT */
#define CSR_DB7LCDLCALPHDETOUT_LSB                      0
#define CSR_DB7LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB8LCDLCALPHDETOUT */
#define CSR_DB8LCDLCALPHDETOUT_LSB                      0
#define CSR_DB8LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DB9LCDLCALPHDETOUT */
#define CSR_DB9LCDLCALPHDETOUT_LSB                      0
#define CSR_DB9LCDLCALPHDETOUT_MASK                     GENMASK_32(15, 0)
/* CSR_DBYTEDLLMODECNTRL */
#define CSR_DBYTEDLLMODECNTRL_LSB                       1
#define CSR_DBYTEDLLMODECNTRL_MASK                      BIT(1)
#define CSR_DLLRXPREAMBLEMODE_LSB                       1
#define CSR_DLLRXPREAMBLEMODE_MASK                      BIT(1)
/* CSR_DBYTERXENTRAIN */
#define CSR_DBYTERXENTRAIN_LSB                          0
#define CSR_DBYTERXENTRAIN_MASK                         BIT(0)
#define CSR_RXENTRAIN_LSB                               0
#define CSR_RXENTRAIN_MASK                              BIT(0)
/* CSR_ANLCDLCALPHDETOUT */
#define CSR_ANLCDLCALPHDETOUT_LSB                       0
#define CSR_ANLCDLCALPHDETOUT_MASK                      GENMASK_32(11, 0)
/* CSR_CALOFFSETS */
#define CSR_CALOFFSETS_LSB                              0
#define CSR_CALOFFSETS_MASK                             GENMASK_32(13, 0)
#define CSR_CALCMPR5OFFSET_LSB                          0
#define CSR_CALCMPR5OFFSET_MASK                         GENMASK_32(5, 0)
#define CSR_CALDRVPDTHOFFSET_LSB                        6
#define CSR_CALDRVPDTHOFFSET_MASK                       GENMASK_32(9, 6)
#define CSR_CALDRVPUTHOFFSET_LSB                        10
#define CSR_CALDRVPUTHOFFSET_MASK                       GENMASK_32(13, 10)
/* CSR_SARINITVALS */
#define CSR_SARINITVALS_LSB                             0
#define CSR_SARINITVALS_MASK                            GENMASK_32(8, 0)
#define CSR_SARINITOFFSET05_LSB                         0
#define CSR_SARINITOFFSET05_MASK                        GENMASK_32(2, 0)
#define CSR_SARINITNINT_LSB                             3
#define CSR_SARINITNINT_MASK                            GENMASK_32(5, 3)
#define CSR_SARINITPEXT_LSB                             6
#define CSR_SARINITPEXT_MASK                            GENMASK_32(8, 6)
/* CSR_CALPEXTOVR */
#define CSR_CALPEXTOVR_LSB                              0
#define CSR_CALPEXTOVR_MASK                             GENMASK_32(4, 0)
/* CSR_CALCMPR5OVR */
#define CSR_CALCMPR5OVR_LSB                             0
#define CSR_CALCMPR5OVR_MASK                            GENMASK_32(7, 0)
/* CSR_CALNINTOVR */
#define CSR_CALNINTOVR_LSB                              0
#define CSR_CALNINTOVR_MASK                             GENMASK_32(4, 0)
/* CSR_CALDRVSTR0 */
#define CSR_CALDRVSTR0_LSB                              0
#define CSR_CALDRVSTR0_MASK                             GENMASK_32(7, 0)
#define CSR_CALDRVSTRPD50_LSB                           0
#define CSR_CALDRVSTRPD50_MASK                          GENMASK_32(3, 0)
#define CSR_CALDRVSTRPU50_LSB                           4
#define CSR_CALDRVSTRPU50_MASK                          GENMASK_32(7, 4)
/* CSR_PROCODTCTL */
#define CSR_PROCODTCTL_LSB                              0
#define CSR_PROCODTCTL_MASK                             GENMASK_32(1, 0)
#define CSR_PROCODTALWAYSOFF_LSB                        0
#define CSR_PROCODTALWAYSOFF_MASK                       BIT(0)
#define CSR_PROCODTALWAYSON_LSB                         1
#define CSR_PROCODTALWAYSON_MASK                        BIT(1)
/* CSR_PROCODTTIMECTL */
#define CSR_PROCODTTIMECTL_LSB                          0
#define CSR_PROCODTTIMECTL_MASK                         GENMASK_32(5, 0)
#define CSR_PODTTAILWIDTH_LSB                           0
#define CSR_PODTTAILWIDTH_MASK                          GENMASK_32(1, 0)
#define CSR_PODTSTARTDELAY_LSB                          2
#define CSR_PODTSTARTDELAY_MASK                         GENMASK_32(3, 2)
#define CSR_PODTTAILWIDTHEXT_LSB                        4
#define CSR_PODTTAILWIDTHEXT_MASK                       GENMASK_32(5, 4)
/* CSR_MEMALERTCONTROL */
#define CSR_MEMALERTCONTROL_LSB                         0
#define CSR_MEMALERTCONTROL_MASK                        GENMASK_32(15, 0)
#define CSR_MALERTVREFLEVEL_LSB                         0
#define CSR_MALERTVREFLEVEL_MASK                        GENMASK_32(6, 0)
#define CSR_MALERTVREFEXTEN_LSB                         7
#define CSR_MALERTVREFEXTEN_MASK                        BIT(7)
#define CSR_MALERTPUSTREN_LSB                           8
#define CSR_MALERTPUSTREN_MASK                          GENMASK_32(11, 8)
#define CSR_MALERTPUEN_LSB                              12
#define CSR_MALERTPUEN_MASK                             BIT(12)
#define CSR_MALERTRXEN_LSB                              13
#define CSR_MALERTRXEN_MASK                             BIT(13)
#define CSR_MALERTDISABLEVAL_LSB                        14
#define CSR_MALERTDISABLEVAL_MASK                       BIT(14)
#define CSR_MALERTFORCEERROR_LSB                        15
#define CSR_MALERTFORCEERROR_MASK                       BIT(15)
/* CSR_MEMALERTCONTROL2 */
#define CSR_MEMALERTCONTROL2_LSB                        0
#define CSR_MEMALERTCONTROL2_MASK                       BIT(0)
#define CSR_MALERTSYNCBYPASS_LSB                        0
#define CSR_MALERTSYNCBYPASS_MASK                       BIT(0)
/* CSR_MEMRESETL */
#define CSR_MEMRESETL_LSB                               0
#define CSR_MEMRESETL_MASK                              GENMASK_32(1, 0)
#define CSR_MEMRESETLVALUE_LSB                          0
#define CSR_MEMRESETLVALUE_MASK                         BIT(0)
#define CSR_PROTECTMEMRESET_LSB                         1
#define CSR_PROTECTMEMRESET_MASK                        BIT(1)
/* CSR_PUBMODE */
#define CSR_PUBMODE_LSB                                 0
#define CSR_PUBMODE_MASK                                BIT(0)
#define CSR_HWTMEMSRC_LSB                               0
#define CSR_HWTMEMSRC_MASK                              BIT(0)
/* CSR_MISCPHYSTATUS */
#define CSR_MISCPHYSTATUS_LSB                           0
#define CSR_MISCPHYSTATUS_MASK                          GENMASK_32(1, 0)
#define CSR_DCTSANE_LSB                                 0
#define CSR_DCTSANE_MASK                                BIT(0)
#define CSR_PORMEMRESET_LSB                             1
#define CSR_PORMEMRESET_MASK                            BIT(1)
/* CSR_CORELOOPBACKSEL */
#define CSR_CORELOOPBACKSEL_LSB                         0
#define CSR_CORELOOPBACKSEL_MASK                        BIT(0)
/* CSR_DLLTRAINPARAM */
#define CSR_DLLTRAINPARAM_LSB                           0
#define CSR_DLLTRAINPARAM_MASK                          GENMASK_32(1, 0)
#define CSR_EXTENDPHDTIME_LSB                           0
#define CSR_EXTENDPHDTIME_MASK                          GENMASK_32(1, 0)
/* CSR_HWTLPCSENA */
#define CSR_HWTLPCSENA_LSB                              0
#define CSR_HWTLPCSENA_MASK                             GENMASK_32(1, 0)
/* CSR_HWTLPCSENB */
#define CSR_HWTLPCSENB_LSB                              0
#define CSR_HWTLPCSENB_MASK                             GENMASK_32(1, 0)
/* CSR_HWTLPCSENBYPASS */
#define CSR_HWTLPCSENBYPASS_LSB                         0
#define CSR_HWTLPCSENBYPASS_MASK                        BIT(0)
/* CSR_DFICAMODE */
#define CSR_DFICAMODE_LSB                               0
#define CSR_DFICAMODE_MASK                              GENMASK_32(3, 0)
#define CSR_DFILP3CAMODE_LSB                            0
#define CSR_DFILP3CAMODE_MASK                           BIT(0)
#define CSR_DFID4CAMODE_LSB                             1
#define CSR_DFID4CAMODE_MASK                            BIT(1)
#define CSR_DFILP4CAMODE_LSB                            2
#define CSR_DFILP4CAMODE_MASK                           BIT(2)
#define CSR_DFID4ALTCAMODE_LSB                          3
#define CSR_DFID4ALTCAMODE_MASK                         BIT(3)
/* CSR_HWTCACTL */
#define CSR_HWTCACTL_LSB                                0
#define CSR_HWTCACTL_MASK                               BIT(0)
#define CSR_HWTDISDYNADRTRI_LSB                         0
#define CSR_HWTDISDYNADRTRI_MASK                        BIT(0)
/* CSR_HWTCAMODE */
#define CSR_HWTCAMODE_LSB                               0
#define CSR_HWTCAMODE_MASK                              GENMASK_32(5, 0)
#define CSR_HWTLP3CAMODE_LSB                            0
#define CSR_HWTLP3CAMODE_MASK                           BIT(0)
#define CSR_HWTD4CAMODE_LSB                             1
#define CSR_HWTD4CAMODE_MASK                            BIT(1)
#define CSR_HWTLP4CAMODE_LSB                            2
#define CSR_HWTLP4CAMODE_MASK                           BIT(2)
#define CSR_HWTD4ALTCAMODE_LSB                          3
#define CSR_HWTD4ALTCAMODE_MASK                         BIT(3)
#define CSR_HWTCSINVERT_LSB                             4
#define CSR_HWTCSINVERT_MASK                            BIT(4)
#define CSR_HWTDBIINVERT_LSB                            5
#define CSR_HWTDBIINVERT_MASK                           BIT(5)
/* CSR_DLLCONTROL */
#define CSR_DLLCONTROL_LSB                              0
#define CSR_DLLCONTROL_MASK                             GENMASK_32(2, 0)
#define CSR_DLLRESETRELOCK_LSB                          0
#define CSR_DLLRESETRELOCK_MASK                         BIT(0)
#define CSR_DLLRESETSLAVE_LSB                           1
#define CSR_DLLRESETSLAVE_MASK                          BIT(1)
#define CSR_DLLRESETRSVD_LSB                            2
#define CSR_DLLRESETRSVD_MASK                           BIT(2)
/* CSR_PULSEDLLUPDATEPHASE */
#define CSR_PULSEDLLUPDATEPHASE_LSB                     0
#define CSR_PULSEDLLUPDATEPHASE_MASK                    GENMASK_32(7, 0)
#define CSR_PULSEDBYTEDLLUPDATEPHASE_LSB                0
#define CSR_PULSEDBYTEDLLUPDATEPHASE_MASK               BIT(0)
#define CSR_PULSEACKDLLUPDATEPHASE_LSB                  1
#define CSR_PULSEACKDLLUPDATEPHASE_MASK                 BIT(1)
#define CSR_PULSEACADLLUPDATEPHASE_LSB                  2
#define CSR_PULSEACADLLUPDATEPHASE_MASK                 BIT(2)
#define CSR_UPDATEPHASEDESTRESERVED_LSB                 3
#define CSR_UPDATEPHASEDESTRESERVED_MASK                GENMASK_32(5, 3)
#define CSR_TRAINUPDATEPHASEONLONGBUBBLE_LSB            6
#define CSR_TRAINUPDATEPHASEONLONGBUBBLE_MASK           BIT(6)
#define CSR_ALWAYSUPDATELCDLPHASE_LSB                   7
#define CSR_ALWAYSUPDATELCDLPHASE_MASK                  BIT(7)
/* CSR_HWTCONTROLOVR0 */
#define CSR_HWTCONTROLOVR0_LSB                          0
#define CSR_HWTCONTROLOVR0_MASK                         GENMASK_32(12, 0)
#define CSR_HWTCS0OVR0_LSB                              0
#define CSR_HWTCS0OVR0_MASK                             BIT(0)
#define CSR_HWTCS1OVR0_LSB                              1
#define CSR_HWTCS1OVR0_MASK                             BIT(1)
#define CSR_HWTCS2OVR0_LSB                              2
#define CSR_HWTCS2OVR0_MASK                             BIT(2)
#define CSR_HWTCS3OVR0_LSB                              3
#define CSR_HWTCS3OVR0_MASK                             BIT(3)
#define CSR_HWTCKE0OVR0_LSB                             4
#define CSR_HWTCKE0OVR0_MASK                            BIT(4)
#define CSR_HWTCKE1OVR0_LSB                             5
#define CSR_HWTCKE1OVR0_MASK                            BIT(5)
#define CSR_HWTCKE2OVR0_LSB                             6
#define CSR_HWTCKE2OVR0_MASK                            BIT(6)
#define CSR_HWTCKE3OVR0_LSB                             7
#define CSR_HWTCKE3OVR0_MASK                            BIT(7)
#define CSR_HWTODT0OVR0_LSB                             8
#define CSR_HWTODT0OVR0_MASK                            BIT(8)
#define CSR_HWTODT1OVR0_LSB                             9
#define CSR_HWTODT1OVR0_MASK                            BIT(9)
#define CSR_HWTODT2OVR0_LSB                             10
#define CSR_HWTODT2OVR0_MASK                            BIT(10)
#define CSR_HWTODT3OVR0_LSB                             11
#define CSR_HWTODT3OVR0_MASK                            BIT(11)
#define CSR_HWTPARITYOVR0_LSB                           12
#define CSR_HWTPARITYOVR0_MASK                          BIT(12)
/* CSR_HWTCONTROLOVR1 */
#define CSR_HWTCONTROLOVR1_LSB                          0
#define CSR_HWTCONTROLOVR1_MASK                         GENMASK_32(12, 0)
#define CSR_HWTCS0OVR1_LSB                              0
#define CSR_HWTCS0OVR1_MASK                             BIT(0)
#define CSR_HWTCS1OVR1_LSB                              1
#define CSR_HWTCS1OVR1_MASK                             BIT(1)
#define CSR_HWTCS2OVR1_LSB                              2
#define CSR_HWTCS2OVR1_MASK                             BIT(2)
#define CSR_HWTCS3OVR1_LSB                              3
#define CSR_HWTCS3OVR1_MASK                             BIT(3)
#define CSR_HWTCKE0OVR1_LSB                             4
#define CSR_HWTCKE0OVR1_MASK                            BIT(4)
#define CSR_HWTCKE1OVR1_LSB                             5
#define CSR_HWTCKE1OVR1_MASK                            BIT(5)
#define CSR_HWTCKE2OVR1_LSB                             6
#define CSR_HWTCKE2OVR1_MASK                            BIT(6)
#define CSR_HWTCKE3OVR1_LSB                             7
#define CSR_HWTCKE3OVR1_MASK                            BIT(7)
#define CSR_HWTODT0OVR1_LSB                             8
#define CSR_HWTODT0OVR1_MASK                            BIT(8)
#define CSR_HWTODT1OVR1_LSB                             9
#define CSR_HWTODT1OVR1_MASK                            BIT(9)
#define CSR_HWTODT2OVR1_LSB                             10
#define CSR_HWTODT2OVR1_MASK                            BIT(10)
#define CSR_HWTODT3OVR1_LSB                             11
#define CSR_HWTODT3OVR1_MASK                            BIT(11)
#define CSR_HWTPARITYOVR1_LSB                           12
#define CSR_HWTPARITYOVR1_MASK                          BIT(12)
/* CSR_DLLGAINCTL */
#define CSR_DLLGAINCTL_LSB                              0
#define CSR_DLLGAINCTL_MASK                             GENMASK_32(11, 0)
#define CSR_DLLGAINIV_LSB                               0
#define CSR_DLLGAINIV_MASK                              GENMASK_32(3, 0)
#define CSR_DLLGAINTV_LSB                               4
#define CSR_DLLGAINTV_MASK                              GENMASK_32(7, 4)
#define CSR_DLLSEEDSEL_LSB                              8
#define CSR_DLLSEEDSEL_MASK                             GENMASK_32(11, 8)
/* CSR_DLLLOCKPARAM */
#define CSR_DLLLOCKPARAM_LSB                            0
#define CSR_DLLLOCKPARAM_MASK                           GENMASK_32(12, 0)
#define CSR_DISDLLSEEDSEL_LSB                           0
#define CSR_DISDLLSEEDSEL_MASK                          BIT(0)
#define CSR_DISDLLGAINIVSEED_LSB                        1
#define CSR_DISDLLGAINIVSEED_MASK                       BIT(1)
#define CSR_DLLLOCKPARAMSPARE_LSB                       2
#define CSR_DLLLOCKPARAMSPARE_MASK                      GENMASK_32(3, 2)
#define CSR_LCDLSEED0_LSB                               4
#define CSR_LCDLSEED0_MASK                              GENMASK_32(12, 4)
/* CSR_HWTCONTROLVAL0 */
#define CSR_HWTCONTROLVAL0_LSB                          0
#define CSR_HWTCONTROLVAL0_MASK                         GENMASK_32(12, 0)
#define CSR_HWTCS0VAL0_LSB                              0
#define CSR_HWTCS0VAL0_MASK                             BIT(0)
#define CSR_HWTCS1VAL0_LSB                              1
#define CSR_HWTCS1VAL0_MASK                             BIT(1)
#define CSR_HWTCS2VAL0_LSB                              2
#define CSR_HWTCS2VAL0_MASK                             BIT(2)
#define CSR_HWTCS3VAL0_LSB                              3
#define CSR_HWTCS3VAL0_MASK                             BIT(3)
#define CSR_HWTCKE0VAL0_LSB                             4
#define CSR_HWTCKE0VAL0_MASK                            BIT(4)
#define CSR_HWTCKE1VAL0_LSB                             5
#define CSR_HWTCKE1VAL0_MASK                            BIT(5)
#define CSR_HWTCKE2VAL0_LSB                             6
#define CSR_HWTCKE2VAL0_MASK                            BIT(6)
#define CSR_HWTCKE3VAL0_LSB                             7
#define CSR_HWTCKE3VAL0_MASK                            BIT(7)
#define CSR_HWTODT0VAL0_LSB                             8
#define CSR_HWTODT0VAL0_MASK                            BIT(8)
#define CSR_HWTODT1VAL0_LSB                             9
#define CSR_HWTODT1VAL0_MASK                            BIT(9)
#define CSR_HWTODT2VAL0_LSB                             10
#define CSR_HWTODT2VAL0_MASK                            BIT(10)
#define CSR_HWTODT3VAL0_LSB                             11
#define CSR_HWTODT3VAL0_MASK                            BIT(11)
#define CSR_HWTPARITYVAL0_LSB                           12
#define CSR_HWTPARITYVAL0_MASK                          BIT(12)
/* CSR_HWTCONTROLVAL1 */
#define CSR_HWTCONTROLVAL1_LSB                          0
#define CSR_HWTCONTROLVAL1_MASK                         GENMASK_32(12, 0)
#define CSR_HWTCS0VAL1_LSB                              0
#define CSR_HWTCS0VAL1_MASK                             BIT(0)
#define CSR_HWTCS1VAL1_LSB                              1
#define CSR_HWTCS1VAL1_MASK                             BIT(1)
#define CSR_HWTCS2VAL1_LSB                              2
#define CSR_HWTCS2VAL1_MASK                             BIT(2)
#define CSR_HWTCS3VAL1_LSB                              3
#define CSR_HWTCS3VAL1_MASK                             BIT(3)
#define CSR_HWTCKE0VAL1_LSB                             4
#define CSR_HWTCKE0VAL1_MASK                            BIT(4)
#define CSR_HWTCKE1VAL1_LSB                             5
#define CSR_HWTCKE1VAL1_MASK                            BIT(5)
#define CSR_HWTCKE2VAL1_LSB                             6
#define CSR_HWTCKE2VAL1_MASK                            BIT(6)
#define CSR_HWTCKE3VAL1_LSB                             7
#define CSR_HWTCKE3VAL1_MASK                            BIT(7)
#define CSR_HWTODT0VAL1_LSB                             8
#define CSR_HWTODT0VAL1_MASK                            BIT(8)
#define CSR_HWTODT1VAL1_LSB                             9
#define CSR_HWTODT1VAL1_MASK                            BIT(9)
#define CSR_HWTODT2VAL1_LSB                             10
#define CSR_HWTODT2VAL1_MASK                            BIT(10)
#define CSR_HWTODT3VAL1_LSB                             11
#define CSR_HWTODT3VAL1_MASK                            BIT(11)
#define CSR_HWTPARITYVAL1_LSB                           12
#define CSR_HWTPARITYVAL1_MASK                          BIT(12)
/* CSR_ACSMGLBLSTART */
#define CSR_ACSMGLBLSTART_LSB                           0
#define CSR_ACSMGLBLSTART_MASK                          BIT(0)
/* CSR_ACSMGLBLSGLSTPCTRL */
#define CSR_ACSMGLBLSGLSTPCTRL_LSB                      0
#define CSR_ACSMGLBLSGLSTPCTRL_MASK                     GENMASK_32(1, 0)
#define CSR_ACSMSGLSTPMODE_LSB                          0
#define CSR_ACSMSGLSTPMODE_MASK                         BIT(0)
#define CSR_ACSMSGLSTP_LSB                              1
#define CSR_ACSMSGLSTP_MASK                             BIT(1)
/* CSR_LCDLCALPHASE */
#define CSR_LCDLCALPHASE_LSB                            0
#define CSR_LCDLCALPHASE_MASK                           GENMASK_32(8, 0)
/* CSR_LCDLCALCTRL */
#define CSR_LCDLCALCTRL_LSB                             0
#define CSR_LCDLCALCTRL_MASK                            GENMASK_32(6, 0)
#define CSR_LCDLCALMODE_LSB                             0
#define CSR_LCDLCALMODE_MASK                            BIT(0)
#define CSR_LCDLCALSLOWCLKSEL_LSB                       1
#define CSR_LCDLCALSLOWCLKSEL_MASK                      BIT(1)
#define CSR_LCDLCALEN_LSB                               2
#define CSR_LCDLCALEN_MASK                              BIT(2)
#define CSR_LCDLCALPHASEUPDATE_LSB                      3
#define CSR_LCDLCALPHASEUPDATE_MASK                     BIT(3)
#define CSR_LCDLCALCLKEN_LSB                            4
#define CSR_LCDLCALCLKEN_MASK                           BIT(4)
#define CSR_LCDLCALSAMPEN_LSB                           5
#define CSR_LCDLCALSAMPEN_MASK                          BIT(5)
#define CSR_LCDLCALSLOWCLKEN_LSB                        6
#define CSR_LCDLCALSLOWCLKEN_MASK                       BIT(6)
/* CSR_CALRATE */
#define CSR_CALRATE_LSB                                 0
#define CSR_CALRATE_MASK                                GENMASK_32(6, 0)
#define CSR_CALINTERVAL_LSB                             0
#define CSR_CALINTERVAL_MASK                            GENMASK_32(3, 0)
#define CSR_CALRUN_LSB                                  4
#define CSR_CALRUN_MASK                                 BIT(4)
#define CSR_CALONCE_LSB                                 5
#define CSR_CALONCE_MASK                                BIT(5)
#define CSR_DISABLEBACKGROUNDZQUPDATES_LSB              6
#define CSR_DISABLEBACKGROUNDZQUPDATES_MASK             BIT(6)
/* CSR_CALZAP */
#define CSR_CALZAP_LSB                                  0
#define CSR_CALZAP_MASK                                 BIT(0)
/* CSR_PSTATE */
#define CSR_PSTATE_LSB                                  0
#define CSR_PSTATE_MASK                                 GENMASK_32(3, 0)
/* CSR_CALPREDRIVEROVERRIDE */
#define CSR_CALPREDRIVEROVERRIDE_LSB                    0
#define CSR_CALPREDRIVEROVERRIDE_MASK                   GENMASK_32(7, 0)
#define CSR_TXPREOVN_LSB                                0
#define CSR_TXPREOVN_MASK                               GENMASK_32(3, 0)
#define CSR_TXPREOVP_LSB                                4
#define CSR_TXPREOVP_MASK                               GENMASK_32(7, 4)
/* CSR_PLLOUTGATECONTROL */
#define CSR_PLLOUTGATECONTROL_LSB                       0
#define CSR_PLLOUTGATECONTROL_MASK                      GENMASK_32(1, 0)
#define CSR_PCLKGATEEN_LSB                              0
#define CSR_PCLKGATEEN_MASK                             BIT(0)
#define CSR_RESERVED2X1_LSB                             1
#define CSR_RESERVED2X1_MASK                            BIT(1)
/* CSR_UCMEMRESETCONTROL */
#define CSR_UCMEMRESETCONTROL_LSB                       0
#define CSR_UCMEMRESETCONTROL_MASK                      BIT(0)
#define CSR_UCDCTSANE_LSB                               0
#define CSR_UCDCTSANE_MASK                              BIT(0)
/* CSR_PORCONTROL */
#define CSR_PORCONTROL_LSB                              0
#define CSR_PORCONTROL_MASK                             BIT(0)
#define CSR_PLLDLLLOCKDONE_LSB                          0
#define CSR_PLLDLLLOCKDONE_MASK                         BIT(0)
/* CSR_CALBUSY */
#define CSR_CALBUSY_LSB                                 0
#define CSR_CALBUSY_MASK                                BIT(0)
/* CSR_CALMISC2 */
#define CSR_CALMISC2_LSB                                0
#define CSR_CALMISC2_MASK                               GENMASK_32(15, 0)
#define CSR_CALNUMVOTES_LSB                             0
#define CSR_CALNUMVOTES_MASK                            GENMASK_32(2, 0)
#define CSR_RESERVED10X3_LSB                            3
#define CSR_RESERVED10X3_MASK                           GENMASK_32(10, 3)
#define CSR_RESERVED11_LSB                              11
#define CSR_RESERVED11_MASK                             BIT(11)
#define CSR_CALCMPTRRESTRIM_LSB                         12
#define CSR_CALCMPTRRESTRIM_MASK                        BIT(12)
#define CSR_CALCANCELROUNDERRDIS_LSB                    13
#define CSR_CALCANCELROUNDERRDIS_MASK                   BIT(13)
#define CSR_CALSLOWCMPANA_LSB                           14
#define CSR_CALSLOWCMPANA_MASK                          BIT(14)
#define CSR_RESERVED15_LSB                              15
#define CSR_RESERVED15_MASK                             BIT(15)
/* CSR_CALMISC */
#define CSR_CALMISC_LSB                                 0
#define CSR_CALMISC_MASK                                GENMASK_32(2, 0)
#define CSR_CALCMPR5DIS_LSB                             0
#define CSR_CALCMPR5DIS_MASK                            BIT(0)
#define CSR_CALNINTDIS_LSB                              1
#define CSR_CALNINTDIS_MASK                             BIT(1)
#define CSR_CALPEXTDIS_LSB                              2
#define CSR_CALPEXTDIS_MASK                             BIT(2)
/* CSR_CALVREFS */
#define CSR_CALVREFS_LSB                                0
#define CSR_CALVREFS_MASK                               GENMASK_32(1, 0)
/* CSR_CALCMPR5 */
#define CSR_CALCMPR5_LSB                                0
#define CSR_CALCMPR5_MASK                               GENMASK_32(7, 0)
/* CSR_CALNINT */
#define CSR_CALNINT_LSB                                 0
#define CSR_CALNINT_MASK                                GENMASK_32(4, 0)
#define CSR_CALNINTTHB_LSB                              0
#define CSR_CALNINTTHB_MASK                             GENMASK_32(4, 0)
/* CSR_CALPEXT */
#define CSR_CALPEXT_LSB                                 0
#define CSR_CALPEXT_MASK                                GENMASK_32(4, 0)
#define CSR_CALPEXTTHB_LSB                              0
#define CSR_CALPEXTTHB_MASK                             GENMASK_32(4, 0)
/* CSR_CALCMPINVERT */
#define CSR_CALCMPINVERT_LSB                            0
#define CSR_CALCMPINVERT_MASK                           GENMASK_32(4, 0)
#define CSR_CMPINVERTCALDAC50_LSB                       0
#define CSR_CMPINVERTCALDAC50_MASK                      BIT(0)
#define CSR_CMPINVERTCALDRVPD50_LSB                     1
#define CSR_CMPINVERTCALDRVPD50_MASK                    BIT(1)
#define CSR_CMPINVERTCALDRVPU50_LSB                     2
#define CSR_CMPINVERTCALDRVPU50_MASK                    BIT(2)
#define CSR_CMPINVERTCALODTPD_LSB                       3
#define CSR_CMPINVERTCALODTPD_MASK                      BIT(3)
#define CSR_CMPINVERTCALODTPU_LSB                       4
#define CSR_CMPINVERTCALODTPU_MASK                      BIT(4)
/* CSR_CALCMPANACNTRL */
#define CSR_CALCMPANACNTRL_LSB                          0
#define CSR_CALCMPANACNTRL_MASK                         GENMASK_32(9, 0)
#define CSR_CMPRGAINCURRADJ_LSB                         0
#define CSR_CMPRGAINCURRADJ_MASK                        GENMASK_32(7, 0)
#define CSR_CMPRGAINRESADJ_LSB                          8
#define CSR_CMPRGAINRESADJ_MASK                         BIT(8)
#define CSR_CMPRBIASBYPASSEN_LSB                        9
#define CSR_CMPRBIASBYPASSEN_MASK                       BIT(9)
/* CSR_DFIRDDATACSDESTMAP */
#define CSR_DFIRDDATACSDESTMAP_LSB                      0
#define CSR_DFIRDDATACSDESTMAP_MASK                     GENMASK_32(7, 0)
#define CSR_DFIRDDESTM0_LSB                             0
#define CSR_DFIRDDESTM0_MASK                            GENMASK_32(1, 0)
#define CSR_DFIRDDESTM1_LSB                             2
#define CSR_DFIRDDESTM1_MASK                            GENMASK_32(3, 2)
#define CSR_DFIRDDESTM2_LSB                             4
#define CSR_DFIRDDESTM2_MASK                            GENMASK_32(5, 4)
#define CSR_DFIRDDESTM3_LSB                             6
#define CSR_DFIRDDESTM3_MASK                            GENMASK_32(7, 6)
/* CSR_VREFINGLOBAL */
#define CSR_VREFINGLOBAL_LSB                            0
#define CSR_VREFINGLOBAL_MASK                           GENMASK_32(14, 0)
#define CSR_GLOBALVREFINSEL_LSB                         0
#define CSR_GLOBALVREFINSEL_MASK                        GENMASK_32(2, 0)
#define CSR_GLOBALVREFINDAC_LSB                         3
#define CSR_GLOBALVREFINDAC_MASK                        GENMASK_32(9, 3)
#define CSR_GLOBALVREFINTRIM_LSB                        10
#define CSR_GLOBALVREFINTRIM_MASK                       GENMASK_32(13, 10)
#define CSR_GLOBALVREFINMODE_LSB                        14
#define CSR_GLOBALVREFINMODE_MASK                       BIT(14)
/* CSR_DFIWRDATACSDESTMAP */
#define CSR_DFIWRDATACSDESTMAP_LSB                      0
#define CSR_DFIWRDATACSDESTMAP_MASK                     GENMASK_32(7, 0)
#define CSR_DFIWRDESTM0_LSB                             0
#define CSR_DFIWRDESTM0_MASK                            GENMASK_32(1, 0)
#define CSR_DFIWRDESTM1_LSB                             2
#define CSR_DFIWRDESTM1_MASK                            GENMASK_32(3, 2)
#define CSR_DFIWRDESTM2_LSB                             4
#define CSR_DFIWRDESTM2_MASK                            GENMASK_32(5, 4)
#define CSR_DFIWRDESTM3_LSB                             6
#define CSR_DFIWRDESTM3_MASK                            GENMASK_32(7, 6)
/* CSR_MASUPDGOODCTR */
#define CSR_MASUPDGOODCTR_LSB                           0
#define CSR_MASUPDGOODCTR_MASK                          GENMASK_32(15, 0)
/* CSR_PHYUPD0GOODCTR */
#define CSR_PHYUPD0GOODCTR_LSB                          0
#define CSR_PHYUPD0GOODCTR_MASK                         GENMASK_32(15, 0)
/* CSR_PHYUPD1GOODCTR */
#define CSR_PHYUPD1GOODCTR_LSB                          0
#define CSR_PHYUPD1GOODCTR_MASK                         GENMASK_32(15, 0)
/* CSR_CTLUPD0GOODCTR */
#define CSR_CTLUPD0GOODCTR_LSB                          0
#define CSR_CTLUPD0GOODCTR_MASK                         GENMASK_32(15, 0)
/* CSR_CTLUPD1GOODCTR */
#define CSR_CTLUPD1GOODCTR_LSB                          0
#define CSR_CTLUPD1GOODCTR_MASK                         GENMASK_32(15, 0)
/* CSR_MASUPDFAILCTR */
#define CSR_MASUPDFAILCTR_LSB                           0
#define CSR_MASUPDFAILCTR_MASK                          GENMASK_32(15, 0)
/* CSR_PHYUPD0FAILCTR */
#define CSR_PHYUPD0FAILCTR_LSB                          0
#define CSR_PHYUPD0FAILCTR_MASK                         GENMASK_32(15, 0)
/* CSR_PHYUPD1FAILCTR */
#define CSR_PHYUPD1FAILCTR_LSB                          0
#define CSR_PHYUPD1FAILCTR_MASK                         GENMASK_32(15, 0)
/* CSR_PHYPERFCTRENABLE */
#define CSR_PHYPERFCTRENABLE_LSB                        0
#define CSR_PHYPERFCTRENABLE_MASK                       GENMASK_32(7, 0)
#define CSR_MASUPDGOODCTL_LSB                           0
#define CSR_MASUPDGOODCTL_MASK                          BIT(0)
#define CSR_PHYUPD0GOODCTL_LSB                          1
#define CSR_PHYUPD0GOODCTL_MASK                         BIT(1)
#define CSR_PHYUPD1GOODCTL_LSB                          2
#define CSR_PHYUPD1GOODCTL_MASK                         BIT(2)
#define CSR_CTLUPD0GOODCTL_LSB                          3
#define CSR_CTLUPD0GOODCTL_MASK                         BIT(3)
#define CSR_CTLUPD1GOODCTL_LSB                          4
#define CSR_CTLUPD1GOODCTL_MASK                         BIT(4)
#define CSR_MASUPDFAILCTL_LSB                           5
#define CSR_MASUPDFAILCTL_MASK                          BIT(5)
#define CSR_PHYUPD0FAILCTL_LSB                          6
#define CSR_PHYUPD0FAILCTL_MASK                         BIT(6)
#define CSR_PHYUPD1FAILCTL_LSB                          7
#define CSR_PHYUPD1FAILCTL_MASK                         BIT(7)
/* CSR_DFIWRRDDATACSCONFIG */
#define CSR_DFIWRRDDATACSCONFIG_LSB                     0
#define CSR_DFIWRRDDATACSCONFIG_MASK                    GENMASK_32(1, 0)
#define CSR_DFIWRDATACSPOLARITY_LSB                     0
#define CSR_DFIWRDATACSPOLARITY_MASK                    BIT(0)
#define CSR_DFIRDDATACSPOLARITY_LSB                     1
#define CSR_DFIRDDATACSPOLARITY_MASK                    BIT(1)
/* CSR_PLLPWRDN */
#define CSR_PLLPWRDN_LSB                                0
#define CSR_PLLPWRDN_MASK                               BIT(0)
/* CSR_PLLRESET */
#define CSR_PLLRESET_LSB                                0
#define CSR_PLLRESET_MASK                               BIT(0)
/* CSR_PLLCTRL2 */
#define CSR_PLLCTRL2_LSB                                0
#define CSR_PLLCTRL2_MASK                               GENMASK_32(4, 0)
#define CSR_PLLFREQSEL_LSB                              0
#define CSR_PLLFREQSEL_MASK                             GENMASK_32(4, 0)
/* CSR_PLLCTRL0 */
#define CSR_PLLCTRL0_LSB                                0
#define CSR_PLLCTRL0_MASK                               GENMASK_32(15, 0)
#define CSR_PLLSTANDBY_LSB                              0
#define CSR_PLLSTANDBY_MASK                             BIT(0)
#define CSR_PLLBYPSEL_LSB                               1
#define CSR_PLLBYPSEL_MASK                              BIT(1)
#define CSR_PLLX2MODE_LSB                               2
#define CSR_PLLX2MODE_MASK                              BIT(2)
#define CSR_PLLOUTBYPEN_LSB                             3
#define CSR_PLLOUTBYPEN_MASK                            BIT(3)
#define CSR_PLLPRESET_LSB                               4
#define CSR_PLLPRESET_MASK                              BIT(4)
#define CSR_PLLBYPASSMODE_LSB                           5
#define CSR_PLLBYPASSMODE_MASK                          BIT(5)
#define CSR_PLLSELDFIFREQRATIO_LSB                      6
#define CSR_PLLSELDFIFREQRATIO_MASK                     BIT(6)
#define CSR_PLLSYNCBUSFLUSH_LSB                         7
#define CSR_PLLSYNCBUSFLUSH_MASK                        BIT(7)
#define CSR_PLLSYNCBUSBYP_LSB                           8
#define CSR_PLLSYNCBUSBYP_MASK                          BIT(8)
#define CSR_PLLRESERVED10X9_LSB                         9
#define CSR_PLLRESERVED10X9_MASK                        GENMASK_32(10, 9)
#define CSR_PLLGEARSHIFT_LSB                            11
#define CSR_PLLGEARSHIFT_MASK                           BIT(11)
#define CSR_PLLLOCKCNTSEL_LSB                           12
#define CSR_PLLLOCKCNTSEL_MASK                          BIT(12)
#define CSR_PLLLOCKPHSEL_LSB                            13
#define CSR_PLLLOCKPHSEL_MASK                           GENMASK_32(14, 13)
#define CSR_PLLSPARECTRL0_LSB                           15
#define CSR_PLLSPARECTRL0_MASK                          BIT(15)
/* CSR_PLLCTRL1 */
#define CSR_PLLCTRL1_LSB                                0
#define CSR_PLLCTRL1_MASK                               GENMASK_32(8, 0)
#define CSR_PLLCPINTCTRL_LSB                            0
#define CSR_PLLCPINTCTRL_MASK                           GENMASK_32(4, 0)
#define CSR_PLLCPPROPCTRL_LSB                           5
#define CSR_PLLCPPROPCTRL_MASK                          GENMASK_32(8, 5)
/* CSR_PLLTST */
#define CSR_PLLTST_LSB                                  0
#define CSR_PLLTST_MASK                                 GENMASK_32(8, 0)
#define CSR_PLLANATSTEN_LSB                             0
#define CSR_PLLANATSTEN_MASK                            BIT(0)
#define CSR_PLLANATSTSEL_LSB                            1
#define CSR_PLLANATSTSEL_MASK                           GENMASK_32(4, 1)
#define CSR_PLLDIGTSTSEL_LSB                            5
#define CSR_PLLDIGTSTSEL_MASK                           GENMASK_32(8, 5)
/* CSR_PLLLOCKSTATUS */
#define CSR_PLLLOCKSTATUS_LSB                           0
#define CSR_PLLLOCKSTATUS_MASK                          BIT(0)
/* CSR_PLLTESTMODE */
#define CSR_PLLTESTMODE_LSB                             0
#define CSR_PLLTESTMODE_MASK                            GENMASK_32(15, 0)
/* CSR_PLLCTRL3 */
#define CSR_PLLCTRL3_LSB                                0
#define CSR_PLLCTRL3_MASK                               GENMASK_32(15, 0)
#define CSR_PLLSPARE_LSB                                0
#define CSR_PLLSPARE_MASK                               GENMASK_32(3, 0)
#define CSR_PLLMAXRANGE_LSB                             4
#define CSR_PLLMAXRANGE_MASK                            GENMASK_32(8, 4)
#define CSR_PLLDACVALIN_LSB                             9
#define CSR_PLLDACVALIN_MASK                            GENMASK_32(13, 9)
#define CSR_PLLFORCECAL_LSB                             14
#define CSR_PLLFORCECAL_MASK                            BIT(14)
#define CSR_PLLENCAL_LSB                                15
#define CSR_PLLENCAL_MASK                               BIT(15)
/* CSR_PLLCTRL4 */
#define CSR_PLLCTRL4_LSB                                0
#define CSR_PLLCTRL4_MASK                               GENMASK_32(8, 0)
#define CSR_PLLCPINTGSCTRL_LSB                          0
#define CSR_PLLCPINTGSCTRL_MASK                         GENMASK_32(4, 0)
#define CSR_PLLCPPROPGSCTRL_LSB                         5
#define CSR_PLLCPPROPGSCTRL_MASK                        GENMASK_32(8, 5)
/* CSR_PLLENDOFCAL */
#define CSR_PLLENDOFCAL_LSB                             0
#define CSR_PLLENDOFCAL_MASK                            BIT(0)
/* CSR_PLLSTANDBYEFF */
#define CSR_PLLSTANDBYEFF_LSB                           0
#define CSR_PLLSTANDBYEFF_MASK                          BIT(0)
/* CSR_PLLDACVALOUT */
#define CSR_PLLDACVALOUT_LSB                            0
#define CSR_PLLDACVALOUT_MASK                           GENMASK_32(4, 0)
/* CSR_DLYTESTSEQ */
#define CSR_DLYTESTSEQ_LSB                              0
#define CSR_DLYTESTSEQ_MASK                             GENMASK_32(5, 0)
#define CSR_DLYTESTEN_LSB                               0
#define CSR_DLYTESTEN_MASK                              BIT(0)
#define CSR_DLYTESTCNTINIT_LSB                          1
#define CSR_DLYTESTCNTINIT_MASK                         BIT(1)
#define CSR_DLYTESTENOVERRIDE1_LSB                      2
#define CSR_DLYTESTENOVERRIDE1_MASK                     BIT(2)
#define CSR_DLYTESTENOVERRIDE2_LSB                      3
#define CSR_DLYTESTENOVERRIDE2_MASK                     BIT(3)
#define CSR_SYNCDLYMULTIPLIER_LSB                       4
#define CSR_SYNCDLYMULTIPLIER_MASK                      GENMASK_32(5, 4)
/* CSR_DLYTESTRINGSELDB */
#define CSR_DLYTESTRINGSELDB_LSB                        0
#define CSR_DLYTESTRINGSELDB_MASK                       GENMASK_32(4, 0)
#define CSR_DLYTESTCUTDB_LSB                            0
#define CSR_DLYTESTCUTDB_MASK                           GENMASK_32(4, 0)
/* CSR_DLYTESTRINGSELAC */
#define CSR_DLYTESTRINGSELAC_LSB                        0
#define CSR_DLYTESTRINGSELAC_MASK                       GENMASK_32(4, 0)
#define CSR_DLYTESTCUTAC_LSB                            0
#define CSR_DLYTESTCUTAC_MASK                           GENMASK_32(4, 0)
/* CSR_DLYTESTCNTDFICLKIV */
#define CSR_DLYTESTCNTDFICLKIV_LSB                      0
#define CSR_DLYTESTCNTDFICLKIV_MASK                     GENMASK_32(15, 0)
/* CSR_DLYTESTCNTDFICLK */
#define CSR_DLYTESTCNTDFICLK_LSB                        0
#define CSR_DLYTESTCNTDFICLK_MASK                       GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB0 */
#define CSR_DLYTESTCNTRINGOSCDB0_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB0_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB1 */
#define CSR_DLYTESTCNTRINGOSCDB1_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB1_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB2 */
#define CSR_DLYTESTCNTRINGOSCDB2_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB2_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB3 */
#define CSR_DLYTESTCNTRINGOSCDB3_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB3_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB4 */
#define CSR_DLYTESTCNTRINGOSCDB4_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB4_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB5 */
#define CSR_DLYTESTCNTRINGOSCDB5_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB5_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB6 */
#define CSR_DLYTESTCNTRINGOSCDB6_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB6_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB7 */
#define CSR_DLYTESTCNTRINGOSCDB7_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB7_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB8 */
#define CSR_DLYTESTCNTRINGOSCDB8_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB8_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCDB9 */
#define CSR_DLYTESTCNTRINGOSCDB9_LSB                    0
#define CSR_DLYTESTCNTRINGOSCDB9_MASK                   GENMASK_32(15, 0)
/* CSR_DLYTESTCNTRINGOSCAC */
#define CSR_DLYTESTCNTRINGOSCAC_LSB                     0
#define CSR_DLYTESTCNTRINGOSCAC_MASK                    GENMASK_32(15, 0)
/* CSR_MSTLCDLDBGCNTL */
#define CSR_MSTLCDLDBGCNTL_LSB                          0
#define CSR_MSTLCDLDBGCNTL_MASK                         GENMASK_32(11, 0)
#define CSR_MSTLCDLFINEOVRVAL_LSB                       0
#define CSR_MSTLCDLFINEOVRVAL_MASK                      GENMASK_32(8, 0)
#define CSR_MSTLCDLFINEOVR_LSB                          9
#define CSR_MSTLCDLFINEOVR_MASK                         BIT(9)
#define CSR_MSTLCDLFINESNAP_LSB                         10
#define CSR_MSTLCDLFINESNAP_MASK                        BIT(10)
#define CSR_MSTLCDLTSTENABLE_LSB                        11
#define CSR_MSTLCDLTSTENABLE_MASK                       BIT(11)
/* CSR_MSTLCDL0DBGRES */
#define CSR_MSTLCDL0DBGRES_LSB                          0
#define CSR_MSTLCDL0DBGRES_MASK                         GENMASK_32(12, 0)
#define CSR_MSTLCDL0FINESNAPVAL_LSB                     0
#define CSR_MSTLCDL0FINESNAPVAL_MASK                    GENMASK_32(8, 0)
#define CSR_MSTLCDL0PHDSNAPVAL_LSB                      9
#define CSR_MSTLCDL0PHDSNAPVAL_MASK                     BIT(9)
#define CSR_MSTLCDL0STICKYLOCK_LSB                      10
#define CSR_MSTLCDL0STICKYLOCK_MASK                     BIT(10)
#define CSR_MSTLCDL0STICKYUNLOCK_LSB                    11
#define CSR_MSTLCDL0STICKYUNLOCK_MASK                   BIT(11)
#define CSR_MSTLCDL0LIVELOCK_LSB                        12
#define CSR_MSTLCDL0LIVELOCK_MASK                       BIT(12)
/* CSR_MSTLCDL1DBGRES */
#define CSR_MSTLCDL1DBGRES_LSB                          0
#define CSR_MSTLCDL1DBGRES_MASK                         GENMASK_32(12, 0)
#define CSR_MSTLCDL1FINESNAPVAL_LSB                     0
#define CSR_MSTLCDL1FINESNAPVAL_MASK                    GENMASK_32(8, 0)
#define CSR_MSTLCDL1PHDSNAPVAL_LSB                      9
#define CSR_MSTLCDL1PHDSNAPVAL_MASK                     BIT(9)
#define CSR_MSTLCDL1STICKYLOCK_LSB                      10
#define CSR_MSTLCDL1STICKYLOCK_MASK                     BIT(10)
#define CSR_MSTLCDL1STICKYUNLOCK_LSB                    11
#define CSR_MSTLCDL1STICKYUNLOCK_MASK                   BIT(11)
#define CSR_MSTLCDL1LIVELOCK_LSB                        12
#define CSR_MSTLCDL1LIVELOCK_MASK                       BIT(12)
/* CSR_LCDLDBGCNTL */
#define CSR_LCDLDBGCNTL_LSB                             0
#define CSR_LCDLDBGCNTL_MASK                            GENMASK_32(15, 0)
#define CSR_LCDLFINEOVRVAL_LSB                          0
#define CSR_LCDLFINEOVRVAL_MASK                         GENMASK_32(8, 0)
#define CSR_LCDLFINEOVR_LSB                             9
#define CSR_LCDLFINEOVR_MASK                            BIT(9)
#define CSR_LCDLFINESNAP_LSB                            10
#define CSR_LCDLFINESNAP_MASK                           BIT(10)
#define CSR_LCDLTSTENABLE_LSB                           11
#define CSR_LCDLTSTENABLE_MASK                          BIT(11)
#define CSR_LCDLSTATUSSEL_LSB                           12
#define CSR_LCDLSTATUSSEL_MASK                          GENMASK_32(15, 12)
/* CSR_ACLCDLSTATUS */
#define CSR_ACLCDLSTATUS_LSB                            0
#define CSR_ACLCDLSTATUS_MASK                           GENMASK_32(13, 0)
#define CSR_ACLCDLFINESNAPVAL_LSB                       0
#define CSR_ACLCDLFINESNAPVAL_MASK                      GENMASK_32(9, 0)
#define CSR_ACLCDLPHDSNAPVAL_LSB                        10
#define CSR_ACLCDLPHDSNAPVAL_MASK                       BIT(10)
#define CSR_ACLCDLSTICKYLOCK_LSB                        11
#define CSR_ACLCDLSTICKYLOCK_MASK                       BIT(11)
#define CSR_ACLCDLSTICKYUNLOCK_LSB                      12
#define CSR_ACLCDLSTICKYUNLOCK_MASK                     BIT(12)
#define CSR_ACLCDLLIVELOCK_LSB                          13
#define CSR_ACLCDLLIVELOCK_MASK                         BIT(13)
/* CSR_CUSTPHYREV */
#define CSR_CUSTPHYREV_LSB                              0
#define CSR_CUSTPHYREV_MASK                             GENMASK_32(5, 0)
/* CSR_PHYREV */
#define CSR_PHYREV_LSB                                  0
#define CSR_PHYREV_MASK                                 GENMASK_32(15, 0)
#define CSR_PHYMNR_LSB                                  0
#define CSR_PHYMNR_MASK                                 GENMASK_32(3, 0)
#define CSR_PHYMDR_LSB                                  4
#define CSR_PHYMDR_MASK                                 GENMASK_32(7, 4)
#define CSR_PHYMJR_LSB                                  8
#define CSR_PHYMJR_MASK                                 GENMASK_32(15, 8)
/* CSR_LP3EXITSEQ0BSTARTVECTOR */
#define CSR_LP3EXITSEQ0BSTARTVECTOR_LSB                 0
#define CSR_LP3EXITSEQ0BSTARTVECTOR_MASK                GENMASK_32(7, 0)
#define CSR_LP3EXITSEQ0BSTARTVECPLLENABLED_LSB          0
#define CSR_LP3EXITSEQ0BSTARTVECPLLENABLED_MASK         GENMASK_32(3, 0)
#define CSR_LP3EXITSEQ0BSTARTVECPLLBYPASSED_LSB         4
#define CSR_LP3EXITSEQ0BSTARTVECPLLBYPASSED_MASK        GENMASK_32(7, 4)
/* CSR_DFIFREQXLAT0 */
#define CSR_DFIFREQXLAT0_LSB                            0
#define CSR_DFIFREQXLAT0_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL0_LSB                         0
#define CSR_DFIFREQXLATVAL0_MASK                        GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL1_LSB                         4
#define CSR_DFIFREQXLATVAL1_MASK                        GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL2_LSB                         8
#define CSR_DFIFREQXLATVAL2_MASK                        GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL3_LSB                         12
#define CSR_DFIFREQXLATVAL3_MASK                        GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT1 */
#define CSR_DFIFREQXLAT1_LSB                            0
#define CSR_DFIFREQXLAT1_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL4_LSB                         0
#define CSR_DFIFREQXLATVAL4_MASK                        GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL5_LSB                         4
#define CSR_DFIFREQXLATVAL5_MASK                        GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL6_LSB                         8
#define CSR_DFIFREQXLATVAL6_MASK                        GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL7_LSB                         12
#define CSR_DFIFREQXLATVAL7_MASK                        GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT2 */
#define CSR_DFIFREQXLAT2_LSB                            0
#define CSR_DFIFREQXLAT2_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL8_LSB                         0
#define CSR_DFIFREQXLATVAL8_MASK                        GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL9_LSB                         4
#define CSR_DFIFREQXLATVAL9_MASK                        GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL10_LSB                        8
#define CSR_DFIFREQXLATVAL10_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL11_LSB                        12
#define CSR_DFIFREQXLATVAL11_MASK                       GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT3 */
#define CSR_DFIFREQXLAT3_LSB                            0
#define CSR_DFIFREQXLAT3_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL12_LSB                        0
#define CSR_DFIFREQXLATVAL12_MASK                       GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL13_LSB                        4
#define CSR_DFIFREQXLATVAL13_MASK                       GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL14_LSB                        8
#define CSR_DFIFREQXLATVAL14_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL15_LSB                        12
#define CSR_DFIFREQXLATVAL15_MASK                       GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT4 */
#define CSR_DFIFREQXLAT4_LSB                            0
#define CSR_DFIFREQXLAT4_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL16_LSB                        0
#define CSR_DFIFREQXLATVAL16_MASK                       GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL17_LSB                        4
#define CSR_DFIFREQXLATVAL17_MASK                       GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL18_LSB                        8
#define CSR_DFIFREQXLATVAL18_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL19_LSB                        12
#define CSR_DFIFREQXLATVAL19_MASK                       GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT5 */
#define CSR_DFIFREQXLAT5_LSB                            0
#define CSR_DFIFREQXLAT5_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL20_LSB                        0
#define CSR_DFIFREQXLATVAL20_MASK                       GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL21_LSB                        4
#define CSR_DFIFREQXLATVAL21_MASK                       GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL22_LSB                        8
#define CSR_DFIFREQXLATVAL22_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL23_LSB                        12
#define CSR_DFIFREQXLATVAL23_MASK                       GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT6 */
#define CSR_DFIFREQXLAT6_LSB                            0
#define CSR_DFIFREQXLAT6_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL24_LSB                        0
#define CSR_DFIFREQXLATVAL24_MASK                       GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL25_LSB                        4
#define CSR_DFIFREQXLATVAL25_MASK                       GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL26_LSB                        8
#define CSR_DFIFREQXLATVAL26_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL27_LSB                        12
#define CSR_DFIFREQXLATVAL27_MASK                       GENMASK_32(15, 12)
/* CSR_DFIFREQXLAT7 */
#define CSR_DFIFREQXLAT7_LSB                            0
#define CSR_DFIFREQXLAT7_MASK                           GENMASK_32(15, 0)
#define CSR_DFIFREQXLATVAL28_LSB                        0
#define CSR_DFIFREQXLATVAL28_MASK                       GENMASK_32(3, 0)
#define CSR_DFIFREQXLATVAL29_LSB                        4
#define CSR_DFIFREQXLATVAL29_MASK                       GENMASK_32(7, 4)
#define CSR_DFIFREQXLATVAL30_LSB                        8
#define CSR_DFIFREQXLATVAL30_MASK                       GENMASK_32(11, 8)
#define CSR_DFIFREQXLATVAL31_LSB                        12
#define CSR_DFIFREQXLATVAL31_MASK                       GENMASK_32(15, 12)
/* CSR_TXRDPTRINIT */
#define CSR_TXRDPTRINIT_LSB                             0
#define CSR_TXRDPTRINIT_MASK                            BIT(0)
/* CSR_DFIINITCOMPLETE */
#define CSR_DFIINITCOMPLETE_LSB                         0
#define CSR_DFIINITCOMPLETE_MASK                        BIT(0)
/* CSR_DFIFREQRATIO */
#define CSR_DFIFREQRATIO_LSB                            0
#define CSR_DFIFREQRATIO_MASK                           GENMASK_32(1, 0)
/* CSR_RXFIFOCHECKS */
#define CSR_RXFIFOCHECKS_LSB                            0
#define CSR_RXFIFOCHECKS_MASK                           BIT(0)
#define CSR_DOFREQUENTRXFIFOCHECKS_LSB                  0
#define CSR_DOFREQUENTRXFIFOCHECKS_MASK                 BIT(0)
/* CSR_MTESTDTOCTRL */
#define CSR_MTESTDTOCTRL_LSB                            0
#define CSR_MTESTDTOCTRL_MASK                           BIT(0)
#define CSR_MTESTDTOEN_LSB                              0
#define CSR_MTESTDTOEN_MASK                             BIT(0)
/* CSR_MAPCAA0TODFI */
#define CSR_MAPCAA0TODFI_LSB                            0
#define CSR_MAPCAA0TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA1TODFI */
#define CSR_MAPCAA1TODFI_LSB                            0
#define CSR_MAPCAA1TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA2TODFI */
#define CSR_MAPCAA2TODFI_LSB                            0
#define CSR_MAPCAA2TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA3TODFI */
#define CSR_MAPCAA3TODFI_LSB                            0
#define CSR_MAPCAA3TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA4TODFI */
#define CSR_MAPCAA4TODFI_LSB                            0
#define CSR_MAPCAA4TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA5TODFI */
#define CSR_MAPCAA5TODFI_LSB                            0
#define CSR_MAPCAA5TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA6TODFI */
#define CSR_MAPCAA6TODFI_LSB                            0
#define CSR_MAPCAA6TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA7TODFI */
#define CSR_MAPCAA7TODFI_LSB                            0
#define CSR_MAPCAA7TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA8TODFI */
#define CSR_MAPCAA8TODFI_LSB                            0
#define CSR_MAPCAA8TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAA9TODFI */
#define CSR_MAPCAA9TODFI_LSB                            0
#define CSR_MAPCAA9TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB0TODFI */
#define CSR_MAPCAB0TODFI_LSB                            0
#define CSR_MAPCAB0TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB1TODFI */
#define CSR_MAPCAB1TODFI_LSB                            0
#define CSR_MAPCAB1TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB2TODFI */
#define CSR_MAPCAB2TODFI_LSB                            0
#define CSR_MAPCAB2TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB3TODFI */
#define CSR_MAPCAB3TODFI_LSB                            0
#define CSR_MAPCAB3TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB4TODFI */
#define CSR_MAPCAB4TODFI_LSB                            0
#define CSR_MAPCAB4TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB5TODFI */
#define CSR_MAPCAB5TODFI_LSB                            0
#define CSR_MAPCAB5TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB6TODFI */
#define CSR_MAPCAB6TODFI_LSB                            0
#define CSR_MAPCAB6TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB7TODFI */
#define CSR_MAPCAB7TODFI_LSB                            0
#define CSR_MAPCAB7TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB8TODFI */
#define CSR_MAPCAB8TODFI_LSB                            0
#define CSR_MAPCAB8TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_MAPCAB9TODFI */
#define CSR_MAPCAB9TODFI_LSB                            0
#define CSR_MAPCAB9TODFI_MASK                           GENMASK_32(3, 0)
/* CSR_PHYINTERRUPTENABLE */
#define CSR_PHYINTERRUPTENABLE_LSB                      0
#define CSR_PHYINTERRUPTENABLE_MASK                     GENMASK_32(15, 0)
#define CSR_PHYTRNGCMPLTEN_LSB                          0
#define CSR_PHYTRNGCMPLTEN_MASK                         BIT(0)
#define CSR_PHYINITCMPLTEN_LSB                          1
#define CSR_PHYINITCMPLTEN_MASK                         BIT(1)
#define CSR_PHYTRNGFAILEN_LSB                           2
#define CSR_PHYTRNGFAILEN_MASK                          BIT(2)
#define CSR_PHYFWRESERVEDEN_LSB                         3
#define CSR_PHYFWRESERVEDEN_MASK                        GENMASK_32(7, 3)
#define CSR_PHYVTDRIFTALARMEN_LSB                       8
#define CSR_PHYVTDRIFTALARMEN_MASK                      GENMASK_32(9, 8)
#define CSR_PHYRXFIFOCHECKEN_LSB                        10
#define CSR_PHYRXFIFOCHECKEN_MASK                       BIT(10)
#define CSR_PHYHWRESERVEDEN_LSB                         11
#define CSR_PHYHWRESERVEDEN_MASK                        GENMASK_32(15, 11)
/* CSR_PHYINTERRUPTFWCONTROL */
#define CSR_PHYINTERRUPTFWCONTROL_LSB                   0
#define CSR_PHYINTERRUPTFWCONTROL_MASK                  GENMASK_32(7, 0)
#define CSR_PHYTRNGCMPLTFW_LSB                          0
#define CSR_PHYTRNGCMPLTFW_MASK                         BIT(0)
#define CSR_PHYINITCMPLTFW_LSB                          1
#define CSR_PHYINITCMPLTFW_MASK                         BIT(1)
#define CSR_PHYTRNGFAILFW_LSB                           2
#define CSR_PHYTRNGFAILFW_MASK                          BIT(2)
#define CSR_PHYFWRESERVEDFW_LSB                         3
#define CSR_PHYFWRESERVEDFW_MASK                        GENMASK_32(7, 3)
/* CSR_PHYINTERRUPTMASK */
#define CSR_PHYINTERRUPTMASK_LSB                        0
#define CSR_PHYINTERRUPTMASK_MASK                       GENMASK_32(15, 0)
#define CSR_PHYTRNGCMPLTMSK_LSB                         0
#define CSR_PHYTRNGCMPLTMSK_MASK                        BIT(0)
#define CSR_PHYINITCMPLTMSK_LSB                         1
#define CSR_PHYINITCMPLTMSK_MASK                        BIT(1)
#define CSR_PHYTRNGFAILMSK_LSB                          2
#define CSR_PHYTRNGFAILMSK_MASK                         BIT(2)
#define CSR_PHYFWRESERVEDMSK_LSB                        3
#define CSR_PHYFWRESERVEDMSK_MASK                       GENMASK_32(7, 3)
#define CSR_PHYVTDRIFTALARMMSK_LSB                      8
#define CSR_PHYVTDRIFTALARMMSK_MASK                     GENMASK_32(9, 8)
#define CSR_PHYRXFIFOCHECKMSK_LSB                       10
#define CSR_PHYRXFIFOCHECKMSK_MASK                      BIT(10)
#define CSR_PHYHWRESERVEDMSK_LSB                        11
#define CSR_PHYHWRESERVEDMSK_MASK                       GENMASK_32(15, 11)
/* CSR_PHYINTERRUPTCLEAR */
#define CSR_PHYINTERRUPTCLEAR_LSB                       0
#define CSR_PHYINTERRUPTCLEAR_MASK                      GENMASK_32(15, 0)
#define CSR_PHYTRNGCMPLTCLR_LSB                         0
#define CSR_PHYTRNGCMPLTCLR_MASK                        BIT(0)
#define CSR_PHYINITCMPLTCLR_LSB                         1
#define CSR_PHYINITCMPLTCLR_MASK                        BIT(1)
#define CSR_PHYTRNGFAILCLR_LSB                          2
#define CSR_PHYTRNGFAILCLR_MASK                         BIT(2)
#define CSR_PHYFWRESERVEDCLR_LSB                        3
#define CSR_PHYFWRESERVEDCLR_MASK                       GENMASK_32(7, 3)
#define CSR_PHYVTDRIFTALARMCLR_LSB                      8
#define CSR_PHYVTDRIFTALARMCLR_MASK                     GENMASK_32(9, 8)
#define CSR_PHYRXFIFOCHECKCLR_LSB                       10
#define CSR_PHYRXFIFOCHECKCLR_MASK                      BIT(10)
#define CSR_PHYHWRESERVEDCLR_LSB                        11
#define CSR_PHYHWRESERVEDCLR_MASK                       GENMASK_32(15, 11)
/* CSR_PHYINTERRUPTSTATUS */
#define CSR_PHYINTERRUPTSTATUS_LSB                      0
#define CSR_PHYINTERRUPTSTATUS_MASK                     GENMASK_32(15, 0)
#define CSR_PHYTRNGCMPLT_LSB                            0
#define CSR_PHYTRNGCMPLT_MASK                           BIT(0)
#define CSR_PHYINITCMPLT_LSB                            1
#define CSR_PHYINITCMPLT_MASK                           BIT(1)
#define CSR_PHYTRNGFAIL_LSB                             2
#define CSR_PHYTRNGFAIL_MASK                            BIT(2)
#define CSR_PHYFWRESERVED_LSB                           3
#define CSR_PHYFWRESERVED_MASK                          GENMASK_32(7, 3)
#define CSR_VTDRIFTALARM_LSB                            8
#define CSR_VTDRIFTALARM_MASK                           GENMASK_32(9, 8)
#define CSR_PHYRXFIFOCHECK_LSB                          10
#define CSR_PHYRXFIFOCHECK_MASK                         BIT(10)
#define CSR_PHYHWRESERVED_LSB                           11
#define CSR_PHYHWRESERVED_MASK                          GENMASK_32(15, 11)
/* CSR_HWTSWIZZLEHWTADDRESS0 */
#define CSR_HWTSWIZZLEHWTADDRESS0_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS0_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS1 */
#define CSR_HWTSWIZZLEHWTADDRESS1_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS1_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS2 */
#define CSR_HWTSWIZZLEHWTADDRESS2_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS2_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS3 */
#define CSR_HWTSWIZZLEHWTADDRESS3_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS3_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS4 */
#define CSR_HWTSWIZZLEHWTADDRESS4_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS4_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS5 */
#define CSR_HWTSWIZZLEHWTADDRESS5_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS5_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS6 */
#define CSR_HWTSWIZZLEHWTADDRESS6_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS6_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS7 */
#define CSR_HWTSWIZZLEHWTADDRESS7_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS7_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS8 */
#define CSR_HWTSWIZZLEHWTADDRESS8_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS8_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS9 */
#define CSR_HWTSWIZZLEHWTADDRESS9_LSB                   0
#define CSR_HWTSWIZZLEHWTADDRESS9_MASK                  GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS10 */
#define CSR_HWTSWIZZLEHWTADDRESS10_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS10_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS11 */
#define CSR_HWTSWIZZLEHWTADDRESS11_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS11_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS12 */
#define CSR_HWTSWIZZLEHWTADDRESS12_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS12_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS13 */
#define CSR_HWTSWIZZLEHWTADDRESS13_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS13_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS14 */
#define CSR_HWTSWIZZLEHWTADDRESS14_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS14_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS15 */
#define CSR_HWTSWIZZLEHWTADDRESS15_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS15_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTADDRESS17 */
#define CSR_HWTSWIZZLEHWTADDRESS17_LSB                  0
#define CSR_HWTSWIZZLEHWTADDRESS17_MASK                 GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTACTN */
#define CSR_HWTSWIZZLEHWTACTN_LSB                       0
#define CSR_HWTSWIZZLEHWTACTN_MASK                      GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTBANK0 */
#define CSR_HWTSWIZZLEHWTBANK0_LSB                      0
#define CSR_HWTSWIZZLEHWTBANK0_MASK                     GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTBANK1 */
#define CSR_HWTSWIZZLEHWTBANK1_LSB                      0
#define CSR_HWTSWIZZLEHWTBANK1_MASK                     GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTBANK2 */
#define CSR_HWTSWIZZLEHWTBANK2_LSB                      0
#define CSR_HWTSWIZZLEHWTBANK2_MASK                     GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTBG0 */
#define CSR_HWTSWIZZLEHWTBG0_LSB                        0
#define CSR_HWTSWIZZLEHWTBG0_MASK                       GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTBG1 */
#define CSR_HWTSWIZZLEHWTBG1_LSB                        0
#define CSR_HWTSWIZZLEHWTBG1_MASK                       GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTCASN */
#define CSR_HWTSWIZZLEHWTCASN_LSB                       0
#define CSR_HWTSWIZZLEHWTCASN_MASK                      GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTRASN */
#define CSR_HWTSWIZZLEHWTRASN_LSB                       0
#define CSR_HWTSWIZZLEHWTRASN_MASK                      GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTWEN */
#define CSR_HWTSWIZZLEHWTWEN_LSB                        0
#define CSR_HWTSWIZZLEHWTWEN_MASK                       GENMASK_32(4, 0)
/* CSR_HWTSWIZZLEHWTPARITYIN */
#define CSR_HWTSWIZZLEHWTPARITYIN_LSB                   0
#define CSR_HWTSWIZZLEHWTPARITYIN_MASK                  GENMASK_32(4, 0)
/* CSR_DFIHANDSHAKEDELAYS0 */
#define CSR_DFIHANDSHAKEDELAYS0_LSB                     0
#define CSR_DFIHANDSHAKEDELAYS0_MASK                    GENMASK_32(15, 0)
#define CSR_PHYUPDACKDELAY0_LSB                         0
#define CSR_PHYUPDACKDELAY0_MASK                        GENMASK_32(3, 0)
#define CSR_PHYUPDREQDELAY0_LSB                         4
#define CSR_PHYUPDREQDELAY0_MASK                        GENMASK_32(7, 4)
#define CSR_CTRLUPDACKDELAY0_LSB                        8
#define CSR_CTRLUPDACKDELAY0_MASK                       GENMASK_32(11, 8)
#define CSR_CTRLUPDREQDELAY0_LSB                        12
#define CSR_CTRLUPDREQDELAY0_MASK                       GENMASK_32(15, 12)
/* CSR_DFIHANDSHAKEDELAYS1 */
#define CSR_DFIHANDSHAKEDELAYS1_LSB                     0
#define CSR_DFIHANDSHAKEDELAYS1_MASK                    GENMASK_32(15, 0)
#define CSR_PHYUPDACKDELAY1_LSB                         0
#define CSR_PHYUPDACKDELAY1_MASK                        GENMASK_32(3, 0)
#define CSR_PHYUPDREQDELAY1_LSB                         4
#define CSR_PHYUPDREQDELAY1_MASK                        GENMASK_32(7, 4)
#define CSR_CTRLUPDACKDELAY1_LSB                        8
#define CSR_CTRLUPDACKDELAY1_MASK                       GENMASK_32(11, 8)
#define CSR_CTRLUPDREQDELAY1_LSB                        12
#define CSR_CTRLUPDREQDELAY1_MASK                       GENMASK_32(15, 12)
/* CSR_REMOTEIMPCAL */
#define CSR_REMOTEIMPCAL_LSB                            0
#define CSR_REMOTEIMPCAL_MASK                           GENMASK_32(1, 0)
#define CSR_CALIBSLAVE_LSB                              0
#define CSR_CALIBSLAVE_MASK                             BIT(0)
#define CSR_SLAVECODEUPDATED_LSB                        1
#define CSR_SLAVECODEUPDATED_MASK                       BIT(1)
/* CSR_ACLOOPBACKCTL */
#define CSR_ACLOOPBACKCTL_LSB                           0
#define CSR_ACLOOPBACKCTL_MASK                          GENMASK_32(1, 0)
#define CSR_TERMINATION_LSB                             0
#define CSR_TERMINATION_MASK                            BIT(0)
#define CSR_NOISECANCEL_LSB                             1
#define CSR_NOISECANCEL_MASK                            BIT(1)

/* ACSM0 register offsets */
/* CSR_ACSMSEQ0X0 */
#define CSR_ACSMSEQ0X0_LSB                              0
#define CSR_ACSMSEQ0X0_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY0_LSB                            0
#define CSR_ACSMMCLKDLY0_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE0_LSB                              8
#define CSR_ACSMDDRWE0_MASK                             BIT(8)
#define CSR_ACSMDDRCAS0_LSB                             9
#define CSR_ACSMDDRCAS0_MASK                            BIT(9)
#define CSR_ACSMDDRRAS0_LSB                             10
#define CSR_ACSMDDRRAS0_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET0_LSB                          11
#define CSR_ACSMDDRCKESET0_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR0_LSB                          12
#define CSR_ACSMDDRCKECLR0_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD0_LSB                         13
#define CSR_ACSMSEQGATECMD0_MASK                        BIT(13)
#define CSR_ACSMSEQTERM0_LSB                            14
#define CSR_ACSMSEQTERM0_MASK                           BIT(14)
#define CSR_ACSMLP3CA30_LSB                             15
#define CSR_ACSMLP3CA30_MASK                            BIT(15)
/* CSR_ACSMSEQ0X1 */
#define CSR_ACSMSEQ0X1_LSB                              0
#define CSR_ACSMSEQ0X1_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY1_LSB                            0
#define CSR_ACSMMCLKDLY1_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE1_LSB                              8
#define CSR_ACSMDDRWE1_MASK                             BIT(8)
#define CSR_ACSMDDRCAS1_LSB                             9
#define CSR_ACSMDDRCAS1_MASK                            BIT(9)
#define CSR_ACSMDDRRAS1_LSB                             10
#define CSR_ACSMDDRRAS1_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET1_LSB                          11
#define CSR_ACSMDDRCKESET1_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR1_LSB                          12
#define CSR_ACSMDDRCKECLR1_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD1_LSB                         13
#define CSR_ACSMSEQGATECMD1_MASK                        BIT(13)
#define CSR_ACSMSEQTERM1_LSB                            14
#define CSR_ACSMSEQTERM1_MASK                           BIT(14)
#define CSR_ACSMLP3CA31_LSB                             15
#define CSR_ACSMLP3CA31_MASK                            BIT(15)
/* CSR_ACSMSEQ0X2 */
#define CSR_ACSMSEQ0X2_LSB                              0
#define CSR_ACSMSEQ0X2_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY2_LSB                            0
#define CSR_ACSMMCLKDLY2_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE2_LSB                              8
#define CSR_ACSMDDRWE2_MASK                             BIT(8)
#define CSR_ACSMDDRCAS2_LSB                             9
#define CSR_ACSMDDRCAS2_MASK                            BIT(9)
#define CSR_ACSMDDRRAS2_LSB                             10
#define CSR_ACSMDDRRAS2_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET2_LSB                          11
#define CSR_ACSMDDRCKESET2_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR2_LSB                          12
#define CSR_ACSMDDRCKECLR2_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD2_LSB                         13
#define CSR_ACSMSEQGATECMD2_MASK                        BIT(13)
#define CSR_ACSMSEQTERM2_LSB                            14
#define CSR_ACSMSEQTERM2_MASK                           BIT(14)
#define CSR_ACSMLP3CA32_LSB                             15
#define CSR_ACSMLP3CA32_MASK                            BIT(15)
/* CSR_ACSMSEQ0X3 */
#define CSR_ACSMSEQ0X3_LSB                              0
#define CSR_ACSMSEQ0X3_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY3_LSB                            0
#define CSR_ACSMMCLKDLY3_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE3_LSB                              8
#define CSR_ACSMDDRWE3_MASK                             BIT(8)
#define CSR_ACSMDDRCAS3_LSB                             9
#define CSR_ACSMDDRCAS3_MASK                            BIT(9)
#define CSR_ACSMDDRRAS3_LSB                             10
#define CSR_ACSMDDRRAS3_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET3_LSB                          11
#define CSR_ACSMDDRCKESET3_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR3_LSB                          12
#define CSR_ACSMDDRCKECLR3_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD3_LSB                         13
#define CSR_ACSMSEQGATECMD3_MASK                        BIT(13)
#define CSR_ACSMSEQTERM3_LSB                            14
#define CSR_ACSMSEQTERM3_MASK                           BIT(14)
#define CSR_ACSMLP3CA33_LSB                             15
#define CSR_ACSMLP3CA33_MASK                            BIT(15)
/* CSR_ACSMSEQ0X4 */
#define CSR_ACSMSEQ0X4_LSB                              0
#define CSR_ACSMSEQ0X4_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY4_LSB                            0
#define CSR_ACSMMCLKDLY4_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE4_LSB                              8
#define CSR_ACSMDDRWE4_MASK                             BIT(8)
#define CSR_ACSMDDRCAS4_LSB                             9
#define CSR_ACSMDDRCAS4_MASK                            BIT(9)
#define CSR_ACSMDDRRAS4_LSB                             10
#define CSR_ACSMDDRRAS4_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET4_LSB                          11
#define CSR_ACSMDDRCKESET4_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR4_LSB                          12
#define CSR_ACSMDDRCKECLR4_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD4_LSB                         13
#define CSR_ACSMSEQGATECMD4_MASK                        BIT(13)
#define CSR_ACSMSEQTERM4_LSB                            14
#define CSR_ACSMSEQTERM4_MASK                           BIT(14)
#define CSR_ACSMLP3CA34_LSB                             15
#define CSR_ACSMLP3CA34_MASK                            BIT(15)
/* CSR_ACSMSEQ0X5 */
#define CSR_ACSMSEQ0X5_LSB                              0
#define CSR_ACSMSEQ0X5_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY5_LSB                            0
#define CSR_ACSMMCLKDLY5_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE5_LSB                              8
#define CSR_ACSMDDRWE5_MASK                             BIT(8)
#define CSR_ACSMDDRCAS5_LSB                             9
#define CSR_ACSMDDRCAS5_MASK                            BIT(9)
#define CSR_ACSMDDRRAS5_LSB                             10
#define CSR_ACSMDDRRAS5_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET5_LSB                          11
#define CSR_ACSMDDRCKESET5_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR5_LSB                          12
#define CSR_ACSMDDRCKECLR5_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD5_LSB                         13
#define CSR_ACSMSEQGATECMD5_MASK                        BIT(13)
#define CSR_ACSMSEQTERM5_LSB                            14
#define CSR_ACSMSEQTERM5_MASK                           BIT(14)
#define CSR_ACSMLP3CA35_LSB                             15
#define CSR_ACSMLP3CA35_MASK                            BIT(15)
/* CSR_ACSMSEQ0X6 */
#define CSR_ACSMSEQ0X6_LSB                              0
#define CSR_ACSMSEQ0X6_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY6_LSB                            0
#define CSR_ACSMMCLKDLY6_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE6_LSB                              8
#define CSR_ACSMDDRWE6_MASK                             BIT(8)
#define CSR_ACSMDDRCAS6_LSB                             9
#define CSR_ACSMDDRCAS6_MASK                            BIT(9)
#define CSR_ACSMDDRRAS6_LSB                             10
#define CSR_ACSMDDRRAS6_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET6_LSB                          11
#define CSR_ACSMDDRCKESET6_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR6_LSB                          12
#define CSR_ACSMDDRCKECLR6_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD6_LSB                         13
#define CSR_ACSMSEQGATECMD6_MASK                        BIT(13)
#define CSR_ACSMSEQTERM6_LSB                            14
#define CSR_ACSMSEQTERM6_MASK                           BIT(14)
#define CSR_ACSMLP3CA36_LSB                             15
#define CSR_ACSMLP3CA36_MASK                            BIT(15)
/* CSR_ACSMSEQ0X7 */
#define CSR_ACSMSEQ0X7_LSB                              0
#define CSR_ACSMSEQ0X7_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY7_LSB                            0
#define CSR_ACSMMCLKDLY7_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE7_LSB                              8
#define CSR_ACSMDDRWE7_MASK                             BIT(8)
#define CSR_ACSMDDRCAS7_LSB                             9
#define CSR_ACSMDDRCAS7_MASK                            BIT(9)
#define CSR_ACSMDDRRAS7_LSB                             10
#define CSR_ACSMDDRRAS7_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET7_LSB                          11
#define CSR_ACSMDDRCKESET7_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR7_LSB                          12
#define CSR_ACSMDDRCKECLR7_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD7_LSB                         13
#define CSR_ACSMSEQGATECMD7_MASK                        BIT(13)
#define CSR_ACSMSEQTERM7_LSB                            14
#define CSR_ACSMSEQTERM7_MASK                           BIT(14)
#define CSR_ACSMLP3CA37_LSB                             15
#define CSR_ACSMLP3CA37_MASK                            BIT(15)
/* CSR_ACSMSEQ0X8 */
#define CSR_ACSMSEQ0X8_LSB                              0
#define CSR_ACSMSEQ0X8_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY8_LSB                            0
#define CSR_ACSMMCLKDLY8_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE8_LSB                              8
#define CSR_ACSMDDRWE8_MASK                             BIT(8)
#define CSR_ACSMDDRCAS8_LSB                             9
#define CSR_ACSMDDRCAS8_MASK                            BIT(9)
#define CSR_ACSMDDRRAS8_LSB                             10
#define CSR_ACSMDDRRAS8_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET8_LSB                          11
#define CSR_ACSMDDRCKESET8_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR8_LSB                          12
#define CSR_ACSMDDRCKECLR8_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD8_LSB                         13
#define CSR_ACSMSEQGATECMD8_MASK                        BIT(13)
#define CSR_ACSMSEQTERM8_LSB                            14
#define CSR_ACSMSEQTERM8_MASK                           BIT(14)
#define CSR_ACSMLP3CA38_LSB                             15
#define CSR_ACSMLP3CA38_MASK                            BIT(15)
/* CSR_ACSMSEQ0X9 */
#define CSR_ACSMSEQ0X9_LSB                              0
#define CSR_ACSMSEQ0X9_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY9_LSB                            0
#define CSR_ACSMMCLKDLY9_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMDDRWE9_LSB                              8
#define CSR_ACSMDDRWE9_MASK                             BIT(8)
#define CSR_ACSMDDRCAS9_LSB                             9
#define CSR_ACSMDDRCAS9_MASK                            BIT(9)
#define CSR_ACSMDDRRAS9_LSB                             10
#define CSR_ACSMDDRRAS9_MASK                            BIT(10)
#define CSR_ACSMDDRCKESET9_LSB                          11
#define CSR_ACSMDDRCKESET9_MASK                         BIT(11)
#define CSR_ACSMDDRCKECLR9_LSB                          12
#define CSR_ACSMDDRCKECLR9_MASK                         BIT(12)
#define CSR_ACSMSEQGATECMD9_LSB                         13
#define CSR_ACSMSEQGATECMD9_MASK                        BIT(13)
#define CSR_ACSMSEQTERM9_LSB                            14
#define CSR_ACSMSEQTERM9_MASK                           BIT(14)
#define CSR_ACSMLP3CA39_LSB                             15
#define CSR_ACSMLP3CA39_MASK                            BIT(15)
/* CSR_ACSMSEQ0X10 */
#define CSR_ACSMSEQ0X10_LSB                             0
#define CSR_ACSMSEQ0X10_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY10_LSB                           0
#define CSR_ACSMMCLKDLY10_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE10_LSB                             8
#define CSR_ACSMDDRWE10_MASK                            BIT(8)
#define CSR_ACSMDDRCAS10_LSB                            9
#define CSR_ACSMDDRCAS10_MASK                           BIT(9)
#define CSR_ACSMDDRRAS10_LSB                            10
#define CSR_ACSMDDRRAS10_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET10_LSB                         11
#define CSR_ACSMDDRCKESET10_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR10_LSB                         12
#define CSR_ACSMDDRCKECLR10_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD10_LSB                        13
#define CSR_ACSMSEQGATECMD10_MASK                       BIT(13)
#define CSR_ACSMSEQTERM10_LSB                           14
#define CSR_ACSMSEQTERM10_MASK                          BIT(14)
#define CSR_ACSMLP3CA310_LSB                            15
#define CSR_ACSMLP3CA310_MASK                           BIT(15)
/* CSR_ACSMSEQ0X11 */
#define CSR_ACSMSEQ0X11_LSB                             0
#define CSR_ACSMSEQ0X11_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY11_LSB                           0
#define CSR_ACSMMCLKDLY11_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE11_LSB                             8
#define CSR_ACSMDDRWE11_MASK                            BIT(8)
#define CSR_ACSMDDRCAS11_LSB                            9
#define CSR_ACSMDDRCAS11_MASK                           BIT(9)
#define CSR_ACSMDDRRAS11_LSB                            10
#define CSR_ACSMDDRRAS11_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET11_LSB                         11
#define CSR_ACSMDDRCKESET11_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR11_LSB                         12
#define CSR_ACSMDDRCKECLR11_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD11_LSB                        13
#define CSR_ACSMSEQGATECMD11_MASK                       BIT(13)
#define CSR_ACSMSEQTERM11_LSB                           14
#define CSR_ACSMSEQTERM11_MASK                          BIT(14)
#define CSR_ACSMLP3CA311_LSB                            15
#define CSR_ACSMLP3CA311_MASK                           BIT(15)
/* CSR_ACSMSEQ0X12 */
#define CSR_ACSMSEQ0X12_LSB                             0
#define CSR_ACSMSEQ0X12_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY12_LSB                           0
#define CSR_ACSMMCLKDLY12_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE12_LSB                             8
#define CSR_ACSMDDRWE12_MASK                            BIT(8)
#define CSR_ACSMDDRCAS12_LSB                            9
#define CSR_ACSMDDRCAS12_MASK                           BIT(9)
#define CSR_ACSMDDRRAS12_LSB                            10
#define CSR_ACSMDDRRAS12_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET12_LSB                         11
#define CSR_ACSMDDRCKESET12_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR12_LSB                         12
#define CSR_ACSMDDRCKECLR12_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD12_LSB                        13
#define CSR_ACSMSEQGATECMD12_MASK                       BIT(13)
#define CSR_ACSMSEQTERM12_LSB                           14
#define CSR_ACSMSEQTERM12_MASK                          BIT(14)
#define CSR_ACSMLP3CA312_LSB                            15
#define CSR_ACSMLP3CA312_MASK                           BIT(15)
/* CSR_ACSMSEQ0X13 */
#define CSR_ACSMSEQ0X13_LSB                             0
#define CSR_ACSMSEQ0X13_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY13_LSB                           0
#define CSR_ACSMMCLKDLY13_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE13_LSB                             8
#define CSR_ACSMDDRWE13_MASK                            BIT(8)
#define CSR_ACSMDDRCAS13_LSB                            9
#define CSR_ACSMDDRCAS13_MASK                           BIT(9)
#define CSR_ACSMDDRRAS13_LSB                            10
#define CSR_ACSMDDRRAS13_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET13_LSB                         11
#define CSR_ACSMDDRCKESET13_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR13_LSB                         12
#define CSR_ACSMDDRCKECLR13_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD13_LSB                        13
#define CSR_ACSMSEQGATECMD13_MASK                       BIT(13)
#define CSR_ACSMSEQTERM13_LSB                           14
#define CSR_ACSMSEQTERM13_MASK                          BIT(14)
#define CSR_ACSMLP3CA313_LSB                            15
#define CSR_ACSMLP3CA313_MASK                           BIT(15)
/* CSR_ACSMSEQ0X14 */
#define CSR_ACSMSEQ0X14_LSB                             0
#define CSR_ACSMSEQ0X14_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY14_LSB                           0
#define CSR_ACSMMCLKDLY14_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE14_LSB                             8
#define CSR_ACSMDDRWE14_MASK                            BIT(8)
#define CSR_ACSMDDRCAS14_LSB                            9
#define CSR_ACSMDDRCAS14_MASK                           BIT(9)
#define CSR_ACSMDDRRAS14_LSB                            10
#define CSR_ACSMDDRRAS14_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET14_LSB                         11
#define CSR_ACSMDDRCKESET14_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR14_LSB                         12
#define CSR_ACSMDDRCKECLR14_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD14_LSB                        13
#define CSR_ACSMSEQGATECMD14_MASK                       BIT(13)
#define CSR_ACSMSEQTERM14_LSB                           14
#define CSR_ACSMSEQTERM14_MASK                          BIT(14)
#define CSR_ACSMLP3CA314_LSB                            15
#define CSR_ACSMLP3CA314_MASK                           BIT(15)
/* CSR_ACSMSEQ0X15 */
#define CSR_ACSMSEQ0X15_LSB                             0
#define CSR_ACSMSEQ0X15_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY15_LSB                           0
#define CSR_ACSMMCLKDLY15_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE15_LSB                             8
#define CSR_ACSMDDRWE15_MASK                            BIT(8)
#define CSR_ACSMDDRCAS15_LSB                            9
#define CSR_ACSMDDRCAS15_MASK                           BIT(9)
#define CSR_ACSMDDRRAS15_LSB                            10
#define CSR_ACSMDDRRAS15_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET15_LSB                         11
#define CSR_ACSMDDRCKESET15_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR15_LSB                         12
#define CSR_ACSMDDRCKECLR15_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD15_LSB                        13
#define CSR_ACSMSEQGATECMD15_MASK                       BIT(13)
#define CSR_ACSMSEQTERM15_LSB                           14
#define CSR_ACSMSEQTERM15_MASK                          BIT(14)
#define CSR_ACSMLP3CA315_LSB                            15
#define CSR_ACSMLP3CA315_MASK                           BIT(15)
/* CSR_ACSMSEQ0X16 */
#define CSR_ACSMSEQ0X16_LSB                             0
#define CSR_ACSMSEQ0X16_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY16_LSB                           0
#define CSR_ACSMMCLKDLY16_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE16_LSB                             8
#define CSR_ACSMDDRWE16_MASK                            BIT(8)
#define CSR_ACSMDDRCAS16_LSB                            9
#define CSR_ACSMDDRCAS16_MASK                           BIT(9)
#define CSR_ACSMDDRRAS16_LSB                            10
#define CSR_ACSMDDRRAS16_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET16_LSB                         11
#define CSR_ACSMDDRCKESET16_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR16_LSB                         12
#define CSR_ACSMDDRCKECLR16_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD16_LSB                        13
#define CSR_ACSMSEQGATECMD16_MASK                       BIT(13)
#define CSR_ACSMSEQTERM16_LSB                           14
#define CSR_ACSMSEQTERM16_MASK                          BIT(14)
#define CSR_ACSMLP3CA316_LSB                            15
#define CSR_ACSMLP3CA316_MASK                           BIT(15)
/* CSR_ACSMSEQ0X17 */
#define CSR_ACSMSEQ0X17_LSB                             0
#define CSR_ACSMSEQ0X17_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY17_LSB                           0
#define CSR_ACSMMCLKDLY17_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE17_LSB                             8
#define CSR_ACSMDDRWE17_MASK                            BIT(8)
#define CSR_ACSMDDRCAS17_LSB                            9
#define CSR_ACSMDDRCAS17_MASK                           BIT(9)
#define CSR_ACSMDDRRAS17_LSB                            10
#define CSR_ACSMDDRRAS17_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET17_LSB                         11
#define CSR_ACSMDDRCKESET17_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR17_LSB                         12
#define CSR_ACSMDDRCKECLR17_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD17_LSB                        13
#define CSR_ACSMSEQGATECMD17_MASK                       BIT(13)
#define CSR_ACSMSEQTERM17_LSB                           14
#define CSR_ACSMSEQTERM17_MASK                          BIT(14)
#define CSR_ACSMLP3CA317_LSB                            15
#define CSR_ACSMLP3CA317_MASK                           BIT(15)
/* CSR_ACSMSEQ0X18 */
#define CSR_ACSMSEQ0X18_LSB                             0
#define CSR_ACSMSEQ0X18_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY18_LSB                           0
#define CSR_ACSMMCLKDLY18_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE18_LSB                             8
#define CSR_ACSMDDRWE18_MASK                            BIT(8)
#define CSR_ACSMDDRCAS18_LSB                            9
#define CSR_ACSMDDRCAS18_MASK                           BIT(9)
#define CSR_ACSMDDRRAS18_LSB                            10
#define CSR_ACSMDDRRAS18_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET18_LSB                         11
#define CSR_ACSMDDRCKESET18_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR18_LSB                         12
#define CSR_ACSMDDRCKECLR18_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD18_LSB                        13
#define CSR_ACSMSEQGATECMD18_MASK                       BIT(13)
#define CSR_ACSMSEQTERM18_LSB                           14
#define CSR_ACSMSEQTERM18_MASK                          BIT(14)
#define CSR_ACSMLP3CA318_LSB                            15
#define CSR_ACSMLP3CA318_MASK                           BIT(15)
/* CSR_ACSMSEQ0X19 */
#define CSR_ACSMSEQ0X19_LSB                             0
#define CSR_ACSMSEQ0X19_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY19_LSB                           0
#define CSR_ACSMMCLKDLY19_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE19_LSB                             8
#define CSR_ACSMDDRWE19_MASK                            BIT(8)
#define CSR_ACSMDDRCAS19_LSB                            9
#define CSR_ACSMDDRCAS19_MASK                           BIT(9)
#define CSR_ACSMDDRRAS19_LSB                            10
#define CSR_ACSMDDRRAS19_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET19_LSB                         11
#define CSR_ACSMDDRCKESET19_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR19_LSB                         12
#define CSR_ACSMDDRCKECLR19_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD19_LSB                        13
#define CSR_ACSMSEQGATECMD19_MASK                       BIT(13)
#define CSR_ACSMSEQTERM19_LSB                           14
#define CSR_ACSMSEQTERM19_MASK                          BIT(14)
#define CSR_ACSMLP3CA319_LSB                            15
#define CSR_ACSMLP3CA319_MASK                           BIT(15)
/* CSR_ACSMSEQ0X20 */
#define CSR_ACSMSEQ0X20_LSB                             0
#define CSR_ACSMSEQ0X20_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY20_LSB                           0
#define CSR_ACSMMCLKDLY20_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE20_LSB                             8
#define CSR_ACSMDDRWE20_MASK                            BIT(8)
#define CSR_ACSMDDRCAS20_LSB                            9
#define CSR_ACSMDDRCAS20_MASK                           BIT(9)
#define CSR_ACSMDDRRAS20_LSB                            10
#define CSR_ACSMDDRRAS20_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET20_LSB                         11
#define CSR_ACSMDDRCKESET20_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR20_LSB                         12
#define CSR_ACSMDDRCKECLR20_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD20_LSB                        13
#define CSR_ACSMSEQGATECMD20_MASK                       BIT(13)
#define CSR_ACSMSEQTERM20_LSB                           14
#define CSR_ACSMSEQTERM20_MASK                          BIT(14)
#define CSR_ACSMLP3CA320_LSB                            15
#define CSR_ACSMLP3CA320_MASK                           BIT(15)
/* CSR_ACSMSEQ0X21 */
#define CSR_ACSMSEQ0X21_LSB                             0
#define CSR_ACSMSEQ0X21_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY21_LSB                           0
#define CSR_ACSMMCLKDLY21_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE21_LSB                             8
#define CSR_ACSMDDRWE21_MASK                            BIT(8)
#define CSR_ACSMDDRCAS21_LSB                            9
#define CSR_ACSMDDRCAS21_MASK                           BIT(9)
#define CSR_ACSMDDRRAS21_LSB                            10
#define CSR_ACSMDDRRAS21_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET21_LSB                         11
#define CSR_ACSMDDRCKESET21_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR21_LSB                         12
#define CSR_ACSMDDRCKECLR21_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD21_LSB                        13
#define CSR_ACSMSEQGATECMD21_MASK                       BIT(13)
#define CSR_ACSMSEQTERM21_LSB                           14
#define CSR_ACSMSEQTERM21_MASK                          BIT(14)
#define CSR_ACSMLP3CA321_LSB                            15
#define CSR_ACSMLP3CA321_MASK                           BIT(15)
/* CSR_ACSMSEQ0X22 */
#define CSR_ACSMSEQ0X22_LSB                             0
#define CSR_ACSMSEQ0X22_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY22_LSB                           0
#define CSR_ACSMMCLKDLY22_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE22_LSB                             8
#define CSR_ACSMDDRWE22_MASK                            BIT(8)
#define CSR_ACSMDDRCAS22_LSB                            9
#define CSR_ACSMDDRCAS22_MASK                           BIT(9)
#define CSR_ACSMDDRRAS22_LSB                            10
#define CSR_ACSMDDRRAS22_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET22_LSB                         11
#define CSR_ACSMDDRCKESET22_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR22_LSB                         12
#define CSR_ACSMDDRCKECLR22_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD22_LSB                        13
#define CSR_ACSMSEQGATECMD22_MASK                       BIT(13)
#define CSR_ACSMSEQTERM22_LSB                           14
#define CSR_ACSMSEQTERM22_MASK                          BIT(14)
#define CSR_ACSMLP3CA322_LSB                            15
#define CSR_ACSMLP3CA322_MASK                           BIT(15)
/* CSR_ACSMSEQ0X23 */
#define CSR_ACSMSEQ0X23_LSB                             0
#define CSR_ACSMSEQ0X23_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY23_LSB                           0
#define CSR_ACSMMCLKDLY23_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE23_LSB                             8
#define CSR_ACSMDDRWE23_MASK                            BIT(8)
#define CSR_ACSMDDRCAS23_LSB                            9
#define CSR_ACSMDDRCAS23_MASK                           BIT(9)
#define CSR_ACSMDDRRAS23_LSB                            10
#define CSR_ACSMDDRRAS23_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET23_LSB                         11
#define CSR_ACSMDDRCKESET23_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR23_LSB                         12
#define CSR_ACSMDDRCKECLR23_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD23_LSB                        13
#define CSR_ACSMSEQGATECMD23_MASK                       BIT(13)
#define CSR_ACSMSEQTERM23_LSB                           14
#define CSR_ACSMSEQTERM23_MASK                          BIT(14)
#define CSR_ACSMLP3CA323_LSB                            15
#define CSR_ACSMLP3CA323_MASK                           BIT(15)
/* CSR_ACSMSEQ0X24 */
#define CSR_ACSMSEQ0X24_LSB                             0
#define CSR_ACSMSEQ0X24_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY24_LSB                           0
#define CSR_ACSMMCLKDLY24_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE24_LSB                             8
#define CSR_ACSMDDRWE24_MASK                            BIT(8)
#define CSR_ACSMDDRCAS24_LSB                            9
#define CSR_ACSMDDRCAS24_MASK                           BIT(9)
#define CSR_ACSMDDRRAS24_LSB                            10
#define CSR_ACSMDDRRAS24_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET24_LSB                         11
#define CSR_ACSMDDRCKESET24_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR24_LSB                         12
#define CSR_ACSMDDRCKECLR24_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD24_LSB                        13
#define CSR_ACSMSEQGATECMD24_MASK                       BIT(13)
#define CSR_ACSMSEQTERM24_LSB                           14
#define CSR_ACSMSEQTERM24_MASK                          BIT(14)
#define CSR_ACSMLP3CA324_LSB                            15
#define CSR_ACSMLP3CA324_MASK                           BIT(15)
/* CSR_ACSMSEQ0X25 */
#define CSR_ACSMSEQ0X25_LSB                             0
#define CSR_ACSMSEQ0X25_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY25_LSB                           0
#define CSR_ACSMMCLKDLY25_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE25_LSB                             8
#define CSR_ACSMDDRWE25_MASK                            BIT(8)
#define CSR_ACSMDDRCAS25_LSB                            9
#define CSR_ACSMDDRCAS25_MASK                           BIT(9)
#define CSR_ACSMDDRRAS25_LSB                            10
#define CSR_ACSMDDRRAS25_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET25_LSB                         11
#define CSR_ACSMDDRCKESET25_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR25_LSB                         12
#define CSR_ACSMDDRCKECLR25_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD25_LSB                        13
#define CSR_ACSMSEQGATECMD25_MASK                       BIT(13)
#define CSR_ACSMSEQTERM25_LSB                           14
#define CSR_ACSMSEQTERM25_MASK                          BIT(14)
#define CSR_ACSMLP3CA325_LSB                            15
#define CSR_ACSMLP3CA325_MASK                           BIT(15)
/* CSR_ACSMSEQ0X26 */
#define CSR_ACSMSEQ0X26_LSB                             0
#define CSR_ACSMSEQ0X26_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY26_LSB                           0
#define CSR_ACSMMCLKDLY26_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE26_LSB                             8
#define CSR_ACSMDDRWE26_MASK                            BIT(8)
#define CSR_ACSMDDRCAS26_LSB                            9
#define CSR_ACSMDDRCAS26_MASK                           BIT(9)
#define CSR_ACSMDDRRAS26_LSB                            10
#define CSR_ACSMDDRRAS26_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET26_LSB                         11
#define CSR_ACSMDDRCKESET26_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR26_LSB                         12
#define CSR_ACSMDDRCKECLR26_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD26_LSB                        13
#define CSR_ACSMSEQGATECMD26_MASK                       BIT(13)
#define CSR_ACSMSEQTERM26_LSB                           14
#define CSR_ACSMSEQTERM26_MASK                          BIT(14)
#define CSR_ACSMLP3CA326_LSB                            15
#define CSR_ACSMLP3CA326_MASK                           BIT(15)
/* CSR_ACSMSEQ0X27 */
#define CSR_ACSMSEQ0X27_LSB                             0
#define CSR_ACSMSEQ0X27_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY27_LSB                           0
#define CSR_ACSMMCLKDLY27_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE27_LSB                             8
#define CSR_ACSMDDRWE27_MASK                            BIT(8)
#define CSR_ACSMDDRCAS27_LSB                            9
#define CSR_ACSMDDRCAS27_MASK                           BIT(9)
#define CSR_ACSMDDRRAS27_LSB                            10
#define CSR_ACSMDDRRAS27_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET27_LSB                         11
#define CSR_ACSMDDRCKESET27_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR27_LSB                         12
#define CSR_ACSMDDRCKECLR27_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD27_LSB                        13
#define CSR_ACSMSEQGATECMD27_MASK                       BIT(13)
#define CSR_ACSMSEQTERM27_LSB                           14
#define CSR_ACSMSEQTERM27_MASK                          BIT(14)
#define CSR_ACSMLP3CA327_LSB                            15
#define CSR_ACSMLP3CA327_MASK                           BIT(15)
/* CSR_ACSMSEQ0X28 */
#define CSR_ACSMSEQ0X28_LSB                             0
#define CSR_ACSMSEQ0X28_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY28_LSB                           0
#define CSR_ACSMMCLKDLY28_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE28_LSB                             8
#define CSR_ACSMDDRWE28_MASK                            BIT(8)
#define CSR_ACSMDDRCAS28_LSB                            9
#define CSR_ACSMDDRCAS28_MASK                           BIT(9)
#define CSR_ACSMDDRRAS28_LSB                            10
#define CSR_ACSMDDRRAS28_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET28_LSB                         11
#define CSR_ACSMDDRCKESET28_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR28_LSB                         12
#define CSR_ACSMDDRCKECLR28_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD28_LSB                        13
#define CSR_ACSMSEQGATECMD28_MASK                       BIT(13)
#define CSR_ACSMSEQTERM28_LSB                           14
#define CSR_ACSMSEQTERM28_MASK                          BIT(14)
#define CSR_ACSMLP3CA328_LSB                            15
#define CSR_ACSMLP3CA328_MASK                           BIT(15)
/* CSR_ACSMSEQ0X29 */
#define CSR_ACSMSEQ0X29_LSB                             0
#define CSR_ACSMSEQ0X29_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY29_LSB                           0
#define CSR_ACSMMCLKDLY29_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE29_LSB                             8
#define CSR_ACSMDDRWE29_MASK                            BIT(8)
#define CSR_ACSMDDRCAS29_LSB                            9
#define CSR_ACSMDDRCAS29_MASK                           BIT(9)
#define CSR_ACSMDDRRAS29_LSB                            10
#define CSR_ACSMDDRRAS29_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET29_LSB                         11
#define CSR_ACSMDDRCKESET29_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR29_LSB                         12
#define CSR_ACSMDDRCKECLR29_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD29_LSB                        13
#define CSR_ACSMSEQGATECMD29_MASK                       BIT(13)
#define CSR_ACSMSEQTERM29_LSB                           14
#define CSR_ACSMSEQTERM29_MASK                          BIT(14)
#define CSR_ACSMLP3CA329_LSB                            15
#define CSR_ACSMLP3CA329_MASK                           BIT(15)
/* CSR_ACSMSEQ0X30 */
#define CSR_ACSMSEQ0X30_LSB                             0
#define CSR_ACSMSEQ0X30_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY30_LSB                           0
#define CSR_ACSMMCLKDLY30_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE30_LSB                             8
#define CSR_ACSMDDRWE30_MASK                            BIT(8)
#define CSR_ACSMDDRCAS30_LSB                            9
#define CSR_ACSMDDRCAS30_MASK                           BIT(9)
#define CSR_ACSMDDRRAS30_LSB                            10
#define CSR_ACSMDDRRAS30_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET30_LSB                         11
#define CSR_ACSMDDRCKESET30_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR30_LSB                         12
#define CSR_ACSMDDRCKECLR30_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD30_LSB                        13
#define CSR_ACSMSEQGATECMD30_MASK                       BIT(13)
#define CSR_ACSMSEQTERM30_LSB                           14
#define CSR_ACSMSEQTERM30_MASK                          BIT(14)
#define CSR_ACSMLP3CA330_LSB                            15
#define CSR_ACSMLP3CA330_MASK                           BIT(15)
/* CSR_ACSMSEQ0X31 */
#define CSR_ACSMSEQ0X31_LSB                             0
#define CSR_ACSMSEQ0X31_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMMCLKDLY31_LSB                           0
#define CSR_ACSMMCLKDLY31_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMDDRWE31_LSB                             8
#define CSR_ACSMDDRWE31_MASK                            BIT(8)
#define CSR_ACSMDDRCAS31_LSB                            9
#define CSR_ACSMDDRCAS31_MASK                           BIT(9)
#define CSR_ACSMDDRRAS31_LSB                            10
#define CSR_ACSMDDRRAS31_MASK                           BIT(10)
#define CSR_ACSMDDRCKESET31_LSB                         11
#define CSR_ACSMDDRCKESET31_MASK                        BIT(11)
#define CSR_ACSMDDRCKECLR31_LSB                         12
#define CSR_ACSMDDRCKECLR31_MASK                        BIT(12)
#define CSR_ACSMSEQGATECMD31_LSB                        13
#define CSR_ACSMSEQGATECMD31_MASK                       BIT(13)
#define CSR_ACSMSEQTERM31_LSB                           14
#define CSR_ACSMSEQTERM31_MASK                          BIT(14)
#define CSR_ACSMLP3CA331_LSB                            15
#define CSR_ACSMLP3CA331_MASK                           BIT(15)
/* CSR_ACSMSEQ1X0 */
#define CSR_ACSMSEQ1X0_LSB                              0
#define CSR_ACSMSEQ1X0_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS0_LSB                              0
#define CSR_ACSMDDRCS0_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN0_LSB                            8
#define CSR_ACSMSAVEGEN0_MASK                           BIT(8)
#define CSR_ACSMLOADCHK0_LSB                            9
#define CSR_ACSMLOADCHK0_MASK                           BIT(9)
#define CSR_ACSMNORXENB0_LSB                            10
#define CSR_ACSMNORXENB0_MASK                           BIT(10)
#define CSR_ACSMNORXVAL0_LSB                            11
#define CSR_ACSMNORXVAL0_MASK                           BIT(11)
#define CSR_ACSMDDRBNK0_LSB                             12
#define CSR_ACSMDDRBNK0_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X1 */
#define CSR_ACSMSEQ1X1_LSB                              0
#define CSR_ACSMSEQ1X1_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS1_LSB                              0
#define CSR_ACSMDDRCS1_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN1_LSB                            8
#define CSR_ACSMSAVEGEN1_MASK                           BIT(8)
#define CSR_ACSMLOADCHK1_LSB                            9
#define CSR_ACSMLOADCHK1_MASK                           BIT(9)
#define CSR_ACSMNORXENB1_LSB                            10
#define CSR_ACSMNORXENB1_MASK                           BIT(10)
#define CSR_ACSMNORXVAL1_LSB                            11
#define CSR_ACSMNORXVAL1_MASK                           BIT(11)
#define CSR_ACSMDDRBNK1_LSB                             12
#define CSR_ACSMDDRBNK1_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X2 */
#define CSR_ACSMSEQ1X2_LSB                              0
#define CSR_ACSMSEQ1X2_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS2_LSB                              0
#define CSR_ACSMDDRCS2_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN2_LSB                            8
#define CSR_ACSMSAVEGEN2_MASK                           BIT(8)
#define CSR_ACSMLOADCHK2_LSB                            9
#define CSR_ACSMLOADCHK2_MASK                           BIT(9)
#define CSR_ACSMNORXENB2_LSB                            10
#define CSR_ACSMNORXENB2_MASK                           BIT(10)
#define CSR_ACSMNORXVAL2_LSB                            11
#define CSR_ACSMNORXVAL2_MASK                           BIT(11)
#define CSR_ACSMDDRBNK2_LSB                             12
#define CSR_ACSMDDRBNK2_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X3 */
#define CSR_ACSMSEQ1X3_LSB                              0
#define CSR_ACSMSEQ1X3_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS3_LSB                              0
#define CSR_ACSMDDRCS3_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN3_LSB                            8
#define CSR_ACSMSAVEGEN3_MASK                           BIT(8)
#define CSR_ACSMLOADCHK3_LSB                            9
#define CSR_ACSMLOADCHK3_MASK                           BIT(9)
#define CSR_ACSMNORXENB3_LSB                            10
#define CSR_ACSMNORXENB3_MASK                           BIT(10)
#define CSR_ACSMNORXVAL3_LSB                            11
#define CSR_ACSMNORXVAL3_MASK                           BIT(11)
#define CSR_ACSMDDRBNK3_LSB                             12
#define CSR_ACSMDDRBNK3_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X4 */
#define CSR_ACSMSEQ1X4_LSB                              0
#define CSR_ACSMSEQ1X4_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS4_LSB                              0
#define CSR_ACSMDDRCS4_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN4_LSB                            8
#define CSR_ACSMSAVEGEN4_MASK                           BIT(8)
#define CSR_ACSMLOADCHK4_LSB                            9
#define CSR_ACSMLOADCHK4_MASK                           BIT(9)
#define CSR_ACSMNORXENB4_LSB                            10
#define CSR_ACSMNORXENB4_MASK                           BIT(10)
#define CSR_ACSMNORXVAL4_LSB                            11
#define CSR_ACSMNORXVAL4_MASK                           BIT(11)
#define CSR_ACSMDDRBNK4_LSB                             12
#define CSR_ACSMDDRBNK4_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X5 */
#define CSR_ACSMSEQ1X5_LSB                              0
#define CSR_ACSMSEQ1X5_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS5_LSB                              0
#define CSR_ACSMDDRCS5_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN5_LSB                            8
#define CSR_ACSMSAVEGEN5_MASK                           BIT(8)
#define CSR_ACSMLOADCHK5_LSB                            9
#define CSR_ACSMLOADCHK5_MASK                           BIT(9)
#define CSR_ACSMNORXENB5_LSB                            10
#define CSR_ACSMNORXENB5_MASK                           BIT(10)
#define CSR_ACSMNORXVAL5_LSB                            11
#define CSR_ACSMNORXVAL5_MASK                           BIT(11)
#define CSR_ACSMDDRBNK5_LSB                             12
#define CSR_ACSMDDRBNK5_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X6 */
#define CSR_ACSMSEQ1X6_LSB                              0
#define CSR_ACSMSEQ1X6_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS6_LSB                              0
#define CSR_ACSMDDRCS6_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN6_LSB                            8
#define CSR_ACSMSAVEGEN6_MASK                           BIT(8)
#define CSR_ACSMLOADCHK6_LSB                            9
#define CSR_ACSMLOADCHK6_MASK                           BIT(9)
#define CSR_ACSMNORXENB6_LSB                            10
#define CSR_ACSMNORXENB6_MASK                           BIT(10)
#define CSR_ACSMNORXVAL6_LSB                            11
#define CSR_ACSMNORXVAL6_MASK                           BIT(11)
#define CSR_ACSMDDRBNK6_LSB                             12
#define CSR_ACSMDDRBNK6_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X7 */
#define CSR_ACSMSEQ1X7_LSB                              0
#define CSR_ACSMSEQ1X7_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS7_LSB                              0
#define CSR_ACSMDDRCS7_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN7_LSB                            8
#define CSR_ACSMSAVEGEN7_MASK                           BIT(8)
#define CSR_ACSMLOADCHK7_LSB                            9
#define CSR_ACSMLOADCHK7_MASK                           BIT(9)
#define CSR_ACSMNORXENB7_LSB                            10
#define CSR_ACSMNORXENB7_MASK                           BIT(10)
#define CSR_ACSMNORXVAL7_LSB                            11
#define CSR_ACSMNORXVAL7_MASK                           BIT(11)
#define CSR_ACSMDDRBNK7_LSB                             12
#define CSR_ACSMDDRBNK7_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X8 */
#define CSR_ACSMSEQ1X8_LSB                              0
#define CSR_ACSMSEQ1X8_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS8_LSB                              0
#define CSR_ACSMDDRCS8_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN8_LSB                            8
#define CSR_ACSMSAVEGEN8_MASK                           BIT(8)
#define CSR_ACSMLOADCHK8_LSB                            9
#define CSR_ACSMLOADCHK8_MASK                           BIT(9)
#define CSR_ACSMNORXENB8_LSB                            10
#define CSR_ACSMNORXENB8_MASK                           BIT(10)
#define CSR_ACSMNORXVAL8_LSB                            11
#define CSR_ACSMNORXVAL8_MASK                           BIT(11)
#define CSR_ACSMDDRBNK8_LSB                             12
#define CSR_ACSMDDRBNK8_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X9 */
#define CSR_ACSMSEQ1X9_LSB                              0
#define CSR_ACSMSEQ1X9_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRCS9_LSB                              0
#define CSR_ACSMDDRCS9_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN9_LSB                            8
#define CSR_ACSMSAVEGEN9_MASK                           BIT(8)
#define CSR_ACSMLOADCHK9_LSB                            9
#define CSR_ACSMLOADCHK9_MASK                           BIT(9)
#define CSR_ACSMNORXENB9_LSB                            10
#define CSR_ACSMNORXENB9_MASK                           BIT(10)
#define CSR_ACSMNORXVAL9_LSB                            11
#define CSR_ACSMNORXVAL9_MASK                           BIT(11)
#define CSR_ACSMDDRBNK9_LSB                             12
#define CSR_ACSMDDRBNK9_MASK                            GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X10 */
#define CSR_ACSMSEQ1X10_LSB                             0
#define CSR_ACSMSEQ1X10_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS10_LSB                             0
#define CSR_ACSMDDRCS10_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN10_LSB                           8
#define CSR_ACSMSAVEGEN10_MASK                          BIT(8)
#define CSR_ACSMLOADCHK10_LSB                           9
#define CSR_ACSMLOADCHK10_MASK                          BIT(9)
#define CSR_ACSMNORXENB10_LSB                           10
#define CSR_ACSMNORXENB10_MASK                          BIT(10)
#define CSR_ACSMNORXVAL10_LSB                           11
#define CSR_ACSMNORXVAL10_MASK                          BIT(11)
#define CSR_ACSMDDRBNK10_LSB                            12
#define CSR_ACSMDDRBNK10_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X11 */
#define CSR_ACSMSEQ1X11_LSB                             0
#define CSR_ACSMSEQ1X11_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS11_LSB                             0
#define CSR_ACSMDDRCS11_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN11_LSB                           8
#define CSR_ACSMSAVEGEN11_MASK                          BIT(8)
#define CSR_ACSMLOADCHK11_LSB                           9
#define CSR_ACSMLOADCHK11_MASK                          BIT(9)
#define CSR_ACSMNORXENB11_LSB                           10
#define CSR_ACSMNORXENB11_MASK                          BIT(10)
#define CSR_ACSMNORXVAL11_LSB                           11
#define CSR_ACSMNORXVAL11_MASK                          BIT(11)
#define CSR_ACSMDDRBNK11_LSB                            12
#define CSR_ACSMDDRBNK11_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X12 */
#define CSR_ACSMSEQ1X12_LSB                             0
#define CSR_ACSMSEQ1X12_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS12_LSB                             0
#define CSR_ACSMDDRCS12_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN12_LSB                           8
#define CSR_ACSMSAVEGEN12_MASK                          BIT(8)
#define CSR_ACSMLOADCHK12_LSB                           9
#define CSR_ACSMLOADCHK12_MASK                          BIT(9)
#define CSR_ACSMNORXENB12_LSB                           10
#define CSR_ACSMNORXENB12_MASK                          BIT(10)
#define CSR_ACSMNORXVAL12_LSB                           11
#define CSR_ACSMNORXVAL12_MASK                          BIT(11)
#define CSR_ACSMDDRBNK12_LSB                            12
#define CSR_ACSMDDRBNK12_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X13 */
#define CSR_ACSMSEQ1X13_LSB                             0
#define CSR_ACSMSEQ1X13_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS13_LSB                             0
#define CSR_ACSMDDRCS13_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN13_LSB                           8
#define CSR_ACSMSAVEGEN13_MASK                          BIT(8)
#define CSR_ACSMLOADCHK13_LSB                           9
#define CSR_ACSMLOADCHK13_MASK                          BIT(9)
#define CSR_ACSMNORXENB13_LSB                           10
#define CSR_ACSMNORXENB13_MASK                          BIT(10)
#define CSR_ACSMNORXVAL13_LSB                           11
#define CSR_ACSMNORXVAL13_MASK                          BIT(11)
#define CSR_ACSMDDRBNK13_LSB                            12
#define CSR_ACSMDDRBNK13_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X14 */
#define CSR_ACSMSEQ1X14_LSB                             0
#define CSR_ACSMSEQ1X14_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS14_LSB                             0
#define CSR_ACSMDDRCS14_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN14_LSB                           8
#define CSR_ACSMSAVEGEN14_MASK                          BIT(8)
#define CSR_ACSMLOADCHK14_LSB                           9
#define CSR_ACSMLOADCHK14_MASK                          BIT(9)
#define CSR_ACSMNORXENB14_LSB                           10
#define CSR_ACSMNORXENB14_MASK                          BIT(10)
#define CSR_ACSMNORXVAL14_LSB                           11
#define CSR_ACSMNORXVAL14_MASK                          BIT(11)
#define CSR_ACSMDDRBNK14_LSB                            12
#define CSR_ACSMDDRBNK14_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X15 */
#define CSR_ACSMSEQ1X15_LSB                             0
#define CSR_ACSMSEQ1X15_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS15_LSB                             0
#define CSR_ACSMDDRCS15_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN15_LSB                           8
#define CSR_ACSMSAVEGEN15_MASK                          BIT(8)
#define CSR_ACSMLOADCHK15_LSB                           9
#define CSR_ACSMLOADCHK15_MASK                          BIT(9)
#define CSR_ACSMNORXENB15_LSB                           10
#define CSR_ACSMNORXENB15_MASK                          BIT(10)
#define CSR_ACSMNORXVAL15_LSB                           11
#define CSR_ACSMNORXVAL15_MASK                          BIT(11)
#define CSR_ACSMDDRBNK15_LSB                            12
#define CSR_ACSMDDRBNK15_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X16 */
#define CSR_ACSMSEQ1X16_LSB                             0
#define CSR_ACSMSEQ1X16_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS16_LSB                             0
#define CSR_ACSMDDRCS16_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN16_LSB                           8
#define CSR_ACSMSAVEGEN16_MASK                          BIT(8)
#define CSR_ACSMLOADCHK16_LSB                           9
#define CSR_ACSMLOADCHK16_MASK                          BIT(9)
#define CSR_ACSMNORXENB16_LSB                           10
#define CSR_ACSMNORXENB16_MASK                          BIT(10)
#define CSR_ACSMNORXVAL16_LSB                           11
#define CSR_ACSMNORXVAL16_MASK                          BIT(11)
#define CSR_ACSMDDRBNK16_LSB                            12
#define CSR_ACSMDDRBNK16_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X17 */
#define CSR_ACSMSEQ1X17_LSB                             0
#define CSR_ACSMSEQ1X17_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS17_LSB                             0
#define CSR_ACSMDDRCS17_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN17_LSB                           8
#define CSR_ACSMSAVEGEN17_MASK                          BIT(8)
#define CSR_ACSMLOADCHK17_LSB                           9
#define CSR_ACSMLOADCHK17_MASK                          BIT(9)
#define CSR_ACSMNORXENB17_LSB                           10
#define CSR_ACSMNORXENB17_MASK                          BIT(10)
#define CSR_ACSMNORXVAL17_LSB                           11
#define CSR_ACSMNORXVAL17_MASK                          BIT(11)
#define CSR_ACSMDDRBNK17_LSB                            12
#define CSR_ACSMDDRBNK17_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X18 */
#define CSR_ACSMSEQ1X18_LSB                             0
#define CSR_ACSMSEQ1X18_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS18_LSB                             0
#define CSR_ACSMDDRCS18_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN18_LSB                           8
#define CSR_ACSMSAVEGEN18_MASK                          BIT(8)
#define CSR_ACSMLOADCHK18_LSB                           9
#define CSR_ACSMLOADCHK18_MASK                          BIT(9)
#define CSR_ACSMNORXENB18_LSB                           10
#define CSR_ACSMNORXENB18_MASK                          BIT(10)
#define CSR_ACSMNORXVAL18_LSB                           11
#define CSR_ACSMNORXVAL18_MASK                          BIT(11)
#define CSR_ACSMDDRBNK18_LSB                            12
#define CSR_ACSMDDRBNK18_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X19 */
#define CSR_ACSMSEQ1X19_LSB                             0
#define CSR_ACSMSEQ1X19_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS19_LSB                             0
#define CSR_ACSMDDRCS19_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN19_LSB                           8
#define CSR_ACSMSAVEGEN19_MASK                          BIT(8)
#define CSR_ACSMLOADCHK19_LSB                           9
#define CSR_ACSMLOADCHK19_MASK                          BIT(9)
#define CSR_ACSMNORXENB19_LSB                           10
#define CSR_ACSMNORXENB19_MASK                          BIT(10)
#define CSR_ACSMNORXVAL19_LSB                           11
#define CSR_ACSMNORXVAL19_MASK                          BIT(11)
#define CSR_ACSMDDRBNK19_LSB                            12
#define CSR_ACSMDDRBNK19_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X20 */
#define CSR_ACSMSEQ1X20_LSB                             0
#define CSR_ACSMSEQ1X20_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS20_LSB                             0
#define CSR_ACSMDDRCS20_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN20_LSB                           8
#define CSR_ACSMSAVEGEN20_MASK                          BIT(8)
#define CSR_ACSMLOADCHK20_LSB                           9
#define CSR_ACSMLOADCHK20_MASK                          BIT(9)
#define CSR_ACSMNORXENB20_LSB                           10
#define CSR_ACSMNORXENB20_MASK                          BIT(10)
#define CSR_ACSMNORXVAL20_LSB                           11
#define CSR_ACSMNORXVAL20_MASK                          BIT(11)
#define CSR_ACSMDDRBNK20_LSB                            12
#define CSR_ACSMDDRBNK20_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X21 */
#define CSR_ACSMSEQ1X21_LSB                             0
#define CSR_ACSMSEQ1X21_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS21_LSB                             0
#define CSR_ACSMDDRCS21_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN21_LSB                           8
#define CSR_ACSMSAVEGEN21_MASK                          BIT(8)
#define CSR_ACSMLOADCHK21_LSB                           9
#define CSR_ACSMLOADCHK21_MASK                          BIT(9)
#define CSR_ACSMNORXENB21_LSB                           10
#define CSR_ACSMNORXENB21_MASK                          BIT(10)
#define CSR_ACSMNORXVAL21_LSB                           11
#define CSR_ACSMNORXVAL21_MASK                          BIT(11)
#define CSR_ACSMDDRBNK21_LSB                            12
#define CSR_ACSMDDRBNK21_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X22 */
#define CSR_ACSMSEQ1X22_LSB                             0
#define CSR_ACSMSEQ1X22_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS22_LSB                             0
#define CSR_ACSMDDRCS22_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN22_LSB                           8
#define CSR_ACSMSAVEGEN22_MASK                          BIT(8)
#define CSR_ACSMLOADCHK22_LSB                           9
#define CSR_ACSMLOADCHK22_MASK                          BIT(9)
#define CSR_ACSMNORXENB22_LSB                           10
#define CSR_ACSMNORXENB22_MASK                          BIT(10)
#define CSR_ACSMNORXVAL22_LSB                           11
#define CSR_ACSMNORXVAL22_MASK                          BIT(11)
#define CSR_ACSMDDRBNK22_LSB                            12
#define CSR_ACSMDDRBNK22_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X23 */
#define CSR_ACSMSEQ1X23_LSB                             0
#define CSR_ACSMSEQ1X23_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS23_LSB                             0
#define CSR_ACSMDDRCS23_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN23_LSB                           8
#define CSR_ACSMSAVEGEN23_MASK                          BIT(8)
#define CSR_ACSMLOADCHK23_LSB                           9
#define CSR_ACSMLOADCHK23_MASK                          BIT(9)
#define CSR_ACSMNORXENB23_LSB                           10
#define CSR_ACSMNORXENB23_MASK                          BIT(10)
#define CSR_ACSMNORXVAL23_LSB                           11
#define CSR_ACSMNORXVAL23_MASK                          BIT(11)
#define CSR_ACSMDDRBNK23_LSB                            12
#define CSR_ACSMDDRBNK23_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X24 */
#define CSR_ACSMSEQ1X24_LSB                             0
#define CSR_ACSMSEQ1X24_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS24_LSB                             0
#define CSR_ACSMDDRCS24_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN24_LSB                           8
#define CSR_ACSMSAVEGEN24_MASK                          BIT(8)
#define CSR_ACSMLOADCHK24_LSB                           9
#define CSR_ACSMLOADCHK24_MASK                          BIT(9)
#define CSR_ACSMNORXENB24_LSB                           10
#define CSR_ACSMNORXENB24_MASK                          BIT(10)
#define CSR_ACSMNORXVAL24_LSB                           11
#define CSR_ACSMNORXVAL24_MASK                          BIT(11)
#define CSR_ACSMDDRBNK24_LSB                            12
#define CSR_ACSMDDRBNK24_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X25 */
#define CSR_ACSMSEQ1X25_LSB                             0
#define CSR_ACSMSEQ1X25_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS25_LSB                             0
#define CSR_ACSMDDRCS25_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN25_LSB                           8
#define CSR_ACSMSAVEGEN25_MASK                          BIT(8)
#define CSR_ACSMLOADCHK25_LSB                           9
#define CSR_ACSMLOADCHK25_MASK                          BIT(9)
#define CSR_ACSMNORXENB25_LSB                           10
#define CSR_ACSMNORXENB25_MASK                          BIT(10)
#define CSR_ACSMNORXVAL25_LSB                           11
#define CSR_ACSMNORXVAL25_MASK                          BIT(11)
#define CSR_ACSMDDRBNK25_LSB                            12
#define CSR_ACSMDDRBNK25_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X26 */
#define CSR_ACSMSEQ1X26_LSB                             0
#define CSR_ACSMSEQ1X26_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS26_LSB                             0
#define CSR_ACSMDDRCS26_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN26_LSB                           8
#define CSR_ACSMSAVEGEN26_MASK                          BIT(8)
#define CSR_ACSMLOADCHK26_LSB                           9
#define CSR_ACSMLOADCHK26_MASK                          BIT(9)
#define CSR_ACSMNORXENB26_LSB                           10
#define CSR_ACSMNORXENB26_MASK                          BIT(10)
#define CSR_ACSMNORXVAL26_LSB                           11
#define CSR_ACSMNORXVAL26_MASK                          BIT(11)
#define CSR_ACSMDDRBNK26_LSB                            12
#define CSR_ACSMDDRBNK26_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X27 */
#define CSR_ACSMSEQ1X27_LSB                             0
#define CSR_ACSMSEQ1X27_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS27_LSB                             0
#define CSR_ACSMDDRCS27_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN27_LSB                           8
#define CSR_ACSMSAVEGEN27_MASK                          BIT(8)
#define CSR_ACSMLOADCHK27_LSB                           9
#define CSR_ACSMLOADCHK27_MASK                          BIT(9)
#define CSR_ACSMNORXENB27_LSB                           10
#define CSR_ACSMNORXENB27_MASK                          BIT(10)
#define CSR_ACSMNORXVAL27_LSB                           11
#define CSR_ACSMNORXVAL27_MASK                          BIT(11)
#define CSR_ACSMDDRBNK27_LSB                            12
#define CSR_ACSMDDRBNK27_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X28 */
#define CSR_ACSMSEQ1X28_LSB                             0
#define CSR_ACSMSEQ1X28_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS28_LSB                             0
#define CSR_ACSMDDRCS28_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN28_LSB                           8
#define CSR_ACSMSAVEGEN28_MASK                          BIT(8)
#define CSR_ACSMLOADCHK28_LSB                           9
#define CSR_ACSMLOADCHK28_MASK                          BIT(9)
#define CSR_ACSMNORXENB28_LSB                           10
#define CSR_ACSMNORXENB28_MASK                          BIT(10)
#define CSR_ACSMNORXVAL28_LSB                           11
#define CSR_ACSMNORXVAL28_MASK                          BIT(11)
#define CSR_ACSMDDRBNK28_LSB                            12
#define CSR_ACSMDDRBNK28_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X29 */
#define CSR_ACSMSEQ1X29_LSB                             0
#define CSR_ACSMSEQ1X29_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS29_LSB                             0
#define CSR_ACSMDDRCS29_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN29_LSB                           8
#define CSR_ACSMSAVEGEN29_MASK                          BIT(8)
#define CSR_ACSMLOADCHK29_LSB                           9
#define CSR_ACSMLOADCHK29_MASK                          BIT(9)
#define CSR_ACSMNORXENB29_LSB                           10
#define CSR_ACSMNORXENB29_MASK                          BIT(10)
#define CSR_ACSMNORXVAL29_LSB                           11
#define CSR_ACSMNORXVAL29_MASK                          BIT(11)
#define CSR_ACSMDDRBNK29_LSB                            12
#define CSR_ACSMDDRBNK29_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X30 */
#define CSR_ACSMSEQ1X30_LSB                             0
#define CSR_ACSMSEQ1X30_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS30_LSB                             0
#define CSR_ACSMDDRCS30_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN30_LSB                           8
#define CSR_ACSMSAVEGEN30_MASK                          BIT(8)
#define CSR_ACSMLOADCHK30_LSB                           9
#define CSR_ACSMLOADCHK30_MASK                          BIT(9)
#define CSR_ACSMNORXENB30_LSB                           10
#define CSR_ACSMNORXENB30_MASK                          BIT(10)
#define CSR_ACSMNORXVAL30_LSB                           11
#define CSR_ACSMNORXVAL30_MASK                          BIT(11)
#define CSR_ACSMDDRBNK30_LSB                            12
#define CSR_ACSMDDRBNK30_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ1X31 */
#define CSR_ACSMSEQ1X31_LSB                             0
#define CSR_ACSMSEQ1X31_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRCS31_LSB                             0
#define CSR_ACSMDDRCS31_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMSAVEGEN31_LSB                           8
#define CSR_ACSMSAVEGEN31_MASK                          BIT(8)
#define CSR_ACSMLOADCHK31_LSB                           9
#define CSR_ACSMLOADCHK31_MASK                          BIT(9)
#define CSR_ACSMNORXENB31_LSB                           10
#define CSR_ACSMNORXENB31_MASK                          BIT(10)
#define CSR_ACSMNORXVAL31_LSB                           11
#define CSR_ACSMNORXVAL31_MASK                          BIT(11)
#define CSR_ACSMDDRBNK31_LSB                            12
#define CSR_ACSMDDRBNK31_MASK                           GENMASK_32(15, 12)
/* CSR_ACSMSEQ2X0 */
#define CSR_ACSMSEQ2X0_LSB                              0
#define CSR_ACSMSEQ2X0_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X0_LSB                       0
#define CSR_ACSMDDRADRX15X0X0_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X1 */
#define CSR_ACSMSEQ2X1_LSB                              0
#define CSR_ACSMSEQ2X1_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X1_LSB                       0
#define CSR_ACSMDDRADRX15X0X1_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X2 */
#define CSR_ACSMSEQ2X2_LSB                              0
#define CSR_ACSMSEQ2X2_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X2_LSB                       0
#define CSR_ACSMDDRADRX15X0X2_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X3 */
#define CSR_ACSMSEQ2X3_LSB                              0
#define CSR_ACSMSEQ2X3_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X3_LSB                       0
#define CSR_ACSMDDRADRX15X0X3_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X4 */
#define CSR_ACSMSEQ2X4_LSB                              0
#define CSR_ACSMSEQ2X4_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X4_LSB                       0
#define CSR_ACSMDDRADRX15X0X4_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X5 */
#define CSR_ACSMSEQ2X5_LSB                              0
#define CSR_ACSMSEQ2X5_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X5_LSB                       0
#define CSR_ACSMDDRADRX15X0X5_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X6 */
#define CSR_ACSMSEQ2X6_LSB                              0
#define CSR_ACSMSEQ2X6_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X6_LSB                       0
#define CSR_ACSMDDRADRX15X0X6_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X7 */
#define CSR_ACSMSEQ2X7_LSB                              0
#define CSR_ACSMSEQ2X7_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X7_LSB                       0
#define CSR_ACSMDDRADRX15X0X7_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X8 */
#define CSR_ACSMSEQ2X8_LSB                              0
#define CSR_ACSMSEQ2X8_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X8_LSB                       0
#define CSR_ACSMDDRADRX15X0X8_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X9 */
#define CSR_ACSMSEQ2X9_LSB                              0
#define CSR_ACSMSEQ2X9_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X9_LSB                       0
#define CSR_ACSMDDRADRX15X0X9_MASK                      GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X10 */
#define CSR_ACSMSEQ2X10_LSB                             0
#define CSR_ACSMSEQ2X10_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X10_LSB                      0
#define CSR_ACSMDDRADRX15X0X10_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X11 */
#define CSR_ACSMSEQ2X11_LSB                             0
#define CSR_ACSMSEQ2X11_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X11_LSB                      0
#define CSR_ACSMDDRADRX15X0X11_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X12 */
#define CSR_ACSMSEQ2X12_LSB                             0
#define CSR_ACSMSEQ2X12_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X12_LSB                      0
#define CSR_ACSMDDRADRX15X0X12_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X13 */
#define CSR_ACSMSEQ2X13_LSB                             0
#define CSR_ACSMSEQ2X13_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X13_LSB                      0
#define CSR_ACSMDDRADRX15X0X13_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X14 */
#define CSR_ACSMSEQ2X14_LSB                             0
#define CSR_ACSMSEQ2X14_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X14_LSB                      0
#define CSR_ACSMDDRADRX15X0X14_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X15 */
#define CSR_ACSMSEQ2X15_LSB                             0
#define CSR_ACSMSEQ2X15_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X15_LSB                      0
#define CSR_ACSMDDRADRX15X0X15_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X16 */
#define CSR_ACSMSEQ2X16_LSB                             0
#define CSR_ACSMSEQ2X16_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X16_LSB                      0
#define CSR_ACSMDDRADRX15X0X16_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X17 */
#define CSR_ACSMSEQ2X17_LSB                             0
#define CSR_ACSMSEQ2X17_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X17_LSB                      0
#define CSR_ACSMDDRADRX15X0X17_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X18 */
#define CSR_ACSMSEQ2X18_LSB                             0
#define CSR_ACSMSEQ2X18_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X18_LSB                      0
#define CSR_ACSMDDRADRX15X0X18_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X19 */
#define CSR_ACSMSEQ2X19_LSB                             0
#define CSR_ACSMSEQ2X19_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X19_LSB                      0
#define CSR_ACSMDDRADRX15X0X19_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X20 */
#define CSR_ACSMSEQ2X20_LSB                             0
#define CSR_ACSMSEQ2X20_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X20_LSB                      0
#define CSR_ACSMDDRADRX15X0X20_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X21 */
#define CSR_ACSMSEQ2X21_LSB                             0
#define CSR_ACSMSEQ2X21_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X21_LSB                      0
#define CSR_ACSMDDRADRX15X0X21_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X22 */
#define CSR_ACSMSEQ2X22_LSB                             0
#define CSR_ACSMSEQ2X22_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X22_LSB                      0
#define CSR_ACSMDDRADRX15X0X22_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X23 */
#define CSR_ACSMSEQ2X23_LSB                             0
#define CSR_ACSMSEQ2X23_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X23_LSB                      0
#define CSR_ACSMDDRADRX15X0X23_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X24 */
#define CSR_ACSMSEQ2X24_LSB                             0
#define CSR_ACSMSEQ2X24_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X24_LSB                      0
#define CSR_ACSMDDRADRX15X0X24_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X25 */
#define CSR_ACSMSEQ2X25_LSB                             0
#define CSR_ACSMSEQ2X25_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X25_LSB                      0
#define CSR_ACSMDDRADRX15X0X25_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X26 */
#define CSR_ACSMSEQ2X26_LSB                             0
#define CSR_ACSMSEQ2X26_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X26_LSB                      0
#define CSR_ACSMDDRADRX15X0X26_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X27 */
#define CSR_ACSMSEQ2X27_LSB                             0
#define CSR_ACSMSEQ2X27_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X27_LSB                      0
#define CSR_ACSMDDRADRX15X0X27_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X28 */
#define CSR_ACSMSEQ2X28_LSB                             0
#define CSR_ACSMSEQ2X28_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X28_LSB                      0
#define CSR_ACSMDDRADRX15X0X28_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X29 */
#define CSR_ACSMSEQ2X29_LSB                             0
#define CSR_ACSMSEQ2X29_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X29_LSB                      0
#define CSR_ACSMDDRADRX15X0X29_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X30 */
#define CSR_ACSMSEQ2X30_LSB                             0
#define CSR_ACSMSEQ2X30_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X30_LSB                      0
#define CSR_ACSMDDRADRX15X0X30_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ2X31 */
#define CSR_ACSMSEQ2X31_LSB                             0
#define CSR_ACSMSEQ2X31_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMDDRADRX15X0X31_LSB                      0
#define CSR_ACSMDDRADRX15X0X31_MASK                     GENMASK_32(15, 0)
/* CSR_ACSMSEQ3X0 */
#define CSR_ACSMSEQ3X0_LSB                              0
#define CSR_ACSMSEQ3X0_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT0_LSB                          0
#define CSR_ACSMCMDREPCNT0_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV0_LSB                             8
#define CSR_ACSMADRADV0_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV0_LSB                             10
#define CSR_ACSMBNKADV0_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD0_LSB                         12
#define CSR_ACSMADRSELLOAD0_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD0_LSB                         14
#define CSR_ACSMBNKSELLOAD0_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE0_LSB                         15
#define CSR_ACSMLONGBUBBLE0_MASK                        BIT(15)
/* CSR_ACSMSEQ3X1 */
#define CSR_ACSMSEQ3X1_LSB                              0
#define CSR_ACSMSEQ3X1_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT1_LSB                          0
#define CSR_ACSMCMDREPCNT1_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV1_LSB                             8
#define CSR_ACSMADRADV1_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV1_LSB                             10
#define CSR_ACSMBNKADV1_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD1_LSB                         12
#define CSR_ACSMADRSELLOAD1_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD1_LSB                         14
#define CSR_ACSMBNKSELLOAD1_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE1_LSB                         15
#define CSR_ACSMLONGBUBBLE1_MASK                        BIT(15)
/* CSR_ACSMSEQ3X2 */
#define CSR_ACSMSEQ3X2_LSB                              0
#define CSR_ACSMSEQ3X2_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT2_LSB                          0
#define CSR_ACSMCMDREPCNT2_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV2_LSB                             8
#define CSR_ACSMADRADV2_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV2_LSB                             10
#define CSR_ACSMBNKADV2_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD2_LSB                         12
#define CSR_ACSMADRSELLOAD2_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD2_LSB                         14
#define CSR_ACSMBNKSELLOAD2_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE2_LSB                         15
#define CSR_ACSMLONGBUBBLE2_MASK                        BIT(15)
/* CSR_ACSMSEQ3X3 */
#define CSR_ACSMSEQ3X3_LSB                              0
#define CSR_ACSMSEQ3X3_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT3_LSB                          0
#define CSR_ACSMCMDREPCNT3_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV3_LSB                             8
#define CSR_ACSMADRADV3_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV3_LSB                             10
#define CSR_ACSMBNKADV3_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD3_LSB                         12
#define CSR_ACSMADRSELLOAD3_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD3_LSB                         14
#define CSR_ACSMBNKSELLOAD3_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE3_LSB                         15
#define CSR_ACSMLONGBUBBLE3_MASK                        BIT(15)
/* CSR_ACSMSEQ3X4 */
#define CSR_ACSMSEQ3X4_LSB                              0
#define CSR_ACSMSEQ3X4_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT4_LSB                          0
#define CSR_ACSMCMDREPCNT4_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV4_LSB                             8
#define CSR_ACSMADRADV4_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV4_LSB                             10
#define CSR_ACSMBNKADV4_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD4_LSB                         12
#define CSR_ACSMADRSELLOAD4_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD4_LSB                         14
#define CSR_ACSMBNKSELLOAD4_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE4_LSB                         15
#define CSR_ACSMLONGBUBBLE4_MASK                        BIT(15)
/* CSR_ACSMSEQ3X5 */
#define CSR_ACSMSEQ3X5_LSB                              0
#define CSR_ACSMSEQ3X5_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT5_LSB                          0
#define CSR_ACSMCMDREPCNT5_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV5_LSB                             8
#define CSR_ACSMADRADV5_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV5_LSB                             10
#define CSR_ACSMBNKADV5_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD5_LSB                         12
#define CSR_ACSMADRSELLOAD5_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD5_LSB                         14
#define CSR_ACSMBNKSELLOAD5_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE5_LSB                         15
#define CSR_ACSMLONGBUBBLE5_MASK                        BIT(15)
/* CSR_ACSMSEQ3X6 */
#define CSR_ACSMSEQ3X6_LSB                              0
#define CSR_ACSMSEQ3X6_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT6_LSB                          0
#define CSR_ACSMCMDREPCNT6_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV6_LSB                             8
#define CSR_ACSMADRADV6_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV6_LSB                             10
#define CSR_ACSMBNKADV6_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD6_LSB                         12
#define CSR_ACSMADRSELLOAD6_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD6_LSB                         14
#define CSR_ACSMBNKSELLOAD6_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE6_LSB                         15
#define CSR_ACSMLONGBUBBLE6_MASK                        BIT(15)
/* CSR_ACSMSEQ3X7 */
#define CSR_ACSMSEQ3X7_LSB                              0
#define CSR_ACSMSEQ3X7_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT7_LSB                          0
#define CSR_ACSMCMDREPCNT7_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV7_LSB                             8
#define CSR_ACSMADRADV7_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV7_LSB                             10
#define CSR_ACSMBNKADV7_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD7_LSB                         12
#define CSR_ACSMADRSELLOAD7_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD7_LSB                         14
#define CSR_ACSMBNKSELLOAD7_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE7_LSB                         15
#define CSR_ACSMLONGBUBBLE7_MASK                        BIT(15)
/* CSR_ACSMSEQ3X8 */
#define CSR_ACSMSEQ3X8_LSB                              0
#define CSR_ACSMSEQ3X8_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT8_LSB                          0
#define CSR_ACSMCMDREPCNT8_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV8_LSB                             8
#define CSR_ACSMADRADV8_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV8_LSB                             10
#define CSR_ACSMBNKADV8_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD8_LSB                         12
#define CSR_ACSMADRSELLOAD8_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD8_LSB                         14
#define CSR_ACSMBNKSELLOAD8_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE8_LSB                         15
#define CSR_ACSMLONGBUBBLE8_MASK                        BIT(15)
/* CSR_ACSMSEQ3X9 */
#define CSR_ACSMSEQ3X9_LSB                              0
#define CSR_ACSMSEQ3X9_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT9_LSB                          0
#define CSR_ACSMCMDREPCNT9_MASK                         GENMASK_32(7, 0)
#define CSR_ACSMADRADV9_LSB                             8
#define CSR_ACSMADRADV9_MASK                            GENMASK_32(9, 8)
#define CSR_ACSMBNKADV9_LSB                             10
#define CSR_ACSMBNKADV9_MASK                            GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD9_LSB                         12
#define CSR_ACSMADRSELLOAD9_MASK                        GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD9_LSB                         14
#define CSR_ACSMBNKSELLOAD9_MASK                        BIT(14)
#define CSR_ACSMLONGBUBBLE9_LSB                         15
#define CSR_ACSMLONGBUBBLE9_MASK                        BIT(15)
/* CSR_ACSMSEQ3X10 */
#define CSR_ACSMSEQ3X10_LSB                             0
#define CSR_ACSMSEQ3X10_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT10_LSB                         0
#define CSR_ACSMCMDREPCNT10_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV10_LSB                            8
#define CSR_ACSMADRADV10_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV10_LSB                            10
#define CSR_ACSMBNKADV10_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD10_LSB                        12
#define CSR_ACSMADRSELLOAD10_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD10_LSB                        14
#define CSR_ACSMBNKSELLOAD10_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE10_LSB                        15
#define CSR_ACSMLONGBUBBLE10_MASK                       BIT(15)
/* CSR_ACSMSEQ3X11 */
#define CSR_ACSMSEQ3X11_LSB                             0
#define CSR_ACSMSEQ3X11_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT11_LSB                         0
#define CSR_ACSMCMDREPCNT11_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV11_LSB                            8
#define CSR_ACSMADRADV11_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV11_LSB                            10
#define CSR_ACSMBNKADV11_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD11_LSB                        12
#define CSR_ACSMADRSELLOAD11_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD11_LSB                        14
#define CSR_ACSMBNKSELLOAD11_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE11_LSB                        15
#define CSR_ACSMLONGBUBBLE11_MASK                       BIT(15)
/* CSR_ACSMSEQ3X12 */
#define CSR_ACSMSEQ3X12_LSB                             0
#define CSR_ACSMSEQ3X12_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT12_LSB                         0
#define CSR_ACSMCMDREPCNT12_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV12_LSB                            8
#define CSR_ACSMADRADV12_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV12_LSB                            10
#define CSR_ACSMBNKADV12_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD12_LSB                        12
#define CSR_ACSMADRSELLOAD12_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD12_LSB                        14
#define CSR_ACSMBNKSELLOAD12_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE12_LSB                        15
#define CSR_ACSMLONGBUBBLE12_MASK                       BIT(15)
/* CSR_ACSMSEQ3X13 */
#define CSR_ACSMSEQ3X13_LSB                             0
#define CSR_ACSMSEQ3X13_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT13_LSB                         0
#define CSR_ACSMCMDREPCNT13_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV13_LSB                            8
#define CSR_ACSMADRADV13_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV13_LSB                            10
#define CSR_ACSMBNKADV13_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD13_LSB                        12
#define CSR_ACSMADRSELLOAD13_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD13_LSB                        14
#define CSR_ACSMBNKSELLOAD13_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE13_LSB                        15
#define CSR_ACSMLONGBUBBLE13_MASK                       BIT(15)
/* CSR_ACSMSEQ3X14 */
#define CSR_ACSMSEQ3X14_LSB                             0
#define CSR_ACSMSEQ3X14_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT14_LSB                         0
#define CSR_ACSMCMDREPCNT14_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV14_LSB                            8
#define CSR_ACSMADRADV14_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV14_LSB                            10
#define CSR_ACSMBNKADV14_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD14_LSB                        12
#define CSR_ACSMADRSELLOAD14_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD14_LSB                        14
#define CSR_ACSMBNKSELLOAD14_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE14_LSB                        15
#define CSR_ACSMLONGBUBBLE14_MASK                       BIT(15)
/* CSR_ACSMSEQ3X15 */
#define CSR_ACSMSEQ3X15_LSB                             0
#define CSR_ACSMSEQ3X15_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT15_LSB                         0
#define CSR_ACSMCMDREPCNT15_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV15_LSB                            8
#define CSR_ACSMADRADV15_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV15_LSB                            10
#define CSR_ACSMBNKADV15_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD15_LSB                        12
#define CSR_ACSMADRSELLOAD15_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD15_LSB                        14
#define CSR_ACSMBNKSELLOAD15_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE15_LSB                        15
#define CSR_ACSMLONGBUBBLE15_MASK                       BIT(15)
/* CSR_ACSMSEQ3X16 */
#define CSR_ACSMSEQ3X16_LSB                             0
#define CSR_ACSMSEQ3X16_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT16_LSB                         0
#define CSR_ACSMCMDREPCNT16_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV16_LSB                            8
#define CSR_ACSMADRADV16_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV16_LSB                            10
#define CSR_ACSMBNKADV16_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD16_LSB                        12
#define CSR_ACSMADRSELLOAD16_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD16_LSB                        14
#define CSR_ACSMBNKSELLOAD16_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE16_LSB                        15
#define CSR_ACSMLONGBUBBLE16_MASK                       BIT(15)
/* CSR_ACSMSEQ3X17 */
#define CSR_ACSMSEQ3X17_LSB                             0
#define CSR_ACSMSEQ3X17_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT17_LSB                         0
#define CSR_ACSMCMDREPCNT17_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV17_LSB                            8
#define CSR_ACSMADRADV17_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV17_LSB                            10
#define CSR_ACSMBNKADV17_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD17_LSB                        12
#define CSR_ACSMADRSELLOAD17_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD17_LSB                        14
#define CSR_ACSMBNKSELLOAD17_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE17_LSB                        15
#define CSR_ACSMLONGBUBBLE17_MASK                       BIT(15)
/* CSR_ACSMSEQ3X18 */
#define CSR_ACSMSEQ3X18_LSB                             0
#define CSR_ACSMSEQ3X18_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT18_LSB                         0
#define CSR_ACSMCMDREPCNT18_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV18_LSB                            8
#define CSR_ACSMADRADV18_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV18_LSB                            10
#define CSR_ACSMBNKADV18_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD18_LSB                        12
#define CSR_ACSMADRSELLOAD18_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD18_LSB                        14
#define CSR_ACSMBNKSELLOAD18_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE18_LSB                        15
#define CSR_ACSMLONGBUBBLE18_MASK                       BIT(15)
/* CSR_ACSMSEQ3X19 */
#define CSR_ACSMSEQ3X19_LSB                             0
#define CSR_ACSMSEQ3X19_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT19_LSB                         0
#define CSR_ACSMCMDREPCNT19_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV19_LSB                            8
#define CSR_ACSMADRADV19_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV19_LSB                            10
#define CSR_ACSMBNKADV19_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD19_LSB                        12
#define CSR_ACSMADRSELLOAD19_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD19_LSB                        14
#define CSR_ACSMBNKSELLOAD19_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE19_LSB                        15
#define CSR_ACSMLONGBUBBLE19_MASK                       BIT(15)
/* CSR_ACSMSEQ3X20 */
#define CSR_ACSMSEQ3X20_LSB                             0
#define CSR_ACSMSEQ3X20_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT20_LSB                         0
#define CSR_ACSMCMDREPCNT20_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV20_LSB                            8
#define CSR_ACSMADRADV20_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV20_LSB                            10
#define CSR_ACSMBNKADV20_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD20_LSB                        12
#define CSR_ACSMADRSELLOAD20_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD20_LSB                        14
#define CSR_ACSMBNKSELLOAD20_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE20_LSB                        15
#define CSR_ACSMLONGBUBBLE20_MASK                       BIT(15)
/* CSR_ACSMSEQ3X21 */
#define CSR_ACSMSEQ3X21_LSB                             0
#define CSR_ACSMSEQ3X21_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT21_LSB                         0
#define CSR_ACSMCMDREPCNT21_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV21_LSB                            8
#define CSR_ACSMADRADV21_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV21_LSB                            10
#define CSR_ACSMBNKADV21_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD21_LSB                        12
#define CSR_ACSMADRSELLOAD21_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD21_LSB                        14
#define CSR_ACSMBNKSELLOAD21_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE21_LSB                        15
#define CSR_ACSMLONGBUBBLE21_MASK                       BIT(15)
/* CSR_ACSMSEQ3X22 */
#define CSR_ACSMSEQ3X22_LSB                             0
#define CSR_ACSMSEQ3X22_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT22_LSB                         0
#define CSR_ACSMCMDREPCNT22_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV22_LSB                            8
#define CSR_ACSMADRADV22_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV22_LSB                            10
#define CSR_ACSMBNKADV22_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD22_LSB                        12
#define CSR_ACSMADRSELLOAD22_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD22_LSB                        14
#define CSR_ACSMBNKSELLOAD22_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE22_LSB                        15
#define CSR_ACSMLONGBUBBLE22_MASK                       BIT(15)
/* CSR_ACSMSEQ3X23 */
#define CSR_ACSMSEQ3X23_LSB                             0
#define CSR_ACSMSEQ3X23_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT23_LSB                         0
#define CSR_ACSMCMDREPCNT23_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV23_LSB                            8
#define CSR_ACSMADRADV23_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV23_LSB                            10
#define CSR_ACSMBNKADV23_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD23_LSB                        12
#define CSR_ACSMADRSELLOAD23_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD23_LSB                        14
#define CSR_ACSMBNKSELLOAD23_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE23_LSB                        15
#define CSR_ACSMLONGBUBBLE23_MASK                       BIT(15)
/* CSR_ACSMSEQ3X24 */
#define CSR_ACSMSEQ3X24_LSB                             0
#define CSR_ACSMSEQ3X24_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT24_LSB                         0
#define CSR_ACSMCMDREPCNT24_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV24_LSB                            8
#define CSR_ACSMADRADV24_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV24_LSB                            10
#define CSR_ACSMBNKADV24_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD24_LSB                        12
#define CSR_ACSMADRSELLOAD24_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD24_LSB                        14
#define CSR_ACSMBNKSELLOAD24_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE24_LSB                        15
#define CSR_ACSMLONGBUBBLE24_MASK                       BIT(15)
/* CSR_ACSMSEQ3X25 */
#define CSR_ACSMSEQ3X25_LSB                             0
#define CSR_ACSMSEQ3X25_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT25_LSB                         0
#define CSR_ACSMCMDREPCNT25_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV25_LSB                            8
#define CSR_ACSMADRADV25_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV25_LSB                            10
#define CSR_ACSMBNKADV25_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD25_LSB                        12
#define CSR_ACSMADRSELLOAD25_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD25_LSB                        14
#define CSR_ACSMBNKSELLOAD25_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE25_LSB                        15
#define CSR_ACSMLONGBUBBLE25_MASK                       BIT(15)
/* CSR_ACSMSEQ3X26 */
#define CSR_ACSMSEQ3X26_LSB                             0
#define CSR_ACSMSEQ3X26_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT26_LSB                         0
#define CSR_ACSMCMDREPCNT26_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV26_LSB                            8
#define CSR_ACSMADRADV26_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV26_LSB                            10
#define CSR_ACSMBNKADV26_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD26_LSB                        12
#define CSR_ACSMADRSELLOAD26_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD26_LSB                        14
#define CSR_ACSMBNKSELLOAD26_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE26_LSB                        15
#define CSR_ACSMLONGBUBBLE26_MASK                       BIT(15)
/* CSR_ACSMSEQ3X27 */
#define CSR_ACSMSEQ3X27_LSB                             0
#define CSR_ACSMSEQ3X27_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT27_LSB                         0
#define CSR_ACSMCMDREPCNT27_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV27_LSB                            8
#define CSR_ACSMADRADV27_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV27_LSB                            10
#define CSR_ACSMBNKADV27_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD27_LSB                        12
#define CSR_ACSMADRSELLOAD27_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD27_LSB                        14
#define CSR_ACSMBNKSELLOAD27_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE27_LSB                        15
#define CSR_ACSMLONGBUBBLE27_MASK                       BIT(15)
/* CSR_ACSMSEQ3X28 */
#define CSR_ACSMSEQ3X28_LSB                             0
#define CSR_ACSMSEQ3X28_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT28_LSB                         0
#define CSR_ACSMCMDREPCNT28_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV28_LSB                            8
#define CSR_ACSMADRADV28_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV28_LSB                            10
#define CSR_ACSMBNKADV28_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD28_LSB                        12
#define CSR_ACSMADRSELLOAD28_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD28_LSB                        14
#define CSR_ACSMBNKSELLOAD28_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE28_LSB                        15
#define CSR_ACSMLONGBUBBLE28_MASK                       BIT(15)
/* CSR_ACSMSEQ3X29 */
#define CSR_ACSMSEQ3X29_LSB                             0
#define CSR_ACSMSEQ3X29_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT29_LSB                         0
#define CSR_ACSMCMDREPCNT29_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV29_LSB                            8
#define CSR_ACSMADRADV29_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV29_LSB                            10
#define CSR_ACSMBNKADV29_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD29_LSB                        12
#define CSR_ACSMADRSELLOAD29_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD29_LSB                        14
#define CSR_ACSMBNKSELLOAD29_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE29_LSB                        15
#define CSR_ACSMLONGBUBBLE29_MASK                       BIT(15)
/* CSR_ACSMSEQ3X30 */
#define CSR_ACSMSEQ3X30_LSB                             0
#define CSR_ACSMSEQ3X30_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT30_LSB                         0
#define CSR_ACSMCMDREPCNT30_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV30_LSB                            8
#define CSR_ACSMADRADV30_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV30_LSB                            10
#define CSR_ACSMBNKADV30_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD30_LSB                        12
#define CSR_ACSMADRSELLOAD30_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD30_LSB                        14
#define CSR_ACSMBNKSELLOAD30_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE30_LSB                        15
#define CSR_ACSMLONGBUBBLE30_MASK                       BIT(15)
/* CSR_ACSMSEQ3X31 */
#define CSR_ACSMSEQ3X31_LSB                             0
#define CSR_ACSMSEQ3X31_MASK                            GENMASK_32(15, 0)
#define CSR_ACSMCMDREPCNT31_LSB                         0
#define CSR_ACSMCMDREPCNT31_MASK                        GENMASK_32(7, 0)
#define CSR_ACSMADRADV31_LSB                            8
#define CSR_ACSMADRADV31_MASK                           GENMASK_32(9, 8)
#define CSR_ACSMBNKADV31_LSB                            10
#define CSR_ACSMBNKADV31_MASK                           GENMASK_32(11, 10)
#define CSR_ACSMADRSELLOAD31_LSB                        12
#define CSR_ACSMADRSELLOAD31_MASK                       GENMASK_32(13, 12)
#define CSR_ACSMBNKSELLOAD31_LSB                        14
#define CSR_ACSMBNKSELLOAD31_MASK                       BIT(14)
#define CSR_ACSMLONGBUBBLE31_LSB                        15
#define CSR_ACSMLONGBUBBLE31_MASK                       BIT(15)
/* CSR_ACSMPLAYBACK0X0 */
#define CSR_ACSMPLAYBACK0X0_LSB                         0
#define CSR_ACSMPLAYBACK0X0_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X0 */
#define CSR_ACSMPLAYBACK1X0_LSB                         0
#define CSR_ACSMPLAYBACK1X0_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X1 */
#define CSR_ACSMPLAYBACK0X1_LSB                         0
#define CSR_ACSMPLAYBACK0X1_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X1 */
#define CSR_ACSMPLAYBACK1X1_LSB                         0
#define CSR_ACSMPLAYBACK1X1_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X2 */
#define CSR_ACSMPLAYBACK0X2_LSB                         0
#define CSR_ACSMPLAYBACK0X2_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X2 */
#define CSR_ACSMPLAYBACK1X2_LSB                         0
#define CSR_ACSMPLAYBACK1X2_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X3 */
#define CSR_ACSMPLAYBACK0X3_LSB                         0
#define CSR_ACSMPLAYBACK0X3_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X3 */
#define CSR_ACSMPLAYBACK1X3_LSB                         0
#define CSR_ACSMPLAYBACK1X3_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X4 */
#define CSR_ACSMPLAYBACK0X4_LSB                         0
#define CSR_ACSMPLAYBACK0X4_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X4 */
#define CSR_ACSMPLAYBACK1X4_LSB                         0
#define CSR_ACSMPLAYBACK1X4_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X5 */
#define CSR_ACSMPLAYBACK0X5_LSB                         0
#define CSR_ACSMPLAYBACK0X5_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X5 */
#define CSR_ACSMPLAYBACK1X5_LSB                         0
#define CSR_ACSMPLAYBACK1X5_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X6 */
#define CSR_ACSMPLAYBACK0X6_LSB                         0
#define CSR_ACSMPLAYBACK0X6_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X6 */
#define CSR_ACSMPLAYBACK1X6_LSB                         0
#define CSR_ACSMPLAYBACK1X6_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK0X7 */
#define CSR_ACSMPLAYBACK0X7_LSB                         0
#define CSR_ACSMPLAYBACK0X7_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPLAYBACK1X7 */
#define CSR_ACSMPLAYBACK1X7_LSB                         0
#define CSR_ACSMPLAYBACK1X7_MASK                        GENMASK_32(11, 0)
/* CSR_ACSMPSTATEOVREN */
#define CSR_ACSMPSTATEOVREN_LSB                         0
#define CSR_ACSMPSTATEOVREN_MASK                        BIT(0)
/* CSR_ACSMPSTATEOVRVAL */
#define CSR_ACSMPSTATEOVRVAL_LSB                        0
#define CSR_ACSMPSTATEOVRVAL_MASK                       GENMASK_32(3, 0)
/* CSR_ACSMCTRL23 */
#define CSR_ACSMCTRL23_LSB                              0
#define CSR_ACSMCTRL23_MASK                             GENMASK_32(12, 0)
#define CSR_ACSMCSMASK_LSB                              0
#define CSR_ACSMCSMASK_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMCSMODE_LSB                              8
#define CSR_ACSMCSMODE_MASK                             BIT(8)
#define CSR_ACSMPARMASK_LSB                             9
#define CSR_ACSMPARMASK_MASK                            GENMASK_32(12, 9)
/* CSR_ACSMCKEVAL */
#define CSR_ACSMCKEVAL_LSB                              0
#define CSR_ACSMCKEVAL_MASK                             GENMASK_32(3, 0)
/* CSR_LOWSPEEDCLOCKDIVIDER */
#define CSR_LOWSPEEDCLOCKDIVIDER_LSB                    0
#define CSR_LOWSPEEDCLOCKDIVIDER_MASK                   GENMASK_32(5, 0)
/* CSR_ACSMCSMAPCTRL0 */
#define CSR_ACSMCSMAPCTRL0_LSB                          0
#define CSR_ACSMCSMAPCTRL0_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP0_LSB                              0
#define CSR_ACSMCSMAP0_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP0_LSB                            8
#define CSR_ACSMDESTMAP0_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP0_LSB                             12
#define CSR_ACSMODTMAP0_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL1 */
#define CSR_ACSMCSMAPCTRL1_LSB                          0
#define CSR_ACSMCSMAPCTRL1_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP1_LSB                              0
#define CSR_ACSMCSMAP1_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP1_LSB                            8
#define CSR_ACSMDESTMAP1_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP1_LSB                             12
#define CSR_ACSMODTMAP1_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL2 */
#define CSR_ACSMCSMAPCTRL2_LSB                          0
#define CSR_ACSMCSMAPCTRL2_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP2_LSB                              0
#define CSR_ACSMCSMAP2_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP2_LSB                            8
#define CSR_ACSMDESTMAP2_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP2_LSB                             12
#define CSR_ACSMODTMAP2_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL3 */
#define CSR_ACSMCSMAPCTRL3_LSB                          0
#define CSR_ACSMCSMAPCTRL3_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP3_LSB                              0
#define CSR_ACSMCSMAP3_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP3_LSB                            8
#define CSR_ACSMDESTMAP3_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP3_LSB                             12
#define CSR_ACSMODTMAP3_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL4 */
#define CSR_ACSMCSMAPCTRL4_LSB                          0
#define CSR_ACSMCSMAPCTRL4_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP4_LSB                              0
#define CSR_ACSMCSMAP4_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP4_LSB                            8
#define CSR_ACSMDESTMAP4_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP4_LSB                             12
#define CSR_ACSMODTMAP4_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL5 */
#define CSR_ACSMCSMAPCTRL5_LSB                          0
#define CSR_ACSMCSMAPCTRL5_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP5_LSB                              0
#define CSR_ACSMCSMAP5_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP5_LSB                            8
#define CSR_ACSMDESTMAP5_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP5_LSB                             12
#define CSR_ACSMODTMAP5_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL6 */
#define CSR_ACSMCSMAPCTRL6_LSB                          0
#define CSR_ACSMCSMAPCTRL6_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP6_LSB                              0
#define CSR_ACSMCSMAP6_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP6_LSB                            8
#define CSR_ACSMDESTMAP6_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP6_LSB                             12
#define CSR_ACSMODTMAP6_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL7 */
#define CSR_ACSMCSMAPCTRL7_LSB                          0
#define CSR_ACSMCSMAPCTRL7_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP7_LSB                              0
#define CSR_ACSMCSMAP7_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP7_LSB                            8
#define CSR_ACSMDESTMAP7_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP7_LSB                             12
#define CSR_ACSMODTMAP7_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL8 */
#define CSR_ACSMCSMAPCTRL8_LSB                          0
#define CSR_ACSMCSMAPCTRL8_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP8_LSB                              0
#define CSR_ACSMCSMAP8_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP8_LSB                            8
#define CSR_ACSMDESTMAP8_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP8_LSB                             12
#define CSR_ACSMODTMAP8_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL9 */
#define CSR_ACSMCSMAPCTRL9_LSB                          0
#define CSR_ACSMCSMAPCTRL9_MASK                         GENMASK_32(14, 0)
#define CSR_ACSMCSMAP9_LSB                              0
#define CSR_ACSMCSMAP9_MASK                             GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP9_LSB                            8
#define CSR_ACSMDESTMAP9_MASK                           GENMASK_32(11, 8)
#define CSR_ACSMODTMAP9_LSB                             12
#define CSR_ACSMODTMAP9_MASK                            GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL10 */
#define CSR_ACSMCSMAPCTRL10_LSB                         0
#define CSR_ACSMCSMAPCTRL10_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP10_LSB                             0
#define CSR_ACSMCSMAP10_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP10_LSB                           8
#define CSR_ACSMDESTMAP10_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP10_LSB                            12
#define CSR_ACSMODTMAP10_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL11 */
#define CSR_ACSMCSMAPCTRL11_LSB                         0
#define CSR_ACSMCSMAPCTRL11_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP11_LSB                             0
#define CSR_ACSMCSMAP11_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP11_LSB                           8
#define CSR_ACSMDESTMAP11_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP11_LSB                            12
#define CSR_ACSMODTMAP11_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL12 */
#define CSR_ACSMCSMAPCTRL12_LSB                         0
#define CSR_ACSMCSMAPCTRL12_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP12_LSB                             0
#define CSR_ACSMCSMAP12_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP12_LSB                           8
#define CSR_ACSMDESTMAP12_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP12_LSB                            12
#define CSR_ACSMODTMAP12_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL13 */
#define CSR_ACSMCSMAPCTRL13_LSB                         0
#define CSR_ACSMCSMAPCTRL13_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP13_LSB                             0
#define CSR_ACSMCSMAP13_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP13_LSB                           8
#define CSR_ACSMDESTMAP13_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP13_LSB                            12
#define CSR_ACSMODTMAP13_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL14 */
#define CSR_ACSMCSMAPCTRL14_LSB                         0
#define CSR_ACSMCSMAPCTRL14_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP14_LSB                             0
#define CSR_ACSMCSMAP14_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP14_LSB                           8
#define CSR_ACSMDESTMAP14_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP14_LSB                            12
#define CSR_ACSMODTMAP14_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMCSMAPCTRL15 */
#define CSR_ACSMCSMAPCTRL15_LSB                         0
#define CSR_ACSMCSMAPCTRL15_MASK                        GENMASK_32(14, 0)
#define CSR_ACSMCSMAP15_LSB                             0
#define CSR_ACSMCSMAP15_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMDESTMAP15_LSB                           8
#define CSR_ACSMDESTMAP15_MASK                          GENMASK_32(11, 8)
#define CSR_ACSMODTMAP15_LSB                            12
#define CSR_ACSMODTMAP15_MASK                           GENMASK_32(14, 12)
/* CSR_ACSMODTCTRL0 */
#define CSR_ACSMODTCTRL0_LSB                            0
#define CSR_ACSMODTCTRL0_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS0_LSB                         0
#define CSR_ACSMODTWRPATCS0_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS0_LSB                         4
#define CSR_ACSMODTRDPATCS0_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL1 */
#define CSR_ACSMODTCTRL1_LSB                            0
#define CSR_ACSMODTCTRL1_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS1_LSB                         0
#define CSR_ACSMODTWRPATCS1_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS1_LSB                         4
#define CSR_ACSMODTRDPATCS1_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL2 */
#define CSR_ACSMODTCTRL2_LSB                            0
#define CSR_ACSMODTCTRL2_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS2_LSB                         0
#define CSR_ACSMODTWRPATCS2_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS2_LSB                         4
#define CSR_ACSMODTRDPATCS2_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL3 */
#define CSR_ACSMODTCTRL3_LSB                            0
#define CSR_ACSMODTCTRL3_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS3_LSB                         0
#define CSR_ACSMODTWRPATCS3_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS3_LSB                         4
#define CSR_ACSMODTRDPATCS3_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL4 */
#define CSR_ACSMODTCTRL4_LSB                            0
#define CSR_ACSMODTCTRL4_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS4_LSB                         0
#define CSR_ACSMODTWRPATCS4_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS4_LSB                         4
#define CSR_ACSMODTRDPATCS4_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL5 */
#define CSR_ACSMODTCTRL5_LSB                            0
#define CSR_ACSMODTCTRL5_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS5_LSB                         0
#define CSR_ACSMODTWRPATCS5_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS5_LSB                         4
#define CSR_ACSMODTRDPATCS5_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL6 */
#define CSR_ACSMODTCTRL6_LSB                            0
#define CSR_ACSMODTCTRL6_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS6_LSB                         0
#define CSR_ACSMODTWRPATCS6_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS6_LSB                         4
#define CSR_ACSMODTRDPATCS6_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL7 */
#define CSR_ACSMODTCTRL7_LSB                            0
#define CSR_ACSMODTCTRL7_MASK                           GENMASK_32(7, 0)
#define CSR_ACSMODTWRPATCS7_LSB                         0
#define CSR_ACSMODTWRPATCS7_MASK                        GENMASK_32(3, 0)
#define CSR_ACSMODTRDPATCS7_LSB                         4
#define CSR_ACSMODTRDPATCS7_MASK                        GENMASK_32(7, 4)
/* CSR_ACSMODTCTRL8 */
#define CSR_ACSMODTCTRL8_LSB                            0
#define CSR_ACSMODTCTRL8_MASK                           GENMASK_32(15, 0)
#define CSR_ACSMODTWRDURCTRL_LSB                        0
#define CSR_ACSMODTWRDURCTRL_MASK                       GENMASK_32(3, 0)
#define CSR_ACSMODTRDDURCTRL_LSB                        4
#define CSR_ACSMODTRDDURCTRL_MASK                       GENMASK_32(7, 4)
#define CSR_ACSMODTWRSTRTCTRL_LSB                       8
#define CSR_ACSMODTWRSTRTCTRL_MASK                      GENMASK_32(11, 8)
#define CSR_ACSMODTRDSTRTCTRL_LSB                       12
#define CSR_ACSMODTRDSTRTCTRL_MASK                      GENMASK_32(15, 12)
/* CSR_ACSMCTRL16 */
#define CSR_ACSMCTRL16_LSB                              0
#define CSR_ACSMCTRL16_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMDDRADRUP_LSB                            0
#define CSR_ACSMDDRADRUP_MASK                           GENMASK_32(3, 0)
#define CSR_ACSMHIGHADDR_LSB                            4
#define CSR_ACSMHIGHADDR_MASK                           BIT(4)
#define CSR_ACSMADR13PLUGHOLE_LSB                       5
#define CSR_ACSMADR13PLUGHOLE_MASK                      BIT(5)
#define CSR_ACSMCTRL16RSVD_LSB                          6
#define CSR_ACSMCTRL16RSVD_MASK                         BIT(6)
#define CSR_ACSMWRTLVLODTCTRL_LSB                       7
#define CSR_ACSMWRTLVLODTCTRL_MASK                      BIT(7)
#define CSR_ACSMWRTLVLODT_LSB                           8
#define CSR_ACSMWRTLVLODT_MASK                          GENMASK_32(11, 8)
#define CSR_ACSM2TGRPINHIBIT_LSB                        12
#define CSR_ACSM2TGRPINHIBIT_MASK                       GENMASK_32(15, 12)
/* CSR_LOWSPEEDCLOCKSTOPVAL */
#define CSR_LOWSPEEDCLOCKSTOPVAL_LSB                    0
#define CSR_LOWSPEEDCLOCKSTOPVAL_MASK                   BIT(0)
/* CSR_ACSMCTRL18 */
#define CSR_ACSMCTRL18_LSB                              0
#define CSR_ACSMCTRL18_MASK                             GENMASK_32(1, 0)
#define CSR_ACSMLOCALDONE_LSB                           0
#define CSR_ACSMLOCALDONE_MASK                          BIT(0)
#define CSR_ACSMSTOPONERRASRTD_LSB                      1
#define CSR_ACSMSTOPONERRASRTD_MASK                     BIT(1)
/* CSR_ACSMCTRL19 */
#define CSR_ACSMCTRL19_LSB                              0
#define CSR_ACSMCTRL19_MASK                             GENMASK_32(2, 0)
#define CSR_ACSMVISSEL_LSB                              0
#define CSR_ACSMVISSEL_MASK                             GENMASK_32(2, 0)
/* CSR_ACSMCTRL20 */
#define CSR_ACSMCTRL20_LSB                              0
#define CSR_ACSMCTRL20_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMVISVAL_LSB                              0
#define CSR_ACSMVISVAL_MASK                             GENMASK_32(15, 0)
/* CSR_ACSMCTRL21 */
#define CSR_ACSMCTRL21_LSB                              0
#define CSR_ACSMCTRL21_MASK                             GENMASK_32(11, 0)
#define CSR_ACSMMAPDIMMCS0_LSB                          0
#define CSR_ACSMMAPDIMMCS0_MASK                         GENMASK_32(2, 0)
#define CSR_ACSMMAPDIMMCS1_LSB                          3
#define CSR_ACSMMAPDIMMCS1_MASK                         GENMASK_32(5, 3)
#define CSR_ACSMMAPDIMMCS2_LSB                          6
#define CSR_ACSMMAPDIMMCS2_MASK                         GENMASK_32(8, 6)
#define CSR_ACSMMAPDIMMCS3_LSB                          9
#define CSR_ACSMMAPDIMMCS3_MASK                         GENMASK_32(11, 9)
/* CSR_ACSMCTRL22 */
#define CSR_ACSMCTRL22_LSB                              0
#define CSR_ACSMCTRL22_MASK                             GENMASK_32(11, 0)
#define CSR_ACSMMAPDIMMCS4_LSB                          0
#define CSR_ACSMMAPDIMMCS4_MASK                         GENMASK_32(2, 0)
#define CSR_ACSMMAPDIMMCS5_LSB                          3
#define CSR_ACSMMAPDIMMCS5_MASK                         GENMASK_32(5, 3)
#define CSR_ACSMMAPDIMMCS6_LSB                          6
#define CSR_ACSMMAPDIMMCS6_MASK                         GENMASK_32(8, 6)
#define CSR_ACSMMAPDIMMCS7_LSB                          9
#define CSR_ACSMMAPDIMMCS7_MASK                         GENMASK_32(11, 9)
/* CSR_ACSMCTRL0 */
#define CSR_ACSMCTRL0_LSB                               0
#define CSR_ACSMCTRL0_MASK                              GENMASK_32(15, 0)
#define CSR_ACSMRSVDCTRL00_LSB                          0
#define CSR_ACSMRSVDCTRL00_MASK                         BIT(0)
#define CSR_ACSMDYNBLMODE_LSB                           1
#define CSR_ACSMDYNBLMODE_MASK                          BIT(1)
#define CSR_ACSMBURSTLEN_LSB                            2
#define CSR_ACSMBURSTLEN_MASK                           BIT(2)
#define CSR_ACSMINFLOOP_LSB                             3
#define CSR_ACSMINFLOOP_MASK                            BIT(3)
#define CSR_ACSMRXVALMODE_LSB                           4
#define CSR_ACSMRXVALMODE_MASK                          BIT(4)
#define CSR_ACSMSTPONERRMODE_LSB                        5
#define CSR_ACSMSTPONERRMODE_MASK                       BIT(5)
#define CSR_ACSM2TMODE_LSB                              6
#define CSR_ACSM2TMODE_MASK                             BIT(6)
#define CSR_ACSMTRAINSOEMODE_LSB                        7
#define CSR_ACSMTRAINSOEMODE_MASK                       BIT(7)
#define CSR_ACSMGATEDDRCMD_LSB                          8
#define CSR_ACSMGATEDDRCMD_MASK                         BIT(8)
#define CSR_ACSMGEARDOWNMODE_LSB                        9
#define CSR_ACSMGEARDOWNMODE_MASK                       BIT(9)
#define CSR_ACSMGEARDOWNPHASE_LSB                       10
#define CSR_ACSMGEARDOWNPHASE_MASK                      BIT(10)
#define CSR_ACSMGEARDOWNSYNC_LSB                        11
#define CSR_ACSMGEARDOWNSYNC_MASK                       BIT(11)
#define CSR_ACSMCAPRBSMODE_LSB                          12
#define CSR_ACSMCAPRBSMODE_MASK                         BIT(12)
#define CSR_ACSMGATERXFIFOWRITE_LSB                     13
#define CSR_ACSMGATERXFIFOWRITE_MASK                    BIT(13)
#define CSR_ACSMPARMODE_LSB                             14
#define CSR_ACSMPARMODE_MASK                            BIT(14)
#define CSR_ACSMTDSMODE_LSB                             15
#define CSR_ACSMTDSMODE_MASK                            BIT(15)
/* CSR_ACSMCTRL1 */
#define CSR_ACSMCTRL1_LSB                               0
#define CSR_ACSMCTRL1_MASK                              GENMASK_32(15, 0)
#define CSR_ACSMREPCNT_LSB                              0
#define CSR_ACSMREPCNT_MASK                             GENMASK_32(15, 0)
/* CSR_ACSMCTRL2 */
#define CSR_ACSMCTRL2_LSB                               0
#define CSR_ACSMCTRL2_MASK                              GENMASK_32(4, 0)
#define CSR_ACSMSTARTPTR_LSB                            0
#define CSR_ACSMSTARTPTR_MASK                           GENMASK_32(4, 0)
/* CSR_ACSMCTRL3 */
#define CSR_ACSMCTRL3_LSB                               0
#define CSR_ACSMCTRL3_MASK                              GENMASK_32(4, 0)
#define CSR_ACSMLOOPPTR_LSB                             0
#define CSR_ACSMLOOPPTR_MASK                            GENMASK_32(4, 0)
/* CSR_ACSMCTRL4 */
#define CSR_ACSMCTRL4_LSB                               0
#define CSR_ACSMCTRL4_MASK                              GENMASK_32(4, 0)
#define CSR_ACSMENDPTR_LSB                              0
#define CSR_ACSMENDPTR_MASK                             GENMASK_32(4, 0)
/* CSR_ACSMCTRL5 */
#define CSR_ACSMCTRL5_LSB                               0
#define CSR_ACSMCTRL5_MASK                              GENMASK_32(13, 0)
#define CSR_ACSMMXRDLAT_LSB                             0
#define CSR_ACSMMXRDLAT_MASK                            GENMASK_32(7, 0)
#define CSR_ACSMRCASLAT_LSB                             8
#define CSR_ACSMRCASLAT_MASK                            GENMASK_32(13, 8)
/* CSR_ACSMCTRL6 */
#define CSR_ACSMCTRL6_LSB                               0
#define CSR_ACSMCTRL6_MASK                              GENMASK_32(10, 0)
#define CSR_ACSMWCASLAT_LSB                             0
#define CSR_ACSMWCASLAT_MASK                            GENMASK_32(5, 0)
#define CSR_ACSMWRRSVD_LSB                              6
#define CSR_ACSMWRRSVD_MASK                             GENMASK_32(7, 6)
#define CSR_ACSMWRDATLAT_LSB                            8
#define CSR_ACSMWRDATLAT_MASK                           GENMASK_32(10, 8)
/* CSR_ACSMCTRL7 */
#define CSR_ACSMCTRL7_LSB                               0
#define CSR_ACSMCTRL7_MASK                              GENMASK_32(15, 0)
#define CSR_ACSMRASPCFG_LSB                             0
#define CSR_ACSMRASPCFG_MASK                            GENMASK_32(15, 0)
/* CSR_ACSMCTRL8 */
#define CSR_ACSMCTRL8_LSB                               0
#define CSR_ACSMCTRL8_MASK                              GENMASK_32(15, 0)
#define CSR_ACSMRASPSEED_LSB                            0
#define CSR_ACSMRASPSEED_MASK                           GENMASK_32(15, 0)
/* CSR_ACSMCTRL9 */
#define CSR_ACSMCTRL9_LSB                               0
#define CSR_ACSMCTRL9_MASK                              GENMASK_32(15, 0)
#define CSR_ACSMCASPCFG_LSB                             0
#define CSR_ACSMCASPCFG_MASK                            GENMASK_32(15, 0)
/* CSR_ACSMCTRL10 */
#define CSR_ACSMCTRL10_LSB                              0
#define CSR_ACSMCTRL10_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMCASPSEED_LSB                            0
#define CSR_ACSMCASPSEED_MASK                           GENMASK_32(15, 0)
/* CSR_ACSMCTRL11 */
#define CSR_ACSMCTRL11_LSB                              0
#define CSR_ACSMCTRL11_MASK                             GENMASK_32(15, 0)
#define CSR_ACSMRASADRINC_LSB                           0
#define CSR_ACSMRASADRINC_MASK                          GENMASK_32(7, 0)
#define CSR_ACSMCASADRINC_LSB                           8
#define CSR_ACSMCASADRINC_MASK                          GENMASK_32(15, 8)
/* CSR_ACSMCTRL12 */
#define CSR_ACSMCTRL12_LSB                              0
#define CSR_ACSMCTRL12_MASK                             GENMASK_32(11, 0)
#define CSR_ACSMBNKPCFG_LSB                             0
#define CSR_ACSMBNKPCFG_MASK                            GENMASK_32(3, 0)
#define CSR_ACSMBNKPSEED_LSB                            4
#define CSR_ACSMBNKPSEED_MASK                           GENMASK_32(7, 4)
#define CSR_ACSMBNKADRINC_LSB                           8
#define CSR_ACSMBNKADRINC_MASK                          GENMASK_32(11, 8)
/* CSR_ACSMCTRL13 */
#define CSR_ACSMCTRL13_LSB                              0
#define CSR_ACSMCTRL13_MASK                             GENMASK_32(3, 0)
#define CSR_ACSMCKEENB_LSB                              0
#define CSR_ACSMCKEENB_MASK                             GENMASK_32(3, 0)
/* CSR_ACSMCTRL14 */
#define CSR_ACSMCTRL14_LSB                              0
#define CSR_ACSMCTRL14_MASK                             GENMASK_32(3, 0)
#define CSR_ACSMRASPCFGUP_LSB                           0
#define CSR_ACSMRASPCFGUP_MASK                          GENMASK_32(3, 0)
/* CSR_ACSMCTRL15 */
#define CSR_ACSMCTRL15_LSB                              0
#define CSR_ACSMCTRL15_MASK                             GENMASK_32(3, 0)
#define CSR_ACSMRASPSEEDUP_LSB                          0
#define CSR_ACSMRASPSEEDUP_MASK                         GENMASK_32(3, 0)

/* PPGC0 register offsets */
/* CSR_PPGCCTRL1 */
#define CSR_PPGCCTRL1_LSB                               1
#define CSR_PPGCCTRL1_MASK                              GENMASK_32(4, 1)
#define CSR_HWTTXDBIEN_LSB                              1
#define CSR_HWTTXDBIEN_MASK                             BIT(1)
#define CSR_HWTRXDBIEN_LSB                              2
#define CSR_HWTRXDBIEN_MASK                             BIT(2)
#define CSR_HWTTXDMDBIVAL_LSB                           3
#define CSR_HWTTXDMDBIVAL_MASK                          BIT(3)
#define CSR_HWTTXDMDBISEL_LSB                           4
#define CSR_HWTTXDMDBISEL_MASK                          BIT(4)
/* CSR_PPGCLANE2CRCINMAP0 */
#define CSR_PPGCLANE2CRCINMAP0_LSB                      0
#define CSR_PPGCLANE2CRCINMAP0_MASK                     GENMASK_32(11, 0)
#define CSR_PPGCCRCLANEMAP0_LSB                         0
#define CSR_PPGCCRCLANEMAP0_MASK                        GENMASK_32(2, 0)
#define CSR_PPGCCRCLANEMAP1_LSB                         3
#define CSR_PPGCCRCLANEMAP1_MASK                        GENMASK_32(5, 3)
#define CSR_PPGCCRCLANEMAP2_LSB                         6
#define CSR_PPGCCRCLANEMAP2_MASK                        GENMASK_32(8, 6)
#define CSR_PPGCCRCLANEMAP3_LSB                         9
#define CSR_PPGCCRCLANEMAP3_MASK                        GENMASK_32(11, 9)
/* CSR_PPGCLANE2CRCINMAP1 */
#define CSR_PPGCLANE2CRCINMAP1_LSB                      0
#define CSR_PPGCLANE2CRCINMAP1_MASK                     GENMASK_32(11, 0)
#define CSR_PPGCCRCLANEMAP4_LSB                         0
#define CSR_PPGCCRCLANEMAP4_MASK                        GENMASK_32(2, 0)
#define CSR_PPGCCRCLANEMAP5_LSB                         3
#define CSR_PPGCCRCLANEMAP5_MASK                        GENMASK_32(5, 3)
#define CSR_PPGCCRCLANEMAP6_LSB                         6
#define CSR_PPGCCRCLANEMAP6_MASK                        GENMASK_32(8, 6)
#define CSR_PPGCCRCLANEMAP7_LSB                         9
#define CSR_PPGCCRCLANEMAP7_MASK                        GENMASK_32(11, 9)
/* CSR_PRBSTAPDLY0 */
#define CSR_PRBSTAPDLY0_LSB                             0
#define CSR_PRBSTAPDLY0_MASK                            GENMASK_32(15, 0)
/* CSR_PRBSTAPDLY1 */
#define CSR_PRBSTAPDLY1_LSB                             0
#define CSR_PRBSTAPDLY1_MASK                            GENMASK_32(15, 0)
/* CSR_PRBSTAPDLY2 */
#define CSR_PRBSTAPDLY2_LSB                             0
#define CSR_PRBSTAPDLY2_MASK                            GENMASK_32(15, 0)
/* CSR_PRBSTAPDLY3 */
#define CSR_PRBSTAPDLY3_LSB                             0
#define CSR_PRBSTAPDLY3_MASK                            GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE0 */
#define CSR_GENPRBSBYTE0_LSB                            0
#define CSR_GENPRBSBYTE0_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE1 */
#define CSR_GENPRBSBYTE1_LSB                            0
#define CSR_GENPRBSBYTE1_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE2 */
#define CSR_GENPRBSBYTE2_LSB                            0
#define CSR_GENPRBSBYTE2_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE3 */
#define CSR_GENPRBSBYTE3_LSB                            0
#define CSR_GENPRBSBYTE3_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE4 */
#define CSR_GENPRBSBYTE4_LSB                            0
#define CSR_GENPRBSBYTE4_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE5 */
#define CSR_GENPRBSBYTE5_LSB                            0
#define CSR_GENPRBSBYTE5_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE6 */
#define CSR_GENPRBSBYTE6_LSB                            0
#define CSR_GENPRBSBYTE6_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE7 */
#define CSR_GENPRBSBYTE7_LSB                            0
#define CSR_GENPRBSBYTE7_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE8 */
#define CSR_GENPRBSBYTE8_LSB                            0
#define CSR_GENPRBSBYTE8_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE9 */
#define CSR_GENPRBSBYTE9_LSB                            0
#define CSR_GENPRBSBYTE9_MASK                           GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE10 */
#define CSR_GENPRBSBYTE10_LSB                           0
#define CSR_GENPRBSBYTE10_MASK                          GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE11 */
#define CSR_GENPRBSBYTE11_LSB                           0
#define CSR_GENPRBSBYTE11_MASK                          GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE12 */
#define CSR_GENPRBSBYTE12_LSB                           0
#define CSR_GENPRBSBYTE12_MASK                          GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE13 */
#define CSR_GENPRBSBYTE13_LSB                           0
#define CSR_GENPRBSBYTE13_MASK                          GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE14 */
#define CSR_GENPRBSBYTE14_LSB                           0
#define CSR_GENPRBSBYTE14_MASK                          GENMASK_32(15, 0)
/* CSR_GENPRBSBYTE15 */
#define CSR_GENPRBSBYTE15_LSB                           0
#define CSR_GENPRBSBYTE15_MASK                          GENMASK_32(15, 0)
/* CSR_PRBSGENCTL */
#define CSR_PRBSGENCTL_LSB                              0
#define CSR_PRBSGENCTL_MASK                             GENMASK_32(6, 0)
#define CSR_PPGCMODE_LSB                                0
#define CSR_PPGCMODE_MASK                               BIT(0)
#define CSR_PPGCDMMODE_LSB                              1
#define CSR_PPGCDMMODE_MASK                             BIT(1)
#define CSR_PPGCLDFFMODE_LSB                            2
#define CSR_PPGCLDFFMODE_MASK                           BIT(2)
#define CSR_PPGCSEL23BPRBS_LSB                          3
#define CSR_PPGCSEL23BPRBS_MASK                         BIT(3)
#define CSR_PPGCPATADV_LSB                              4
#define CSR_PPGCPATADV_MASK                             GENMASK_32(5, 4)
#define CSR_PPGCENBPATSTRESSMODE_LSB                    6
#define CSR_PPGCENBPATSTRESSMODE_MASK                   BIT(6)
/* CSR_PRBSGENSTATELO */
#define CSR_PRBSGENSTATELO_LSB                          0
#define CSR_PRBSGENSTATELO_MASK                         GENMASK_32(15, 0)
/* CSR_PRBSGENSTATEHI */
#define CSR_PRBSGENSTATEHI_LSB                          0
#define CSR_PRBSGENSTATEHI_MASK                         GENMASK_32(6, 0)
/* CSR_PRBSCHKSTATELO */
#define CSR_PRBSCHKSTATELO_LSB                          0
#define CSR_PRBSCHKSTATELO_MASK                         GENMASK_32(15, 0)
/* CSR_PRBSCHKSTATEHI */
#define CSR_PRBSCHKSTATEHI_LSB                          0
#define CSR_PRBSCHKSTATEHI_MASK                         GENMASK_32(6, 0)
/* CSR_PRBSGENCTL1 */
#define CSR_PRBSGENCTL1_LSB                             0
#define CSR_PRBSGENCTL1_MASK                            GENMASK_32(8, 0)
#define CSR_PPGCMODELANE_LSB                            0
#define CSR_PPGCMODELANE_MASK                           GENMASK_32(8, 0)
/* CSR_PRBSGENCTL2 */
#define CSR_PRBSGENCTL2_LSB                             0
#define CSR_PRBSGENCTL2_MASK                            GENMASK_32(15, 0)
#define CSR_PPGCMSKPERIODLIM_LSB                        0
#define CSR_PPGCMSKPERIODLIM_MASK                       GENMASK_32(15, 0)

/* INITENG0 register offsets */
/* CSR_PRESEQUENCEREG0B0S0 */
#define CSR_PRESEQUENCEREG0B0S0_LSB                     0
#define CSR_PRESEQUENCEREG0B0S0_MASK                    GENMASK_32(15, 0)
/* CSR_PRESEQUENCEREG0B0S1 */
#define CSR_PRESEQUENCEREG0B0S1_LSB                     0
#define CSR_PRESEQUENCEREG0B0S1_MASK                    GENMASK_32(15, 0)
/* CSR_PRESEQUENCEREG0B0S2 */
#define CSR_PRESEQUENCEREG0B0S2_LSB                     0
#define CSR_PRESEQUENCEREG0B0S2_MASK                    GENMASK_32(8, 0)
/* CSR_PRESEQUENCEREG0B1S0 */
#define CSR_PRESEQUENCEREG0B1S0_LSB                     0
#define CSR_PRESEQUENCEREG0B1S0_MASK                    GENMASK_32(15, 0)
/* CSR_PRESEQUENCEREG0B1S1 */
#define CSR_PRESEQUENCEREG0B1S1_LSB                     0
#define CSR_PRESEQUENCEREG0B1S1_MASK                    GENMASK_32(15, 0)
/* CSR_PRESEQUENCEREG0B1S2 */
#define CSR_PRESEQUENCEREG0B1S2_LSB                     0
#define CSR_PRESEQUENCEREG0B1S2_MASK                    GENMASK_32(8, 0)
/* CSR_POSTSEQUENCEREG0B0S0 */
#define CSR_POSTSEQUENCEREG0B0S0_LSB                    0
#define CSR_POSTSEQUENCEREG0B0S0_MASK                   GENMASK_32(15, 0)
/* CSR_POSTSEQUENCEREG0B0S1 */
#define CSR_POSTSEQUENCEREG0B0S1_LSB                    0
#define CSR_POSTSEQUENCEREG0B0S1_MASK                   GENMASK_32(15, 0)
/* CSR_POSTSEQUENCEREG0B0S2 */
#define CSR_POSTSEQUENCEREG0B0S2_LSB                    0
#define CSR_POSTSEQUENCEREG0B0S2_MASK                   GENMASK_32(8, 0)
/* CSR_POSTSEQUENCEREG0B1S0 */
#define CSR_POSTSEQUENCEREG0B1S0_LSB                    0
#define CSR_POSTSEQUENCEREG0B1S0_MASK                   GENMASK_32(15, 0)
/* CSR_POSTSEQUENCEREG0B1S1 */
#define CSR_POSTSEQUENCEREG0B1S1_LSB                    0
#define CSR_POSTSEQUENCEREG0B1S1_MASK                   GENMASK_32(15, 0)
/* CSR_POSTSEQUENCEREG0B1S2 */
#define CSR_POSTSEQUENCEREG0B1S2_LSB                    0
#define CSR_POSTSEQUENCEREG0B1S2_MASK                   GENMASK_32(8, 0)
/* CSR_SEQ0BDISABLEFLAG0 */
#define CSR_SEQ0BDISABLEFLAG0_LSB                       0
#define CSR_SEQ0BDISABLEFLAG0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG1 */
#define CSR_SEQ0BDISABLEFLAG1_LSB                       0
#define CSR_SEQ0BDISABLEFLAG1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG2 */
#define CSR_SEQ0BDISABLEFLAG2_LSB                       0
#define CSR_SEQ0BDISABLEFLAG2_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG3 */
#define CSR_SEQ0BDISABLEFLAG3_LSB                       0
#define CSR_SEQ0BDISABLEFLAG3_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG4 */
#define CSR_SEQ0BDISABLEFLAG4_LSB                       0
#define CSR_SEQ0BDISABLEFLAG4_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG5 */
#define CSR_SEQ0BDISABLEFLAG5_LSB                       0
#define CSR_SEQ0BDISABLEFLAG5_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG6 */
#define CSR_SEQ0BDISABLEFLAG6_LSB                       0
#define CSR_SEQ0BDISABLEFLAG6_MASK                      GENMASK_32(15, 0)
/* CSR_SEQ0BDISABLEFLAG7 */
#define CSR_SEQ0BDISABLEFLAG7_LSB                       0
#define CSR_SEQ0BDISABLEFLAG7_MASK                      GENMASK_32(15, 0)
/* CSR_STARTVECTOR0B0 */
#define CSR_STARTVECTOR0B0_LSB                          0
#define CSR_STARTVECTOR0B0_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC0_LSB                          0
#define CSR_SEQ0BSTARTVEC0_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B1 */
#define CSR_STARTVECTOR0B1_LSB                          0
#define CSR_STARTVECTOR0B1_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC1_LSB                          0
#define CSR_SEQ0BSTARTVEC1_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B2 */
#define CSR_STARTVECTOR0B2_LSB                          0
#define CSR_STARTVECTOR0B2_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC2_LSB                          0
#define CSR_SEQ0BSTARTVEC2_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B3 */
#define CSR_STARTVECTOR0B3_LSB                          0
#define CSR_STARTVECTOR0B3_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC3_LSB                          0
#define CSR_SEQ0BSTARTVEC3_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B4 */
#define CSR_STARTVECTOR0B4_LSB                          0
#define CSR_STARTVECTOR0B4_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC4_LSB                          0
#define CSR_SEQ0BSTARTVEC4_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B5 */
#define CSR_STARTVECTOR0B5_LSB                          0
#define CSR_STARTVECTOR0B5_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC5_LSB                          0
#define CSR_SEQ0BSTARTVEC5_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B6 */
#define CSR_STARTVECTOR0B6_LSB                          0
#define CSR_STARTVECTOR0B6_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC6_LSB                          0
#define CSR_SEQ0BSTARTVEC6_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B7 */
#define CSR_STARTVECTOR0B7_LSB                          0
#define CSR_STARTVECTOR0B7_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC7_LSB                          0
#define CSR_SEQ0BSTARTVEC7_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B8 */
#define CSR_STARTVECTOR0B8_LSB                          0
#define CSR_STARTVECTOR0B8_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC8_LSB                          0
#define CSR_SEQ0BSTARTVEC8_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B9 */
#define CSR_STARTVECTOR0B9_LSB                          0
#define CSR_STARTVECTOR0B9_MASK                         GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC9_LSB                          0
#define CSR_SEQ0BSTARTVEC9_MASK                         GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B10 */
#define CSR_STARTVECTOR0B10_LSB                         0
#define CSR_STARTVECTOR0B10_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC10_LSB                         0
#define CSR_SEQ0BSTARTVEC10_MASK                        GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B11 */
#define CSR_STARTVECTOR0B11_LSB                         0
#define CSR_STARTVECTOR0B11_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC11_LSB                         0
#define CSR_SEQ0BSTARTVEC11_MASK                        GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B12 */
#define CSR_STARTVECTOR0B12_LSB                         0
#define CSR_STARTVECTOR0B12_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC12_LSB                         0
#define CSR_SEQ0BSTARTVEC12_MASK                        GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B13 */
#define CSR_STARTVECTOR0B13_LSB                         0
#define CSR_STARTVECTOR0B13_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC13_LSB                         0
#define CSR_SEQ0BSTARTVEC13_MASK                        GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B14 */
#define CSR_STARTVECTOR0B14_LSB                         0
#define CSR_STARTVECTOR0B14_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC14_LSB                         0
#define CSR_SEQ0BSTARTVEC14_MASK                        GENMASK_32(6, 0)
/* CSR_STARTVECTOR0B15 */
#define CSR_STARTVECTOR0B15_LSB                         0
#define CSR_STARTVECTOR0B15_MASK                        GENMASK_32(6, 0)
#define CSR_SEQ0BSTARTVEC15_LSB                         0
#define CSR_SEQ0BSTARTVEC15_MASK                        GENMASK_32(6, 0)
/* CSR_SEQ0BWAITCONDSEL */
#define CSR_SEQ0BWAITCONDSEL_LSB                        0
#define CSR_SEQ0BWAITCONDSEL_MASK                       GENMASK_32(2, 0)
/* CSR_PHYINLP3 */
#define CSR_PHYINLP3_LSB                                0
#define CSR_PHYINLP3_MASK                               BIT(0)
/* CSR_SEQUENCEREG0B0S0 */
#define CSR_SEQUENCEREG0B0S0_LSB                        0
#define CSR_SEQUENCEREG0B0S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B0S1 */
#define CSR_SEQUENCEREG0B0S1_LSB                        0
#define CSR_SEQUENCEREG0B0S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B0S2 */
#define CSR_SEQUENCEREG0B0S2_LSB                        0
#define CSR_SEQUENCEREG0B0S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B1S0 */
#define CSR_SEQUENCEREG0B1S0_LSB                        0
#define CSR_SEQUENCEREG0B1S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B1S1 */
#define CSR_SEQUENCEREG0B1S1_LSB                        0
#define CSR_SEQUENCEREG0B1S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B1S2 */
#define CSR_SEQUENCEREG0B1S2_LSB                        0
#define CSR_SEQUENCEREG0B1S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B2S0 */
#define CSR_SEQUENCEREG0B2S0_LSB                        0
#define CSR_SEQUENCEREG0B2S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B2S1 */
#define CSR_SEQUENCEREG0B2S1_LSB                        0
#define CSR_SEQUENCEREG0B2S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B2S2 */
#define CSR_SEQUENCEREG0B2S2_LSB                        0
#define CSR_SEQUENCEREG0B2S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B3S0 */
#define CSR_SEQUENCEREG0B3S0_LSB                        0
#define CSR_SEQUENCEREG0B3S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B3S1 */
#define CSR_SEQUENCEREG0B3S1_LSB                        0
#define CSR_SEQUENCEREG0B3S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B3S2 */
#define CSR_SEQUENCEREG0B3S2_LSB                        0
#define CSR_SEQUENCEREG0B3S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B4S0 */
#define CSR_SEQUENCEREG0B4S0_LSB                        0
#define CSR_SEQUENCEREG0B4S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B4S1 */
#define CSR_SEQUENCEREG0B4S1_LSB                        0
#define CSR_SEQUENCEREG0B4S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B4S2 */
#define CSR_SEQUENCEREG0B4S2_LSB                        0
#define CSR_SEQUENCEREG0B4S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B5S0 */
#define CSR_SEQUENCEREG0B5S0_LSB                        0
#define CSR_SEQUENCEREG0B5S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B5S1 */
#define CSR_SEQUENCEREG0B5S1_LSB                        0
#define CSR_SEQUENCEREG0B5S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B5S2 */
#define CSR_SEQUENCEREG0B5S2_LSB                        0
#define CSR_SEQUENCEREG0B5S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B6S0 */
#define CSR_SEQUENCEREG0B6S0_LSB                        0
#define CSR_SEQUENCEREG0B6S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B6S1 */
#define CSR_SEQUENCEREG0B6S1_LSB                        0
#define CSR_SEQUENCEREG0B6S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B6S2 */
#define CSR_SEQUENCEREG0B6S2_LSB                        0
#define CSR_SEQUENCEREG0B6S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B7S0 */
#define CSR_SEQUENCEREG0B7S0_LSB                        0
#define CSR_SEQUENCEREG0B7S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B7S1 */
#define CSR_SEQUENCEREG0B7S1_LSB                        0
#define CSR_SEQUENCEREG0B7S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B7S2 */
#define CSR_SEQUENCEREG0B7S2_LSB                        0
#define CSR_SEQUENCEREG0B7S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B8S0 */
#define CSR_SEQUENCEREG0B8S0_LSB                        0
#define CSR_SEQUENCEREG0B8S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B8S1 */
#define CSR_SEQUENCEREG0B8S1_LSB                        0
#define CSR_SEQUENCEREG0B8S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B8S2 */
#define CSR_SEQUENCEREG0B8S2_LSB                        0
#define CSR_SEQUENCEREG0B8S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B9S0 */
#define CSR_SEQUENCEREG0B9S0_LSB                        0
#define CSR_SEQUENCEREG0B9S0_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B9S1 */
#define CSR_SEQUENCEREG0B9S1_LSB                        0
#define CSR_SEQUENCEREG0B9S1_MASK                       GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B9S2 */
#define CSR_SEQUENCEREG0B9S2_LSB                        0
#define CSR_SEQUENCEREG0B9S2_MASK                       GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B10S0 */
#define CSR_SEQUENCEREG0B10S0_LSB                       0
#define CSR_SEQUENCEREG0B10S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B10S1 */
#define CSR_SEQUENCEREG0B10S1_LSB                       0
#define CSR_SEQUENCEREG0B10S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B10S2 */
#define CSR_SEQUENCEREG0B10S2_LSB                       0
#define CSR_SEQUENCEREG0B10S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B11S0 */
#define CSR_SEQUENCEREG0B11S0_LSB                       0
#define CSR_SEQUENCEREG0B11S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B11S1 */
#define CSR_SEQUENCEREG0B11S1_LSB                       0
#define CSR_SEQUENCEREG0B11S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B11S2 */
#define CSR_SEQUENCEREG0B11S2_LSB                       0
#define CSR_SEQUENCEREG0B11S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B12S0 */
#define CSR_SEQUENCEREG0B12S0_LSB                       0
#define CSR_SEQUENCEREG0B12S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B12S1 */
#define CSR_SEQUENCEREG0B12S1_LSB                       0
#define CSR_SEQUENCEREG0B12S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B12S2 */
#define CSR_SEQUENCEREG0B12S2_LSB                       0
#define CSR_SEQUENCEREG0B12S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B13S0 */
#define CSR_SEQUENCEREG0B13S0_LSB                       0
#define CSR_SEQUENCEREG0B13S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B13S1 */
#define CSR_SEQUENCEREG0B13S1_LSB                       0
#define CSR_SEQUENCEREG0B13S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B13S2 */
#define CSR_SEQUENCEREG0B13S2_LSB                       0
#define CSR_SEQUENCEREG0B13S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B14S0 */
#define CSR_SEQUENCEREG0B14S0_LSB                       0
#define CSR_SEQUENCEREG0B14S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B14S1 */
#define CSR_SEQUENCEREG0B14S1_LSB                       0
#define CSR_SEQUENCEREG0B14S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B14S2 */
#define CSR_SEQUENCEREG0B14S2_LSB                       0
#define CSR_SEQUENCEREG0B14S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B15S0 */
#define CSR_SEQUENCEREG0B15S0_LSB                       0
#define CSR_SEQUENCEREG0B15S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B15S1 */
#define CSR_SEQUENCEREG0B15S1_LSB                       0
#define CSR_SEQUENCEREG0B15S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B15S2 */
#define CSR_SEQUENCEREG0B15S2_LSB                       0
#define CSR_SEQUENCEREG0B15S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B16S0 */
#define CSR_SEQUENCEREG0B16S0_LSB                       0
#define CSR_SEQUENCEREG0B16S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B16S1 */
#define CSR_SEQUENCEREG0B16S1_LSB                       0
#define CSR_SEQUENCEREG0B16S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B16S2 */
#define CSR_SEQUENCEREG0B16S2_LSB                       0
#define CSR_SEQUENCEREG0B16S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B17S0 */
#define CSR_SEQUENCEREG0B17S0_LSB                       0
#define CSR_SEQUENCEREG0B17S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B17S1 */
#define CSR_SEQUENCEREG0B17S1_LSB                       0
#define CSR_SEQUENCEREG0B17S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B17S2 */
#define CSR_SEQUENCEREG0B17S2_LSB                       0
#define CSR_SEQUENCEREG0B17S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B18S0 */
#define CSR_SEQUENCEREG0B18S0_LSB                       0
#define CSR_SEQUENCEREG0B18S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B18S1 */
#define CSR_SEQUENCEREG0B18S1_LSB                       0
#define CSR_SEQUENCEREG0B18S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B18S2 */
#define CSR_SEQUENCEREG0B18S2_LSB                       0
#define CSR_SEQUENCEREG0B18S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B19S0 */
#define CSR_SEQUENCEREG0B19S0_LSB                       0
#define CSR_SEQUENCEREG0B19S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B19S1 */
#define CSR_SEQUENCEREG0B19S1_LSB                       0
#define CSR_SEQUENCEREG0B19S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B19S2 */
#define CSR_SEQUENCEREG0B19S2_LSB                       0
#define CSR_SEQUENCEREG0B19S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B20S0 */
#define CSR_SEQUENCEREG0B20S0_LSB                       0
#define CSR_SEQUENCEREG0B20S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B20S1 */
#define CSR_SEQUENCEREG0B20S1_LSB                       0
#define CSR_SEQUENCEREG0B20S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B20S2 */
#define CSR_SEQUENCEREG0B20S2_LSB                       0
#define CSR_SEQUENCEREG0B20S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B21S0 */
#define CSR_SEQUENCEREG0B21S0_LSB                       0
#define CSR_SEQUENCEREG0B21S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B21S1 */
#define CSR_SEQUENCEREG0B21S1_LSB                       0
#define CSR_SEQUENCEREG0B21S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B21S2 */
#define CSR_SEQUENCEREG0B21S2_LSB                       0
#define CSR_SEQUENCEREG0B21S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B22S0 */
#define CSR_SEQUENCEREG0B22S0_LSB                       0
#define CSR_SEQUENCEREG0B22S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B22S1 */
#define CSR_SEQUENCEREG0B22S1_LSB                       0
#define CSR_SEQUENCEREG0B22S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B22S2 */
#define CSR_SEQUENCEREG0B22S2_LSB                       0
#define CSR_SEQUENCEREG0B22S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B23S0 */
#define CSR_SEQUENCEREG0B23S0_LSB                       0
#define CSR_SEQUENCEREG0B23S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B23S1 */
#define CSR_SEQUENCEREG0B23S1_LSB                       0
#define CSR_SEQUENCEREG0B23S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B23S2 */
#define CSR_SEQUENCEREG0B23S2_LSB                       0
#define CSR_SEQUENCEREG0B23S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B24S0 */
#define CSR_SEQUENCEREG0B24S0_LSB                       0
#define CSR_SEQUENCEREG0B24S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B24S1 */
#define CSR_SEQUENCEREG0B24S1_LSB                       0
#define CSR_SEQUENCEREG0B24S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B24S2 */
#define CSR_SEQUENCEREG0B24S2_LSB                       0
#define CSR_SEQUENCEREG0B24S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B25S0 */
#define CSR_SEQUENCEREG0B25S0_LSB                       0
#define CSR_SEQUENCEREG0B25S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B25S1 */
#define CSR_SEQUENCEREG0B25S1_LSB                       0
#define CSR_SEQUENCEREG0B25S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B25S2 */
#define CSR_SEQUENCEREG0B25S2_LSB                       0
#define CSR_SEQUENCEREG0B25S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B26S0 */
#define CSR_SEQUENCEREG0B26S0_LSB                       0
#define CSR_SEQUENCEREG0B26S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B26S1 */
#define CSR_SEQUENCEREG0B26S1_LSB                       0
#define CSR_SEQUENCEREG0B26S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B26S2 */
#define CSR_SEQUENCEREG0B26S2_LSB                       0
#define CSR_SEQUENCEREG0B26S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B27S0 */
#define CSR_SEQUENCEREG0B27S0_LSB                       0
#define CSR_SEQUENCEREG0B27S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B27S1 */
#define CSR_SEQUENCEREG0B27S1_LSB                       0
#define CSR_SEQUENCEREG0B27S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B27S2 */
#define CSR_SEQUENCEREG0B27S2_LSB                       0
#define CSR_SEQUENCEREG0B27S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B28S0 */
#define CSR_SEQUENCEREG0B28S0_LSB                       0
#define CSR_SEQUENCEREG0B28S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B28S1 */
#define CSR_SEQUENCEREG0B28S1_LSB                       0
#define CSR_SEQUENCEREG0B28S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B28S2 */
#define CSR_SEQUENCEREG0B28S2_LSB                       0
#define CSR_SEQUENCEREG0B28S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B29S0 */
#define CSR_SEQUENCEREG0B29S0_LSB                       0
#define CSR_SEQUENCEREG0B29S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B29S1 */
#define CSR_SEQUENCEREG0B29S1_LSB                       0
#define CSR_SEQUENCEREG0B29S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B29S2 */
#define CSR_SEQUENCEREG0B29S2_LSB                       0
#define CSR_SEQUENCEREG0B29S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B30S0 */
#define CSR_SEQUENCEREG0B30S0_LSB                       0
#define CSR_SEQUENCEREG0B30S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B30S1 */
#define CSR_SEQUENCEREG0B30S1_LSB                       0
#define CSR_SEQUENCEREG0B30S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B30S2 */
#define CSR_SEQUENCEREG0B30S2_LSB                       0
#define CSR_SEQUENCEREG0B30S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B31S0 */
#define CSR_SEQUENCEREG0B31S0_LSB                       0
#define CSR_SEQUENCEREG0B31S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B31S1 */
#define CSR_SEQUENCEREG0B31S1_LSB                       0
#define CSR_SEQUENCEREG0B31S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B31S2 */
#define CSR_SEQUENCEREG0B31S2_LSB                       0
#define CSR_SEQUENCEREG0B31S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B32S0 */
#define CSR_SEQUENCEREG0B32S0_LSB                       0
#define CSR_SEQUENCEREG0B32S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B32S1 */
#define CSR_SEQUENCEREG0B32S1_LSB                       0
#define CSR_SEQUENCEREG0B32S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B32S2 */
#define CSR_SEQUENCEREG0B32S2_LSB                       0
#define CSR_SEQUENCEREG0B32S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B33S0 */
#define CSR_SEQUENCEREG0B33S0_LSB                       0
#define CSR_SEQUENCEREG0B33S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B33S1 */
#define CSR_SEQUENCEREG0B33S1_LSB                       0
#define CSR_SEQUENCEREG0B33S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B33S2 */
#define CSR_SEQUENCEREG0B33S2_LSB                       0
#define CSR_SEQUENCEREG0B33S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B34S0 */
#define CSR_SEQUENCEREG0B34S0_LSB                       0
#define CSR_SEQUENCEREG0B34S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B34S1 */
#define CSR_SEQUENCEREG0B34S1_LSB                       0
#define CSR_SEQUENCEREG0B34S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B34S2 */
#define CSR_SEQUENCEREG0B34S2_LSB                       0
#define CSR_SEQUENCEREG0B34S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B35S0 */
#define CSR_SEQUENCEREG0B35S0_LSB                       0
#define CSR_SEQUENCEREG0B35S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B35S1 */
#define CSR_SEQUENCEREG0B35S1_LSB                       0
#define CSR_SEQUENCEREG0B35S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B35S2 */
#define CSR_SEQUENCEREG0B35S2_LSB                       0
#define CSR_SEQUENCEREG0B35S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B36S0 */
#define CSR_SEQUENCEREG0B36S0_LSB                       0
#define CSR_SEQUENCEREG0B36S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B36S1 */
#define CSR_SEQUENCEREG0B36S1_LSB                       0
#define CSR_SEQUENCEREG0B36S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B36S2 */
#define CSR_SEQUENCEREG0B36S2_LSB                       0
#define CSR_SEQUENCEREG0B36S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B37S0 */
#define CSR_SEQUENCEREG0B37S0_LSB                       0
#define CSR_SEQUENCEREG0B37S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B37S1 */
#define CSR_SEQUENCEREG0B37S1_LSB                       0
#define CSR_SEQUENCEREG0B37S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B37S2 */
#define CSR_SEQUENCEREG0B37S2_LSB                       0
#define CSR_SEQUENCEREG0B37S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B38S0 */
#define CSR_SEQUENCEREG0B38S0_LSB                       0
#define CSR_SEQUENCEREG0B38S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B38S1 */
#define CSR_SEQUENCEREG0B38S1_LSB                       0
#define CSR_SEQUENCEREG0B38S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B38S2 */
#define CSR_SEQUENCEREG0B38S2_LSB                       0
#define CSR_SEQUENCEREG0B38S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B39S0 */
#define CSR_SEQUENCEREG0B39S0_LSB                       0
#define CSR_SEQUENCEREG0B39S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B39S1 */
#define CSR_SEQUENCEREG0B39S1_LSB                       0
#define CSR_SEQUENCEREG0B39S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B39S2 */
#define CSR_SEQUENCEREG0B39S2_LSB                       0
#define CSR_SEQUENCEREG0B39S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B40S0 */
#define CSR_SEQUENCEREG0B40S0_LSB                       0
#define CSR_SEQUENCEREG0B40S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B40S1 */
#define CSR_SEQUENCEREG0B40S1_LSB                       0
#define CSR_SEQUENCEREG0B40S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B40S2 */
#define CSR_SEQUENCEREG0B40S2_LSB                       0
#define CSR_SEQUENCEREG0B40S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B41S0 */
#define CSR_SEQUENCEREG0B41S0_LSB                       0
#define CSR_SEQUENCEREG0B41S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B41S1 */
#define CSR_SEQUENCEREG0B41S1_LSB                       0
#define CSR_SEQUENCEREG0B41S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B41S2 */
#define CSR_SEQUENCEREG0B41S2_LSB                       0
#define CSR_SEQUENCEREG0B41S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B42S0 */
#define CSR_SEQUENCEREG0B42S0_LSB                       0
#define CSR_SEQUENCEREG0B42S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B42S1 */
#define CSR_SEQUENCEREG0B42S1_LSB                       0
#define CSR_SEQUENCEREG0B42S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B42S2 */
#define CSR_SEQUENCEREG0B42S2_LSB                       0
#define CSR_SEQUENCEREG0B42S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B43S0 */
#define CSR_SEQUENCEREG0B43S0_LSB                       0
#define CSR_SEQUENCEREG0B43S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B43S1 */
#define CSR_SEQUENCEREG0B43S1_LSB                       0
#define CSR_SEQUENCEREG0B43S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B43S2 */
#define CSR_SEQUENCEREG0B43S2_LSB                       0
#define CSR_SEQUENCEREG0B43S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B44S0 */
#define CSR_SEQUENCEREG0B44S0_LSB                       0
#define CSR_SEQUENCEREG0B44S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B44S1 */
#define CSR_SEQUENCEREG0B44S1_LSB                       0
#define CSR_SEQUENCEREG0B44S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B44S2 */
#define CSR_SEQUENCEREG0B44S2_LSB                       0
#define CSR_SEQUENCEREG0B44S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B45S0 */
#define CSR_SEQUENCEREG0B45S0_LSB                       0
#define CSR_SEQUENCEREG0B45S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B45S1 */
#define CSR_SEQUENCEREG0B45S1_LSB                       0
#define CSR_SEQUENCEREG0B45S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B45S2 */
#define CSR_SEQUENCEREG0B45S2_LSB                       0
#define CSR_SEQUENCEREG0B45S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B46S0 */
#define CSR_SEQUENCEREG0B46S0_LSB                       0
#define CSR_SEQUENCEREG0B46S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B46S1 */
#define CSR_SEQUENCEREG0B46S1_LSB                       0
#define CSR_SEQUENCEREG0B46S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B46S2 */
#define CSR_SEQUENCEREG0B46S2_LSB                       0
#define CSR_SEQUENCEREG0B46S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B47S0 */
#define CSR_SEQUENCEREG0B47S0_LSB                       0
#define CSR_SEQUENCEREG0B47S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B47S1 */
#define CSR_SEQUENCEREG0B47S1_LSB                       0
#define CSR_SEQUENCEREG0B47S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B47S2 */
#define CSR_SEQUENCEREG0B47S2_LSB                       0
#define CSR_SEQUENCEREG0B47S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B48S0 */
#define CSR_SEQUENCEREG0B48S0_LSB                       0
#define CSR_SEQUENCEREG0B48S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B48S1 */
#define CSR_SEQUENCEREG0B48S1_LSB                       0
#define CSR_SEQUENCEREG0B48S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B48S2 */
#define CSR_SEQUENCEREG0B48S2_LSB                       0
#define CSR_SEQUENCEREG0B48S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B49S0 */
#define CSR_SEQUENCEREG0B49S0_LSB                       0
#define CSR_SEQUENCEREG0B49S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B49S1 */
#define CSR_SEQUENCEREG0B49S1_LSB                       0
#define CSR_SEQUENCEREG0B49S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B49S2 */
#define CSR_SEQUENCEREG0B49S2_LSB                       0
#define CSR_SEQUENCEREG0B49S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B50S0 */
#define CSR_SEQUENCEREG0B50S0_LSB                       0
#define CSR_SEQUENCEREG0B50S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B50S1 */
#define CSR_SEQUENCEREG0B50S1_LSB                       0
#define CSR_SEQUENCEREG0B50S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B50S2 */
#define CSR_SEQUENCEREG0B50S2_LSB                       0
#define CSR_SEQUENCEREG0B50S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B51S0 */
#define CSR_SEQUENCEREG0B51S0_LSB                       0
#define CSR_SEQUENCEREG0B51S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B51S1 */
#define CSR_SEQUENCEREG0B51S1_LSB                       0
#define CSR_SEQUENCEREG0B51S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B51S2 */
#define CSR_SEQUENCEREG0B51S2_LSB                       0
#define CSR_SEQUENCEREG0B51S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B52S0 */
#define CSR_SEQUENCEREG0B52S0_LSB                       0
#define CSR_SEQUENCEREG0B52S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B52S1 */
#define CSR_SEQUENCEREG0B52S1_LSB                       0
#define CSR_SEQUENCEREG0B52S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B52S2 */
#define CSR_SEQUENCEREG0B52S2_LSB                       0
#define CSR_SEQUENCEREG0B52S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B53S0 */
#define CSR_SEQUENCEREG0B53S0_LSB                       0
#define CSR_SEQUENCEREG0B53S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B53S1 */
#define CSR_SEQUENCEREG0B53S1_LSB                       0
#define CSR_SEQUENCEREG0B53S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B53S2 */
#define CSR_SEQUENCEREG0B53S2_LSB                       0
#define CSR_SEQUENCEREG0B53S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B54S0 */
#define CSR_SEQUENCEREG0B54S0_LSB                       0
#define CSR_SEQUENCEREG0B54S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B54S1 */
#define CSR_SEQUENCEREG0B54S1_LSB                       0
#define CSR_SEQUENCEREG0B54S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B54S2 */
#define CSR_SEQUENCEREG0B54S2_LSB                       0
#define CSR_SEQUENCEREG0B54S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B55S0 */
#define CSR_SEQUENCEREG0B55S0_LSB                       0
#define CSR_SEQUENCEREG0B55S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B55S1 */
#define CSR_SEQUENCEREG0B55S1_LSB                       0
#define CSR_SEQUENCEREG0B55S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B55S2 */
#define CSR_SEQUENCEREG0B55S2_LSB                       0
#define CSR_SEQUENCEREG0B55S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B56S0 */
#define CSR_SEQUENCEREG0B56S0_LSB                       0
#define CSR_SEQUENCEREG0B56S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B56S1 */
#define CSR_SEQUENCEREG0B56S1_LSB                       0
#define CSR_SEQUENCEREG0B56S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B56S2 */
#define CSR_SEQUENCEREG0B56S2_LSB                       0
#define CSR_SEQUENCEREG0B56S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B57S0 */
#define CSR_SEQUENCEREG0B57S0_LSB                       0
#define CSR_SEQUENCEREG0B57S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B57S1 */
#define CSR_SEQUENCEREG0B57S1_LSB                       0
#define CSR_SEQUENCEREG0B57S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B57S2 */
#define CSR_SEQUENCEREG0B57S2_LSB                       0
#define CSR_SEQUENCEREG0B57S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B58S0 */
#define CSR_SEQUENCEREG0B58S0_LSB                       0
#define CSR_SEQUENCEREG0B58S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B58S1 */
#define CSR_SEQUENCEREG0B58S1_LSB                       0
#define CSR_SEQUENCEREG0B58S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B58S2 */
#define CSR_SEQUENCEREG0B58S2_LSB                       0
#define CSR_SEQUENCEREG0B58S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B59S0 */
#define CSR_SEQUENCEREG0B59S0_LSB                       0
#define CSR_SEQUENCEREG0B59S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B59S1 */
#define CSR_SEQUENCEREG0B59S1_LSB                       0
#define CSR_SEQUENCEREG0B59S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B59S2 */
#define CSR_SEQUENCEREG0B59S2_LSB                       0
#define CSR_SEQUENCEREG0B59S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B60S0 */
#define CSR_SEQUENCEREG0B60S0_LSB                       0
#define CSR_SEQUENCEREG0B60S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B60S1 */
#define CSR_SEQUENCEREG0B60S1_LSB                       0
#define CSR_SEQUENCEREG0B60S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B60S2 */
#define CSR_SEQUENCEREG0B60S2_LSB                       0
#define CSR_SEQUENCEREG0B60S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B61S0 */
#define CSR_SEQUENCEREG0B61S0_LSB                       0
#define CSR_SEQUENCEREG0B61S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B61S1 */
#define CSR_SEQUENCEREG0B61S1_LSB                       0
#define CSR_SEQUENCEREG0B61S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B61S2 */
#define CSR_SEQUENCEREG0B61S2_LSB                       0
#define CSR_SEQUENCEREG0B61S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B62S0 */
#define CSR_SEQUENCEREG0B62S0_LSB                       0
#define CSR_SEQUENCEREG0B62S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B62S1 */
#define CSR_SEQUENCEREG0B62S1_LSB                       0
#define CSR_SEQUENCEREG0B62S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B62S2 */
#define CSR_SEQUENCEREG0B62S2_LSB                       0
#define CSR_SEQUENCEREG0B62S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B63S0 */
#define CSR_SEQUENCEREG0B63S0_LSB                       0
#define CSR_SEQUENCEREG0B63S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B63S1 */
#define CSR_SEQUENCEREG0B63S1_LSB                       0
#define CSR_SEQUENCEREG0B63S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B63S2 */
#define CSR_SEQUENCEREG0B63S2_LSB                       0
#define CSR_SEQUENCEREG0B63S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B64S0 */
#define CSR_SEQUENCEREG0B64S0_LSB                       0
#define CSR_SEQUENCEREG0B64S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B64S1 */
#define CSR_SEQUENCEREG0B64S1_LSB                       0
#define CSR_SEQUENCEREG0B64S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B64S2 */
#define CSR_SEQUENCEREG0B64S2_LSB                       0
#define CSR_SEQUENCEREG0B64S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B65S0 */
#define CSR_SEQUENCEREG0B65S0_LSB                       0
#define CSR_SEQUENCEREG0B65S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B65S1 */
#define CSR_SEQUENCEREG0B65S1_LSB                       0
#define CSR_SEQUENCEREG0B65S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B65S2 */
#define CSR_SEQUENCEREG0B65S2_LSB                       0
#define CSR_SEQUENCEREG0B65S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B66S0 */
#define CSR_SEQUENCEREG0B66S0_LSB                       0
#define CSR_SEQUENCEREG0B66S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B66S1 */
#define CSR_SEQUENCEREG0B66S1_LSB                       0
#define CSR_SEQUENCEREG0B66S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B66S2 */
#define CSR_SEQUENCEREG0B66S2_LSB                       0
#define CSR_SEQUENCEREG0B66S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B67S0 */
#define CSR_SEQUENCEREG0B67S0_LSB                       0
#define CSR_SEQUENCEREG0B67S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B67S1 */
#define CSR_SEQUENCEREG0B67S1_LSB                       0
#define CSR_SEQUENCEREG0B67S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B67S2 */
#define CSR_SEQUENCEREG0B67S2_LSB                       0
#define CSR_SEQUENCEREG0B67S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B68S0 */
#define CSR_SEQUENCEREG0B68S0_LSB                       0
#define CSR_SEQUENCEREG0B68S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B68S1 */
#define CSR_SEQUENCEREG0B68S1_LSB                       0
#define CSR_SEQUENCEREG0B68S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B68S2 */
#define CSR_SEQUENCEREG0B68S2_LSB                       0
#define CSR_SEQUENCEREG0B68S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B69S0 */
#define CSR_SEQUENCEREG0B69S0_LSB                       0
#define CSR_SEQUENCEREG0B69S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B69S1 */
#define CSR_SEQUENCEREG0B69S1_LSB                       0
#define CSR_SEQUENCEREG0B69S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B69S2 */
#define CSR_SEQUENCEREG0B69S2_LSB                       0
#define CSR_SEQUENCEREG0B69S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B70S0 */
#define CSR_SEQUENCEREG0B70S0_LSB                       0
#define CSR_SEQUENCEREG0B70S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B70S1 */
#define CSR_SEQUENCEREG0B70S1_LSB                       0
#define CSR_SEQUENCEREG0B70S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B70S2 */
#define CSR_SEQUENCEREG0B70S2_LSB                       0
#define CSR_SEQUENCEREG0B70S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B71S0 */
#define CSR_SEQUENCEREG0B71S0_LSB                       0
#define CSR_SEQUENCEREG0B71S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B71S1 */
#define CSR_SEQUENCEREG0B71S1_LSB                       0
#define CSR_SEQUENCEREG0B71S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B71S2 */
#define CSR_SEQUENCEREG0B71S2_LSB                       0
#define CSR_SEQUENCEREG0B71S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B72S0 */
#define CSR_SEQUENCEREG0B72S0_LSB                       0
#define CSR_SEQUENCEREG0B72S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B72S1 */
#define CSR_SEQUENCEREG0B72S1_LSB                       0
#define CSR_SEQUENCEREG0B72S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B72S2 */
#define CSR_SEQUENCEREG0B72S2_LSB                       0
#define CSR_SEQUENCEREG0B72S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B73S0 */
#define CSR_SEQUENCEREG0B73S0_LSB                       0
#define CSR_SEQUENCEREG0B73S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B73S1 */
#define CSR_SEQUENCEREG0B73S1_LSB                       0
#define CSR_SEQUENCEREG0B73S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B73S2 */
#define CSR_SEQUENCEREG0B73S2_LSB                       0
#define CSR_SEQUENCEREG0B73S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B74S0 */
#define CSR_SEQUENCEREG0B74S0_LSB                       0
#define CSR_SEQUENCEREG0B74S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B74S1 */
#define CSR_SEQUENCEREG0B74S1_LSB                       0
#define CSR_SEQUENCEREG0B74S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B74S2 */
#define CSR_SEQUENCEREG0B74S2_LSB                       0
#define CSR_SEQUENCEREG0B74S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B75S0 */
#define CSR_SEQUENCEREG0B75S0_LSB                       0
#define CSR_SEQUENCEREG0B75S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B75S1 */
#define CSR_SEQUENCEREG0B75S1_LSB                       0
#define CSR_SEQUENCEREG0B75S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B75S2 */
#define CSR_SEQUENCEREG0B75S2_LSB                       0
#define CSR_SEQUENCEREG0B75S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B76S0 */
#define CSR_SEQUENCEREG0B76S0_LSB                       0
#define CSR_SEQUENCEREG0B76S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B76S1 */
#define CSR_SEQUENCEREG0B76S1_LSB                       0
#define CSR_SEQUENCEREG0B76S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B76S2 */
#define CSR_SEQUENCEREG0B76S2_LSB                       0
#define CSR_SEQUENCEREG0B76S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B77S0 */
#define CSR_SEQUENCEREG0B77S0_LSB                       0
#define CSR_SEQUENCEREG0B77S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B77S1 */
#define CSR_SEQUENCEREG0B77S1_LSB                       0
#define CSR_SEQUENCEREG0B77S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B77S2 */
#define CSR_SEQUENCEREG0B77S2_LSB                       0
#define CSR_SEQUENCEREG0B77S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B78S0 */
#define CSR_SEQUENCEREG0B78S0_LSB                       0
#define CSR_SEQUENCEREG0B78S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B78S1 */
#define CSR_SEQUENCEREG0B78S1_LSB                       0
#define CSR_SEQUENCEREG0B78S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B78S2 */
#define CSR_SEQUENCEREG0B78S2_LSB                       0
#define CSR_SEQUENCEREG0B78S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B79S0 */
#define CSR_SEQUENCEREG0B79S0_LSB                       0
#define CSR_SEQUENCEREG0B79S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B79S1 */
#define CSR_SEQUENCEREG0B79S1_LSB                       0
#define CSR_SEQUENCEREG0B79S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B79S2 */
#define CSR_SEQUENCEREG0B79S2_LSB                       0
#define CSR_SEQUENCEREG0B79S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B80S0 */
#define CSR_SEQUENCEREG0B80S0_LSB                       0
#define CSR_SEQUENCEREG0B80S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B80S1 */
#define CSR_SEQUENCEREG0B80S1_LSB                       0
#define CSR_SEQUENCEREG0B80S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B80S2 */
#define CSR_SEQUENCEREG0B80S2_LSB                       0
#define CSR_SEQUENCEREG0B80S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B81S0 */
#define CSR_SEQUENCEREG0B81S0_LSB                       0
#define CSR_SEQUENCEREG0B81S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B81S1 */
#define CSR_SEQUENCEREG0B81S1_LSB                       0
#define CSR_SEQUENCEREG0B81S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B81S2 */
#define CSR_SEQUENCEREG0B81S2_LSB                       0
#define CSR_SEQUENCEREG0B81S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B82S0 */
#define CSR_SEQUENCEREG0B82S0_LSB                       0
#define CSR_SEQUENCEREG0B82S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B82S1 */
#define CSR_SEQUENCEREG0B82S1_LSB                       0
#define CSR_SEQUENCEREG0B82S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B82S2 */
#define CSR_SEQUENCEREG0B82S2_LSB                       0
#define CSR_SEQUENCEREG0B82S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B83S0 */
#define CSR_SEQUENCEREG0B83S0_LSB                       0
#define CSR_SEQUENCEREG0B83S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B83S1 */
#define CSR_SEQUENCEREG0B83S1_LSB                       0
#define CSR_SEQUENCEREG0B83S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B83S2 */
#define CSR_SEQUENCEREG0B83S2_LSB                       0
#define CSR_SEQUENCEREG0B83S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B84S0 */
#define CSR_SEQUENCEREG0B84S0_LSB                       0
#define CSR_SEQUENCEREG0B84S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B84S1 */
#define CSR_SEQUENCEREG0B84S1_LSB                       0
#define CSR_SEQUENCEREG0B84S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B84S2 */
#define CSR_SEQUENCEREG0B84S2_LSB                       0
#define CSR_SEQUENCEREG0B84S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B85S0 */
#define CSR_SEQUENCEREG0B85S0_LSB                       0
#define CSR_SEQUENCEREG0B85S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B85S1 */
#define CSR_SEQUENCEREG0B85S1_LSB                       0
#define CSR_SEQUENCEREG0B85S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B85S2 */
#define CSR_SEQUENCEREG0B85S2_LSB                       0
#define CSR_SEQUENCEREG0B85S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B86S0 */
#define CSR_SEQUENCEREG0B86S0_LSB                       0
#define CSR_SEQUENCEREG0B86S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B86S1 */
#define CSR_SEQUENCEREG0B86S1_LSB                       0
#define CSR_SEQUENCEREG0B86S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B86S2 */
#define CSR_SEQUENCEREG0B86S2_LSB                       0
#define CSR_SEQUENCEREG0B86S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B87S0 */
#define CSR_SEQUENCEREG0B87S0_LSB                       0
#define CSR_SEQUENCEREG0B87S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B87S1 */
#define CSR_SEQUENCEREG0B87S1_LSB                       0
#define CSR_SEQUENCEREG0B87S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B87S2 */
#define CSR_SEQUENCEREG0B87S2_LSB                       0
#define CSR_SEQUENCEREG0B87S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B88S0 */
#define CSR_SEQUENCEREG0B88S0_LSB                       0
#define CSR_SEQUENCEREG0B88S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B88S1 */
#define CSR_SEQUENCEREG0B88S1_LSB                       0
#define CSR_SEQUENCEREG0B88S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B88S2 */
#define CSR_SEQUENCEREG0B88S2_LSB                       0
#define CSR_SEQUENCEREG0B88S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B89S0 */
#define CSR_SEQUENCEREG0B89S0_LSB                       0
#define CSR_SEQUENCEREG0B89S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B89S1 */
#define CSR_SEQUENCEREG0B89S1_LSB                       0
#define CSR_SEQUENCEREG0B89S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B89S2 */
#define CSR_SEQUENCEREG0B89S2_LSB                       0
#define CSR_SEQUENCEREG0B89S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B90S0 */
#define CSR_SEQUENCEREG0B90S0_LSB                       0
#define CSR_SEQUENCEREG0B90S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B90S1 */
#define CSR_SEQUENCEREG0B90S1_LSB                       0
#define CSR_SEQUENCEREG0B90S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B90S2 */
#define CSR_SEQUENCEREG0B90S2_LSB                       0
#define CSR_SEQUENCEREG0B90S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B91S0 */
#define CSR_SEQUENCEREG0B91S0_LSB                       0
#define CSR_SEQUENCEREG0B91S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B91S1 */
#define CSR_SEQUENCEREG0B91S1_LSB                       0
#define CSR_SEQUENCEREG0B91S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B91S2 */
#define CSR_SEQUENCEREG0B91S2_LSB                       0
#define CSR_SEQUENCEREG0B91S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B92S0 */
#define CSR_SEQUENCEREG0B92S0_LSB                       0
#define CSR_SEQUENCEREG0B92S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B92S1 */
#define CSR_SEQUENCEREG0B92S1_LSB                       0
#define CSR_SEQUENCEREG0B92S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B92S2 */
#define CSR_SEQUENCEREG0B92S2_LSB                       0
#define CSR_SEQUENCEREG0B92S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B93S0 */
#define CSR_SEQUENCEREG0B93S0_LSB                       0
#define CSR_SEQUENCEREG0B93S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B93S1 */
#define CSR_SEQUENCEREG0B93S1_LSB                       0
#define CSR_SEQUENCEREG0B93S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B93S2 */
#define CSR_SEQUENCEREG0B93S2_LSB                       0
#define CSR_SEQUENCEREG0B93S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B94S0 */
#define CSR_SEQUENCEREG0B94S0_LSB                       0
#define CSR_SEQUENCEREG0B94S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B94S1 */
#define CSR_SEQUENCEREG0B94S1_LSB                       0
#define CSR_SEQUENCEREG0B94S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B94S2 */
#define CSR_SEQUENCEREG0B94S2_LSB                       0
#define CSR_SEQUENCEREG0B94S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B95S0 */
#define CSR_SEQUENCEREG0B95S0_LSB                       0
#define CSR_SEQUENCEREG0B95S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B95S1 */
#define CSR_SEQUENCEREG0B95S1_LSB                       0
#define CSR_SEQUENCEREG0B95S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B95S2 */
#define CSR_SEQUENCEREG0B95S2_LSB                       0
#define CSR_SEQUENCEREG0B95S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B96S0 */
#define CSR_SEQUENCEREG0B96S0_LSB                       0
#define CSR_SEQUENCEREG0B96S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B96S1 */
#define CSR_SEQUENCEREG0B96S1_LSB                       0
#define CSR_SEQUENCEREG0B96S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B96S2 */
#define CSR_SEQUENCEREG0B96S2_LSB                       0
#define CSR_SEQUENCEREG0B96S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B97S0 */
#define CSR_SEQUENCEREG0B97S0_LSB                       0
#define CSR_SEQUENCEREG0B97S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B97S1 */
#define CSR_SEQUENCEREG0B97S1_LSB                       0
#define CSR_SEQUENCEREG0B97S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B97S2 */
#define CSR_SEQUENCEREG0B97S2_LSB                       0
#define CSR_SEQUENCEREG0B97S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B98S0 */
#define CSR_SEQUENCEREG0B98S0_LSB                       0
#define CSR_SEQUENCEREG0B98S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B98S1 */
#define CSR_SEQUENCEREG0B98S1_LSB                       0
#define CSR_SEQUENCEREG0B98S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B98S2 */
#define CSR_SEQUENCEREG0B98S2_LSB                       0
#define CSR_SEQUENCEREG0B98S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B99S0 */
#define CSR_SEQUENCEREG0B99S0_LSB                       0
#define CSR_SEQUENCEREG0B99S0_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B99S1 */
#define CSR_SEQUENCEREG0B99S1_LSB                       0
#define CSR_SEQUENCEREG0B99S1_MASK                      GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B99S2 */
#define CSR_SEQUENCEREG0B99S2_LSB                       0
#define CSR_SEQUENCEREG0B99S2_MASK                      GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B100S0 */
#define CSR_SEQUENCEREG0B100S0_LSB                      0
#define CSR_SEQUENCEREG0B100S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B100S1 */
#define CSR_SEQUENCEREG0B100S1_LSB                      0
#define CSR_SEQUENCEREG0B100S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B100S2 */
#define CSR_SEQUENCEREG0B100S2_LSB                      0
#define CSR_SEQUENCEREG0B100S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B101S0 */
#define CSR_SEQUENCEREG0B101S0_LSB                      0
#define CSR_SEQUENCEREG0B101S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B101S1 */
#define CSR_SEQUENCEREG0B101S1_LSB                      0
#define CSR_SEQUENCEREG0B101S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B101S2 */
#define CSR_SEQUENCEREG0B101S2_LSB                      0
#define CSR_SEQUENCEREG0B101S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B102S0 */
#define CSR_SEQUENCEREG0B102S0_LSB                      0
#define CSR_SEQUENCEREG0B102S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B102S1 */
#define CSR_SEQUENCEREG0B102S1_LSB                      0
#define CSR_SEQUENCEREG0B102S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B102S2 */
#define CSR_SEQUENCEREG0B102S2_LSB                      0
#define CSR_SEQUENCEREG0B102S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B103S0 */
#define CSR_SEQUENCEREG0B103S0_LSB                      0
#define CSR_SEQUENCEREG0B103S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B103S1 */
#define CSR_SEQUENCEREG0B103S1_LSB                      0
#define CSR_SEQUENCEREG0B103S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B103S2 */
#define CSR_SEQUENCEREG0B103S2_LSB                      0
#define CSR_SEQUENCEREG0B103S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B104S0 */
#define CSR_SEQUENCEREG0B104S0_LSB                      0
#define CSR_SEQUENCEREG0B104S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B104S1 */
#define CSR_SEQUENCEREG0B104S1_LSB                      0
#define CSR_SEQUENCEREG0B104S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B104S2 */
#define CSR_SEQUENCEREG0B104S2_LSB                      0
#define CSR_SEQUENCEREG0B104S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B105S0 */
#define CSR_SEQUENCEREG0B105S0_LSB                      0
#define CSR_SEQUENCEREG0B105S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B105S1 */
#define CSR_SEQUENCEREG0B105S1_LSB                      0
#define CSR_SEQUENCEREG0B105S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B105S2 */
#define CSR_SEQUENCEREG0B105S2_LSB                      0
#define CSR_SEQUENCEREG0B105S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B106S0 */
#define CSR_SEQUENCEREG0B106S0_LSB                      0
#define CSR_SEQUENCEREG0B106S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B106S1 */
#define CSR_SEQUENCEREG0B106S1_LSB                      0
#define CSR_SEQUENCEREG0B106S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B106S2 */
#define CSR_SEQUENCEREG0B106S2_LSB                      0
#define CSR_SEQUENCEREG0B106S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B107S0 */
#define CSR_SEQUENCEREG0B107S0_LSB                      0
#define CSR_SEQUENCEREG0B107S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B107S1 */
#define CSR_SEQUENCEREG0B107S1_LSB                      0
#define CSR_SEQUENCEREG0B107S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B107S2 */
#define CSR_SEQUENCEREG0B107S2_LSB                      0
#define CSR_SEQUENCEREG0B107S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B108S0 */
#define CSR_SEQUENCEREG0B108S0_LSB                      0
#define CSR_SEQUENCEREG0B108S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B108S1 */
#define CSR_SEQUENCEREG0B108S1_LSB                      0
#define CSR_SEQUENCEREG0B108S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B108S2 */
#define CSR_SEQUENCEREG0B108S2_LSB                      0
#define CSR_SEQUENCEREG0B108S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B109S0 */
#define CSR_SEQUENCEREG0B109S0_LSB                      0
#define CSR_SEQUENCEREG0B109S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B109S1 */
#define CSR_SEQUENCEREG0B109S1_LSB                      0
#define CSR_SEQUENCEREG0B109S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B109S2 */
#define CSR_SEQUENCEREG0B109S2_LSB                      0
#define CSR_SEQUENCEREG0B109S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B110S0 */
#define CSR_SEQUENCEREG0B110S0_LSB                      0
#define CSR_SEQUENCEREG0B110S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B110S1 */
#define CSR_SEQUENCEREG0B110S1_LSB                      0
#define CSR_SEQUENCEREG0B110S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B110S2 */
#define CSR_SEQUENCEREG0B110S2_LSB                      0
#define CSR_SEQUENCEREG0B110S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B111S0 */
#define CSR_SEQUENCEREG0B111S0_LSB                      0
#define CSR_SEQUENCEREG0B111S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B111S1 */
#define CSR_SEQUENCEREG0B111S1_LSB                      0
#define CSR_SEQUENCEREG0B111S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B111S2 */
#define CSR_SEQUENCEREG0B111S2_LSB                      0
#define CSR_SEQUENCEREG0B111S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B112S0 */
#define CSR_SEQUENCEREG0B112S0_LSB                      0
#define CSR_SEQUENCEREG0B112S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B112S1 */
#define CSR_SEQUENCEREG0B112S1_LSB                      0
#define CSR_SEQUENCEREG0B112S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B112S2 */
#define CSR_SEQUENCEREG0B112S2_LSB                      0
#define CSR_SEQUENCEREG0B112S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B113S0 */
#define CSR_SEQUENCEREG0B113S0_LSB                      0
#define CSR_SEQUENCEREG0B113S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B113S1 */
#define CSR_SEQUENCEREG0B113S1_LSB                      0
#define CSR_SEQUENCEREG0B113S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B113S2 */
#define CSR_SEQUENCEREG0B113S2_LSB                      0
#define CSR_SEQUENCEREG0B113S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B114S0 */
#define CSR_SEQUENCEREG0B114S0_LSB                      0
#define CSR_SEQUENCEREG0B114S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B114S1 */
#define CSR_SEQUENCEREG0B114S1_LSB                      0
#define CSR_SEQUENCEREG0B114S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B114S2 */
#define CSR_SEQUENCEREG0B114S2_LSB                      0
#define CSR_SEQUENCEREG0B114S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B115S0 */
#define CSR_SEQUENCEREG0B115S0_LSB                      0
#define CSR_SEQUENCEREG0B115S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B115S1 */
#define CSR_SEQUENCEREG0B115S1_LSB                      0
#define CSR_SEQUENCEREG0B115S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B115S2 */
#define CSR_SEQUENCEREG0B115S2_LSB                      0
#define CSR_SEQUENCEREG0B115S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B116S0 */
#define CSR_SEQUENCEREG0B116S0_LSB                      0
#define CSR_SEQUENCEREG0B116S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B116S1 */
#define CSR_SEQUENCEREG0B116S1_LSB                      0
#define CSR_SEQUENCEREG0B116S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B116S2 */
#define CSR_SEQUENCEREG0B116S2_LSB                      0
#define CSR_SEQUENCEREG0B116S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B117S0 */
#define CSR_SEQUENCEREG0B117S0_LSB                      0
#define CSR_SEQUENCEREG0B117S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B117S1 */
#define CSR_SEQUENCEREG0B117S1_LSB                      0
#define CSR_SEQUENCEREG0B117S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B117S2 */
#define CSR_SEQUENCEREG0B117S2_LSB                      0
#define CSR_SEQUENCEREG0B117S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B118S0 */
#define CSR_SEQUENCEREG0B118S0_LSB                      0
#define CSR_SEQUENCEREG0B118S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B118S1 */
#define CSR_SEQUENCEREG0B118S1_LSB                      0
#define CSR_SEQUENCEREG0B118S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B118S2 */
#define CSR_SEQUENCEREG0B118S2_LSB                      0
#define CSR_SEQUENCEREG0B118S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B119S0 */
#define CSR_SEQUENCEREG0B119S0_LSB                      0
#define CSR_SEQUENCEREG0B119S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B119S1 */
#define CSR_SEQUENCEREG0B119S1_LSB                      0
#define CSR_SEQUENCEREG0B119S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B119S2 */
#define CSR_SEQUENCEREG0B119S2_LSB                      0
#define CSR_SEQUENCEREG0B119S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B120S0 */
#define CSR_SEQUENCEREG0B120S0_LSB                      0
#define CSR_SEQUENCEREG0B120S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B120S1 */
#define CSR_SEQUENCEREG0B120S1_LSB                      0
#define CSR_SEQUENCEREG0B120S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B120S2 */
#define CSR_SEQUENCEREG0B120S2_LSB                      0
#define CSR_SEQUENCEREG0B120S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQUENCEREG0B121S0 */
#define CSR_SEQUENCEREG0B121S0_LSB                      0
#define CSR_SEQUENCEREG0B121S0_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B121S1 */
#define CSR_SEQUENCEREG0B121S1_LSB                      0
#define CSR_SEQUENCEREG0B121S1_MASK                     GENMASK_32(15, 0)
/* CSR_SEQUENCEREG0B121S2 */
#define CSR_SEQUENCEREG0B121S2_LSB                      0
#define CSR_SEQUENCEREG0B121S2_MASK                     GENMASK_32(8, 0)
/* CSR_SEQ0BGPR1 */
#define CSR_SEQ0BGPR1_LSB                               0
#define CSR_SEQ0BGPR1_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR2 */
#define CSR_SEQ0BGPR2_LSB                               0
#define CSR_SEQ0BGPR2_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR3 */
#define CSR_SEQ0BGPR3_LSB                               0
#define CSR_SEQ0BGPR3_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR4 */
#define CSR_SEQ0BGPR4_LSB                               0
#define CSR_SEQ0BGPR4_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR5 */
#define CSR_SEQ0BGPR5_LSB                               0
#define CSR_SEQ0BGPR5_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR6 */
#define CSR_SEQ0BGPR6_LSB                               0
#define CSR_SEQ0BGPR6_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR7 */
#define CSR_SEQ0BGPR7_LSB                               0
#define CSR_SEQ0BGPR7_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BGPR8 */
#define CSR_SEQ0BGPR8_LSB                               0
#define CSR_SEQ0BGPR8_MASK                              GENMASK_32(15, 0)
/* CSR_SEQ0BFIXEDADDRBITS */
#define CSR_SEQ0BFIXEDADDRBITS_LSB                      0
#define CSR_SEQ0BFIXEDADDRBITS_MASK                     GENMASK_32(6, 0)
#define CSR_SEQ0BCHIPLETBITS_LSB                        0
#define CSR_SEQ0BCHIPLETBITS_MASK                       GENMASK_32(3, 0)
#define CSR_SEQ0BPSTATEBITS_LSB                         4
#define CSR_SEQ0BPSTATEBITS_MASK                        GENMASK_32(6, 4)

/* DRTUB0 register offsets */
/* CSR_DCTSHADOWREGS */
#define CSR_DCTSHADOWREGS_LSB                           0
#define CSR_DCTSHADOWREGS_MASK                          BIT(0)
#define CSR_DCTWRITEPROTSHADOW_LSB                      0
#define CSR_DCTWRITEPROTSHADOW_MASK                     BIT(0)
/* CSR_DCTWRITEONLYSHADOW */
#define CSR_DCTWRITEONLYSHADOW_LSB                      0
#define CSR_DCTWRITEONLYSHADOW_MASK                     GENMASK_32(15, 0)
/* CSR_UCTWRITEONLY */
#define CSR_UCTWRITEONLY_LSB                            0
#define CSR_UCTWRITEONLY_MASK                           GENMASK_32(15, 0)
/* CSR_UCTWRITEPROT */
#define CSR_UCTWRITEPROT_LSB                            0
#define CSR_UCTWRITEPROT_MASK                           BIT(0)
/* CSR_UCTDATWRITEONLY */
#define CSR_UCTDATWRITEONLY_LSB                         0
#define CSR_UCTDATWRITEONLY_MASK                        GENMASK_32(15, 0)
/* CSR_UCTDATWRITEPROT */
#define CSR_UCTDATWRITEPROT_LSB                         0
#define CSR_UCTDATWRITEPROT_MASK                        BIT(0)
/* CSR_UCTLERR */
#define CSR_UCTLERR_LSB                                 0
#define CSR_UCTLERR_MASK                                BIT(0)
/* CSR_UCCLKHCLKENABLES */
#define CSR_UCCLKHCLKENABLES_LSB                        0
#define CSR_UCCLKHCLKENABLES_MASK                       GENMASK_32(1, 0)
#define CSR_UCCLKEN_LSB                                 0
#define CSR_UCCLKEN_MASK                                BIT(0)
#define CSR_HCLKEN_LSB                                  1
#define CSR_HCLKEN_MASK                                 BIT(1)
/* CSR_CURPSTATE0B */
#define CSR_CURPSTATE0B_LSB                             0
#define CSR_CURPSTATE0B_MASK                            GENMASK_32(3, 0)
/* CSR_CLRWAKEUPSTICKY */
#define CSR_CLRWAKEUPSTICKY_LSB                         0
#define CSR_CLRWAKEUPSTICKY_MASK                        GENMASK_32(3, 0)
/* CSR_WAKEUPMASK */
#define CSR_WAKEUPMASK_LSB                              0
#define CSR_WAKEUPMASK_MASK                             GENMASK_32(3, 0)
/* CSR_CUSTPUBREV */
#define CSR_CUSTPUBREV_LSB                              0
#define CSR_CUSTPUBREV_MASK                             GENMASK_32(5, 0)
/* CSR_PUBREV */
#define CSR_PUBREV_LSB                                  0
#define CSR_PUBREV_MASK                                 GENMASK_32(15, 0)
#define CSR_RESERVEDPUBREV_LSB                          0
#define CSR_RESERVEDPUBREV_MASK                         GENMASK_32(3, 0)
#define CSR_PUBMNR_LSB                                  4
#define CSR_PUBMNR_MASK                                 GENMASK_32(7, 4)
#define CSR_PUBMDR_LSB                                  8
#define CSR_PUBMDR_MASK                                 GENMASK_32(11, 8)
#define CSR_PUBMJR_LSB                                  12
#define CSR_PUBMJR_MASK                                 GENMASK_32(15, 12)

/* APBONLY0 register offsets */
/* CSR_MICROCONTMUXSEL */
#define CSR_MICROCONTMUXSEL_LSB                         0
#define CSR_MICROCONTMUXSEL_MASK                        BIT(0)
/* CSR_UCTSHADOWREGS */
#define CSR_UCTSHADOWREGS_LSB                           0
#define CSR_UCTSHADOWREGS_MASK                          GENMASK_32(1, 0)
#define CSR_UCTWRITEPROTSHADOW_LSB                      0
#define CSR_UCTWRITEPROTSHADOW_MASK                     BIT(0)
#define CSR_UCTDATWRITEPROTSHADOW_LSB                   1
#define CSR_UCTDATWRITEPROTSHADOW_MASK                  BIT(1)
/* CSR_DCTWRITEONLY */
#define CSR_DCTWRITEONLY_LSB                            0
#define CSR_DCTWRITEONLY_MASK                           GENMASK_32(15, 0)
/* CSR_DCTWRITEPROT */
#define CSR_DCTWRITEPROT_LSB                            0
#define CSR_DCTWRITEPROT_MASK                           BIT(0)
/* CSR_UCTWRITEONLYSHADOW */
#define CSR_UCTWRITEONLYSHADOW_LSB                      0
#define CSR_UCTWRITEONLYSHADOW_MASK                     GENMASK_32(15, 0)
/* CSR_UCTDATWRITEONLYSHADOW */
#define CSR_UCTDATWRITEONLYSHADOW_LSB                   0
#define CSR_UCTDATWRITEONLYSHADOW_MASK                  GENMASK_32(15, 0)
/* CSR_NEVERGATECSRCLOCK */
#define CSR_NEVERGATECSRCLOCK_LSB                       0
#define CSR_NEVERGATECSRCLOCK_MASK                      BIT(0)
/* CSR_DFICFGRDDATAVALIDTICKS */
#define CSR_DFICFGRDDATAVALIDTICKS_LSB                  0
#define CSR_DFICFGRDDATAVALIDTICKS_MASK                 GENMASK_32(5, 0)
/* CSR_MICRORESET */
#define CSR_MICRORESET_LSB                              0
#define CSR_MICRORESET_MASK                             GENMASK_32(3, 0)
#define CSR_STALLTOMICRO_LSB                            0
#define CSR_STALLTOMICRO_MASK                           BIT(0)
#define CSR_TESTWAKEUP_LSB                              1
#define CSR_TESTWAKEUP_MASK                             BIT(1)
#define CSR_RSVDMICRO_LSB                               2
#define CSR_RSVDMICRO_MASK                              BIT(2)
#define CSR_RESETTOMICRO_LSB                            3
#define CSR_RESETTOMICRO_MASK                           BIT(3)
/* CSR_SEQUENCEROVERRIDE */
#define CSR_SEQUENCEROVERRIDE_LSB                       0
#define CSR_SEQUENCEROVERRIDE_MASK                      GENMASK_32(10, 0)
#define CSR_FORCESEQ0BDFIFREQ_LSB                       0
#define CSR_FORCESEQ0BDFIFREQ_MASK                      GENMASK_32(4, 0)
#define CSR_FORCESEQ0BSTART_LSB                         5
#define CSR_FORCESEQ0BSTART_MASK                        BIT(5)
#define CSR_FORCESEQ0BSTOP_LSB                          6
#define CSR_FORCESEQ0BSTOP_MASK                         BIT(6)
#define CSR_BLOCKSEQ0BREQUESTS_LSB                      7
#define CSR_BLOCKSEQ0BREQUESTS_MASK                     BIT(7)
#define CSR_BLOCKSEQ0BACK_LSB                           8
#define CSR_BLOCKSEQ0BACK_MASK                          BIT(8)
#define CSR_DISABLETERMINATEFLAG_LSB                    9
#define CSR_DISABLETERMINATEFLAG_MASK                   BIT(9)
#define CSR_SELECTDFIFREQTOGPRMUX_LSB                   10
#define CSR_SELECTDFIFREQTOGPRMUX_MASK                  BIT(10)
/* CSR_DFIINITCOMPLETESHADOW */
#define CSR_DFIINITCOMPLETESHADOW_LSB                   0
#define CSR_DFIINITCOMPLETESHADOW_MASK                  BIT(0)


/* Fields brought to you by the letter B */
#define BB_MIN                                          0
#define BB_MAX                                          15
#define BB0                                             0x0U
#define BB1                                             0x1000U
#define BB2                                             0x2000U
#define BB3                                             0x3000U
#define BB4                                             0x4000U
#define BB5                                             0x5000U
#define BB6                                             0x6000U
#define BB7                                             0x7000U
#define BB8                                             0x8000U
#define BB9                                             0x9000U
#define BB10                                            0xA000U
#define BB11                                            0xB000U
#define BB12                                            0xC000U
#define BB13                                            0xD000U
#define BB14                                            0xE000U
#define BB15                                            0xF000U
#define BBBRD                                           0xF000U
/* Fields brought to you by the letter D */
#define D_MIN                                           0
#define D_MAX                                           3
#define D0                                              0x0U
#define D1                                              0x100U
#define D2                                              0x200U
#define D3                                              0x300U
#define DBRD                                            0xF00U
/* Fields brought to you by the letter L */
#define L_MIN                                           0
#define L_MAX                                           13
#define L0                                              0x0U
#define L1                                              0x100U
#define L2                                              0x200U
#define L3                                              0x300U
#define L4                                              0x400U
#define L5                                              0x500U
#define L6                                              0x600U
#define L7                                              0x700U
#define L8                                              0x800U
#define L9                                              0x900U
#define L10                                             0xA00U
#define L11                                             0xB00U
#define L12                                             0xC00U
#define L13                                             0xD00U
#define LBRD                                            0xF00U
/* Fields brought to you by the letter N */
#define N_MIN                                           0
#define N_MAX                                           15
#define N0                                              0x0U
#define N1                                              0x100U
#define N2                                              0x200U
#define N3                                              0x300U
#define N4                                              0x400U
#define N5                                              0x500U
#define N6                                              0x600U
#define N7                                              0x700U
#define N8                                              0x800U
#define N9                                              0x900U
#define N10                                             0xA00U
#define N11                                             0xB00U
#define N12                                             0xC00U
#define N13                                             0xD00U
#define N14                                             0xE00U
#define N15                                             0xF00U
#define NBRD                                            0xF00U
/* Fields brought to you by the letter P */
#define PP_MIN                                          0
#define PP_MAX                                          3
#define PP0                                             0x0U
#define PP1                                             0x100000U
#define PP2                                             0x200000U
#define PP3                                             0x300000U
#define PPBRD                                           0x700000U
/* Fields brought to you by the letter Q */
#define Q_MIN                                           0
#define Q_MAX                                           3
#define Q0                                              0x0U
#define Q1                                              0x100000U
#define Q2                                              0x200000U
#define Q3                                              0x300000U
#define QBRD                                            0x700000U
/* Fields brought to you by the letter Y */
#define Y_MIN                                           0
#define Y_MAX                                           0
#define Y0                                              0x0U
#define YBRD                                            0xF000000U
/* Fields brought to you by the letter b */
#define B_MIN                                           0
#define B_MAX                                           1
#define B0                                              0x0U
#define B1                                              0x100U
#define BBRD                                            0xF00U
/* Fields brought to you by the letter c */
#define C_MIN                                           0
#define C_MAX                                           15
#define C0                                              0x0U
#define C1                                              0x1000U
#define C2                                              0x2000U
#define C3                                              0x3000U
#define C4                                              0x4000U
#define C5                                              0x5000U
#define C6                                              0x6000U
#define C7                                              0x7000U
#define C8                                              0x8000U
#define C9                                              0x9000U
#define C10                                             0xA000U
#define C11                                             0xB000U
#define C12                                             0xC000U
#define C13                                             0xD000U
#define C14                                             0xE000U
#define C15                                             0xF000U
#define CBRD                                            0xF000U
/* Fields brought to you by the letter i */
#define I_MIN                                           0
#define I_MAX                                           8
#define I0                                              0x0U
#define I1                                              0x100U
#define I2                                              0x200U
#define I3                                              0x300U
#define I4                                              0x400U
#define I5                                              0x500U
#define I6                                              0x600U
#define I7                                              0x700U
#define I8                                              0x800U
#define IBRD                                            0xF00U
/* Fields brought to you by the letter j */
#define J_MIN                                           0
#define J_MAX                                           0
#define J0                                              0x0U
#define JBRD                                            0xF00U
/* Fields brought to you by the letter m */
#define M_MIN                                           0
#define M_MAX                                           8
#define M0                                              0x0U
#define M1                                              0x100U
#define M2                                              0x200U
#define M3                                              0x300U
#define M4                                              0x400U
#define M5                                              0x500U
#define M6                                              0x600U
#define M7                                              0x700U
#define M8                                              0x800U
#define MBRD                                            0xF00U
/* Fields brought to you by the letter p */
#define P_MIN                                           0
#define P_MAX                                           3
#define P0                                              0x0U
#define P1                                              0x100000U
#define P2                                              0x200000U
#define P3                                              0x300000U
#define PBRD                                            0x700000U
/* Fields brought to you by the letter r */
#define R_MIN                                           0
#define R_MAX                                           8
#define R0                                              0x0U
#define R1                                              0x100U
#define R2                                              0x200U
#define R3                                              0x300U
#define R4                                              0x400U
#define R5                                              0x500U
#define R6                                              0x600U
#define R7                                              0x700U
#define R8                                              0x800U
#define RBRD                                            0xF00U
/* Fields brought to you by the letter t */
#define T_MIN                                           0
#define T_MAX                                           15
#define T0                                              0x0U
#define T1                                              0x10000U
#define T2                                              0x20000U
#define T3                                              0x30000U
#define T4                                              0x40000U
#define T5                                              0x50000U
#define T6                                              0x60000U
#define T7                                              0x70000U
#define T8                                              0x80000U
#define T9                                              0x90000U
#define T10                                             0xA0000U
#define T11                                             0xB0000U
#define T12                                             0xC0000U
#define T13                                             0xD0000U
#define T14                                             0xE0000U
#define T15                                             0xF0000U
#define TBRD                                            0xF0000U
/* Fields brought to you by the letter u */
#define U_MIN                                           0
#define U_MAX                                           1
#define U0                                              0x0U
#define U1                                              0x100U
#define UBRD                                            0xF00U

#define TACSM                                           0x40000U
#define TACSMBRD                                        0x4F000U
#define TALL                                            0xF0000U
#define TALLBRD                                         0xFF000U
#define TANIB                                           0x0U
#define TANIBBRD                                        0xF000U
#define TAPBONLY                                        0xD0000U
#define TAPBONLYBRD                                     0xDF000U
#define TDBYTE                                          0x10000U
#define TDBYTEBRD                                       0x1F000U
#define TDRTUB                                          0xC0000U
#define TDRTUBBRD                                       0xCF000U
#define TINITENG                                        0x90000U
#define TINITENGBRD                                     0x9F000U
#define TMASTER                                         0x20000U
#define TMASTERBRD                                      0x2F000U
#define TPPGC                                           0x70000U
#define TPPGCBRD                                        0x7F000U
#define TUCTL_MEM                                       0x50000U
#define TUCTL_MEMBRD                                    0x5F000U

#define DBYTE_NUM                                       9
#define ANIB_NUM                                        12

#endif /* DDRPHY_PHYINIT_CSR_ALL_DEFINES_H */
