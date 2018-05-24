#ifndef CVERSIONPAGE_H
#define CVERSIONPAGE_H

#include "cpage.h"
#include "databuffer.h"

#define ID_PICVERSION_BUTTON_QUIT            0x2200
#define ID_PICVERSION_BUTTON_MC1            0x21FE
#define ID_PICVERSION_BUTTON_MC2            0x21FF

#define ID_PICVERSION_LABEL_1_0_1            0x2201
#define ID_PICVERSION_LABEL_1_0_2            0x2202
#define ID_PICVERSION_LABEL_1_0_3            0x2203
#define ID_PICVERSION_LABEL_1_0_4            0x2204
#define ID_PICVERSION_LABEL_1_0_5            0x2205
#define ID_PICVERSION_LABEL_1_0_6            0x2206
#define ID_PICVERSION_LABEL_1_0_7            0x2207
#define ID_PICVERSION_LABEL_1_0_8            0x2208
#define ID_PICVERSION_LABEL_1_0_9            0x2209
#define ID_PICVERSION_LABEL_1_0_10           0x220a
#define ID_PICVERSION_LABEL_1_0_11           0x220b
#define ID_PICVERSION_LABEL_1_0_12           0x220c
#define ID_PICVERSION_LABEL_1_0_13           0x220d

#define ID_PICVERSION_LABEL_1_1_1            0x2211
#define ID_PICVERSION_LABEL_1_1_2            0x2212
#define ID_PICVERSION_LABEL_1_1_3            0x2213
#define ID_PICVERSION_LABEL_1_1_4            0x2214
#define ID_PICVERSION_LABEL_1_1_5            0x2215
#define ID_PICVERSION_LABEL_1_1_6            0x2216
#define ID_PICVERSION_LABEL_1_1_7            0x2217
#define ID_PICVERSION_LABEL_1_1_8            0x2218
#define ID_PICVERSION_LABEL_1_1_9            0x2219
#define ID_PICVERSION_LABEL_1_1_10           0x221a
#define ID_PICVERSION_LABEL_1_1_11           0x221b
#define ID_PICVERSION_LABEL_1_1_12           0x221c
#define ID_PICVERSION_LABEL_1_1_13           0x221d

#define ID_PICVERSION_LABEL_1_2_1            0x2221
#define ID_PICVERSION_LABEL_1_2_2            0x2222
#define ID_PICVERSION_LABEL_1_2_3            0x2223
#define ID_PICVERSION_LABEL_1_2_4            0x2224
#define ID_PICVERSION_LABEL_1_2_5            0x2225
#define ID_PICVERSION_LABEL_1_2_6            0x2226
#define ID_PICVERSION_LABEL_1_2_7            0x2227
#define ID_PICVERSION_LABEL_1_2_8            0x2228
#define ID_PICVERSION_LABEL_1_2_9            0x2229
#define ID_PICVERSION_LABEL_1_2_10           0x222a
#define ID_PICVERSION_LABEL_1_2_11           0x222b
#define ID_PICVERSION_LABEL_1_2_12           0x222c
#define ID_PICVERSION_LABEL_1_2_13           0x222d

#define ID_PICVERSION_LABEL_2_0_1            0x2301
#define ID_PICVERSION_LABEL_2_0_2            0x2302
#define ID_PICVERSION_LABEL_2_0_3            0x2303
#define ID_PICVERSION_LABEL_2_0_4            0x2304
#define ID_PICVERSION_LABEL_2_0_5            0x2305
#define ID_PICVERSION_LABEL_2_0_6            0x2306
#define ID_PICVERSION_LABEL_2_0_7            0x2307
#define ID_PICVERSION_LABEL_2_0_8            0x2308
#define ID_PICVERSION_LABEL_2_0_9            0x2309
#define ID_PICVERSION_LABEL_2_0_10           0x230a
#define ID_PICVERSION_LABEL_2_0_11           0x230b
#define ID_PICVERSION_LABEL_2_0_12           0x230c
#define ID_PICVERSION_LABEL_2_0_13           0x230d

#define ID_PICVERSION_LABEL_2_1_1            0x2311
#define ID_PICVERSION_LABEL_2_1_2            0x2312
#define ID_PICVERSION_LABEL_2_1_3            0x2313
#define ID_PICVERSION_LABEL_2_1_4            0x2314
#define ID_PICVERSION_LABEL_2_1_5            0x2315
#define ID_PICVERSION_LABEL_2_1_6            0x2316
#define ID_PICVERSION_LABEL_2_1_7            0x2317
#define ID_PICVERSION_LABEL_2_1_8            0x2318
#define ID_PICVERSION_LABEL_2_1_9            0x2319
#define ID_PICVERSION_LABEL_2_1_10           0x231a
#define ID_PICVERSION_LABEL_2_1_11           0x231b
#define ID_PICVERSION_LABEL_2_1_12           0x231c
#define ID_PICVERSION_LABEL_2_1_13           0x231d

#define ID_PICVERSION_LABEL_2_2_1            0x2321
#define ID_PICVERSION_LABEL_2_2_2            0x2322
#define ID_PICVERSION_LABEL_2_2_3            0x2323
#define ID_PICVERSION_LABEL_2_2_4            0x2324
#define ID_PICVERSION_LABEL_2_2_5            0x2325
#define ID_PICVERSION_LABEL_2_2_6            0x2326
#define ID_PICVERSION_LABEL_2_2_7            0x2327
#define ID_PICVERSION_LABEL_2_2_8            0x2328
#define ID_PICVERSION_LABEL_2_2_9            0x2329
#define ID_PICVERSION_LABEL_2_2_10           0x232a
#define ID_PICVERSION_LABEL_2_2_11           0x232b
#define ID_PICVERSION_LABEL_2_2_12           0x232c
#define ID_PICVERSION_LABEL_2_2_13           0x232d

#define ID_PICVERSION_LABEL_3_0_1            0x2401
#define ID_PICVERSION_LABEL_3_0_2            0x2402
#define ID_PICVERSION_LABEL_3_0_3            0x2403
#define ID_PICVERSION_LABEL_3_0_4            0x2404
#define ID_PICVERSION_LABEL_3_0_5            0x2405
#define ID_PICVERSION_LABEL_3_0_6            0x2406
#define ID_PICVERSION_LABEL_3_0_7            0x2407
#define ID_PICVERSION_LABEL_3_0_8            0x2408
#define ID_PICVERSION_LABEL_3_0_9            0x2409
#define ID_PICVERSION_LABEL_3_0_10           0x240a
#define ID_PICVERSION_LABEL_3_0_11           0x240b
#define ID_PICVERSION_LABEL_3_0_12           0x240c
#define ID_PICVERSION_LABEL_3_0_13           0x240d

#define ID_PICVERSION_LABEL_3_1_1            0x2411
#define ID_PICVERSION_LABEL_3_1_2            0x2412
#define ID_PICVERSION_LABEL_3_1_3            0x2413
#define ID_PICVERSION_LABEL_3_1_4            0x2414
#define ID_PICVERSION_LABEL_3_1_5            0x2415
#define ID_PICVERSION_LABEL_3_1_6            0x2416
#define ID_PICVERSION_LABEL_3_1_7            0x2417
#define ID_PICVERSION_LABEL_3_1_8            0x2418
#define ID_PICVERSION_LABEL_3_1_9            0x2419
#define ID_PICVERSION_LABEL_3_1_10           0x241a
#define ID_PICVERSION_LABEL_3_1_11           0x241b
#define ID_PICVERSION_LABEL_3_1_12           0x241c
#define ID_PICVERSION_LABEL_3_1_13           0x241d

#define ID_PICVERSION_LABEL_3_2_1            0x2421
#define ID_PICVERSION_LABEL_3_2_2            0x2422
#define ID_PICVERSION_LABEL_3_2_3            0x2423
#define ID_PICVERSION_LABEL_3_2_4            0x2424
#define ID_PICVERSION_LABEL_3_2_5            0x2425
#define ID_PICVERSION_LABEL_3_2_6            0x2426
#define ID_PICVERSION_LABEL_3_2_7            0x2427
#define ID_PICVERSION_LABEL_3_2_8            0x2428
#define ID_PICVERSION_LABEL_3_2_9            0x2429
#define ID_PICVERSION_LABEL_3_2_10           0x242a
#define ID_PICVERSION_LABEL_3_2_11           0x242b
#define ID_PICVERSION_LABEL_3_2_12           0x242c
#define ID_PICVERSION_LABEL_3_2_13           0x242d
#define ID_PICVERSION_BUTTON_REBOOT          0x242E
#define ID_PICVERSION_BUTTON_SCREEN          0x242F

class CVersionPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CVersionPage)
public:
    CVersionPage();
protected:
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnInitPage();
    void OnUpdatePage();
    void setDeviceSt(int n_ID,bool RLD,bool LET);
    void setDeviceSw(int n_ID,int sfVersion);
    void OnMC1ButtonDown();
    void OnMC2ButtonDown();
    void OnrebootButtonDown();
    void OnScreenBtunDown();
    int m_cnt ;

};

#endif // CVERSIONPAGE_H
