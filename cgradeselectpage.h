#ifndef CGRADESELECTPAGE_H
#define CGRADESELECTPAGE_H

#include "cpage.h"

//picture GradeSelect control id
#define ID_PICGS_BUTTON_GRADE1         0x1C01
#define ID_PICGS_BUTTON_GRADE2         0x1C02
#define ID_PICGS_BUTTON_GRADE3         0x1C03
#define ID_PICGS_BUTTON_GRADE4         0x1C04
#define ID_PICGS_BUTTON_GRADEALL       0x1C05

class CGradeSelectPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CGradeSelectPage)
public:
    CGradeSelectPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnGrade1Down();
    void OnGrade2Down();
    void OnGrade3Down();
    void OnGrade4Down();
    void OnGradeAllDown();
    void OnGrade1Up();
    void OnGrade2Up();
    void OnGrade3Up();
    void OnGrade4Up();
    void OnGradeAllUp();
};

#endif // CGRADESELECTPAGE_H
