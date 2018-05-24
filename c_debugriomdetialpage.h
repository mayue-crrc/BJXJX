#ifndef C_DEBUGRIOMDETIALPAGE_H
#define C_DEBUGRIOMDETIALPAGE_H

#include "cpage.h"
#include "databuffer.h"

#define IDLABEL_DEBUGRIOMDETIAL_1            0x0901
#define IDLABEL_DEBUGRIOMDETIAL_2            0x0902
#define IDLABEL_DEBUGRIOMDETIAL_3            0x0903

#define IDLABEL_DEBUGRIOMDETIAL_0_1            0x0910
#define IDLABEL_DEBUGRIOMDETIAL_1_1            0x0911
#define IDLABEL_DEBUGRIOMDETIAL_2_1            0x0912
#define IDLABEL_DEBUGRIOMDETIAL_3_1            0x0913
#define IDLABEL_DEBUGRIOMDETIAL_4_1            0x0914
#define IDLABEL_DEBUGRIOMDETIAL_5_1            0x0915
#define IDLABEL_DEBUGRIOMDETIAL_6_1            0x0916
#define IDLABEL_DEBUGRIOMDETIAL_7_1            0x0917
#define IDLABEL_DEBUGRIOMDETIAL_8_1            0x0918
#define IDLABEL_DEBUGRIOMDETIAL_9_1            0x0919
#define IDLABEL_DEBUGRIOMDETIAL_10_1           0x091a
#define IDLABEL_DEBUGRIOMDETIAL_11_1           0x091b
#define IDLABEL_DEBUGRIOMDETIAL_12_1           0x091c
#define IDLABEL_DEBUGRIOMDETIAL_13_1           0x091d
#define IDLABEL_DEBUGRIOMDETIAL_14_1           0x091e
#define IDLABEL_DEBUGRIOMDETIAL_15_1           0x091f
#define IDLABEL_DEBUGRIOMDETIAL_16_1           0x0920
#define IDLABEL_DEBUGRIOMDETIAL_17_1           0x0921
#define IDLABEL_DEBUGRIOMDETIAL_18_1           0x0922
#define IDLABEL_DEBUGRIOMDETIAL_19_1           0x0923
#define IDLABEL_DEBUGRIOMDETIAL_20_1           0x0924
#define IDLABEL_DEBUGRIOMDETIAL_21_1           0x0925
#define IDLABEL_DEBUGRIOMDETIAL_22_1           0x0926
#define IDLABEL_DEBUGRIOMDETIAL_23_1           0x0927
#define IDLABEL_DEBUGRIOMDETIAL_24_1           0x0928

#define IDLABEL_DEBUGRIOMDETIAL_0_A_1           0x0930
#define IDLABEL_DEBUGRIOMDETIAL_1_A_1           0x0931
#define IDLABEL_DEBUGRIOMDETIAL_2_A_1           0x0932
#define IDLABEL_DEBUGRIOMDETIAL_3_A_1           0x0933
#define IDLABEL_DEBUGRIOMDETIAL_4_A_1           0x0934
#define IDLABEL_DEBUGRIOMDETIAL_5_A_1           0x0935
#define IDLABEL_DEBUGRIOMDETIAL_6_A_1           0x0936
#define IDLABEL_DEBUGRIOMDETIAL_7_A_1           0x0937
#define IDLABEL_DEBUGRIOMDETIAL_8_A_1           0x0938
#define IDLABEL_DEBUGRIOMDETIAL_9_A_1           0x0939
#define IDLABEL_DEBUGRIOMDETIAL_10_A_1          0x093a
#define IDLABEL_DEBUGRIOMDETIAL_11_A_1          0x093b
#define IDLABEL_DEBUGRIOMDETIAL_12_A_1          0x093c
#define IDLABEL_DEBUGRIOMDETIAL_13_A_1          0x093d
#define IDLABEL_DEBUGRIOMDETIAL_14_A_1          0x093e
#define IDLABEL_DEBUGRIOMDETIAL_15_A_1          0x093f
#define IDLABEL_DEBUGRIOMDETIAL_16_A_1          0x0940
#define IDLABEL_DEBUGRIOMDETIAL_17_A_1          0x0941
#define IDLABEL_DEBUGRIOMDETIAL_18_A_1          0x0942
#define IDLABEL_DEBUGRIOMDETIAL_19_A_1          0x0943
#define IDLABEL_DEBUGRIOMDETIAL_20_A_1          0x0944
#define IDLABEL_DEBUGRIOMDETIAL_21_A_1          0x0945
#define IDLABEL_DEBUGRIOMDETIAL_22_A_1          0x0946
#define IDLABEL_DEBUGRIOMDETIAL_23_A_1          0x0947
#define IDLABEL_DEBUGRIOMDETIAL_24_A_1          0x0948

#define IDLABEL_DEBUGRIOMDETIAL_0_B_1           0x0950
#define IDLABEL_DEBUGRIOMDETIAL_1_B_1           0x0951
#define IDLABEL_DEBUGRIOMDETIAL_2_B_1           0x0952
#define IDLABEL_DEBUGRIOMDETIAL_3_B_1           0x0953
#define IDLABEL_DEBUGRIOMDETIAL_4_B_1           0x0954
#define IDLABEL_DEBUGRIOMDETIAL_5_B_1           0x0955
#define IDLABEL_DEBUGRIOMDETIAL_6_B_1           0x0956
#define IDLABEL_DEBUGRIOMDETIAL_7_B_1           0x0957
#define IDLABEL_DEBUGRIOMDETIAL_8_B_1           0x0958
#define IDLABEL_DEBUGRIOMDETIAL_9_B_1           0x0959
#define IDLABEL_DEBUGRIOMDETIAL_10_B_1          0x095a
#define IDLABEL_DEBUGRIOMDETIAL_11_B_1          0x095b
#define IDLABEL_DEBUGRIOMDETIAL_12_B_1          0x095c
#define IDLABEL_DEBUGRIOMDETIAL_13_B_1          0x095d
#define IDLABEL_DEBUGRIOMDETIAL_14_B_1          0x095e
#define IDLABEL_DEBUGRIOMDETIAL_15_B_1          0x095f
#define IDLABEL_DEBUGRIOMDETIAL_16_B_1          0x0920
#define IDLABEL_DEBUGRIOMDETIAL_17_B_1          0x0961
#define IDLABEL_DEBUGRIOMDETIAL_18_B_1          0x0962
#define IDLABEL_DEBUGRIOMDETIAL_19_B_1          0x0963
#define IDLABEL_DEBUGRIOMDETIAL_20_B_1          0x0964
#define IDLABEL_DEBUGRIOMDETIAL_21_B_1          0x0965
#define IDLABEL_DEBUGRIOMDETIAL_22_B_1          0x0966
#define IDLABEL_DEBUGRIOMDETIAL_23_B_1          0x0967
#define IDLABEL_DEBUGRIOMDETIAL_24_B_1          0x0968

#define IDLABEL_DEBUGRIOMDETIAL_0_2            0x0a10
#define IDLABEL_DEBUGRIOMDETIAL_1_2            0x0a11
#define IDLABEL_DEBUGRIOMDETIAL_2_2            0x0a12
#define IDLABEL_DEBUGRIOMDETIAL_3_2            0x0a13
#define IDLABEL_DEBUGRIOMDETIAL_4_2            0x0a14
#define IDLABEL_DEBUGRIOMDETIAL_5_2            0x0a15
#define IDLABEL_DEBUGRIOMDETIAL_6_2            0x0a16
#define IDLABEL_DEBUGRIOMDETIAL_7_2            0x0a17
#define IDLABEL_DEBUGRIOMDETIAL_8_2            0x0a18
#define IDLABEL_DEBUGRIOMDETIAL_9_2            0x0a19
#define IDLABEL_DEBUGRIOMDETIAL_10_2           0x0a1a
#define IDLABEL_DEBUGRIOMDETIAL_11_2           0x0a1b
#define IDLABEL_DEBUGRIOMDETIAL_12_2           0x0a1c
#define IDLABEL_DEBUGRIOMDETIAL_13_2           0x0a1d
#define IDLABEL_DEBUGRIOMDETIAL_14_2           0x0a1e
#define IDLABEL_DEBUGRIOMDETIAL_15_2           0x0a1f
#define IDLABEL_DEBUGRIOMDETIAL_16_2           0x0a20
#define IDLABEL_DEBUGRIOMDETIAL_17_2           0x0a21
#define IDLABEL_DEBUGRIOMDETIAL_18_2           0x0a22
#define IDLABEL_DEBUGRIOMDETIAL_19_2           0x0a23
#define IDLABEL_DEBUGRIOMDETIAL_20_2           0x0a24
#define IDLABEL_DEBUGRIOMDETIAL_21_2           0x0a25
#define IDLABEL_DEBUGRIOMDETIAL_22_2           0x0a26
#define IDLABEL_DEBUGRIOMDETIAL_23_2           0x0a27
#define IDLABEL_DEBUGRIOMDETIAL_24_2           0x0a28

#define IDLABEL_DEBUGRIOMDETIAL_0_A_2           0x0a30
#define IDLABEL_DEBUGRIOMDETIAL_1_A_2           0x0a31
#define IDLABEL_DEBUGRIOMDETIAL_2_A_2           0x0a32
#define IDLABEL_DEBUGRIOMDETIAL_3_A_2           0x0a33
#define IDLABEL_DEBUGRIOMDETIAL_4_A_2           0x0a34
#define IDLABEL_DEBUGRIOMDETIAL_5_A_2           0x0a35
#define IDLABEL_DEBUGRIOMDETIAL_6_A_2           0x0a36
#define IDLABEL_DEBUGRIOMDETIAL_7_A_2           0x0a37
#define IDLABEL_DEBUGRIOMDETIAL_8_A_2           0x0a38
#define IDLABEL_DEBUGRIOMDETIAL_9_A_2           0x0a39
#define IDLABEL_DEBUGRIOMDETIAL_10_A_2          0x0a3a
#define IDLABEL_DEBUGRIOMDETIAL_11_A_2          0x0a3b
#define IDLABEL_DEBUGRIOMDETIAL_12_A_2          0x0a3c
#define IDLABEL_DEBUGRIOMDETIAL_13_A_2          0x0a3d
#define IDLABEL_DEBUGRIOMDETIAL_14_A_2          0x0a3e
#define IDLABEL_DEBUGRIOMDETIAL_15_A_2          0x0a3f
#define IDLABEL_DEBUGRIOMDETIAL_16_A_2          0x0a40
#define IDLABEL_DEBUGRIOMDETIAL_17_A_2          0x0a41
#define IDLABEL_DEBUGRIOMDETIAL_18_A_2          0x0a42
#define IDLABEL_DEBUGRIOMDETIAL_19_A_2          0x0a43
#define IDLABEL_DEBUGRIOMDETIAL_20_A_2          0x0a44
#define IDLABEL_DEBUGRIOMDETIAL_21_A_2          0x0a45
#define IDLABEL_DEBUGRIOMDETIAL_22_A_2          0x0a46
#define IDLABEL_DEBUGRIOMDETIAL_23_A_2          0x0a47
#define IDLABEL_DEBUGRIOMDETIAL_24_A_2          0x0a48

#define IDLABEL_DEBUGRIOMDETIAL_0_B_2           0x0a50
#define IDLABEL_DEBUGRIOMDETIAL_1_B_2           0x0a51
#define IDLABEL_DEBUGRIOMDETIAL_2_B_2           0x0a52
#define IDLABEL_DEBUGRIOMDETIAL_3_B_2           0x0a53
#define IDLABEL_DEBUGRIOMDETIAL_4_B_2           0x0a54
#define IDLABEL_DEBUGRIOMDETIAL_5_B_2           0x0a55
#define IDLABEL_DEBUGRIOMDETIAL_6_B_2           0x0a56
#define IDLABEL_DEBUGRIOMDETIAL_7_B_2           0x0a57
#define IDLABEL_DEBUGRIOMDETIAL_8_B_2           0x0a58
#define IDLABEL_DEBUGRIOMDETIAL_9_B_2           0x0a59
#define IDLABEL_DEBUGRIOMDETIAL_10_B_2          0x0a5a
#define IDLABEL_DEBUGRIOMDETIAL_11_B_2          0x0a5b
#define IDLABEL_DEBUGRIOMDETIAL_12_B_2          0x0a5c
#define IDLABEL_DEBUGRIOMDETIAL_13_B_2          0x0a5d
#define IDLABEL_DEBUGRIOMDETIAL_14_B_2          0x0a5e
#define IDLABEL_DEBUGRIOMDETIAL_15_B_2          0x0a5f
#define IDLABEL_DEBUGRIOMDETIAL_16_B_2          0x0a20
#define IDLABEL_DEBUGRIOMDETIAL_17_B_2          0x0a61
#define IDLABEL_DEBUGRIOMDETIAL_18_B_2          0x0a62
#define IDLABEL_DEBUGRIOMDETIAL_19_B_2          0x0a63
#define IDLABEL_DEBUGRIOMDETIAL_20_B_2          0x0a64
#define IDLABEL_DEBUGRIOMDETIAL_21_B_2          0x0a65
#define IDLABEL_DEBUGRIOMDETIAL_22_B_2          0x0a66
#define IDLABEL_DEBUGRIOMDETIAL_23_B_2          0x0a67
#define IDLABEL_DEBUGRIOMDETIAL_24_B_2          0x0a68

#define IDLABEL_DEBUGRIOMDETIAL_0_3            0x0b10
#define IDLABEL_DEBUGRIOMDETIAL_1_3            0x0b11
#define IDLABEL_DEBUGRIOMDETIAL_2_3            0x0b12
#define IDLABEL_DEBUGRIOMDETIAL_3_3            0x0b13
#define IDLABEL_DEBUGRIOMDETIAL_4_3            0x0b14
#define IDLABEL_DEBUGRIOMDETIAL_5_3            0x0b15
#define IDLABEL_DEBUGRIOMDETIAL_6_3            0x0b16
#define IDLABEL_DEBUGRIOMDETIAL_7_3            0x0b17
#define IDLABEL_DEBUGRIOMDETIAL_8_3            0x0b18
#define IDLABEL_DEBUGRIOMDETIAL_9_3            0x0b19
#define IDLABEL_DEBUGRIOMDETIAL_10_3           0x0b1a
#define IDLABEL_DEBUGRIOMDETIAL_11_3           0x0b1b
#define IDLABEL_DEBUGRIOMDETIAL_12_3           0x0b1c
#define IDLABEL_DEBUGRIOMDETIAL_13_3           0x0b1d
#define IDLABEL_DEBUGRIOMDETIAL_14_3           0x0b1e
#define IDLABEL_DEBUGRIOMDETIAL_15_3           0x0b1f
#define IDLABEL_DEBUGRIOMDETIAL_16_3           0x0b20
#define IDLABEL_DEBUGRIOMDETIAL_17_3           0x0b21
#define IDLABEL_DEBUGRIOMDETIAL_18_3           0x0b22
#define IDLABEL_DEBUGRIOMDETIAL_19_3           0x0b23
#define IDLABEL_DEBUGRIOMDETIAL_20_3           0x0b24
#define IDLABEL_DEBUGRIOMDETIAL_21_3           0x0b25
#define IDLABEL_DEBUGRIOMDETIAL_22_3           0x0b26
#define IDLABEL_DEBUGRIOMDETIAL_23_3           0x0b27
#define IDLABEL_DEBUGRIOMDETIAL_24_3           0x0b28

#define IDLABEL_DEBUGRIOMDETIAL_0_A_3           0x0b30
#define IDLABEL_DEBUGRIOMDETIAL_1_A_3           0x0b31
#define IDLABEL_DEBUGRIOMDETIAL_2_A_3           0x0b32
#define IDLABEL_DEBUGRIOMDETIAL_3_A_3           0x0b33
#define IDLABEL_DEBUGRIOMDETIAL_4_A_3           0x0b34
#define IDLABEL_DEBUGRIOMDETIAL_5_A_3           0x0b35
#define IDLABEL_DEBUGRIOMDETIAL_6_A_3           0x0b36
#define IDLABEL_DEBUGRIOMDETIAL_7_A_3           0x0b37
#define IDLABEL_DEBUGRIOMDETIAL_8_A_3           0x0b38
#define IDLABEL_DEBUGRIOMDETIAL_9_A_3           0x0b39
#define IDLABEL_DEBUGRIOMDETIAL_10_A_3          0x0b3a
#define IDLABEL_DEBUGRIOMDETIAL_11_A_3          0x0b3b
#define IDLABEL_DEBUGRIOMDETIAL_12_A_3          0x0b3c
#define IDLABEL_DEBUGRIOMDETIAL_13_A_3          0x0b3d
#define IDLABEL_DEBUGRIOMDETIAL_14_A_3          0x0b3e
#define IDLABEL_DEBUGRIOMDETIAL_15_A_3          0x0b3f
#define IDLABEL_DEBUGRIOMDETIAL_16_A_3          0x0b40
#define IDLABEL_DEBUGRIOMDETIAL_17_A_3          0x0b41
#define IDLABEL_DEBUGRIOMDETIAL_18_A_3          0x0b42
#define IDLABEL_DEBUGRIOMDETIAL_19_A_3          0x0b43
#define IDLABEL_DEBUGRIOMDETIAL_20_A_3          0x0b44
#define IDLABEL_DEBUGRIOMDETIAL_21_A_3          0x0b45
#define IDLABEL_DEBUGRIOMDETIAL_22_A_3          0x0b46
#define IDLABEL_DEBUGRIOMDETIAL_23_A_3          0x0b47
#define IDLABEL_DEBUGRIOMDETIAL_24_A_3          0x0b48

#define IDLABEL_DEBUGRIOMDETIAL_0_B_3           0x0b50
#define IDLABEL_DEBUGRIOMDETIAL_1_B_3           0x0b51
#define IDLABEL_DEBUGRIOMDETIAL_2_B_3           0x0b52
#define IDLABEL_DEBUGRIOMDETIAL_3_B_3           0x0b53
#define IDLABEL_DEBUGRIOMDETIAL_4_B_3           0x0b54
#define IDLABEL_DEBUGRIOMDETIAL_5_B_3           0x0b55
#define IDLABEL_DEBUGRIOMDETIAL_6_B_3           0x0b56
#define IDLABEL_DEBUGRIOMDETIAL_7_B_3           0x0b57
#define IDLABEL_DEBUGRIOMDETIAL_8_B_3           0x0b58
#define IDLABEL_DEBUGRIOMDETIAL_9_B_3           0x0b59
#define IDLABEL_DEBUGRIOMDETIAL_10_B_3          0x0b5a
#define IDLABEL_DEBUGRIOMDETIAL_11_B_3          0x0b5b
#define IDLABEL_DEBUGRIOMDETIAL_12_B_3          0x0b5c
#define IDLABEL_DEBUGRIOMDETIAL_13_B_3          0x0b5d
#define IDLABEL_DEBUGRIOMDETIAL_14_B_3          0x0b5e
#define IDLABEL_DEBUGRIOMDETIAL_15_B_3          0x0b5f
#define IDLABEL_DEBUGRIOMDETIAL_16_B_3          0x0b20
#define IDLABEL_DEBUGRIOMDETIAL_17_B_3          0x0b61
#define IDLABEL_DEBUGRIOMDETIAL_18_B_3          0x0b62
#define IDLABEL_DEBUGRIOMDETIAL_19_B_3          0x0b63
#define IDLABEL_DEBUGRIOMDETIAL_20_B_3          0x0b64
#define IDLABEL_DEBUGRIOMDETIAL_21_B_3          0x0b65
#define IDLABEL_DEBUGRIOMDETIAL_22_B_3          0x0b66
#define IDLABEL_DEBUGRIOMDETIAL_23_B_3          0x0b67
#define IDLABEL_DEBUGRIOMDETIAL_24_B_3          0x0b68




#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_1           0x0904
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_2           0x0905
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_3           0x0906
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_4           0x0907
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_5           0x0908
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_6           0x0909
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_7           0x090a
#define  IDLABEL_DEBUGRIOMDETIAL_SHOW_8           0x090b
//#define  IDBTN_DEBUGRIOMDETIAL_BEFOREPAGE       0x0905
//#define  IDBTN_DEBUGRIOMDETIAL_NEXTPAGE         0x0906
#define  IDBTN_DEBUGRIOMDETIAL_RETURN             0x090c


#define DEBUGRIOMDE_MIN_PAGE 1
#define DEBUGRIOMDE_MAX_PAGE 8

 extern vector<CPage*>  g_PageVec;
class c_debugriomdetialpage : public CPage
{
     DECLEAR_MESSAGE_MAP(c_debugriomdetialpage)
public:
    c_debugriomdetialpage();
private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();

    void OnShow1ButtonDown();
    void OnShow1ButtonUp();
    void OnShow2ButtonDown();
    void OnShow2ButtonUp();
    void OnShow3ButtonDown();
    void OnShow3ButtonUp();
    void OnShow4ButtonDown();
    void OnShow4ButtonUp();
    void OnShow5ButtonDown();
    void OnShow5ButtonUp();
    void OnShow6ButtonDown();
    void OnShow6ButtonUp();
    void OnShow7ButtonDown();
    void OnShow7ButtonUp();
    void OnShow8ButtonDown();
    void OnShow8ButtonUp();
    void SetDIOState(int DIO_ID ,int DIO_state);
//    void OnUpButtonDown();
//    void OnUpButtonUp();
    unsigned int pageNo,formerPageNo;


};

#endif // C_DEBUGRIOMDETIALPAGE_H
