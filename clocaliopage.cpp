#include "clocaliopage.h"
#include "QDebug"
LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM1[] =
{
/*   Connector                Signal                          LineNo      Byte   Bit  */
    {"SGN-1-X1-S(IN1)",       QSTR("死人按钮"),                "*****",      6,     0},
    {"SGN-1-X1-M(IN2)",       QSTR("司机钥匙"),                "*****",      6,     1},
    {"SGN-1-X1-P(IN3)",       QSTR("门旁路开关"),              "*****",      6,     2},
    {"SGN-1-X1-K(IN4)",       QSTR("制动缓解（MC）"),            "*****",     6,     3},
    {"SGN-1-X1-H(IN5)",       QSTR("安全制动"),                "*****",      6,     4},
    {"SGN-1-X1-C(IN6)",       QSTR("磁轨制动（MC）"),            "*****",    6,     5},
    {"SGN-1-X1-E(IN7)",       QSTR("制动手动缓解(MC)"),       "*****",       6,     6},
    {"SGN-1-X1-A(IN8)",       QSTR("警惕旁路信号"),            "*****",      6,     7},
    {"SGN-1-X1-N(IN9)",       QSTR("门全关闭"),                "*****",      7,     0},
    {"SGN-1-X1-J(IN10)",      QSTR("蓄电池接触器"),            "*****",      7,     1},
    {"SGN-1-X1-D(IN11)",      QSTR("制动缓解旁路"),            "*****",      7,     2},
    {"SGN-1-X1-T(IN12)",      QSTR("交流输出接触器"),          "*****",       7,     3},
    {"SGN-1-X1-BB(IN13)",     QSTR("拖车磁轨制动（Tp）"),        "*****",     7,     4},
    {"SGN-1-X1-LL(IN14)",     QSTR("拖车制动缓解（Tp）"),         "*****",    7,     5},
    {"SGN-1-X1-FF(IN15)",     QSTR("备用"),                    "*****",      7,     6},
    {"SGN-1-X1-X(IN16)",      QSTR("备用"),                    "*****",      7,     7},
    {"SGN-1-X1-MM(IN17)",     QSTR("备用"),                    "*****",      8,     0},
    {"SGN-1-X1-HH(IN18)",     QSTR("备用"),                    "*****",      8,     1},
    {"SGN-1-X1-KK(IN19)",     QSTR("备用"),                    "*****",      8,     2},
    {"SGN-1-X1-EE(IN20)",     QSTR("备用"),                    "*****",      8,     3},
//    {"",                    QSTR("备用"),                    "*****",      2,     4},
//    {"",                    QSTR("备用"),                    "*****",      2,     5},
//    {"",                    QSTR("备用"),                    "*****",      2,     6},
//    {"",                    QSTR("备用"),                    "*****",      2,     7},
//    {"",                    QSTR("备用"),                    "*****",      3,     0},
//    {"",                    QSTR("备用"),                    "*****",      3,     1},
//    {"",                    QSTR("备用"),                    "*****",      3,     2},
//    {"",                    QSTR("备用"),                    "*****",      3,     3},
//    {"",                    QSTR("备用"),                    "*****",      3,     4},
//    {"",                    QSTR("备用"),                    "*****",      3,     5},
//    {"",                    QSTR("备用"),                    "*****",      3,     6},
//    {"",                    QSTR("备用"),                    "*****",      3,     7}
};
int g_LocalIoRomMC1_RIOM1Len = sizeof(g_LocalIoRom_MC1_RIOM1)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM2[] =
{
/*   Connector                 Signal                          LineNo      Byte   Bit  */
    {"DI-1-X1-S(IN1)",        QSTR("牵引状态"),                "*****",      0,     0},
    {"DI-1-X1-M(IN2)",        QSTR("制动状态"),                "*****",      0,     1},
    {"DI-1-X1-P(IN3)",        QSTR("紧急制动状态"),             "*****",      0,     2},
    {"DI-1-X1-K(IN4)",        QSTR("方向指令F"),                "*****",      0,     3},
    {"DI-1-X1-H(IN5)",        QSTR("方向指令B"),                "*****",      0,     4},
    {"DI-1-X1-C(IN6)",        QSTR("制动编码1"),                "*****",      0,     5},
    {"DI-1-X1-E(IN7)",        QSTR("制动编码2"),                "*****",      0,     6},
    {"DI-1-X1-A(IN8)",        QSTR("制动编码3"),                "*****",      0,     7},
    {"DI-1-X1-N(IN9)",        QSTR("牵引编码1"),                "*****",      1,     0},
    {"DI-1-X1-J(IN10)",       QSTR("牵引编码2"),                "*****",      1,     1},
    {"DI-1-X1-D(IN11)",       QSTR("牵引编码3"),                "*****",      1,     2},
    {"DI-1-X1-T(IN12)",       QSTR("牵引编码4"),                "*****",      1,     3},
    {"DI-1-X1-BB(IN13)",      QSTR("撒沙指令"),                "*****",       1,     4},
    {"DI-1-X1-LL(IN14)",      QSTR("试灯按钮"),                "*****",       1,     5},
    {"DI-1-X1-FF(IN15)",      QSTR("牵引系统正常"),             "*****",      1,     6},
    {"DI-1-X1-X(IN16)",       QSTR("电制动1正常"),             "*****",       1,     7},
    {"DI-1-X1-MM(IN17)",      QSTR("电制动2正常"),             "*****",      2,     0},
    {"DI-1-X1-HH(IN18)",      QSTR("保持制动施加"),             "*****",     2,     1},
    {"DI-1-X1-KK(IN19)",      QSTR("车辆滑行指示"),             "*****",     2,     2},
    {"DI-1-X1-EE(IN20)",      QSTR("辅助逆变器正常"),           "*****",     2,     3},
    {"DI-1-X1-CC(IN21)",      QSTR("制动无故障（MC）"),         "*****",     2,     4},
    {"DI-1-X1-Y(IN22)",       QSTR("备用模式"),                   "*****",     2,     5},
    {"DI-1-X1-AA(IN23)",      QSTR("车辆联挂反馈信号"),          "*****",    2,     6},
    {"DI-1-X1-W(IN24)",       QSTR("备用"),                     "*****",     2,     7},
//    {"",                      QSTR("备用"),                     "*****",     11,     0},
//    {"",                      QSTR("备用"),                     "*****",     11,     1},
//    {"",                      QSTR("备用"),                     "*****",     11,     2},
//    {"",                      QSTR("备用"),                     "*****",     11,     3},
//    {"",                      QSTR("备用"),                     "*****",     11,     4},
//    {"",                      QSTR("备用"),                     "*****",     11,     5},
//    {"",                      QSTR("备用"),                     "*****",     11,     6},
//    {"",                      QSTR("备用"),                     "*****",     11,     7}
};
int g_LocalIoRomMC1_RIOM2Len = sizeof(g_LocalIoRom_MC1_RIOM2)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM3[] =
{
    /*   Connector                              Signal                          LineNo      Byte   Bit  */
    {"DI-2-X1-S(IN1)",                      QSTR("应急逆变器故障"),          "*****",      3,     0},
    {"DI-2-X1-M(IN2)",                      QSTR("应急逆变器空开状态"),       "*****",      3,     1},
    {"DI-2-X1-P(IN3)",                      QSTR("应急逆变器运行"),           "*****",     3,     2},
    {"DI-2-X1-K(IN4)",                      QSTR("头尾开关选择H"),            "*****",     3,     3},
    {"DI-2-X1-H(IN5)",                      QSTR("头尾开关选择R"),            "*****",     3,     4},
    {"DI-2-X1-C(IN6)",                      QSTR("救援开关选择 救援"),        "*****",      3,     5},
    {"DI-2-X1-E(IN7)",                      QSTR("ATC旁路"),                "*****",      3,     6},
    {"DI-2-X1-A(IN8)",                      QSTR("零速旁路"),                "*****",      3,     7},
    {"DI-2-X1-N(IN9)",                      QSTR("制动全部缓解"),             "*****",      4,     0},
    {"DI-2-X1-J(IN10)",                     QSTR("牵引冷却风机空开状态"),      "*****",      4,     1},
    {"DI-2-X1-D(IN11)",                     QSTR("升弓指令"),                "*****",      4,     2},
    {"DI-2-X1-T(IN12)",                     QSTR("降弓指令"),                "*****",      4,     3},
    {"DI-2-X1-BB(IN13)",                    QSTR("车门允许（左）"),           "*****",      4,     4},
    {"DI-2-X1-LL(IN14)",                    QSTR("车门允许（右）"),           "*****",      4,     5},
    {"DI-2-X1-FF(IN15)",                    QSTR("开门指令（左）"),           "*****",      4,     6},
    {"DI-2-X1-X(IN16)",                     QSTR("开门指令（右）"),           "*****",      4,     7},
    {"DI-2-X1-MM(IN17)",                    QSTR("关门指令"),                "*****",      5,     0},
    {"DI-2-X1-HH(IN18)",                    QSTR("牵引安全"),                "*****",      5,     1},
    {"DI-2-X1-KK(IN19)",                    QSTR("撒沙风泵状态"),             "*****",      5,     2},
    {"DI-2-X1-EE(IN20)",                    QSTR("制动大故障 （Tp）"),         "*****",     5,     3},
    {"DI-2-X1-CC(IN21)",                    QSTR("制动小故障 （Tp） "),        "*****",     5,     4},
    {"DI-2-X1-Y(IN22)",                     QSTR("拖车制动辅助缓解开关状态（Tp）"), "*****",   5,     5},
    {"DI-2-X1-AA(IN23)",                    QSTR("备用"),                     "*****",    5,     6},
    {"DI-2-X1-W(IN24)",                     QSTR("备用"),                     "*****",    5,     7},
//    {"",                      QSTR("备用"),                "*****",      15,     0},
//    {"",                      QSTR("备用"),                "*****",      15,     1},
//    {"",                      QSTR("备用"),                "*****",      15,     2},
//    {"",                      QSTR("备用"),                "*****",      15,     3},
//    {"",                      QSTR("备用"),                "*****",      15,     4},
//    {"",                      QSTR("备用"),                "*****",      15,     5},
//    {"",                      QSTR("备用"),                "*****",      15,     6},
//    {"",                      QSTR("备用"),                "*****",      15,     7}
};
int g_LocalIoRomMC1_RIOM3Len = sizeof(g_LocalIoRom_MC1_RIOM3)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM4[] =
{
    /*   Connector                              Signal                             LineNo      Byte   Bit  */
    {"DO-1-X1-H(OUT1)",                      QSTR("磁轨制动吸合指令"),          "*****",      13,     0},
    {"DO-1-X1-E(OUT2)",                      QSTR("3KM信号（零速信号）"),       "*****",      13,     1},
    {"DO-1-X1-J(OUT3)",                      QSTR("撒沙信号"),                  "*****",     13,     2},
    {"DO-1-X1-M(OUT4)",                      QSTR("停车制动（STEP2）"),         "*****",      13,     3},
    {"DO-1-X1-K(OUT5)",                      QSTR("保持制动（STEP3）"),         "*****",     13,     4},
    {"DO-1-X1-N(OUT6)",                      QSTR("替代制动（STEP1）"),         "*****",     13,     5},
    {"DO-1-X1-S(OUT7)",                      QSTR("Deadman事件"),               "*****",    13,     6},
    {"DO-1-X1-P(OUT8)",                      QSTR("蜂鸣器"),                    "*****",     13,     7},
    {"DO-1-X1-T(OUT9)",                      QSTR("受电弓状态灯"),               "*****",     14,     0},
    {"DO-1-X1-W(OUT10)",                     QSTR("正常照明"),                   "*****",    14,     1},
    {"DO-1-X1-U(OUT11)",                     QSTR("强迫泵风"),                   "*****",    14,     2},
    {"DO-1-X1-X(OUT12)",                     QSTR("备用"),                       "*****",    14,     3},
    {"DO-1-X1-Y(OUT13)",                     QSTR("RIOM故障"),                   "*****",    14,     4},
    /////////////OPEN COM CLOSE duiying shenme xinhao
    {"DO-1-X1-AA(COM14)",                   QSTR("备用"),                       "*****",    14,     5},
    {"DO-1-X1-FF(COM15)",                    QSTR("左转向"),                "*****",     14,     6},

    {"DO-1-X1-LL(COM16)",                    QSTR("右转向"),               "*****",      14,     7},
     ////////////
    {"DO-2-X1-H(OUT1)",                      QSTR("高速断路器状态"),          "*****",      15,     0},
    {"DO-2-X1-E(OUT2)",                      QSTR("左转向-闪烁"),                  "*****",     15,     1},
    {"DO-2-X1-J(OUT3)",                      QSTR("右转向-闪烁"),                  "*****",     15,     2},
    {"DO-2-X1-M(OUT4)",                      QSTR("司机室电热"),              "*****",     15,     3},
    {"DO-2-X1-K(OUT5)",                      QSTR("应急逆变器启动"),           "*****",     15,     4},
    {"DO-2-X1-N(OUT6)",                      QSTR("备用"),                   "*****",     15,     5},
    {"DO-2-X1-S(OUT7)",                      QSTR("备用"),                   "*****",     15,     6},
    {"DO-2-X1-P(OUT8)",                      QSTR("前端电热玻璃"),            "*****",      15,     7},
    {"DO-2-X1-T(OUT9)",                      QSTR("备用"),                    "*****",      16,     0},
    {"DO-2-X1-W(OUT10)",                     QSTR("备用"),                    "*****",      16,     1},
    {"DO-2-X1-U(OUT11)",                     QSTR("备用"),                        "*****",      16,     2},
    {"DO-2-X1-X(OUT12)",                     QSTR("备用"),                        "*****",      16,     3},
    {"DO-2-X1-Y(OUT13)",                     QSTR("备用"),                        "*****",      16,     4},
    ///
    {"DO-2-X1-AA(OPEN14)",                   QSTR("备用"),                     "*****",      16,     5},
    {"DO-2-X1-EE(OPEN15)",                   QSTR("备用"),                "*****",      16,     6},
    {"DO-2-X1-KK(OPEN16)",                   QSTR("备用"),                         "*****",      16,     7}
};
int g_LocalIoRomMC1_RIOM4Len = sizeof(g_LocalIoRom_MC1_RIOM4)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM1[] =
{
/*   Connector                Signal                          LineNo      Byte   Bit  */
    {"SGN-1-X1-S(IN1)",       QSTR("死人按钮"),                "*****",      30,     0},
    {"SGN-1-X1-M(IN2)",       QSTR("司机钥匙"),                "*****",      30,     1},
    {"SGN-1-X1-P(IN3)",       QSTR("门旁路开关"),              "*****",      30,     2},
    {"SGN-1-X1-K(IN4)",       QSTR("制动缓解（MC）"),            "*****",     30,     3},
    {"SGN-1-X1-H(IN5)",       QSTR("安全制动"),                "*****",      30,     4},
    {"SGN-1-X1-C(IN6)",       QSTR("磁轨制动（MC）"),            "*****",      30,     5},
    {"SGN-1-X1-E(IN7)",       QSTR("制动手动缓解（MC）"),       "*****",       30,     6},
    {"SGN-1-X1-A(IN8)",       QSTR("警惕旁路信号"),            "*****",      30,     7},
    {"SGN-1-X1-N(IN9)",       QSTR("门全关闭"),                "*****",      31,     0},
    {"SGN-1-X1-J(IN10)",      QSTR("蓄电池接触器"),            "*****",      31,     1},
    {"SGN-1-X1-D(IN11)",      QSTR("制动缓解旁路"),            "*****",      31,     2},
    {"SGN-1-X1-T(IN12)",      QSTR("交流输出接触器"),          "*****",      31,     3},
    {"SGN-1-X1-BB(IN13)",     QSTR("备用"),                   "*****",      31,     4},
    {"SGN-1-X1-LL(IN14)",     QSTR("备用"),                   "*****",      31,     5},
    {"SGN-1-X1-FF(IN15)",     QSTR("升弓到位（Tp）"),           "*****",      31,     6},
    {"SGN-1-X1-X(IN16)",      QSTR("降弓到位（Tp）"),           "*****",      31,     7},
    {"SGN-1-X1-MM(IN17)",     QSTR("备用"),                   "*****",      32,     0},
    {"SGN-1-X1-HH(IN18)",     QSTR("高速断路器状态（Tp）"),       "*****",     32,     1},
    {"SGN-1-X1-KK(IN19)",     QSTR("升弓电机空开状态（Tp）"),     "*****",     32,     2},
    {"SGN-1-X1-EE(IN20)",     QSTR("备用"),                     "*****",    32,     3},
//    {"",                    QSTR("备用"),                    "*****",      42,     4},
//    {"",                    QSTR("备用"),                    "*****",      42,     5},
//    {"",                    QSTR("备用"),                    "*****",      42,     6},
//    {"",                    QSTR("备用"),                    "*****",      42,     7},
//    {"",                    QSTR("备用"),                    "*****",      43,     0},
//    {"",                    QSTR("备用"),                    "*****",      43,     1},
//    {"",                    QSTR("备用"),                    "*****",      43,     2},
//    {"",                    QSTR("备用"),                    "*****",      43,     3},
//    {"",                    QSTR("备用"),                    "*****",      43,     4},
//    {"",                    QSTR("备用"),                    "*****",      43,     5},
//    {"",                    QSTR("备用"),                    "*****",      43,     6},
//    {"",                    QSTR("备用"),                    "*****",      43,     7}
};
int g_LocalIoRomMC2_RIOM1Len = sizeof(g_LocalIoRom_MC2_RIOM1)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM2[] =
{
/*   Connector                 Signal                          LineNo      Byte   Bit  */
    {"DI-1-X1-S(IN1)",        QSTR("牵引状态"),                "*****",      24,     0},
    {"DI-1-X1-M(IN2)",        QSTR("制动状态"),                "*****",      24,     1},
    {"DI-1-X1-P(IN3)",        QSTR("紧急制动状态"),             "*****",      24,     2},
    {"DI-1-X1-K(IN4)",        QSTR("方向指令F"),                "*****",      24,     3},
    {"DI-1-X1-H(IN5)",        QSTR("方向指令B"),                "*****",      24,     4},
    {"DI-1-X1-C(IN6)",        QSTR("制动编码1"),                "*****",      24,     5},
    {"DI-1-X1-E(IN7)",        QSTR("制动编码2"),                "*****",      24,     6},
    {"DI-1-X1-A(IN8)",        QSTR("制动编码3"),                "*****",      24,     7},
    {"DI-1-X1-N(IN9)",        QSTR("牵引编码1"),                "*****",      25,     0},
    {"DI-1-X1-J(IN10)",       QSTR("牵引编码2"),                "*****",      25,     1},
    {"DI-1-X1-D(IN11)",       QSTR("牵引编码3"),                "*****",      25,     2},
    {"DI-1-X1-T(IN12)",       QSTR("牵引编码4"),                "*****",      25,     3},
    {"DI-1-X1-BB(IN13)",      QSTR("撒沙指令"),                "*****",       25,     4},
    {"DI-1-X1-LL(IN14)",      QSTR("试灯按钮"),                "*****",       25,     5},
    {"DI-1-X1-FF(IN15)",      QSTR("牵引系统正常"),             "*****",      25,     6},
    {"DI-1-X1-X(IN16)",       QSTR("电制动1正常"),             "*****",       25,     7},
    {"DI-1-X1-MM(IN17)",      QSTR("电制动2正常"),             "*****",      26,     0},
    {"DI-1-X1-HH(IN18)",      QSTR("保持制动施加"),             "*****",     26,     1},
    {"DI-1-X1-KK(IN19)",      QSTR("车辆滑行指示"),             "*****",     26,     2},
    {"DI-1-X1-EE(IN20)",      QSTR("辅助逆变器正常"),           "*****",     26,     3},
    {"DI-1-X1-CC(IN21)",      QSTR("制动无故障(MC)"),          "*****",     26,     4},
    {"DI-1-X1-Y(IN22)",       QSTR("备用模式"),                    "*****",     26,     5},
    {"DI-1-X1-AA(IN23)",      QSTR("车辆联挂反馈信号"),           "*****",     26,     6},
    {"DI-1-X1-W(IN24)",       QSTR("备用"),                     "*****",     26,     7},
//    {"",                      QSTR("备用"),                     "*****",     51,     0},
//    {"",                      QSTR("备用"),                     "*****",     51,     1},
//    {"",                      QSTR("备用"),                     "*****",     51,     2},
//    {"",                      QSTR("备用"),                     "*****",     51,     3},
//    {"",                      QSTR("备用"),                     "*****",     51,     4},
//    {"",                      QSTR("备用"),                     "*****",     51,     5},
//    {"",                      QSTR("备用"),                     "*****",     51,     6},
//    {"",                      QSTR("备用"),                     "*****",     51,     7}
};
int g_LocalIoRomMC2_RIOM2Len = sizeof(g_LocalIoRom_MC2_RIOM2)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM3[] =
{
    /*   Connector                              Signal                          LineNo      Byte   Bit  */
    {"DI-2-X1-S(IN1)",                      QSTR("应急逆变器故障"),          "*****",      27,     0},
    {"DI-2-X1-M(IN2)",                      QSTR("应急逆变器空开状态"),       "*****",      27,     1},
    {"DI-2-X1-P(IN3)",                      QSTR("应急逆变器运行"),           "*****",      27,     2},
    {"DI-2-X1-K(IN4)",                      QSTR("头尾开关选择H"),                "*****",      27,     3},
    {"DI-2-X1-H(IN5)",                      QSTR("头尾开关选择R"),                "*****",      27,     4},
    {"DI-2-X1-C(IN6)",                      QSTR("救援开关选择 救援"),                "*****",      27,     5},
    {"DI-2-X1-E(IN7)",                      QSTR("ATC旁路"),                "*****",      27,     6},
    {"DI-2-X1-A(IN8)",                      QSTR("零速旁路"),                    "*****",      27,     7},
    {"DI-2-X1-N(IN9)",                      QSTR("制动全部缓解"),             "*****",      28,     0},
    {"DI-2-X1-J(IN10)",                     QSTR("牵引冷却风机空开状态"),       "*****",      28,     1},
    {"DI-2-X1-D(IN11)",                     QSTR("升弓指令"),                "*****",      28,     2},
    {"DI-2-X1-T(IN12)",                     QSTR("降弓指令"),                "*****",      28,     3},
    {"DI-2-X1-BB(IN13)",                    QSTR("车门允许（左）"),                "*****",      28,     4},
    {"DI-2-X1-LL(IN14)",                    QSTR("车门允许（右）"),                "*****",      28,     5},
    {"DI-2-X1-FF(IN15)",                    QSTR("开门指令（左）"),              "*****",      28,     6},
    {"DI-2-X1-X(IN16)",                     QSTR("开门指令（右）"),              "*****",      28,     7},
    {"DI-2-X1-MM(IN17)",                    QSTR("关门指令"),                "*****",      29,     0},
    {"DI-2-X1-HH(IN18)",                    QSTR("牵引安全"),                "*****",      29,     1},
    {"DI-2-X1-KK(IN19)",                    QSTR("撒沙风泵状态"),             "*****",     29,     2},
    {"DI-2-X1-EE(IN20)",                    QSTR("备用"),                    "*****",      29,     3},
    {"DI-2-X1-CC(IN21)",                    QSTR("备用 "),                   "*****",      29,     4},
    {"DI-2-X1-Y(IN22)",                     QSTR("备用"),                     "*****",      29,     5},
    {"DI-2-X1-AA(IN23)",                    QSTR("备用"),                "*****",      29,     6},
    {"DI-2-X1-W(IN24)",                     QSTR("备用"),                "*****",      29,     7},
//    {"",                      QSTR("备用"),                "*****",      55,     0},
//    {"",                      QSTR("备用"),                "*****",      55,     1},
//    {"",                      QSTR("备用"),                "*****",      55,     2},
//    {"",                      QSTR("备用"),                "*****",      55,     3},
//    {"",                      QSTR("备用"),                "*****",      55,     4},
//    {"",                      QSTR("备用"),                "*****",      55,     5},
//    {"",                      QSTR("备用"),                "*****",      55,     6},
//    {"",                      QSTR("备用"),                "*****",      55,     7}
};
int g_LocalIoRomMC2_RIOM3Len = sizeof(g_LocalIoRom_MC2_RIOM3)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM4[] =
{
    /*   Connector                              Signal                             LineNo      Byte   Bit  */
    {"DO-1-X1-H(OUT1)",                      QSTR("磁轨制动吸合指令"),          "*****",      37,     0},
    {"DO-1-X1-E(OUT2)",                      QSTR("3KM信号（零速信号）"),       "*****",      37,     1},
    {"DO-1-X1-J(OUT3)",                      QSTR("撒沙信号"),                  "*****",      37,     2},
    {"DO-1-X1-M(OUT4)",                      QSTR("停车制动（STEP2）"),         "*****",      37,     3},
    {"DO-1-X1-K(OUT5)",                      QSTR("保持制动（STEP3）"),         "*****",      37,     4},
    {"DO-1-X1-N(OUT6)",                      QSTR("替代制动（STEP1）"),         "*****",      37,     5},
    {"DO-1-X1-S(OUT7)",                      QSTR("Deadman事件"),               "*****",      37,     6},
    {"DO-1-X1-P(OUT8)",                      QSTR("蜂鸣器"),                    "*****",      37,     7},
    {"DO-1-X1-T(OUT9)",                      QSTR("受电弓状态灯"),               "*****",      38,     0},
    {"DO-1-X1-W(OUT10)",                     QSTR("正常照明"),                   "*****",      38,     1},
    {"DO-1-X1-U(OUT11)",                     QSTR("强迫泵风"),                   "*****",      38,     2},
    {"DO-1-X1-X(OUT12)",                     QSTR("备用"),                       "*****",      38,     3},
    {"DO-1-X1-Y(OUT13)",                     QSTR("RIOM故障"),                   "*****",      38,     4},

    //////////
    {"DO-1-X1-AA(OPEN14)",                   QSTR("备用"),                       "*****",      38,     5},
    {"DO-1-X1-FF(COM15)",                    QSTR("左转向"),                "*****",      38,     6},
    {"DO-1-X1-LL(COM16)",                    QSTR("右转向"),                     "*****",      38,     7},
    //////
    {"DO-2-X1-H(OUT1)",                      QSTR("高速断路器状态"),              "*****",      39,     0},
    {"DO-2-X1-E(OUT2)",                      QSTR("左转向-闪烁"),                    "*****",     39,     1},
    {"DO-2-X1-J(OUT3)",                      QSTR("右转向-闪烁"),                    "*****",     39,     2},
    {"DO-2-X1-M(OUT4)",                      QSTR("司机室电热"),                     "*****",     39,     3},
    {"DO-2-X1-K(OUT5)",                      QSTR("应急逆变器启动"),                     "*****",     39,     4},
    {"DO-2-X1-N(OUT6)",                      QSTR("备用"),                   "*****",     39,     5},
    {"DO-2-X1-S(OUT7)",                      QSTR("备用"),                   "*****",     39,     6},
    {"DO-2-X1-P(OUT8)",                      QSTR("前端电热玻璃"),                "*****",      39,     7},
    {"DO-2-X1-T(OUT9)",                      QSTR("备用"),                        "*****",      40,     0},
    {"DO-2-X1-W(OUT10)",                     QSTR("备用"),               "*****",      40,     1},
    {"DO-2-X1-U(OUT11)",                     QSTR("备用"),                        "*****",      40,     2},
    {"DO-2-X1-X(OUT12)",                     QSTR("备用"),                        "*****",      40,     3},
    {"DO-2-X1-Y(OUT13)",                     QSTR("备用"),                        "*****",      40,     4},
  ///////
    {"DO-2-X1-AA(OPEN14)",                   QSTR("备用"),                     "*****",     40,     5},
    {"DO-2-X1-EE(OPEN15)",                   QSTR("备用"),                "*****",     40,     6},
    {"DO-2-X1-KK(OPEN16)",                   QSTR("备用"),                        "*****",      40,     7}

};
int g_LocalIoRomMC2_RIOM4Len = sizeof(g_LocalIoRom_MC2_RIOM4)/sizeof(LOCAL_IO_ROMDATA);

ROMDATA g_PicRom_LocalIO[] =
{
    /*string             font         rc                       foreground color         background color      control type            ID           */

/* Title */
  {QSTR("Connector"),          D_FONT(6),      QRect( 13, 35, 80, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Signal"),            D_FONT(6),      QRect( 92, 35, 55, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Line"),            D_FONT(6),      QRect(224, 35, 40, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("State"),            D_FONT(6),      QRect(274, 35, 40, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Connector"),          D_FONT(6),      QRect(326, 35, 80, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Signal"),           D_FONT(6),      QRect(405, 35, 55, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Line"),           D_FONT(6),      QRect(537, 35, 40, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("State"),           D_FONT(6),      QRect(597, 35, 30, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },

/* H line */
  {"",                   D_FONT_BOLD(8), QRect(  8, 50+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8, 72+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8, 94+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,116+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,138+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,160+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,182+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,204+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,226+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,248+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,270+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,292+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,314+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,336+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,358+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,380+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,402+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,424+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },

/* V line */
  {"",                   D_FONT_BOLD(8), QRect(  8, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(320, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(630, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },

/* label */
/* Connector */
  {"",                   D_FONT(6)     , QRect( 10, 51+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10, 73+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10, 95+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,117+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,139+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,161+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,183+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,205+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,227+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,249+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,271+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,293+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,315+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,337+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,359+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,381+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_CONNECTOR },
  {"",                   D_FONT(6)     , QRect( 10,403+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_CONNECTOR },

  {"",                   D_FONT(6)     , QRect(322, 51+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322, 73+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322, 95+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,117+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,139+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,161+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,183+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,205+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,227+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,249+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,271+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,293+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,315+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,337+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,359+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,381+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_CONNECTOR },
  {"",                   D_FONT(6)     , QRect(322,403+8, 85, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_CONNECTOR },

/* Signal */
  {"",                   D_FONT(6)     , QRect(103, 51+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103, 73+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103, 95+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,117+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,139+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,161+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,183+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,205+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,227+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,249+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,271+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,293+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,315+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,337+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,359+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,381+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_SIGNAL },
  {"",                   D_FONT(6)     , QRect(103,403+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_SIGNAL },

  {"",                   D_FONT(6)     , QRect(416, 51+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416, 73+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416, 95+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,117+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,139+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,161+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,183+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,205+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,227+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,249+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,271+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,293+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,315+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,337+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,359+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,381+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_SIGNAL },
  {"",                   D_FONT(6)     , QRect(416,403+8,155, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_SIGNAL },

/* LineNo */
  {"",                   D_FONT(6)     , QRect(235, 51+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235, 73+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235, 95+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,117+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,139+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,161+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,183+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,205+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,227+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,249+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,271+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,293+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,315+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,337+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,359+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,381+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_LINENO },
  {"",                   D_FONT(6)     , QRect(235,403+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_LINENO },

  {"",                   D_FONT(6)     , QRect(548, 51+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548, 73+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548, 95+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,117+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,139+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,161+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,183+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,205+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,227+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,249+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,271+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,293+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,315+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,337+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,359+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,381+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_LINENO },
  {"",                   D_FONT(6)     , QRect(548,403+8, 42, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_LINENO },

/* State */
  {"",                   D_FONT(6)     , QRect(279, 51+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279, 73+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279, 95+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,117+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,139+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,161+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,183+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,205+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,227+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,249+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,271+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,293+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,315+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,337+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,359+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,381+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,403+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_STATE  },

  {"",                   D_FONT(6)     , QRect(592, 51+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592, 73+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592, 95+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,117+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,139+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,161+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,183+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,205+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,227+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,249+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,271+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,293+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,315+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,337+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,359+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,381+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,403+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_STATE  },

  {"",                   D_FONT(6),      QRect(  0, 438,640,  2),  QColor(250,250,250),  QColor(50, 50, 50),    CONTROL_LINE,           ID_IGNORE                        },

  {"MC1_SGN",            D_FONT_BOLD(8),   QRect( 10, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM1     },
  {"MC1_DI1",            D_FONT_BOLD(8),   QRect( 67, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM2     },
  {"MC1_DI2",            D_FONT_BOLD(8),   QRect(124, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM3     },
  {"MC1_DO",             D_FONT_BOLD(8),   QRect(181, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM4     },
  {"MC1_AX",             D_FONT_BOLD(8),   QRect(238, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM5     },
  {"MC2_SGN",            D_FONT_BOLD(8),   QRect(295, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM1     },
  {"MC2_DI1",            D_FONT_BOLD(8),   QRect(352, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM2     },
  {"MC2_DI2",            D_FONT_BOLD(8),   QRect(409, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM3     },
  {"MC2_DO",             D_FONT_BOLD(8),   QRect(466, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM4     },
  {"MC2_AX",             D_FONT_BOLD(8),   QRect(523, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM5     },
  {QSTR("Quit"),          D_FONT_BOLD(8),   QRect(580, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_QUIT    },

};
int g_LocalIORomLen = sizeof(g_PicRom_LocalIO)/sizeof(ROMDATA);

CLocalIOPage::CLocalIOPage()
{
    m_pagetype = E_MC1_RIOM1;
}

BEGIN_MESSAGE_MAP(CLocalIOPage,CPage)
        ON_UPDATE_PAGE()

        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM1,  OnMC1_RIOM1ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM2,  OnMC1_RIOM2ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM3,  OnMC1_RIOM3ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM4,  OnMC1_RIOM4ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM5,  OnMC1_RIOM5ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM1,  OnMC2_RIOM1ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM2,  OnMC2_RIOM2ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM3,  OnMC2_RIOM3ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM4,  OnMC2_RIOM4ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM5,  OnMC2_RIOM5ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_QUIT, OnQuitButtonDown)


        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_01_01_CONNECTOR,  OnID_LOCALIO_LABEL_01_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_02_01_CONNECTOR,  OnID_LOCALIO_LABEL_02_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_03_01_CONNECTOR,  OnID_LOCALIO_LABEL_03_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_04_01_CONNECTOR,  OnID_LOCALIO_LABEL_04_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_05_01_CONNECTOR,  OnID_LOCALIO_LABEL_05_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_06_01_CONNECTOR,  OnID_LOCALIO_LABEL_06_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_07_01_CONNECTOR,  OnID_LOCALIO_LABEL_07_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_08_01_CONNECTOR,  OnID_LOCALIO_LABEL_08_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_09_01_CONNECTOR,  OnID_LOCALIO_LABEL_09_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_10_01_CONNECTOR,  OnID_LOCALIO_LABEL_10_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_11_01_CONNECTOR,  OnID_LOCALIO_LABEL_11_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_12_01_CONNECTOR,  OnID_LOCALIO_LABEL_12_01_CONNECTORButtonDown)
//        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_13_01_CONNECTOR,  OnID_LOCALIO_LABEL_13_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_14_01_CONNECTOR,  OnID_LOCALIO_LABEL_14_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_15_01_CONNECTOR,  OnID_LOCALIO_LABEL_15_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_16_01_CONNECTOR,  OnID_LOCALIO_LABEL_16_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_17_01_CONNECTOR,  OnID_LOCALIO_LABEL_17_01_CONNECTORButtonDown)

        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_01_02_CONNECTOR,  OnID_LOCALIO_LABEL_01_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_02_02_CONNECTOR,  OnID_LOCALIO_LABEL_02_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_03_02_CONNECTOR,  OnID_LOCALIO_LABEL_03_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_04_02_CONNECTOR,  OnID_LOCALIO_LABEL_04_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_05_02_CONNECTOR,  OnID_LOCALIO_LABEL_05_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_06_02_CONNECTOR,  OnID_LOCALIO_LABEL_06_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_07_02_CONNECTOR,  OnID_LOCALIO_LABEL_07_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_08_02_CONNECTOR,  OnID_LOCALIO_LABEL_08_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_09_02_CONNECTOR,  OnID_LOCALIO_LABEL_09_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_10_02_CONNECTOR,  OnID_LOCALIO_LABEL_10_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_11_02_CONNECTOR,  OnID_LOCALIO_LABEL_11_02_CONNECTORButtonDown)
//        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_12_02_CONNECTOR,  OnID_LOCALIO_LABEL_12_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_13_02_CONNECTOR,  OnID_LOCALIO_LABEL_13_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_14_02_CONNECTOR,  OnID_LOCALIO_LABEL_14_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_15_02_CONNECTOR,  OnID_LOCALIO_LABEL_15_02_CONNECTORButtonDown)


        ON_LBUTTONUP(ID_LOCALIO_BTN_QUIT, OnQuitButtonUp)

END_MESSAGE_MAP()

void CLocalIOPage::OnUpdatePage()
{
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM1ButtonDown()
{
    m_pagetype = E_MC1_RIOM1;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM2ButtonDown()
{
    m_pagetype = E_MC1_RIOM2;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM3ButtonDown()
{
    m_pagetype = E_MC1_RIOM3;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM4ButtonDown()
{
    m_pagetype = E_MC1_RIOM4;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM5ButtonDown()
{
    m_pagetype = E_MC1_RIOM5;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM1ButtonDown()
{
    m_pagetype = E_MC2_RIOM1;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM2ButtonDown()
{
    m_pagetype = E_MC2_RIOM2;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM3ButtonDown()
{
    m_pagetype = E_MC2_RIOM3;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM4ButtonDown()
{
    m_pagetype = E_MC2_RIOM4;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM5ButtonDown()
{
    m_pagetype = E_MC2_RIOM5;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_DOWN);
    DrawPage();
}
void CLocalIOPage::OnID_LOCALIO_LABEL_01_01_CONNECTORButtonDown()
{
    //ASSERT((0>= 1) && (100 <= 34));
    qDebug() << TEST_Factory_BOOL;

    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = !g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = !g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_02_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = !g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = !g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_03_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = !g_SANDINGSIGNAL_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = !g_SANDINGSIGNAL_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_04_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = !g_STOPPINGBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = !g_STOPPINGBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_05_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = !g_HOLDINGBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = !g_HOLDINGBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_06_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = !g_SUBSTEPBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = !g_SUBSTEPBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_07_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DEADMAN_MC1_RIOM_BOOL = !g_DEADMAN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DEADMAN_MC2_RIOM_BOOL = !g_DEADMAN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_08_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_BEEP_MC1_RIOM_BOOL = !g_BEEP_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_BEEP_MC2_RIOM_BOOL = !g_BEEP_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_09_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = !g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = !g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_10_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_NORMALLIGHT_MC1_RIOM_BOOL = !g_NORMALLIGHT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_NORMALLIGHT_MC2_RIOM_BOOL = !g_NORMALLIGHT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_11_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = !g_FORCEDPUMPFAN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = !g_FORCEDPUMPFAN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_12_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = !g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = !g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL;
        }
    }

}
//void CLocalIOPage::OnID_LOCALIO_LABEL_13_01_CONNECTORButtonDown()
//{
//    if(InstructionTest2_Bool)
//    {
//            if(m_pagetype==E_MC1_RIOM4)
//            {
//                g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = !g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL;
//            }
//            else if(m_pagetype==E_MC2_RIOM4)
//            {
//                g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = !g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL;
//            }
//    }

//}
void CLocalIOPage::OnID_LOCALIO_LABEL_14_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = !g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = !g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_15_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_LEFTTURNOUT_MC1_RIOM_BOOL = !g_LEFTTURNOUT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_LEFTTURNOUT_MC2_RIOM_BOOL = !g_LEFTTURNOUT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_16_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = !g_RIGHTTURNOUT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = !g_RIGHTTURNOUT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_17_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = !g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = !g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL;
        }
    }
}
void CLocalIOPage::OnID_LOCALIO_LABEL_01_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_LEFTTURN_MC1_RIOM_BOOL = !g_LEFTTURN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_LEFTTURN_MC2_RIOM_BOOL = !g_LEFTTURN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_02_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_RIGHTTURN_MC1_RIOM_BOOL = !g_RIGHTTURN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_RIGHTTURN_MC2_RIOM_BOOL = !g_RIGHTTURN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_03_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_CABELECTRIC_MC1_RIOM_BOOL = !g_CABELECTRIC_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_CABELECTRIC_MC2_RIOM_BOOL = !g_CABELECTRIC_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_04_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = !g_EMGCINVERTERSTART_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = !g_EMGCINVERTERSTART_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_05_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL = !g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL = !g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_06_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL = !g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL = !g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_07_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = !g_FRONTGLASSHEAT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = !g_FRONTGLASSHEAT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_08_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL = !g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL = !g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_09_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL = !g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL = !g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_10_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = !g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = !g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_11_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = !g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = !g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL;
        }
    }

}
//void CLocalIOPage::OnID_LOCALIO_LABEL_12_02_CONNECTORButtonDown()
//{
//    if(InstructionTest2_Bool)
//    {
//        if(m_pagetype==E_MC1_RIOM4)
//        {
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = !g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL;
//        }
//        else if(m_pagetype==E_MC2_RIOM4)
//        {
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = !g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL;
//        }
//    }

//}
void CLocalIOPage::OnID_LOCALIO_LABEL_13_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_14_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_15_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CLocalIOPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CLocalIOPage::DrawTable(LOCAL_IO_ROMDATA *pData, uint cnt)
{
    uint i;

    if(NULL != pData)
    {
        for(i=1;i<=34;i++)
        {
            if (i <= cnt)
            {
                DrawLine(pData, i);
                pData++;
            }
            else
            {
                DrawLine(NULL, i);
            }
        }
    }
    else
    {
        for(i=1;i<=34;i++)
            DrawLine(NULL, i);
    }

}

void CLocalIOPage::DrawLine(LOCAL_IO_ROMDATA *pData, uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint connector_id, signal_id, lineno_id, state_id;
    connector_id = GetConnectorLabelId(linenum);
    signal_id    = GetSignalLabelId(linenum);
    lineno_id    = GetLineNoLabelId(linenum);
    state_id     = GetStateLabelId(linenum);

    if(m_pagetype==E_MC1_RIOM4)
    {
        if(TEST_Factory_BOOL)
        {
            if(g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL)
            {
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::red);
                qDebug() << "24";
            }
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SANDINGSIGNAL_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_STOPPINGBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HOLDINGBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SUBSTEPBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DEADMAN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_BEEP_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_NORMALLIGHT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FORCEDPUMPFAN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURNOUT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURNOUT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_CABELECTRIC_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_EMGCINVERTERSTART_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FRONTGLASSHEAT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }
        else
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = false;
            g_DEADMAN_MC1_RIOM_BOOL = false;
            g_BEEP_MC1_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = false;
            g_NORMALLIGHT_MC1_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC1_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = false;
            g_LEFTTURN_MC1_RIOM_BOOL = false;
            g_RIGHTTURN_MC1_RIOM_BOOL = false;
            g_ELECTRIC1_MC1_RIOM_BOOL = false;
            g_ELECTRIC2_MC1_RIOM_BOOL = false;
            g_CABELECTRIC_MC1_RIOM_BOOL = false;
            g_BATTERYHEAT_MC1_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL = false;
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = false;
            g_DEADMAN_MC2_RIOM_BOOL = false;
            g_BEEP_MC2_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = false;
            g_NORMALLIGHT_MC2_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC2_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = false;
            g_LEFTTURN_MC2_RIOM_BOOL = false;
            g_RIGHTTURN_MC2_RIOM_BOOL = false;
            g_ELECTRIC1_MC2_RIOM_BOOL = false;
            g_ELECTRIC2_MC2_RIOM_BOOL = false;
            g_CABELECTRIC_MC2_RIOM_BOOL = false;
            g_BATTERYHEAT_MC2_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL = false;

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }

    }
    else if(m_pagetype==E_MC2_RIOM4)
    {
        if(TEST_Factory_BOOL)
        {
            if(g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SANDINGSIGNAL_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_STOPPINGBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HOLDINGBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SUBSTEPBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DEADMAN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_BEEP_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_NORMALLIGHT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FORCEDPUMPFAN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURNOUT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURNOUT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_CABELECTRIC_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_EMGCINVERTERSTART_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FRONTGLASSHEAT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }
        else
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = false;
            g_DEADMAN_MC1_RIOM_BOOL = false;
            g_BEEP_MC1_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = false;
            g_NORMALLIGHT_MC1_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC1_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = false;
            g_LEFTTURN_MC1_RIOM_BOOL = false;
            g_RIGHTTURN_MC1_RIOM_BOOL = false;
            g_ELECTRIC1_MC1_RIOM_BOOL = false;
            g_ELECTRIC2_MC1_RIOM_BOOL = false;
            g_CABELECTRIC_MC1_RIOM_BOOL = false;
            g_BATTERYHEAT_MC1_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL = false;
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = false;
            g_DEADMAN_MC2_RIOM_BOOL = false;
            g_BEEP_MC2_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = false;
            g_NORMALLIGHT_MC2_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC2_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = false;
            g_LEFTTURN_MC2_RIOM_BOOL = false;
            g_RIGHTTURN_MC2_RIOM_BOOL = false;
            g_ELECTRIC1_MC2_RIOM_BOOL = false;
            g_ELECTRIC2_MC2_RIOM_BOOL = false;
            g_CABELECTRIC_MC2_RIOM_BOOL = false;
            g_BATTERYHEAT_MC2_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL = false;

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    }

    if (NULL != pData)
    {
        ((CLabel *)GetDlgItem(connector_id))->SetCtrlText(pData->connector);
        ((CLabel *)GetDlgItem(signal_id))->SetCtrlText(pData->signal);
        ((CLabel *)GetDlgItem(lineno_id))->SetCtrlText(pData->lineno);
        ((CLabel *)GetDlgItem(state_id))->SetCtrlText("");

        if (Bit(pData->byte, pData->bit))
        {
            ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::gray);
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(connector_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(signal_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(lineno_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(state_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::black);
    }
}

uint CLocalIOPage::GetConnectorLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_CONNECTOR;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetSignalLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_SIGNAL;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetLineNoLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_LINENO;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetStateLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_STATE;
    id += (linenum - 1);
    return id;
}

void CLocalIOPage::DrawPage()
{
    ASSERT((m_pagetype >= E_MC1_RIOM1) && (m_pagetype <= E_MC2_RIOM5));
    LOCAL_IO_ROMDATA *pData;

    switch(m_pagetype)
    {
    case E_MC1_RIOM1:
        pData = &g_LocalIoRom_MC1_RIOM1[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM1Len);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_CONNECTOR))->SetCtrlText("SGN-1-X1-CC");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_SIGNAL))->SetCtrlText(QSTR("速度信号1"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_LINENO))->SetCtrlText("26213");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_STATE))->SetCtrlText(QString::number(SPEEDSIGNAL_MC1_RIOM_WORD));

        break;
    case E_MC1_RIOM2:
        pData = &g_LocalIoRom_MC1_RIOM2[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM2Len);
        break;
    case E_MC1_RIOM3:
        pData = &g_LocalIoRom_MC1_RIOM3[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM3Len);
        break;
    case E_MC1_RIOM4:
        pData = &g_LocalIoRom_MC1_RIOM4[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM4Len);
        break;
    case E_MC1_RIOM5:
        pData = NULL;
        DrawTable(pData, 34);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetCtrlText("AX-1-X1-H");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_SIGNAL))->SetCtrlText(QSTR("压力传感器信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_LINENO))->SetCtrlText("42A02");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetCtrlText("AX-1-X1-D");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器1信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_LINENO))->SetCtrlText("42A05");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC1_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetCtrlText("AX-1-X1-F");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_LINENO))->SetCtrlText("42A08");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetCtrlText("AX-1-X1-S");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2电源正"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_LINENO))->SetCtrlText("42A02");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetCtrlText("AX-1-X1-M");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_LINENO))->SetCtrlText("42A05");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetCtrlText("AX-1-X1-L");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("荷载传感器2电源负"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetCtrlText("AX-1-X1-AA");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("压力传感器电源正"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("压力传感器信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetCtrlText("AX-1-X1-HH");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("电路板供电正极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "mA");



//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetCtrlText("AX-1-X1-KK");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("电路板供电正极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetCtrlText("AX-1-X1-JJ");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("电路板供电负极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetCtrlText("AX-1-X1-LL");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("电路板供电负极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_LINENO))->SetCtrlText("42A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

        /*((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("SGN生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText(QString::number(SGNLIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("SGN板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText(QString::number(SGNVERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("DI1生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText(QString::number(DI1LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("DI1板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText(QString::number(DI1VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("DI2生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText(QString::number(DI2LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("DI2板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText(QString::number(DI2VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("AX生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText(QString::number(AXLIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_SIGNAL))->SetCtrlText(QSTR("AX板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_STATE))->SetCtrlText(QString::number(AXVERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_SIGNAL))->SetCtrlText(QSTR("DO1生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_STATE))->SetCtrlText(QString::number(DO1LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_SIGNAL))->SetCtrlText(QSTR("DO1板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_STATE))->SetCtrlText(QString::number(DO1VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_SIGNAL))->SetCtrlText(QSTR("DO2生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_STATE))->SetCtrlText(QString::number(DO2LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_SIGNAL))->SetCtrlText(QSTR("DO2板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_STATE))->SetCtrlText(QString::number(DO2VERSION_MC1_RIOM_BYTE));*/

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_SIGNAL))->SetCtrlText(QSTR("AO1-速度表驱动"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_STATE))->SetCtrlText(QString::number(AO1SPEEDFRIVER_MC1_RIOM_WORD));
        break;
    case E_MC2_RIOM1:
        pData = &g_LocalIoRom_MC2_RIOM1[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM1Len);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_CONNECTOR))->SetCtrlText("SGN-1-X1-CC");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_SIGNAL))->SetCtrlText(QSTR("速度信号1"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_LINENO))->SetCtrlText("26243");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_STATE))->SetCtrlText(QString::number(SPEEDSIGNAL_MC2_RIOM_WORD));

        break;
    case E_MC2_RIOM2:
        pData = &g_LocalIoRom_MC2_RIOM2[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM2Len);
        break;
    case E_MC2_RIOM3:
        pData = &g_LocalIoRom_MC2_RIOM3[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM3Len);
        break;
    case E_MC2_RIOM4:
        pData = &g_LocalIoRom_MC2_RIOM4[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM4Len);
        break;
    case E_MC2_RIOM5:
        pData = NULL;
        DrawTable(pData, 34);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetCtrlText("AX-1-X1-D");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_SIGNAL))->SetCtrlText(QSTR("压力传感器信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_LINENO))->SetCtrlText("42A02");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC2_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetCtrlText("AX-1-X1-M");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器1信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_LINENO))->SetCtrlText("42A05");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC2_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_LINENO))->SetCtrlText("42A08");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC2_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("SGN生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText(QString::number(SGNLIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("SGN板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText(QString::number(SGNVERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("DI1生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText(QString::number(DI1LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("DI1板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText(QString::number(DI1VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("DI2生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText(QString::number(DI2LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("DI2板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText(QString::number(DI2VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("AX生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText(QString::number(AXLIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_SIGNAL))->SetCtrlText(QSTR("AX板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_STATE))->SetCtrlText(QString::number(AXVERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_SIGNAL))->SetCtrlText(QSTR("DO1生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_STATE))->SetCtrlText(QString::number(DO1LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_SIGNAL))->SetCtrlText(QSTR("DO1板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_STATE))->SetCtrlText(QString::number(DO1VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_SIGNAL))->SetCtrlText(QSTR("DO2生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_STATE))->SetCtrlText(QString::number(DO2LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_SIGNAL))->SetCtrlText(QSTR("DO2板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_STATE))->SetCtrlText(QString::number(DO2VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetCtrlText("AX-1-X1-W");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_SIGNAL))->SetCtrlText(QSTR("AO1-速度表驱动"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_STATE))->SetCtrlText(QString::number(AO1SPEEDFRIVER_MC2_RIOM_WORD));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_LINENO))->SetCtrlText("26243");
        break;
    default:
        break;
    }

}

void CLocalIOPage::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);

    m_pagetype = E_MC1_RIOM1;

    for (uint id=ID_LOCALIO_LABEL_01_01_CONNECTOR; id <= ID_LOCALIO_LABEL_17_02_LINENO; id++)
    {
        ((CLabel *)GetDlgItem(id))->SetAlignment(Qt::AlignLeft);
    }

    DrawPage();
}
