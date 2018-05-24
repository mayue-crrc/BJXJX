#ifndef PSETTINGDATABASE_H
#define PSETTINGDATABASE_H

#define XML_NAME "./settingDataBase.xml"
#define XML_NAME_BAK "./settingDataBaseBak.xml"

#include <QObject>
#include <QMap>

class QFile;
class QString;

class PSettingDataBase : public QObject
{
	Q_OBJECT
public:

	static PSettingDataBase * getPSettingDataBaseInstance(void);
	
	~PSettingDataBase();

	int getLocoNum(void);

        void setLocoNum(int locoNum);

	bool isLocoASide(void);

	bool isLocoBSide(void);

	void setLocoASide(void);

	void setLocoBSide(void);

	double getRunningDistance(void);

	void setRunningDistance(double runningDistanceInput);

        void setTcuEnergyConsumption(double value);
        double getTcuEnergyConsumption(void);

        void setAcuEnergyConsumption(double value);
        double getAcuEnergyConsumption(void);

        void setRegEnergyConsumption(double value);
        double getRegEnergyConsumption(void);

	int getVigilance(void);

	void setVigilance(int vigilance);

	int getVigilanceSpeed(void);

	void setVigilanceSpeed(int vigilanceSpeed);

	void saveFile(void);

signals:

	void signalFinishLoadingXmlFile(void);

protected:

	PSettingDataBase(void);

private:

	void loadXMLFile(void);

	void initialize(void);

private:



        int m_currentLocoNum;

        QString m_currentLocoSide;

        double m_TcuEnergyConsumption;
        double m_AcuEnergyConsumption;
        double m_RegEnergyConsumption;
        double m_runningDistance;

	int vigilance;

	int vigilanceSpeed;

	static PSettingDataBase * pSettingDataBase;	

};


#endif

