#include "rom.h"

ROMINFO g_PicRom[] =
{
    {g_PicRom_Login,                    g_LoginRomLen                   },  //picture  id 00
    {g_PicRom_Main,                     g_MainRomLen                    },  //........... 01
    {g_PicRom_NetState,                 g_NetStateRomLen                },  //........... 02
    {g_PicRom_TcuState,                 g_TcuStateRomLen                },  //........... 03
    {g_PicRom_AcuStatePage,             g_AcuStatePageRomLen            },  //........... 04
    {g_PicRom_BcuStatePage,             g_BcuStatePageRomLen            },  //........... 05
    {g_PicRom_DcdcStatePage,            g_DcdcStatePageRomLen           },  //........... 06
    {g_PicRom_Pis,                      g_PisRomLen                     },  //........... 07
    {g_PicRom_StartStationSet,           g_StartStationSetRomLen         },  //........... 08
    {g_PicRom_EndStationSet,            g_EndStationSetRomLen           },  //........... 09
    //{g_PicRom_CurrentStationSet,         g_CurrentStationSetRomLen       },  //........... 10
    {g_PicRom_HvacStatePage,            g_HvacStatePageRomLen           },  //........... 11
    {g_PicRom_HvacParameterSet,         g_HvacParameterSetRomLen        },  //........... 12
    {g_PicRom_HvacTest,                 g_HvacTestRomLen                },  //........... 13
    {g_PicRom_ParameterSet,             g_ParameterSetRomLen            },  //........... 14
    {g_PicRom_SysTimeSet,               g_SysTimeSetRomLen              },  //........... 15
    {g_PicRom_CarCodeSet,               g_CarCodeSetRomLen              },  //........... 16
    {g_PicRom_WheelDiameterSet,         g_WheelDiameterSetRomLen        },  //........... 17
    {g_PicRom_LuminanceSet,             g_LuminanceSetRomLen            },  //........... 18
    {g_PicRom_DriverCodeManage,         g_DriverCodeManageRomLen        },  //........... 19
    {g_PicRom_DriverCodeList,           g_DriverCodeListRomLen          },  //........... 20
    {g_PicRom_MaintainerManage,         g_MaintainerManageRomLen        },  //........... 21
    {g_PicRom_MaintainerIDList,         g_MaintainerIDListRomLen        },  //........... 22
    {g_PicRom_ModifyAccumulateMileage,  g_ModifyAccumulateMileageRomLen },  //........... 23
    {g_PicRom_InstructionTest,          g_InstructionTestRomLen         },  //........... 24
    {g_PicRom_CurrentFaultList,          g_CurrentFaultListRomLen        },  //........... 25
    {g_PicRom_HistoryFaultList,          g_HistoryFaultListRomLen        },  //........... 26
    {g_PicRom_DeviceSelect,             g_DeviceSelectRomLen            },  //........... 27
    {g_PicRom_GradeSelect,              g_GradeSelectRomLen             },  //........... 28
    {g_PicRom_StartTimeSet,             g_StartTimeSetRomLen            },  //........... 29
    {g_PicRom_EndTimeSet,               g_EndTimeSetRomLen              },  //........... 30
    {g_PicRom_Door,                     g_DoorRomLen                    },  //........... 31
    {g_PicRom_FaultAlarm,               g_FaultAlarmRomLen              },  //........... 32
    {g_PicRom_SerialData,               g_SerialDataLen                 },  //........... 33
    {g_PicRom_Version,                  g_VersionRomLen                 },  //........... 34
    {g_PicRom_LocalIO,                  g_LocalIORomLen                 },  //........... 35
    {g_PicRom_MainControlCmd,           g_PicRom_MainControlCmdLen      },   //........... 36
    {g_PicRom_NetStateCoupled,          g_NetStateCoupledRomLen         }, //..............37
    {g_PicRom_AcuStatePageCoupled,      g_AcuStatePageCoupledRomLen     },//..............38
    {g_PicRom_TcuStatePageCoupled,      g_TcuStatePageCoupledRomLen     },//..............39
    {g_PicRom_BcuStatePageCoupled,      g_BcuStatePageCoupledRomLen     },//..............40
    {g_PicRom_HvacStatePageCoupled,     g_HvacStatePageCoupledRomLen     },//..............41
    {g_PicRom_MyStatePage,                   g_MyStatePageRomLen     },//..............42
    {g_PicRom_UdpDataPage1,                   g_UdpDataPage1RomLen},//..............42
    {g_PicRom_RefreshTime,              g_RefreshTimeRomLen},//..............43
    {g_PicRom_DcdcStatePageCoupled,            g_DcdcStatePageCoupledRomLen           },  //........... 44
    {g_PicRom_DebugRiomDetialPage,            g_DebugRiomDetialPageRomLen           },  //........... 45
    {g_PicRom_PasswordSetPage,                  g_PasswordSetPageRomLen},
} ;
int g_nTotalRomNum = sizeof(g_PicRom)/sizeof(ROMINFO);
