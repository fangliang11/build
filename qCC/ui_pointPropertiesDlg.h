/********************************************************************************
** Form generated from reading UI file 'pointPropertiesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTPROPERTIESDLG_H
#define UI_POINTPROPERTIESDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_PointPropertiesDlg
{
public:
    QHBoxLayout *hboxLayout;
    QToolButton *pointPropertiesButton;
    QToolButton *pointPointDistanceButton;
    QToolButton *pointsAngleButton;
    QToolButton *rectZoneToolButton;
    QToolButton *saveLabelButton;
    QToolButton *razButton;
    QToolButton *closeButton;

    void setupUi(QDialog *PointPropertiesDlg)
    {
        if (PointPropertiesDlg->objectName().isEmpty())
            PointPropertiesDlg->setObjectName(QString::fromUtf8("PointPropertiesDlg"));
        PointPropertiesDlg->resize(234, 30);
        hboxLayout = new QHBoxLayout(PointPropertiesDlg);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        pointPropertiesButton = new QToolButton(PointPropertiesDlg);
        pointPropertiesButton->setObjectName(QString::fromUtf8("pointPropertiesButton"));
        pointPropertiesButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallPointProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPropertiesButton->setIcon(icon);

        hboxLayout->addWidget(pointPropertiesButton);

        pointPointDistanceButton = new QToolButton(PointPropertiesDlg);
        pointPointDistanceButton->setObjectName(QString::fromUtf8("pointPointDistanceButton"));
        pointPointDistanceButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallPointDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointPointDistanceButton->setIcon(icon1);

        hboxLayout->addWidget(pointPointDistanceButton);

        pointsAngleButton = new QToolButton(PointPropertiesDlg);
        pointsAngleButton->setObjectName(QString::fromUtf8("pointsAngleButton"));
        pointsAngleButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/smallPointsAngle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointsAngleButton->setIcon(icon2);

        hboxLayout->addWidget(pointsAngleButton);

        rectZoneToolButton = new QToolButton(PointPropertiesDlg);
        rectZoneToolButton->setObjectName(QString::fromUtf8("rectZoneToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectZoneToolButton->setIcon(icon3);

        hboxLayout->addWidget(rectZoneToolButton);

        saveLabelButton = new QToolButton(PointPropertiesDlg);
        saveLabelButton->setObjectName(QString::fromUtf8("saveLabelButton"));
        saveLabelButton->setText(QString::fromUtf8("..."));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveLabelButton->setIcon(icon4);

        hboxLayout->addWidget(saveLabelButton);

        razButton = new QToolButton(PointPropertiesDlg);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        razButton->setText(QString::fromUtf8("..."));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon5);

        hboxLayout->addWidget(razButton);

        closeButton = new QToolButton(PointPropertiesDlg);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setText(QString::fromUtf8("..."));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon6);

        hboxLayout->addWidget(closeButton);


        retranslateUi(PointPropertiesDlg);

        QMetaObject::connectSlotsByName(PointPropertiesDlg);
    } // setupUi

    void retranslateUi(QDialog *PointPropertiesDlg)
    {
        PointPropertiesDlg->setWindowTitle(QCoreApplication::translate("PointPropertiesDlg", "Points Properties", nullptr));
#if QT_CONFIG(tooltip)
        pointPropertiesButton->setToolTip(QCoreApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pointPropertiesButton->setStatusTip(QCoreApplication::translate("PointPropertiesDlg", "Select one point and display its information", "Display selected point properties"));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        pointPointDistanceButton->setToolTip(QCoreApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pointPointDistanceButton->setStatusTip(QCoreApplication::translate("PointPropertiesDlg", "Select 2 points and display segment information (length, etc.)", "Compute point to point distance"));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pointPointDistanceButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pointsAngleButton->setToolTip(QCoreApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pointsAngleButton->setStatusTip(QCoreApplication::translate("PointPropertiesDlg", "Select 3 points and display corresponding triangle information", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        rectZoneToolButton->setToolTip(QCoreApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        rectZoneToolButton->setStatusTip(QCoreApplication::translate("PointPropertiesDlg", "Define a rectangular 2D label", nullptr));
#endif // QT_CONFIG(statustip)
        rectZoneToolButton->setText(QCoreApplication::translate("PointPropertiesDlg", "2D zone", nullptr));
#if QT_CONFIG(tooltip)
        saveLabelButton->setToolTip(QCoreApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        saveLabelButton->setStatusTip(QCoreApplication::translate("PointPropertiesDlg", "Save current label (added to cloud children)", nullptr));
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class PointPropertiesDlg: public Ui_PointPropertiesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTPROPERTIESDLG_H
