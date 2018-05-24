#include <QString>
#include <QFile>
#include <QDomElement>
#include <QDomNode>
#include <QDomDocument>
#include <QDomNodeList>
#include <QDomAttr>
#include <QDomText>
#include <QTextStream>
#include <QDebug>
#include "psettingdatabase.h"

PSettingDataBase * PSettingDataBase::pSettingDataBase = 0;


PSettingDataBase* PSettingDataBase::getPSettingDataBaseInstance(void)
{
	if(0 == pSettingDataBase)
	{
		pSettingDataBase = new PSettingDataBase();
	}

	return pSettingDataBase;
}


PSettingDataBase::~PSettingDataBase()
{
	if(0 != pSettingDataBase)
	{
		delete pSettingDataBase;
		pSettingDataBase = 0;
	}
}


PSettingDataBase::PSettingDataBase(void):
m_currentLocoSide("A"),
m_currentLocoNum(0),
m_runningDistance(0),
m_TcuEnergyConsumption(0),
m_AcuEnergyConsumption(0),
m_RegEnergyConsumption(0)
{
    initialize();
}


int PSettingDataBase::getLocoNum(void)
{
        return m_currentLocoNum;
}


void PSettingDataBase::setLocoNum(int locoNum)
{

        m_currentLocoNum = locoNum;
}


bool PSettingDataBase::isLocoASide(void)
{
	bool isASide = false;

        if(m_currentLocoSide == "A")
	{
		isASide = true;
	}

	return isASide;
}


bool PSettingDataBase::isLocoBSide(void)
{
	bool isBSide = false;

        if(m_currentLocoSide == "B")
	{
		isBSide = true;
	}

	return isBSide;
}


void PSettingDataBase::setLocoASide(void)
{
        m_currentLocoSide = "A";
}


void PSettingDataBase::setLocoBSide(void)
{
        m_currentLocoSide = "B";
}


double PSettingDataBase::getRunningDistance(void)
{
        return m_runningDistance;
}


void PSettingDataBase::setRunningDistance(double runningDistanceInput)
{
        m_runningDistance = runningDistanceInput;
}


void PSettingDataBase::setTcuEnergyConsumption(double value)
{
    m_TcuEnergyConsumption = value;
}
double PSettingDataBase::getTcuEnergyConsumption(void)
{
    return m_TcuEnergyConsumption;
}

void PSettingDataBase::setAcuEnergyConsumption(double value)
{
    m_AcuEnergyConsumption = value;
}
double PSettingDataBase::getAcuEnergyConsumption(void)
{
    return m_AcuEnergyConsumption;
}

void PSettingDataBase::setRegEnergyConsumption(double value)
{
    m_RegEnergyConsumption = value;
}
double PSettingDataBase::getRegEnergyConsumption(void)
{
    return m_RegEnergyConsumption;
}



void PSettingDataBase::loadXMLFile(void)
{
	QFile xmlFile(XML_NAME);
	QFile xmlFileBak(XML_NAME_BAK);

	bool isNodeLegal = false;

	bool isXmlAvailable = false;

	if(xmlFile.open(QIODevice::ReadOnly))
	{
		QDomDocument xmlDocument;

		if(xmlDocument.setContent(&xmlFile))
		{
			isXmlAvailable = true;
		}

		if(!isXmlAvailable)
		{
			if(xmlFileBak.open(QIODevice::ReadOnly))
			{
				if(xmlDocument.setContent(&xmlFileBak))
				{
					isXmlAvailable = true;
				}
			}
		}

		if(isXmlAvailable)
		{
			QDomElement rootElement = xmlDocument.documentElement();
			QDomNode elementNode = rootElement.firstChild();

			QDomElement parameterElement;

			//get loco number

			if(!elementNode.isNull())
			{
				isNodeLegal = true;
				parameterElement = elementNode.toElement();
				QString locoString = parameterElement.text();
                                m_currentLocoNum = locoString.left(locoString.size() -1).toInt();
                                m_currentLocoSide = locoString.right(1);
			}
			else
			{
				isNodeLegal = false;
			}

			if(isNodeLegal)
			{
				//get running distance
				elementNode = elementNode.nextSibling();

				if(!elementNode.isNull())
				{
					isNodeLegal = true;
					parameterElement = elementNode.toElement();
                                        m_runningDistance = parameterElement.text().toDouble();
				}
				else
				{
					isNodeLegal = false;
				}
			}

                        if(isNodeLegal)
                        {
                                //get TcuEnergyConsumption
                                elementNode = elementNode.nextSibling();

                                if(!elementNode.isNull())
                                {
                                        isNodeLegal = true;
                                        parameterElement = elementNode.toElement();

                                        m_TcuEnergyConsumption = parameterElement.text().toDouble();

                                }
                                else
                                {
                                        isNodeLegal = false;
                                }
                        }

                        if(isNodeLegal)
                        {
                                //get acuEnergyConsumption
                                elementNode = elementNode.nextSibling();

                                if(!elementNode.isNull())
                                {
                                        isNodeLegal = true;
                                        parameterElement = elementNode.toElement();
                                        m_AcuEnergyConsumption = parameterElement.text().toDouble();
                                }
                                else
                                {
                                        isNodeLegal = false;
                                }
                        }

                        if(isNodeLegal)
                        {
                                //get regEnergyConsumption
                                elementNode = elementNode.nextSibling();

                                if(!elementNode.isNull())
                                {
                                        isNodeLegal = true;
                                        parameterElement = elementNode.toElement();
                                        m_RegEnergyConsumption = parameterElement.text().toDouble();
                                }
                                else
                                {
                                        isNodeLegal = false;
                                }
                        }


                }
		xmlFile.close();
	}

        //emit signalFinishLoadingXmlFile();
}


void PSettingDataBase::saveFile(void)
{

	QFile xmlFile(XML_NAME);
	if(xmlFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		QDomDocument xmlDocument;

		QDomElement rootElement = xmlDocument.createElement("SettingDataBase");

		xmlDocument.appendChild(rootElement);

		//write loco num with loco side
		QDomElement basicElement = xmlDocument.createElement("LocoNum");

		QDomText text;

                text = xmlDocument.createTextNode(QString("%1").arg(m_currentLocoNum) + m_currentLocoSide);

		basicElement.appendChild(text);

		rootElement.appendChild(basicElement);

		//write running distance
		basicElement = xmlDocument.createElement("RunningDistance");

                text = xmlDocument.createTextNode(QString("%1").arg(m_runningDistance));

		basicElement.appendChild(text);

		rootElement.appendChild(basicElement);

                //write TcuEnergyconsumption
                basicElement = xmlDocument.createElement("TcuEnergyConsumption");

                text = xmlDocument.createTextNode(QString("%1").arg(m_TcuEnergyConsumption));

                basicElement.appendChild(text);

                rootElement.appendChild(basicElement);

                //write TcuEnergyconsumption
                basicElement = xmlDocument.createElement("AcuEnergyConsumption");

                text = xmlDocument.createTextNode(QString("%1").arg(m_AcuEnergyConsumption));

                basicElement.appendChild(text);

                rootElement.appendChild(basicElement);

                //write TcuEnergyconsumption
                basicElement = xmlDocument.createElement("RegEnergyConsumption");

                text = xmlDocument.createTextNode(QString("%1").arg(m_RegEnergyConsumption));

                basicElement.appendChild(text);

                rootElement.appendChild(basicElement);


                QTextStream xmlFileStream(&xmlFile);

		xmlDocument.save(xmlFileStream, 4);

		xmlFile.close();

		if(QFile::exists(XML_NAME_BAK))
		{
			QFile::remove(XML_NAME_BAK);
		}

		QFile::copy(XML_NAME, XML_NAME_BAK);
	}
}


void PSettingDataBase::initialize(void)
{
	loadXMLFile();
}





