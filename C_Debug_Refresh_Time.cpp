#include "C_Debug_Refresh_Time.h"
#include "PixyMvbLib.h"

ROMDATA   g_PicRom_RefreshTime[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
   // D_COMMON_PAGE_HEADER(QObject::trUtf8("刷新时间"))

    {"Head",                    D_FONT(5),      QRect(5,   3, 190,  25),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_HEAD },
    {QObject::trUtf8("返回"),                    D_FONT(5),      QRect(200,   3, 100,  25),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_BACK},
    {QObject::trUtf8("网络IO"),                    D_FONT(5),      QRect(330,   3, 100,  25),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_DEBUG},


//    {"",                            D_FONT_BOLD(6),      QRect( 8,   60, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,   82, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  104, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  126, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  148, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  170, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  192, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  214, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  236, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  258, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  280, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  302, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  324, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  346, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  368, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  390, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  412, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  434, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  456, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  478, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  500, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 8,  522, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10,  29, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10,  49, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10,  69, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10,  89, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 109, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 129, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 149, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 169, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 189, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 209, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 229, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 249, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 269, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 289, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 309, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 329, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 349, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 369, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 389, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 409, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 429, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 449, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 469, 602,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


   {"",                            D_FONT_BOLD(6),      QRect(  10,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect(  50,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 110,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 150,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 210,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 250,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 310,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 350,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 410,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 450,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 510,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 550,  30, 1,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 610,  30, 2,  440 ),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

   //    {"",                            D_FONT_BOLD(6),      QRect( 60-5,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 140-20,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(190-25,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(270-40,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(320-45,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(400-60,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450-65,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(530-80,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(580-85,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(660-100,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(710-105,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(792-120,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(790-70,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect(640,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(674,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(718,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  463),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect(  61,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 191,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 321,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 451,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 581,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 711,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  12,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  51,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  112,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  151,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  212,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  251,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  312,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  351,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  412 ,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  451,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                   D_FONT_BOLD(6),      QRect( 512,  30, 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  551,  30, 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("地址"),                   D_FONT_BOLD(6),      QRect( 661-100+110,  40, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 711-107+112,  40, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("321"),            D_FONT_BOLD(6),      QRect(  12,   50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_321TIME        },
{QObject::trUtf8("322"),            D_FONT_BOLD(6),      QRect(  112,  50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_322TIME        },
{QObject::trUtf8("200"),            D_FONT_BOLD(6),      QRect(  212,  50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_200TIME         },
{QObject::trUtf8("201"),            D_FONT_BOLD(6),      QRect(  312,  50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_201TIME        },
{QObject::trUtf8("051"),            D_FONT_BOLD(6),      QRect(  412 , 50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_051TIME        },
{QObject::trUtf8("052"),             D_FONT_BOLD(6),      QRect( 512,  50   , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  50   , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_052TIME         },


{QObject::trUtf8("053"),            D_FONT_BOLD(6),      QRect(  12,   70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_053TIME        },
{QObject::trUtf8("054"),            D_FONT_BOLD(6),      QRect(  112,  70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_054TIME        },
{QObject::trUtf8("061"),            D_FONT_BOLD(6),      QRect(  212,  70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_061TIME         },
{QObject::trUtf8("062"),            D_FONT_BOLD(6),      QRect(  312,  70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_062TIME        },
{QObject::trUtf8("064"),            D_FONT_BOLD(6),      QRect(  412,  70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBRT_LABEL_064TIME        },
{QObject::trUtf8("065"),            D_FONT_BOLD(6),      QRect(  512,  70      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  70      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_065TIME         },


//{QObject::trUtf8("069"),            D_FONT_BOLD(6),      QRect(  12,   90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("06a"),            D_FONT_BOLD(6),      QRect(  112,  90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//{QObject::trUtf8("06b"),            D_FONT_BOLD(6),      QRect(  212,  90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("06c"),            D_FONT_BOLD(6),      QRect(  312,  90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("06d"),            D_FONT_BOLD(6),      QRect(  412,  90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_06dTIME        },
{QObject::trUtf8("06e"),            D_FONT_BOLD(6),      QRect(  512,  90    , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  90    , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_06eTIME         },

//{QObject::trUtf8("073"),            D_FONT_BOLD(6),      QRect(  12,   110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_073TIME        },
//{QObject::trUtf8("074"),            D_FONT_BOLD(6),      QRect(  112,  110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_074TIME        },
//{QObject::trUtf8("075"),            D_FONT_BOLD(6),      QRect(  212,  110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_075TIME         },
//{QObject::trUtf8("076"),            D_FONT_BOLD(6),      QRect(  312,  110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_076TIME        },
{QObject::trUtf8("079"),            D_FONT_BOLD(6),      QRect(  412,  110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_079TIME        },
{QObject::trUtf8("083"),            D_FONT_BOLD(6),      QRect(  512,  110      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  110      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_083TIME         },

{QObject::trUtf8("08d"),            D_FONT_BOLD(6),      QRect(  12,   130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_08dTIME        },
{QObject::trUtf8("097"),            D_FONT_BOLD(6),      QRect(  112,  130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_097TIME        },
{QObject::trUtf8("06f"),            D_FONT_BOLD(6),      QRect(  212,  130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_06fTIME         },
{QObject::trUtf8("070"),            D_FONT_BOLD(6),      QRect(  312,  130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_070TIME        },
{QObject::trUtf8("0fa"),            D_FONT_BOLD(6),      QRect(  412,  130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_0faTIME        },
{QObject::trUtf8("100"),            D_FONT_BOLD(6),      QRect(  512,  130      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  130      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_100TIME         },

{QObject::trUtf8("101"),            D_FONT_BOLD(6),      QRect(  12,   150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_101TIME        },
{QObject::trUtf8("102"),            D_FONT_BOLD(6),      QRect(  112,  150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_102TIME        },
{QObject::trUtf8("103"),            D_FONT_BOLD(6),      QRect(  212,  150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_103TIME         },
{QObject::trUtf8("104"),            D_FONT_BOLD(6),      QRect(  312,  150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_104TIME        },
{QObject::trUtf8("105"),            D_FONT_BOLD(6),      QRect(  412,  150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_105TIME        },
{QObject::trUtf8("107"),            D_FONT_BOLD(6),      QRect(  512,  150      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  150      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_107TIME         },

{QObject::trUtf8("170"),            D_FONT_BOLD(6),      QRect(  12,   170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_170TIME        },
{QObject::trUtf8("171"),            D_FONT_BOLD(6),      QRect(  112,  170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_171TIME        },
{QObject::trUtf8("173"),            D_FONT_BOLD(6),      QRect(  212,  170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_173TIME         },
{QObject::trUtf8("177"),            D_FONT_BOLD(6),      QRect(  312,  170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_177TIME        },
{QObject::trUtf8("178"),            D_FONT_BOLD(6),      QRect(  412,  170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_178TIME        },
{QObject::trUtf8("179"),            D_FONT_BOLD(6),      QRect(  512,  170      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  170      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_179TIME         },

{QObject::trUtf8("108"),            D_FONT_BOLD(6),      QRect(  12,   190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_108TIME        },
{QObject::trUtf8("109"),            D_FONT_BOLD(6),      QRect(  112,  190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_109TIME        },
{QObject::trUtf8("10a"),            D_FONT_BOLD(6),      QRect(  212,  190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_10aTIME         },
{QObject::trUtf8("10b"),            D_FONT_BOLD(6),      QRect(  312,  190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_10bTIME        },
{QObject::trUtf8("10c"),            D_FONT_BOLD(6),      QRect(  412,  190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_10cTIME        },
{QObject::trUtf8("10d"),            D_FONT_BOLD(6),      QRect(  512,  190      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  190      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_10dTIME         },

{QObject::trUtf8("10e"),            D_FONT_BOLD(6),      QRect(  12,   210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_10eTIME        },
{QObject::trUtf8("12d"),            D_FONT_BOLD(6),      QRect(  112,  210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_12dTIME        },
{QObject::trUtf8("12e"),            D_FONT_BOLD(6),      QRect(  212,  210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_12eTIME         },
{QObject::trUtf8("12f"),            D_FONT_BOLD(6),      QRect(  312,  210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_12fTIME        },
{QObject::trUtf8("130"),            D_FONT_BOLD(6),      QRect(  412,  210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME        },
{QObject::trUtf8("191"),            D_FONT_BOLD(6),      QRect(  512,  210      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  210      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_191TIME         },

{QObject::trUtf8("192"),            D_FONT_BOLD(6),      QRect(  12,   230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_192TIME        },
{QObject::trUtf8("193"),            D_FONT_BOLD(6),      QRect(  112,  230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_193TIME        },
{QObject::trUtf8("194"),            D_FONT_BOLD(6),      QRect(  212,  230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_194TIME         },
{QObject::trUtf8("19b"),            D_FONT_BOLD(6),      QRect(  312,  230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_19bTIME        },
{QObject::trUtf8("19c"),            D_FONT_BOLD(6),      QRect(  412,  230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_19cTIME        },
{QObject::trUtf8("19d"),            D_FONT_BOLD(6),      QRect(  512,  230      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  230      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_19dTIME         },

{QObject::trUtf8("19e"),            D_FONT_BOLD(6),      QRect(  12,   250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_19eTIME        },
{QObject::trUtf8("1a5"),            D_FONT_BOLD(6),      QRect(  112,  250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1a5TIME        },
{QObject::trUtf8("1a6"),            D_FONT_BOLD(6),      QRect(  212,  250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1a6TIME         },
{QObject::trUtf8("1a7"),            D_FONT_BOLD(6),      QRect(  312,  250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1a7TIME        },
{QObject::trUtf8("1a8"),            D_FONT_BOLD(6),      QRect(  412,  250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1a8TIME        },
{QObject::trUtf8("1af"),            D_FONT_BOLD(6),      QRect(  512,  250      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  250      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1afTIME         },

{QObject::trUtf8("1b0"),            D_FONT_BOLD(6),      QRect(  12,   270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1b0TIME        },
{QObject::trUtf8("1b1"),            D_FONT_BOLD(6),      QRect(  112,  270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1b1TIME        },
{QObject::trUtf8("1b2"),            D_FONT_BOLD(6),      QRect(  212,  270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1b2TIME         },
{QObject::trUtf8("1b9"),            D_FONT_BOLD(6),      QRect(  312,  270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1b9TIME        },
{QObject::trUtf8("1ba"),            D_FONT_BOLD(6),      QRect(  412,  270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1baTIME        },
{QObject::trUtf8("1bb"),            D_FONT_BOLD(6),      QRect(  512,  270      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  270      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1bbTIME         },

{QObject::trUtf8("1bc"),            D_FONT_BOLD(6),      QRect(  12,   290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1bcTIME        },
{QObject::trUtf8("1c3"),            D_FONT_BOLD(6),      QRect(  112,  290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1c3TIME        },
{QObject::trUtf8("1c4"),            D_FONT_BOLD(6),      QRect(  212,  290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1c4TIME         },
{QObject::trUtf8("1c5"),            D_FONT_BOLD(6),      QRect(  312,  290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1c5TIME        },
{QObject::trUtf8("1c6"),            D_FONT_BOLD(6),      QRect(  412,  290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1c6TIME        },
{QObject::trUtf8("1cd"),            D_FONT_BOLD(6),      QRect(  512,  290      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  290      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1cdTIME         },

{QObject::trUtf8("1ce"),            D_FONT_BOLD(6),      QRect(  12,   310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1ceTIME        },
{QObject::trUtf8("1cf"),            D_FONT_BOLD(6),      QRect(  112,  310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1cfTIME        },
{QObject::trUtf8("1d0"),            D_FONT_BOLD(6),      QRect(  212,  310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1d0TIME         },
{QObject::trUtf8("1d7"),            D_FONT_BOLD(6),      QRect(  312,  310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1d7TIME        },
{QObject::trUtf8("1d8"),            D_FONT_BOLD(6),      QRect(  412,  310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1d8TIME        },
{QObject::trUtf8("1d9"),            D_FONT_BOLD(6),      QRect(  512,  310      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  310      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1d9TIME         },

{QObject::trUtf8("1da"),            D_FONT_BOLD(6),      QRect(  12,   330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1daTIME        },
{QObject::trUtf8("38f"),            D_FONT_BOLD(6),      QRect(  112,  330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_38fTIME        },
{QObject::trUtf8("399"),            D_FONT_BOLD(6),      QRect(  212,  330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_399TIME         },
{QObject::trUtf8("3a3"),            D_FONT_BOLD(6),      QRect(  312,  330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3a3TIME        },
{QObject::trUtf8("3ad"),            D_FONT_BOLD(6),      QRect(  412,  330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3adTIME        },
{QObject::trUtf8("3b7"),            D_FONT_BOLD(6),      QRect(  512,  330      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  330      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3b7TIME         },

{QObject::trUtf8("390"),            D_FONT_BOLD(6),      QRect(  12,   350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_390TIME        },
{QObject::trUtf8("39a"),            D_FONT_BOLD(6),      QRect(  112,  350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_39aTIME        },
{QObject::trUtf8("3a4"),            D_FONT_BOLD(6),      QRect(  212,  350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3a4TIME         },
{QObject::trUtf8("3ae"),            D_FONT_BOLD(6),      QRect(  312,  350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3aeTIME        },
{QObject::trUtf8("3b8"),            D_FONT_BOLD(6),      QRect(  412,  350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3b8TIME        },
{QObject::trUtf8("391"),            D_FONT_BOLD(6),      QRect(  512,  350      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  350      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_391TIME         },

{QObject::trUtf8("39b"),            D_FONT_BOLD(6),      QRect(  12,   370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_39bTIME        },
{QObject::trUtf8("3a5"),            D_FONT_BOLD(6),      QRect(  112,  370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3a5TIME        },
{QObject::trUtf8("3af"),            D_FONT_BOLD(6),      QRect(  212,  370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3afTIME         },
{QObject::trUtf8("3b9"),            D_FONT_BOLD(6),      QRect(  312,  370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3b9TIME        },
{QObject::trUtf8("392"),            D_FONT_BOLD(6),      QRect(  412,  370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_392TIME        },
{QObject::trUtf8("39c"),            D_FONT_BOLD(6),      QRect(  512,  370      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  370      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_39cTIME         },

{QObject::trUtf8("3a6"),            D_FONT_BOLD(6),      QRect(  12,   390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3a6TIME        },
{QObject::trUtf8("3b0"),            D_FONT_BOLD(6),      QRect(  112,  390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3b0TIME        },
{QObject::trUtf8("3ba"),            D_FONT_BOLD(6),      QRect(  212,  390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3baTIME         },
{QObject::trUtf8("393"),            D_FONT_BOLD(6),      QRect(  312,  390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_393TIME        },
{QObject::trUtf8("39d"),            D_FONT_BOLD(6),      QRect(  412,  390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_39dTIME        },
{QObject::trUtf8("3a7"),            D_FONT_BOLD(6),      QRect(  512,  390      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  390      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3a7TIME         },

{QObject::trUtf8("3b1"),            D_FONT_BOLD(6),      QRect(  12,   410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3b1TIME        },
{QObject::trUtf8("3bb"),            D_FONT_BOLD(6),      QRect(  112,  410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_3bbTIME        },
//{QObject::trUtf8("2ee"),            D_FONT_BOLD(6),      QRect(  212,  410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2eeTIME         },
{QObject::trUtf8("2ef"),            D_FONT_BOLD(6),      QRect(  312,  410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2efTIME        },
//{QObject::trUtf8("2f0"),            D_FONT_BOLD(6),      QRect(  412,  410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2f0TIME        },
//{QObject::trUtf8("2f1"),            D_FONT_BOLD(6),      QRect(  512,  410      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  410      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2f1TIME         },

//{QObject::trUtf8("2f2"),            D_FONT_BOLD(6),      QRect(  12,   430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,   430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2f2TIME        },
{QObject::trUtf8("258"),            D_FONT_BOLD(6),      QRect(  112,  430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_258TIME        },
{QObject::trUtf8("259"),            D_FONT_BOLD(6),      QRect(  212,  430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_259TIME         },
{QObject::trUtf8("25a"),            D_FONT_BOLD(6),      QRect(  312,  430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  351,  430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_25aTIME        },
{QObject::trUtf8("2bc"),            D_FONT_BOLD(6),      QRect(  412,  430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  451,  430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2bcTIME        },
{QObject::trUtf8("2bd"),            D_FONT_BOLD(6),      QRect(  512,  430      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  551,  430      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_2bdTIME         },

{QObject::trUtf8("1f5"),            D_FONT_BOLD(6),      QRect(  12,  450      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  51,  450      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1f5TIME        },
{QObject::trUtf8("1f6"),            D_FONT_BOLD(6),      QRect(  112,  450      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  151,  450      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_1f6TIME         },
{QObject::trUtf8("226"),            D_FONT_BOLD(6),      QRect(  212,  450      , 38, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(  251,  450      , 59, 19),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_PIBRT_LABEL_226TIME         },




   // D_COMMON_PAGE_BUTTON_BAR
};
int g_RefreshTimeRomLen = sizeof(g_PicRom_RefreshTime)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRefreshTimePage,CPage)
        //ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN( ID_PIBRT_LABEL_BACK, OnComBtn1Clk)
        ON_LBUTTONDOWN( ID_PIBRT_LABEL_DEBUG, OnComBtn2Clk)
//        ON_LBUTTONDOWN(IDLB_COM_BTN2, OnComBtn2Clk)
//        ON_LBUTTONDOWN(IDLB_COM_BTN3, OnComBtn3Clk)
//        ON_LBUTTONDOWN(IDLB_COM_BTN4, OnComBtn4Clk)
//        ON_LBUTTONDOWN(IDLB_COM_BTN5, OnComBtn5Clk)
//        ON_LBUTTONDOWN(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRefreshTimePage::CRefreshTimePage()
{
}

void CRefreshTimePage::OnUpdatePage()
{
    UpdateRefreshTime();
    UpdateTimeoutRemind();
    BYTE lat,rld,slm;


#ifdef USE_MVB_DATA
//    qDebug()<< QTime::currentTime().toString("hh:mm:ss:z");
//    lat=pixymvb_GetLaa();
//    qDebug()<< QTime::currentTime().toString("hh:mm:ss:z") << lat;
//    rld=pixymvb_GetRld();
//    slm=pixymvb_GetSlm();
#endif
   // ((CLabel *)GetDlgItem(ID_PIBRT_LABEL_HEAD))->SetCtrlText(QObject::trUtf8("车号:")+QString::number(Train_num_Dispaly)+QObject::trUtf8("\n")+QObject::trUtf8("LAT:")+QString::number(lat)+QObject::trUtf8("  RLD:")+QString::number(rld)+QObject::trUtf8("  单线:")+QString::number(slm));


}

void CRefreshTimePage::OnInitPage()
{

}

void CRefreshTimePage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
}

void CRefreshTimePage::OnComBtn1Clk()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CRefreshTimePage::OnComBtn2Clk()
{
    ChangePage(PAGE_ROM_INDEX_UDPDATAPAGE1);
}



void CRefreshTimePage::UpdateRefreshTime()
{

    //snk
          //IDU to IDU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);//801   IDU_HVAC(From MA)(For MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);//802   IDU_HVAC(From MB)(For MA)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_200TIME,65535-refresh_time_200);//512   IDU_CCU(From MA)(For MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_201TIME,65535-refresh_time_201);//513   IDU_CCU(From MB)(For MA)

          //Door
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_051TIME,65535-refresh_time_051);//81    DoorMA_ALL
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_052TIME,65535-refresh_time_052);//82    DoorRA_ALL
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_053TIME,65535-refresh_time_053);//83    DoorRB_ALL
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_054TIME,65535-refresh_time_054);//84    DoorMB_ALL

          //HVAC_RA & HVAC_RB
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_061TIME,65535-refresh_time_061);//97     HVACRA_ALL
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_062TIME,65535-refresh_time_062);//98     HVACRB_ALL
          //Remote
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_064TIME,65535-refresh_time_064);//100    GTW_CCU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_065TIME,65535-refresh_time_065);//101    CCU_GTW
          //SetRefreshTimeLabelString(ID_PIBRT_LABEL_069TIME,65535-refresh_time_069);//105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
          //SetRefreshTimeLabelString(ID_PIBRT_LABEL_06aTIME,65535-refresh_time_06a);//106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
          //SetRefreshTimeLabelString(ID_PIBRT_LABEL_06bTIME,65535-refresh_time_06b);//107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
          //SetRefreshTimeLabelString(ID_PIBRT_LABEL_06cTIME,65535-refresh_time_06c);//108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_06dTIME,65535-refresh_time_06d);//109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_06eTIME,65535-refresh_time_06e);//110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_073TIME,65535-refresh_time_073);//115    GTW_CCU(R1_MVB_REM_1 input for slave TS)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_074TIME,65535-refresh_time_074);//116    GTW_CCU(R1_MVB_REM_2 input for slave TS)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_075TIME,65535-refresh_time_075);//117    GTW_CCU(R1_MVB_REM_3 input for slave TS)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_076TIME,65535-refresh_time_076);//118    GTW_CCU(R1_MVB_REM_4 input for slave TS)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_079TIME,65535-refresh_time_079);//121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_083TIME,65535-refresh_time_083);//131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_08dTIME,65535-refresh_time_08d);//141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_097TIME,65535-refresh_time_097);//151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_06fTIME,65535-refresh_time_06f);//111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                     //Status of the local Vehicle for IDU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_070TIME,65535-refresh_time_070);//112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                     //Diagnostic data of local Vehicle for IDU

          //CCU to All
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_0faTIME,65535-refresh_time_0fa);//250    CCU_All


          //BCU to CCU & CCU to BCU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_100TIME,65535-refresh_time_100);//256    BCU1_CCU(P)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_101TIME,65535-refresh_time_101);//257    BCU1_CCU(P)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_102TIME,65535-refresh_time_102);//258    BCU1_CCU(P)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_103TIME,65535-refresh_time_103);//259    BCU1_CCU(P)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_104TIME,65535-refresh_time_104);//260    BCU2_CCU(MA)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_105TIME,65535-refresh_time_105);//261    BCU2_CCU(MA)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_107TIME,65535-refresh_time_107);//263    BCU2_CCU(MA)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_170TIME,65535-refresh_time_170);//368    BCU3_CCU(MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_171TIME,65535-refresh_time_171);//369    BCU3_CCU(MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_173TIME,65535-refresh_time_173);//371    BCU3_CCU(MB)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_177TIME,65535-refresh_time_177);//375    BCU2_CCU(MA) for test
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_178TIME,65535-refresh_time_178);//376    BCU1_CCU(P) for test
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_179TIME,65535-refresh_time_179);//377    BCU3_CCU(MB) for test


          SetRefreshTimeLabelString(ID_PIBRT_LABEL_108TIME,65535-refresh_time_108);//264    CCU_BCU(Commands to BCU of MA,P,MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_109TIME,65535-refresh_time_109);//265    CCU_BCU(Commands to BCU of MA,P,MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_10aTIME,65535-refresh_time_10a);//266    CCU_BCU(Commands to BCU of MA,P,MB)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_10bTIME,65535-refresh_time_10b);//267    TCU1_BCU
                                      //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_10cTIME,65535-refresh_time_10c);//268    TCU2_BCU
                                      //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_10dTIME,65535-refresh_time_10d);//269    TCU3_BCU
                                      //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_10eTIME,65535-refresh_time_10e);//290    TCU4_BCU
                                      //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

          //TCU to CCU & CCU to TCU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_12dTIME,65535-refresh_time_12d);//301    CCU_TCU1
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_12eTIME,65535-refresh_time_12e);//302    CCU_TCU2
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_12fTIME,65535-refresh_time_12f);//303    CCU_TCU3
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);//304    CCU_TCU4


          SetRefreshTimeLabelString(ID_PIBRT_LABEL_191TIME,65535-refresh_time_191);//401    TCU1_CCU_1(TCU1 status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_192TIME,65535-refresh_time_192);//402    TCU2_CCU_1(TCU2 status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_193TIME,65535-refresh_time_193);//403    TCU3_CCU_1(TCU3 status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_194TIME,65535-refresh_time_194);//404    TCU4_CCU_1(TCU4 status)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_19bTIME,65535-refresh_time_19b);//411    TCU1_CCU_2(TCU1 diagnostic codes and status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_19cTIME,65535-refresh_time_19c);//412    TCU2_CCU_2(TCU2 diagnostic codes and status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_19dTIME,65535-refresh_time_19d);//413    TCU3_CCU_2(TCU3 diagnostic codes and status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_19eTIME,65535-refresh_time_19e);//414    TCU4_CCU_2(TCU4 diagnostic codes and status)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1a5TIME,65535-refresh_time_1a5);//421    TCU1_CCU_3(TCU1 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1a6TIME,65535-refresh_time_1a6);//422    TCU2_CCU_3(TCU2 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1a7TIME,65535-refresh_time_1a7);//423    TCU3_CCU_3(TCU3 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1a8TIME,65535-refresh_time_1a8);//424    TCU4_CCU_3(TCU4 analog signals)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1afTIME,65535-refresh_time_1af);//431    TCU1_CCU_4(TCU1 battery charger status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1b0TIME,65535-refresh_time_1b0);//432    TCU2_CCU_4(TCU2 battery charger status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1b1TIME,65535-refresh_time_1b1);//433    TCU3_CCU_4(TCU3 battery charger status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1b2TIME,65535-refresh_time_1b2);//434    TCU4_CCU_4(TCU4 battery charger status)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1b9TIME,65535-refresh_time_1b9);//441    TCU1_CCU_5(TCU1 auxiliary convertor status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1baTIME,65535-refresh_time_1ba);//442    TCU2_CCU_5(TCU2 auxiliary convertor status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1bbTIME,65535-refresh_time_1bb);//443    TCU3_CCU_5(TCU3 auxiliary convertor status)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1bcTIME,65535-refresh_time_1bc);//444    TCU4_CCU_5(TCU4 auxiliary convertor status)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1c3TIME,65535-refresh_time_1c3);//451    TCU1_CCU_5(TCU1 data and time information)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1c4TIME,65535-refresh_time_1c4);//452    TCU2_CCU_5(TCU2 data and time information)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1c5TIME,65535-refresh_time_1c5);//453    TCU3_CCU_5(TCU3 data and time information)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1c6TIME,65535-refresh_time_1c6);//454    TCU4_CCU_5(TCU4 data and time information)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1cdTIME,65535-refresh_time_1cd);//461    TCU1_CCU_6(TCU1 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1ceTIME,65535-refresh_time_1ce);//462    TCU2_CCU_6(TCU2 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1cfTIME,65535-refresh_time_1cf);//463    TCU3_CCU_6(TCU3 analog signals)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1d0TIME,65535-refresh_time_1d0);//464    TCU4_CCU_6(TCU4 analog signals)

          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1d7TIME,65535-refresh_time_1d7);//471    TCU1_CCU_7(TCU1 energy counters)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1d8TIME,65535-refresh_time_1d8);//472    TCU2_CCU_7(TCU2 energy counters)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1d9TIME,65535-refresh_time_1d9);//473    TCU3_CCU_7(TCU3 energy counters)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1daTIME,65535-refresh_time_1da);//474    TCU4_CCU_7(TCU4 energy counters)
    //*********2014.11.24 MVB thread
          //LCU to CCU & CCU to LCU
          //R_S(01/03/04/05/08)(1) Master logic I/O status
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_38fTIME,65535-refresh_time_38f);//911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_399TIME,65535-refresh_time_399);//921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3a3TIME,65535-refresh_time_3a3);//931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3adTIME,65535-refresh_time_3ad);//941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3b7TIME,65535-refresh_time_3b7);//951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

          //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_390TIME,65535-refresh_time_390);//912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_39aTIME,65535-refresh_time_39a);//922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3a4TIME,65535-refresh_time_3a4);//932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3aeTIME,65535-refresh_time_3ae);//942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3b8TIME,65535-refresh_time_3b8);//952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

          //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_391TIME,65535-refresh_time_391);//913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_39bTIME,65535-refresh_time_39b);//923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3a5TIME,65535-refresh_time_3a5);//933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3afTIME,65535-refresh_time_3af);//943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3b9TIME,65535-refresh_time_3b9);//953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

          //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_392TIME,65535-refresh_time_392);//914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_39cTIME,65535-refresh_time_39c);//924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3a6TIME,65535-refresh_time_3a6);//934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3b0TIME,65535-refresh_time_3b0);//944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3baTIME,65535-refresh_time_3ba);//954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

          //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_393TIME,65535-refresh_time_393);//915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_39dTIME,65535-refresh_time_39d);//925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3a7TIME,65535-refresh_time_3a7);//935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3b1TIME,65535-refresh_time_3b1);//945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_3bbTIME,65535-refresh_time_3bb);//955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


          //RSE to CCU & CCU to RSE
          //SetRefreshTimeLabelString(ID_PIBRT_LABEL_2eeTIME,65535-refresh_time_2ee);//750   CCU_RSE(Status to RSE)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2efTIME,65535-refresh_time_2ef);//751   RSE_CCU(Status from RSE)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2f0TIME,65535-refresh_time_2f0);//752   RSE_CCU(Status from RSE)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2f1TIME,65535-refresh_time_2f1);//753   RSE_CCU(Status from RSE)
//          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2f2TIME,65535-refresh_time_2f2);//754   RSE_CCU(Status from RSE)


          //PIDS to PA to IDU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_258TIME,65535-refresh_time_258);//600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_259TIME,65535-refresh_time_259);//601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_25aTIME,65535-refresh_time_25a);//602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2bcTIME,65535-refresh_time_2bc);//700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_2bdTIME,65535-refresh_time_2bd);//701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

          //SUPC to IDU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1f5TIME,65535-refresh_time_1f5);//501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_1f6TIME,65535-refresh_time_1f6);//502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

          //MVB_STAT from LCU_RA to IDU
          SetRefreshTimeLabelString(ID_PIBRT_LABEL_226TIME,65535-refresh_time_226);//550   MVB_STAT LCU_RA to IDU 16 1024


}

void CRefreshTimePage::UpdateTimeoutRemind()
{

    //snk
          //IDU to IDU
          SetTimeoutRemind_3(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);//801   IDU_HVAC(From MA)(For MB)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);//802   IDU_HVAC(From MB)(For MA)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_200TIME,65535-refresh_time_200);//512   IDU_CCU(From MA)(For MB)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_201TIME,65535-refresh_time_201);//513   IDU_CCU(From MB)(For MA)

          //Door
          SetTimeoutRemind_5(ID_PIBRT_LABEL_051TIME,65535-refresh_time_051);//81    DoorMA_ALL
          SetTimeoutRemind_5(ID_PIBRT_LABEL_052TIME,65535-refresh_time_052);//82    DoorRA_ALL
          SetTimeoutRemind_5(ID_PIBRT_LABEL_053TIME,65535-refresh_time_053);//83    DoorRB_ALL
          SetTimeoutRemind_5(ID_PIBRT_LABEL_054TIME,65535-refresh_time_054);//84    DoorMB_ALL

          //HVAC_RA & HVAC_RB
          SetTimeoutRemind_4(ID_PIBRT_LABEL_061TIME,65535-refresh_time_061);//97     HVACRA_ALL
          SetTimeoutRemind_4(ID_PIBRT_LABEL_062TIME,65535-refresh_time_062);//98     HVACRB_ALL
          //Remote
          SetTimeoutRemind_4(ID_PIBRT_LABEL_064TIME,65535-refresh_time_064);//100    GTW_CCU
          SetTimeoutRemind_4(ID_PIBRT_LABEL_065TIME,65535-refresh_time_065);//101    CCU_GTW
          //SetTimeoutRemind_4(ID_PIBRT_LABEL_069TIME,65535-refresh_time_069);//105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
          //SetTimeoutRemind_4(ID_PIBRT_LABEL_06aTIME,65535-refresh_time_06a);//106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
          //SetTimeoutRemind_4(ID_PIBRT_LABEL_06bTIME,65535-refresh_time_06b);//107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
          //SetTimeoutRemind_4(ID_PIBRT_LABEL_06cTIME,65535-refresh_time_06c);//108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_06dTIME,65535-refresh_time_06d);//109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_06eTIME,65535-refresh_time_06e);//110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

//          SetTimeoutRemind_2(ID_PIBRT_LABEL_073TIME,65535-refresh_time_073);//115    GTW_CCU(R1_MVB_REM_1 input for slave TS)
//          SetTimeoutRemind_2(ID_PIBRT_LABEL_074TIME,65535-refresh_time_074);//116    GTW_CCU(R1_MVB_REM_2 input for slave TS)
//          SetTimeoutRemind_2(ID_PIBRT_LABEL_075TIME,65535-refresh_time_075);//117    GTW_CCU(R1_MVB_REM_3 input for slave TS)
//          SetTimeoutRemind_2(ID_PIBRT_LABEL_076TIME,65535-refresh_time_076);//118    GTW_CCU(R1_MVB_REM_4 input for slave TS)

          SetTimeoutRemind_4(ID_PIBRT_LABEL_079TIME,65535-refresh_time_079);//121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_083TIME,65535-refresh_time_083);//131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_08dTIME,65535-refresh_time_08d);//141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_097TIME,65535-refresh_time_097);//151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

          SetTimeoutRemind_4(ID_PIBRT_LABEL_06fTIME,65535-refresh_time_06f);//111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                     //Status of the local Vehicle for IDU
          SetTimeoutRemind_4(ID_PIBRT_LABEL_070TIME,65535-refresh_time_070);//112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                     //Diagnostic data of local Vehicle for IDU

          //CCU to All
          SetTimeoutRemind_5(ID_PIBRT_LABEL_0faTIME,65535-refresh_time_0fa);//250    CCU_All


          //BCU to CCU & CCU to BCU
          SetTimeoutRemind_3(ID_PIBRT_LABEL_100TIME,65535-refresh_time_100);//256    BCU1_CCU(P)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_101TIME,65535-refresh_time_101);//257    BCU1_CCU(P)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_102TIME,65535-refresh_time_102);//258    BCU1_CCU(P)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_103TIME,65535-refresh_time_103);//259    BCU1_CCU(P)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_104TIME,65535-refresh_time_104);//260    BCU2_CCU(MA)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_105TIME,65535-refresh_time_105);//261    BCU2_CCU(MA)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_107TIME,65535-refresh_time_107);//263    BCU2_CCU(MA)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_170TIME,65535-refresh_time_170);//368    BCU3_CCU(MB)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_171TIME,65535-refresh_time_171);//369    BCU3_CCU(MB)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_173TIME,65535-refresh_time_173);//371    BCU3_CCU(MB)

          SetTimeoutRemind_5(ID_PIBRT_LABEL_177TIME,65535-refresh_time_177);//375    BCU2_CCU(MA) for test
          SetTimeoutRemind_5(ID_PIBRT_LABEL_178TIME,65535-refresh_time_178);//376    BCU1_CCU(P) for test
          SetTimeoutRemind_5(ID_PIBRT_LABEL_179TIME,65535-refresh_time_179);//377    BCU3_CCU(MB) for test


          SetTimeoutRemind_2(ID_PIBRT_LABEL_108TIME,65535-refresh_time_108);//264    CCU_BCU(Commands to BCU of MA,P,MB)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_109TIME,65535-refresh_time_109);//265    CCU_BCU(Commands to BCU of MA,P,MB)
          SetTimeoutRemind_2(ID_PIBRT_LABEL_10aTIME,65535-refresh_time_10a);//266    CCU_BCU(Commands to BCU of MA,P,MB)
          SetTimeoutRemind_2(ID_PIBRT_LABEL_10bTIME,65535-refresh_time_10b);//267    TCU1_BCU
                                      //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
          SetTimeoutRemind_2(ID_PIBRT_LABEL_10cTIME,65535-refresh_time_10c);//268    TCU2_BCU
                                      //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
          SetTimeoutRemind_2(ID_PIBRT_LABEL_10dTIME,65535-refresh_time_10d);//269    TCU3_BCU
                                      //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
          SetTimeoutRemind_2(ID_PIBRT_LABEL_10eTIME,65535-refresh_time_10e);//270    TCU4_BCU
                                      //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

          //TCU to CCU & CCU to TCU
          SetTimeoutRemind_2(ID_PIBRT_LABEL_12dTIME,65535-refresh_time_12d);//301    CCU_TCU1
          SetTimeoutRemind_2(ID_PIBRT_LABEL_12eTIME,65535-refresh_time_12e);//302    CCU_TCU2
          SetTimeoutRemind_2(ID_PIBRT_LABEL_12fTIME,65535-refresh_time_12f);//303    CCU_TCU3
          SetTimeoutRemind_2(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);//304    CCU_TCU4


          SetTimeoutRemind_3(ID_PIBRT_LABEL_191TIME,65535-refresh_time_191);//401    TCU1_CCU_1(TCU1 status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_192TIME,65535-refresh_time_192);//402    TCU2_CCU_1(TCU2 status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_193TIME,65535-refresh_time_193);//403    TCU3_CCU_1(TCU3 status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_194TIME,65535-refresh_time_194);//404    TCU4_CCU_1(TCU4 status)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_19bTIME,65535-refresh_time_19b);//411    TCU1_CCU_2(TCU1 diagnostic codes and status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_19cTIME,65535-refresh_time_19c);//412    TCU2_CCU_2(TCU2 diagnostic codes and status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_19dTIME,65535-refresh_time_19d);//413    TCU3_CCU_2(TCU3 diagnostic codes and status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_19eTIME,65535-refresh_time_19e);//414    TCU4_CCU_2(TCU4 diagnostic codes and status)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1a5TIME,65535-refresh_time_1a5);//421    TCU1_CCU_3(TCU1 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1a6TIME,65535-refresh_time_1a6);//422    TCU2_CCU_3(TCU2 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1a7TIME,65535-refresh_time_1a7);//423    TCU3_CCU_3(TCU3 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1a8TIME,65535-refresh_time_1a8);//424    TCU4_CCU_3(TCU4 analog signals)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1afTIME,65535-refresh_time_1af);//431    TCU1_CCU_4(TCU1 battery charger status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1b0TIME,65535-refresh_time_1b0);//432    TCU2_CCU_4(TCU2 battery charger status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1b1TIME,65535-refresh_time_1b1);//433    TCU3_CCU_4(TCU3 battery charger status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1b2TIME,65535-refresh_time_1b2);//434    TCU4_CCU_4(TCU4 battery charger status)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1b9TIME,65535-refresh_time_1b9);//441    TCU1_CCU_5(TCU1 auxiliary convertor status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1baTIME,65535-refresh_time_1ba);//442    TCU2_CCU_5(TCU2 auxiliary convertor status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1bbTIME,65535-refresh_time_1bb);//443    TCU3_CCU_5(TCU3 auxiliary convertor status)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1bcTIME,65535-refresh_time_1bc);//444    TCU4_CCU_5(TCU4 auxiliary convertor status)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1c3TIME,65535-refresh_time_1c3);//451    TCU1_CCU_5(TCU1 data and time information)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1c4TIME,65535-refresh_time_1c4);//452    TCU2_CCU_5(TCU2 data and time information)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1c5TIME,65535-refresh_time_1c5);//453    TCU3_CCU_5(TCU3 data and time information)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1c6TIME,65535-refresh_time_1c6);//454    TCU4_CCU_5(TCU4 data and time information)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1cdTIME,65535-refresh_time_1cd);//461    TCU1_CCU_6(TCU1 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1ceTIME,65535-refresh_time_1ce);//462    TCU2_CCU_6(TCU2 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1cfTIME,65535-refresh_time_1cf);//463    TCU3_CCU_6(TCU3 analog signals)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1d0TIME,65535-refresh_time_1d0);//464    TCU4_CCU_6(TCU4 analog signals)

          SetTimeoutRemind_3(ID_PIBRT_LABEL_1d7TIME,65535-refresh_time_1d7);//471    TCU1_CCU_7(TCU1 energy counters)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1d8TIME,65535-refresh_time_1d8);//472    TCU2_CCU_7(TCU2 energy counters)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1d9TIME,65535-refresh_time_1d9);//473    TCU3_CCU_7(TCU3 energy counters)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_1daTIME,65535-refresh_time_1da);//474    TCU4_CCU_7(TCU4 energy counters)
    //*********2014.11.24 MVB thread
          //LCU to CCU & CCU to LCU
          //R_S(01/03/04/05/08)(1) Master logic I/O status
          SetTimeoutRemind_4(ID_PIBRT_LABEL_38fTIME,65535-refresh_time_38f);//911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_399TIME,65535-refresh_time_399);//921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_3a3TIME,65535-refresh_time_3a3);//931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_3adTIME,65535-refresh_time_3ad);//941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_3b7TIME,65535-refresh_time_3b7);//951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

          //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
          SetTimeoutRemind_3(ID_PIBRT_LABEL_390TIME,65535-refresh_time_390);//912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_39aTIME,65535-refresh_time_39a);//922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3a4TIME,65535-refresh_time_3a4);//932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3aeTIME,65535-refresh_time_3ae);//942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3b8TIME,65535-refresh_time_3b8);//952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

          //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
          SetTimeoutRemind_3(ID_PIBRT_LABEL_391TIME,65535-refresh_time_391);//913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_39bTIME,65535-refresh_time_39b);//923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3a5TIME,65535-refresh_time_3a5);//933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3afTIME,65535-refresh_time_3af);//943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3b9TIME,65535-refresh_time_3b9);//953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

          //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
          SetTimeoutRemind_3(ID_PIBRT_LABEL_392TIME,65535-refresh_time_392);//914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_39cTIME,65535-refresh_time_39c);//924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3a6TIME,65535-refresh_time_3a6);//934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3b0TIME,65535-refresh_time_3b0);//944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_3baTIME,65535-refresh_time_3ba);//954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

          //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
          SetTimeoutRemind_5(ID_PIBRT_LABEL_393TIME,65535-refresh_time_393);//915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_39dTIME,65535-refresh_time_39d);//925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_3a7TIME,65535-refresh_time_3a7);//935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_3b1TIME,65535-refresh_time_3b1);//945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
          SetTimeoutRemind_5(ID_PIBRT_LABEL_3bbTIME,65535-refresh_time_3bb);//955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


          //RSE to CCU & CCU to RSE
          //SetTimeoutRemind_3(ID_PIBRT_LABEL_2eeTIME,65535-refresh_time_2ee);//750   CCU_RSE(Status to RSE)
          SetTimeoutRemind_3(ID_PIBRT_LABEL_2efTIME,65535-refresh_time_2ef);//751   RSE_CCU(Status from RSE)
//          SetTimeoutRemind_3(ID_PIBRT_LABEL_2f0TIME,65535-refresh_time_2f0);//752   RSE_CCU(Status from RSE)
//          SetTimeoutRemind_3(ID_PIBRT_LABEL_2f1TIME,65535-refresh_time_2f1);//753   RSE_CCU(Status from RSE)
//          SetTimeoutRemind_3(ID_PIBRT_LABEL_2f2TIME,65535-refresh_time_2f2);//754   RSE_CCU(Status from RSE)


          //PIDS to PA to IDU
          SetTimeoutRemind_4(ID_PIBRT_LABEL_258TIME,65535-refresh_time_258);//600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_259TIME,65535-refresh_time_259);//601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_25aTIME,65535-refresh_time_25a);//602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_2bcTIME,65535-refresh_time_2bc);//700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
          SetTimeoutRemind_4(ID_PIBRT_LABEL_2bdTIME,65535-refresh_time_2bd);//701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

          //SUPC to IDU
          SetTimeoutRemind_5(ID_PIBRT_LABEL_1f5TIME,65535-refresh_time_1f5);//501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
          SetTimeoutRemind_5(ID_PIBRT_LABEL_1f6TIME,65535-refresh_time_1f6);//502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

          //MVB_STAT from LCU_RA to IDU
          SetTimeoutRemind_5(ID_PIBRT_LABEL_226TIME,65535-refresh_time_226);//550   MVB_STAT LCU_RA to IDU 16 1024

    /*
    SetTimeoutRemind_1(ID_PIBRT_LABEL_001TIME,65535-refresh_time_1);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_002TIME,65535-refresh_time_2);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_00FTIME,65535-refresh_time_f);

    SetTimeoutRemind_1(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_111TIME,65535-refresh_time_111);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_112TIME,65535-refresh_time_112);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_121TIME,65535-refresh_time_121);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_131TIME,65535-refresh_time_131);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_141TIME,65535-refresh_time_141);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_150TIME,65535-refresh_time_150);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_151TIME,65535-refresh_time_151);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_160TIME,65535-refresh_time_160);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_161TIME,65535-refresh_time_161);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_162TIME,65535-refresh_time_162);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_210TIME,65535-refresh_time_210);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_211TIME,65535-refresh_time_211);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_212TIME,65535-refresh_time_212);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_213TIME,65535-refresh_time_213);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_220TIME,65535-refresh_time_220);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_221TIME,65535-refresh_time_221);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_222TIME,65535-refresh_time_222);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_223TIME,65535-refresh_time_223);

if(TC2_HMI==1)
{
    SetTimeoutRemind_3(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313);
}
else
{
    SetTimeoutRemind_3(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323);

}
if(TC1_HMI==1)
{
    SetTimeoutRemind_3(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323);
}
else
{
    SetTimeoutRemind_3(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313);
}

    SetTimeoutRemind_1(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_512TIME,65535-refresh_time_512);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_513TIME,65535-refresh_time_513);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_514TIME,65535-refresh_time_514);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_515TIME,65535-refresh_time_515);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_522TIME,65535-refresh_time_522);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_523TIME,65535-refresh_time_523);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_524TIME,65535-refresh_time_524);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_525TIME,65535-refresh_time_525);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_530TIME,65535-refresh_time_530);


    SetTimeoutRemind_1(ID_PIBRT_LABEL_531TIME,65535-refresh_time_531);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_532TIME,65535-refresh_time_532);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_533TIME,65535-refresh_time_533);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_534TIME,65535-refresh_time_534);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_535TIME,65535-refresh_time_535);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_540TIME,65535-refresh_time_540);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_541TIME,65535-refresh_time_541);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_542TIME,65535-refresh_time_542);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_543TIME,65535-refresh_time_543);
    SetTimeoutRemind_5(ID_PIBRT_LABEL_544TIME,65535-refresh_time_544);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_545TIME,65535-refresh_time_545);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_612TIME,65535-refresh_time_612);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_622TIME,65535-refresh_time_622);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_630TIME,65535-refresh_time_630);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_631TIME,65535-refresh_time_631);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_632TIME,65535-refresh_time_632);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_640TIME,65535-refresh_time_640);

    SetTimeoutRemind_1(ID_PIBRT_LABEL_641TIME,65535-refresh_time_641);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_642TIME,65535-refresh_time_642);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_810TIME,65535-refresh_time_810);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_811TIME,65535-refresh_time_811);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_820TIME,65535-refresh_time_820);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_821TIME,65535-refresh_time_821);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_830TIME,65535-refresh_time_830);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_831TIME,65535-refresh_time_831);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_840TIME,65535-refresh_time_840);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_841TIME,65535-refresh_time_841);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_850TIME,65535-refresh_time_850);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_851TIME,65535-refresh_time_851);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_860TIME,65535-refresh_time_860);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_861TIME,65535-refresh_time_861);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_870TIME,65535-refresh_time_870);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_871TIME,65535-refresh_time_871);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_880TIME,65535-refresh_time_880);

    SetTimeoutRemind_4(ID_PIBRT_LABEL_881TIME,65535-refresh_time_881);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_890TIME,65535-refresh_time_890);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_891TIME,65535-refresh_time_891);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_8A0TIME,65535-refresh_time_8A0);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_8A1TIME,65535-refresh_time_8A1);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_8B0TIME,65535-refresh_time_8B0);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_8B1TIME,65535-refresh_time_8B1);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_8C0TIME,65535-refresh_time_8C0);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_8C1TIME,65535-refresh_time_8C1);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_930TIME,65535-refresh_time_930);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_940TIME,65535-refresh_time_940);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_950TIME,65535-refresh_time_950);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_960TIME,65535-refresh_time_960);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_A20TIME,65535-refresh_time_A20);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_B11TIME,65535-refresh_time_B11);

    SetTimeoutRemind_3(ID_PIBRT_LABEL_B20TIME ,65535-refresh_time_B20);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_B21TIME ,65535-refresh_time_B21);


    SetTimeoutRemind_3(ID_PIBRT_LABEL_C10TIME,65535-refresh_time_C10);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_C20TIME,65535-refresh_time_C20);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_118TIME,65535-refresh_time_118);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_128TIME,65535-refresh_time_128);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_138TIME,65535-refresh_time_138);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_148TIME,65535-refresh_time_148);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_158TIME,65535-refresh_time_158);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_168TIME,65535-refresh_time_168);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_218TIME,65535-refresh_time_218);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_228TIME,65535-refresh_time_228);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_308TIME,65535-refresh_time_308);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_309TIME,65535-refresh_time_309);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_318TIME,65535-refresh_time_318);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_328TIME,65535-refresh_time_328);
    SetTimeoutRemind_1(ID_PIBRT_LABEL_508TIME,65535-refresh_time_508);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_618TIME,65535-refresh_time_618);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_628TIME,65535-refresh_time_628);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_638TIME,65535-refresh_time_638);
    SetTimeoutRemind_0(ID_PIBRT_LABEL_648TIME,65535-refresh_time_648);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_718TIME,65535-refresh_time_718);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_728TIME,65535-refresh_time_728);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_809TIME,65535-refresh_time_809);

    SetTimeoutRemind_4(ID_PIBRT_LABEL_918TIME ,65535-refresh_time_918);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_928TIME ,65535-refresh_time_928);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_938TIME ,65535-refresh_time_938);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_948TIME ,65535-refresh_time_948);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_958TIME ,65535-refresh_time_958);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_968TIME ,65535-refresh_time_968);

    SetTimeoutRemind_0(ID_PIBRT_LABEL_A08TIME ,65535-refresh_time_A08);
    SetTimeoutRemind_4(ID_PIBRT_LABEL_B08TIME ,65535-refresh_time_B08);
    SetTimeoutRemind_3(ID_PIBRT_LABEL_C08TIME ,65535-refresh_time_C08);
*/


}
void CRefreshTimePage::SetTimeoutRemind_0(int id, int DataVal)
{
   if (DataVal>32)
   {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_1(int id, int DataVal)
{
   if (DataVal>64)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_2(int id, int DataVal)
{
   if (DataVal>128)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_3(int id, int DataVal)
{
   if (DataVal>256)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
         ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_4(int id, int DataVal)
{
   if (DataVal>512)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
         ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_5(int id, int DataVal)
{
   if (DataVal>1024)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
         ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetRefreshTimeLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}
