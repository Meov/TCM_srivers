#ifndef __TCM_COMMAND_H
#define __TCM_COMMAND_H
#include "../tcm_driver/tcm_interface.h"

#define PCRREAD_CMD_LENTH 14
u8 tcm_startup[12]  ={0x00,0xC1,0x00,0x00,0x00,0x0C,0x00,0x00,0x80,0x99,0x00,0x01};
u8 tcm_pcrreset[14] ={0x00,0xC1,0x00,0x00,0x00,0x0E,0x00,0x00,0x80,0xC8,0x00,0x02,0xA8,0x00};

u8 tcm_pcrextend[46]={  0x00,0xC1,0x00,0x00,0x00,0x2E,0x00,0x00,0x80,0x14,0x00,0x00,0x00,0x01,
                        0x12,0x43,0x56,0x84,0x78,0x91,0x27,0x94,0x77,0x59,0x88,0xAB,0xCD,0xEB,
                        0xAC,0xDB,0xAC,0xEB,0xAD,0xE1,0x23,0xA7,0x89,0xB9,0x81,0xB4,0x1C,0xD3,
                        0xE1,0x82,0xAD,0xC1};

u8 tcm_pcr0read[14] ={  0x00,0xC1,0x00,0x00,0x00,0x0E,0x00,0x00,0x80 ,0x15,0x00,0x00,0x00,0x01};
u8 tcm_pcrread[14]  ={  0x00,0xC1,0x00,0x00,0x00,0x0E,0x00,0x00,0x80,0x15,0x00,0x00,0x00,0x01};
u8 tcm_self_test_full[10]  ={0x00,0xC1,0x00,0x00,0x00,0x0a,0x00,0x00,0x80,0x50};
u8 tcm_get_test_result[10] ={0x00,0xC1,0x00,0x00,0x00,0x0a,0x00,0x00,0x80,0x54};


#endif
