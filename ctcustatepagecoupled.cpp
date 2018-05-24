#include "ctcustatepagecoupled.h"
int m = 240;

ROMDATA g_PicRom_TcuStatePageCoupled[] =
{
    /*string                font                            rc                       foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
//  {"down.png",           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEUP},
  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70 ,60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_CARNUM},
  {"bjcar.png",    D_DEFAULT_FONT,      QRect(150, 75,240, 50),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
  {"bjcar.png",    D_DEFAULT_FONT,      QRect(390, 75,240, 50),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
//  {"",                   D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            IDLABEL_TCUSTATEPAGE        },
  //{QSTR("退出重联"),           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::black,                  Qt::black,                  CONTROL_BUTTON,        ID_TCUSTATE_COUPLECHANGE},


  {"",                   D_DEFAULT_FONT,      QRect( 50,125,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //{"",                   D_DEFAULT_FONT,      QRect(210,145,410, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,165,580,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,185,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,205,580,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,225,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,245,580,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,265,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,285,580,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,305,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,325,580,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,345,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,365,580,  1),                  Qt::cyan,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,385,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 50,405,580,  1),                  Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(150,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(270,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(390,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(510,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(630,125,  1,160),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


  {QSTR("显示项目"),              D_FONT(14),      QRect( 55,126,90, 38),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,166,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_2_1                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,186,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_3_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,206,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_4_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,226,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_5_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,246,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_6_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,266,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_7_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,246,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_8_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,306,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_9_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,326,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_10_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,346,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_11_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,366,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_12_1                },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,386,90, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_13_1                },


  {"MA",                 D_DEFAULT_FONT,      QRect(155,126,110, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB",                 D_DEFAULT_FONT,      QRect(275,126,110, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MA1",                 D_FONT(8),      QRect(151,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MA2",                 D_FONT(8),      QRect(211,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB1",                 D_FONT(8),      QRect(271,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB2",                 D_FONT(8),      QRect(331,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

  {"",                 D_DEFAULT_FONT,      QRect(150,146,480, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(210,146,1, 140),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(330,146,1, 140),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

  //red area
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_12               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(151,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_13               },

    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7               },
    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_12               },
//    {QSTR(""),         D_DEFAULT_FONT,      QRect(271,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_13               },

{QSTR(""),         D_DEFAULT_FONT,      QRect(211,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(211,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(211,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(211,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(211,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(211,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_12               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(211,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_13               },

{QSTR(""),         D_DEFAULT_FONT,      QRect(331,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(331,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(331,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(331,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(331,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7               },
{QSTR(""),         D_DEFAULT_FONT,      QRect(331,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_12               },
//{QSTR(""),         D_DEFAULT_FONT,      QRect(331,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_13               },



  /**/
{"MA",                 D_DEFAULT_FONT,      QRect( m+155,126,110, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MB",                 D_DEFAULT_FONT,      QRect( m+275,126,110, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MA1",                 D_FONT(8),      QRect( m+151,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MA2",                 D_FONT(8),      QRect( m+211,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MB1",                 D_FONT(8),      QRect( m+271,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MB2",                 D_FONT(8),      QRect( m+331,146,58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",                 D_DEFAULT_FONT,      QRect( m+150,146,240, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
{"",                 D_DEFAULT_FONT,      QRect( m+210,146,1, 140),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
{"",                 D_DEFAULT_FONT,      QRect( m+330,146,1, 140),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

//red area
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_12_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+151,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_13_TBC         },

  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7_TBC         },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_12_TBC         },
//  {QSTR(""),         D_DEFAULT_FONT,      QRect( m+271,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_13_TBC         },

{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_12_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+211,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_13_TBC         },

{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,166, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,186, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,206, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,226, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,266, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7_TBC         },
{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,246, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,306, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,326, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,346, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,366, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_12_TBC         },
//{QSTR(""),         D_DEFAULT_FONT,      QRect( m+331,386, 58, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_13_TBC         },





  D_LAYER1_NAVIGATION_BAR
};
int g_TcuStatePageCoupledRomLen = sizeof(g_PicRom_TcuStatePageCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CTcuStatePageCoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
       // ON_LBUTTONDOWN(ID_TCUSTATE_COUPLECHANGE, OnDownButtonDown)
//        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_TCUSTATE_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_TCUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()
CTcuStatePageCoupled::CTcuStatePageCoupled()
{
    pageNo = TCU_MIN_PAGE;
    formerPageNo = 0;
}
void CTcuStatePageCoupled::OnInit()
{
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    //((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_12_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_13_1))->SetAlignment(Qt::AlignLeft);

}
void CTcuStatePageCoupled::OnUpdatePage()
{


   if( m_TrainCoupleActive == 1 )
    // if(0)
    {
        ChangePage(PAGE_ROM_INDEX_TCUSTATE);
        return;
    }

   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("电机频率"));
   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("滤波电压"));
   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("线电流"));
   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("电机电流"));
   //((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("牵引力请求"));
   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("电机扭矩"));
   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("电机温度"));
//   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("制动斩波电流"));
//   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR("逆变器频率"));
//   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR("调制比"));
//   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_12_1))->SetCtrlText(QSTR("斩波占空比"));
//   ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_13_1))->SetCtrlText(QSTR("实际制动电阻"));

switch(m_TestNum)
{
case 3://重联，本车为主
    //Car_Enabled
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText(QString::number((float)(TCU1CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText(QString::number((float)TCU1CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText(QString::number((float)TCU1CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText(QString::number((float)TCU1CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText(QString::number((float)TCU1CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText(QString::number((float)TCU1CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText(QString::number((float)(TCU1CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkChopperCur_S16*0.1,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText(QString::number((float)TCU1CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlText(QString::number((float)TCU1CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_12))->SetCtrlText(QString::number((float)TCU1CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_13))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText(QString::number((float)(TCU2CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText(QString::number((float)TCU2CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText(QString::number((float)TCU2CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText(QString::number((float)TCU2CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText(QString::number((float)TCU2CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText(QString::number((float)TCU2CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText(QString::number((float)(TCU2CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText(QString::number((float)TCU2CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlText(QString::number((float)TCU2CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_12))->SetCtrlText(QString::number((float)TCU2CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_13))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText(QString::number((float)(TCU3CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText(QString::number((float)TCU3CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText(QString::number((float)TCU3CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText(QString::number((float)TCU3CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText(QString::number((float)TCU3CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText(QString::number((float)TCU3CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText(QString::number((float)(TCU3CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText(QString::number((float)TCU3CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlText(QString::number((float)TCU3CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_12))->SetCtrlText(QString::number((float)TCU3CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_13))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText(QString::number((float)(TCU4CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText(QString::number((float)TCU4CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText(QString::number((float)TCU4CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText(QString::number((float)TCU4CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText(QString::number((float)TCU4CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText(QString::number((float)TCU4CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText(QString::number((float)(TCU4CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText(QString::number((float)TCU4CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlText(QString::number((float)TCU4CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_12))->SetCtrlText(QString::number((float)TCU4CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_13))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkResistor_U16));


    //Car_Not_Enabled
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor1_S8_Slave1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol1_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur1_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur1_U8_Slave1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff1_U8_Slave1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq1_S8_Slave2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor1Temp_U8_Slave2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_12_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_13_TBC ))->SetCtrlText("--");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor2_S8_Slave1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol2_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur2_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur2_U8_Slave1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff2_U8_Slave1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq2_S8_Slave2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor2Temp_U8_Slave2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_12_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_13_TBC ))->SetCtrlText("--");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor3_S8_Slave1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol3_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur3_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur3_U8_Slave1*800/255,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff3_U8_Slave1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq3_S8_Slave2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor3Temp_U8_Slave2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_12_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_13_TBC ))->SetCtrlText("--");


    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor4_S8_Slave1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol4_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur4_S8_Slave1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur4_U8_Slave1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff4_U8_Slave1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq4_S8_Slave2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor4Temp_U8_Slave2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_12_TBC ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_13_TBC ))->SetCtrlText("--");


    break;
case 4://重联，本车为从


    //Car_Enabled
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2 ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor1_S8_Master1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3 ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol1_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4 ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur1_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5 ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur1_U8_Master1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6 ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff1_U8_Master1*20/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7 ))->SetCtrlText(QString::number((float)-30*float)(20/127),1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq1_S8_Master2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor1Temp_U8_Master2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_12 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_13 ))->SetCtrlText("--");


    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2 ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor2_S8_Master1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3 ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol2_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4 ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur2_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5 ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur2_U8_Master1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6 ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff2_U8_Master1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq2_S8_Master2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor2Temp_U8_Master2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_12 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_13 ))->SetCtrlText("--");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2 ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor3_S8_Master1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3 ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol3_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4 ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur3_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5 ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur3_U8_Master1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6 ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff3_U8_Master1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq3_S8_Master2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor3Temp_U8_Master2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_12 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_13 ))->SetCtrlText("--");


    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2 ))->SetCtrlText(QString::number((float)R2_MVB_2_FreqMotor4_S8_Master1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3 ))->SetCtrlText(QString::number((float)R2_MVB_2_FilterVol4_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4 ))->SetCtrlText(QString::number((float)R2_MVB_2_LineCur4_S8_Master1*1000/127,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5 ))->SetCtrlText(QString::number((float)R2_MVB_2_MoterCur4_U8_Master1*800/255,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6 ))->SetCtrlText(QString::number((float)R2_MVB_2_AppliedEff4_U8_Master1*20/255,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotorTorq4_S8_Master2*20/127,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8 ))->SetCtrlText(QString::number((float)R2_MVB_2_TcuMotor4Temp_U8_Master2-40,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_12 ))->SetCtrlText("--");
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_13 ))->SetCtrlText("--");


    //Car_Not_Enabled
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC ))->SetCtrlText(QString::number((float)(TCU1CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC ))->SetCtrlText(QString::number((float)(TCU1CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_12_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_13_TBC ))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC ))->SetCtrlText(QString::number((float)(TCU2CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC ))->SetCtrlText(QString::number((float)(TCU2CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_12_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_13_TBC ))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC ))->SetCtrlText(QString::number((float)(TCU3CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC ))->SetCtrlText(QString::number((float)(TCU3CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_12_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_13_TBC ))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkResistor_U16));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC ))->SetCtrlText(QString::number((float)(TCU4CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_MotorCurrent_S16*0.1,1,0));
    //((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC ))->SetCtrlText(QString::number((float)(TCU4CCU_3_Tmot1_S16)/10,1,0));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkChopperCur_S16*0.1));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_InverterFreq_U16*0.01));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_ModulatRatio_U16));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_12_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_ChopperDutyCyc_U16*13107/65535));
//    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_13_TBC ))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkResistor_U16));


    break;
default:
    break;
}


}
void CTcuStatePageCoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CTcuStatePageCoupled::OnDownButtonDown()
{
     ChangePage(PAGE_ROM_INDEX_TCUSTATE);

//    if( pageNo<TCU_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downpress.png");
     //    CBitmapButton *bitmapButton;
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
}

void CTcuStatePageCoupled::OnDownButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo<TCU_MAX_PAGE )
//    {
//        pageNo++;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("down.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==TCU_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
//    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CTcuStatePageCoupled::OnUpButtonDown()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>TCU_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("uppress.png");
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//    }
}

void CTcuStatePageCoupled::OnUpButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>TCU_MIN_PAGE )
//    {
//        pageNo0;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("up.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==TCU_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CTcuStatePageCoupled::OnInitPage()
{
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetAlignment(Qt::AlignLeft);///
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
}
