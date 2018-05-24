#ifndef CINSTRUCTIONTESTPAGE_H
#define CINSTRUCTIONTESTPAGE_H

#include "cpage.h"
#include "testbytedialog.h"
#include "databuffer.h"
#define ID_PICIT_ACCELERATETEST_START    0x1820
#define ID_PICIT_ACCELERATETEST_STOP     0x1821
#define ID_PICIT_ACCELERATETEST_100      0x1822
#define ID_PICIT_ACCELERATETEST_60       0x1823
#define ID_PICIT_ACCELERATETEST_100_2      0x1824
#define ID_PICIT_ACCELERATETEST_60_2       0x1825
#define ID_PICIT_ACCELERATETEST_100_3      0x1826
#define ID_PICIT_ACCELERATETEST_60_3       0x1827
#define ID_PICIT_ACCELERATETEST_100_4      0x1828
#define ID_PICIT_ACCELERATETEST_60_4       0x1829
#define ID_PICIT_ACCELERATETEST_100_1    0x1830
#define ID_PICIT_ACCELERATETEST_60_1     0x1831


#define ID_PICIT_DECELERATETEST_START             0x1832
#define ID_PICIT_DECELERATETEST_STOP              0x1833
#define ID_PICIT_DECELERATETEST_STARTSPEED        0x1834
#define ID_PICIT_DECELERATETEST_DECELERATION      0x1835
#define ID_PICIT_DECELERATETEST_BRKDISTANCE       0x1836

#define ID_PICIT_DECELERATETEST_STARTSPEED_1      0x1837
#define ID_PICIT_DECELERATETEST_DECELERATION_1    0x1838
#define ID_PICIT_DECELERATETEST_BRKDISTANCE_1     0x1839

#define ID_PICIT_DECELERATETEST_STARTSPEED_2      0x1840
#define ID_PICIT_DECELERATETEST_DECELERATION_2    0x1841
#define ID_PICIT_DECELERATETEST_BRKDISTANCE_2     0x1842
#define ID_PICIT_DECELERATETEST_STARTSPEED_3      0x1843
#define ID_PICIT_DECELERATETEST_DECELERATION_3    0x1844
#define ID_PICIT_DECELERATETEST_BRKDISTANCE_3     0x1845
#define ID_PICIT_DECELERATETEST_STARTSPEED_4      0x1846
#define ID_PICIT_DECELERATETEST_DECELERATION_4    0x1847
#define ID_PICIT_DECELERATETEST_BRKDISTANCE_4     0x1848


/*
#define ID_PICIT_TEST_BUTTON_00     0x1801
#define ID_PICIT_TEST_BUTTON_01     0x1802
#define ID_PICIT_TEST_BUTTON_02     0x1803
#define ID_PICIT_TEST_BUTTON_03     0x1804
#define ID_PICIT_TEST_BUTTON_04     0x1805
#define ID_PICIT_TEST_BUTTON_05     0x1806
#define ID_PICIT_TEST_BUTTON_06     0x1807
#define ID_PICIT_TEST_BUTTON_07     0x1808
#define ID_PICIT_TEST_BUTTON_08     0x1809
#define ID_PICIT_TEST_BUTTON_09     0x180A
#define ID_PICIT_TEST_BUTTON_10     0x180B
#define ID_PICIT_TEST_BUTTON_11     0x180C
#define ID_PICIT_TEST_BUTTON_12     0x180D
#define ID_PICIT_TEST_BUTTON_13     0x180E
#define ID_PICIT_TEST_BUTTON_14     0x180F
#define ID_PICIT_TEST_BUTTON_15     0x1810
#define ID_PICIT_TEST_BUTTON_16     0x1811
#define ID_PICIT_TEST_BUTTON_17     0x1812
#define ID_PICIT_TEST_BUTTON_18     0x1813
#define ID_PICIT_TEST_BUTTON_19     0x1814
#define ID_PICIT_TEST_BUTTON_20     0x1815
#define ID_PICIT_TEST_BUTTON_21     0x1816
#define ID_PICIT_TEST_BUTTON_22     0x1817
#define ID_PICIT_TEST_BUTTON_23     0x1818
#define ID_PICIT_TEST_BUTTON_24     0x1819
#define ID_PICIT_TEST_BUTTON_25     0x181A
#define ID_PICIT_TEST_BUTTON_26     0x181B
#define ID_PICIT_TEST_BUTTON_27     0x181C
#define ID_PICIT_TEST_BUTTON_28     0x181D
 */
#define ID_PICIT_TEST_BUTTON_QUIT   0x181F
#define ID_PICIT_TEST_BUTTON_STOPALL 0X1910
#define ID_PICIT_TEST_BUTTON_START 0X1911
#define ID_PICIT_TEST_BUTTON_TRAMODE 0X1912
#define ID_PICIT_TEST_BUTTON_BRAMODE 0X1913
#define ID_PICIT_TEST_BUTTON_TandBMODE 0X1914

class CInstructionTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CInstructionTestPage)
public:
    CInstructionTestPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    bool SetButtonDown(int nID);
    bool SetButtonUp(int nID);
    void OnCommonQuitButtonDown();
    void OnTESTtractionDown();
    void OnTESTbrakeDown();
    void OnTESTtractionandbrakeDown();
    void OnTESTStartDown();
    void OnTESTStopDown();
    void OnTESTStopUp();
    bool m_AccTestStart;
    bool m_AccTestStop;
    bool m_DccTestStart;
    bool m_DccTestStop;

    bool m_TestStart;
    int m_Testmode;

    /*
    void OnTestButton00Down();
    void OnTestButton01Down();
    void OnTestButton02Down();
    void OnTestButton03Down();
    void OnTestButton04Down();
    void OnTestButton05Down();
    void OnTestButton06Down();
    void OnTestButton07Down();
    void OnTestButton08Down();
    void OnTestButton09Down();
    void OnTestButton10Down();
    void OnTestButton11Down();
    void OnTestButton12Down();
    void OnTestButton13Down();
    void OnTestButton14Down();
    void OnTestButton15Down();
    void OnTestButton16Down();
    void OnTestButton17Down();
    void OnTestButton18Down();
    void OnTestButton19Down();
    void OnTestButton20Down();
    void OnTestButton21Down();
    void OnTestButton22Down();
    void OnTestButton23Down();
    void OnTestButton24Down();
    void OnTestButton25Down();
    void OnTestButton26Down();
    void OnTestButton27Down();
    void OnTestButton28Down();
    */
};

#endif // CINSTRUCTIONTESTPAGE_H
