/********************************************************************************
** Form generated from reading UI file 'planeEditDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANEEDITDLG_H
#define UI_PLANEEDITDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaneEditDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *orientationTabWidget;
    QWidget *dipTab;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *dipDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *dipDirDoubleSpinBox;
    QCheckBox *upwardCheckBox;
    QWidget *normTab;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *nxDoubleSpinBox;
    QDoubleSpinBox *nyDoubleSpinBox;
    QDoubleSpinBox *nzDoubleSpinBox;
    QGroupBox *dimGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QDoubleSpinBox *wDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *hDoubleSpinBox;
    QGroupBox *centerGroupBox;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *cxAxisDoubleSpinBox;
    QToolButton *pickCenterToolButton;
    QDoubleSpinBox *cyAxisDoubleSpinBox;
    QDoubleSpinBox *czAxisDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlaneEditDlg)
    {
        if (PlaneEditDlg->objectName().isEmpty())
            PlaneEditDlg->setObjectName(QString::fromUtf8("PlaneEditDlg"));
        PlaneEditDlg->resize(300, 499);
        verticalLayout = new QVBoxLayout(PlaneEditDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        orientationTabWidget = new QTabWidget(PlaneEditDlg);
        orientationTabWidget->setObjectName(QString::fromUtf8("orientationTabWidget"));
        dipTab = new QWidget();
        dipTab->setObjectName(QString::fromUtf8("dipTab"));
        gridLayout_4 = new QGridLayout(dipTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(dipTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        dipDoubleSpinBox = new QDoubleSpinBox(dipTab);
        dipDoubleSpinBox->setObjectName(QString::fromUtf8("dipDoubleSpinBox"));
        dipDoubleSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        dipDoubleSpinBox->setDecimals(4);
        dipDoubleSpinBox->setMinimum(0.000000000000000);
        dipDoubleSpinBox->setMaximum(90.000000000000000);

        gridLayout_4->addWidget(dipDoubleSpinBox, 0, 1, 1, 1);

        label_4 = new QLabel(dipTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        dipDirDoubleSpinBox = new QDoubleSpinBox(dipTab);
        dipDirDoubleSpinBox->setObjectName(QString::fromUtf8("dipDirDoubleSpinBox"));
        dipDirDoubleSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        dipDirDoubleSpinBox->setDecimals(4);
        dipDirDoubleSpinBox->setMinimum(0.000000000000000);
        dipDirDoubleSpinBox->setMaximum(360.000000000000000);

        gridLayout_4->addWidget(dipDirDoubleSpinBox, 1, 1, 1, 1);

        upwardCheckBox = new QCheckBox(dipTab);
        upwardCheckBox->setObjectName(QString::fromUtf8("upwardCheckBox"));
        upwardCheckBox->setChecked(true);

        gridLayout_4->addWidget(upwardCheckBox, 2, 0, 1, 1);

        orientationTabWidget->addTab(dipTab, QString());
        normTab = new QWidget();
        normTab->setObjectName(QString::fromUtf8("normTab"));
        verticalLayout_2 = new QVBoxLayout(normTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nxDoubleSpinBox = new QDoubleSpinBox(normTab);
        nxDoubleSpinBox->setObjectName(QString::fromUtf8("nxDoubleSpinBox"));
        nxDoubleSpinBox->setPrefix(QString::fromUtf8("Nx = "));
        nxDoubleSpinBox->setDecimals(8);
        nxDoubleSpinBox->setMinimum(-1000000.000000000000000);
        nxDoubleSpinBox->setMaximum(1000000.000000000000000);

        verticalLayout_2->addWidget(nxDoubleSpinBox);

        nyDoubleSpinBox = new QDoubleSpinBox(normTab);
        nyDoubleSpinBox->setObjectName(QString::fromUtf8("nyDoubleSpinBox"));
        nyDoubleSpinBox->setPrefix(QString::fromUtf8("Ny = "));
        nyDoubleSpinBox->setDecimals(8);
        nyDoubleSpinBox->setMinimum(-1000000.000000000000000);
        nyDoubleSpinBox->setMaximum(1000000.000000000000000);

        verticalLayout_2->addWidget(nyDoubleSpinBox);

        nzDoubleSpinBox = new QDoubleSpinBox(normTab);
        nzDoubleSpinBox->setObjectName(QString::fromUtf8("nzDoubleSpinBox"));
        nzDoubleSpinBox->setPrefix(QString::fromUtf8("Nz = "));
        nzDoubleSpinBox->setDecimals(8);
        nzDoubleSpinBox->setMinimum(-1000000.000000000000000);
        nzDoubleSpinBox->setMaximum(1000000.000000000000000);

        verticalLayout_2->addWidget(nzDoubleSpinBox);

        orientationTabWidget->addTab(normTab, QString());

        verticalLayout->addWidget(orientationTabWidget);

        dimGroupBox = new QGroupBox(PlaneEditDlg);
        dimGroupBox->setObjectName(QString::fromUtf8("dimGroupBox"));
        dimGroupBox->setFlat(true);
        gridLayout_2 = new QGridLayout(dimGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(dimGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        wDoubleSpinBox = new QDoubleSpinBox(dimGroupBox);
        wDoubleSpinBox->setObjectName(QString::fromUtf8("wDoubleSpinBox"));
        wDoubleSpinBox->setDecimals(8);
        wDoubleSpinBox->setMinimum(0.000001000000000);
        wDoubleSpinBox->setMaximum(1000000.000000000000000);
        wDoubleSpinBox->setValue(10.000000000000000);

        gridLayout_2->addWidget(wDoubleSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(dimGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        hDoubleSpinBox = new QDoubleSpinBox(dimGroupBox);
        hDoubleSpinBox->setObjectName(QString::fromUtf8("hDoubleSpinBox"));
        hDoubleSpinBox->setDecimals(8);
        hDoubleSpinBox->setMinimum(0.000001000000000);
        hDoubleSpinBox->setMaximum(1000000.000000000000000);
        hDoubleSpinBox->setValue(10.000000000000000);

        gridLayout_2->addWidget(hDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(dimGroupBox);

        centerGroupBox = new QGroupBox(PlaneEditDlg);
        centerGroupBox->setObjectName(QString::fromUtf8("centerGroupBox"));
        centerGroupBox->setFlat(true);
        gridLayout_3 = new QGridLayout(centerGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cxAxisDoubleSpinBox = new QDoubleSpinBox(centerGroupBox);
        cxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("cxAxisDoubleSpinBox"));
        cxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        cxAxisDoubleSpinBox->setDecimals(8);
        cxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        cxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_3->addWidget(cxAxisDoubleSpinBox, 0, 1, 1, 1);

        pickCenterToolButton = new QToolButton(centerGroupBox);
        pickCenterToolButton->setObjectName(QString::fromUtf8("pickCenterToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccPointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        pickCenterToolButton->setIcon(icon);
        pickCenterToolButton->setCheckable(true);

        gridLayout_3->addWidget(pickCenterToolButton, 1, 0, 1, 1);

        cyAxisDoubleSpinBox = new QDoubleSpinBox(centerGroupBox);
        cyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("cyAxisDoubleSpinBox"));
        cyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        cyAxisDoubleSpinBox->setDecimals(8);
        cyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        cyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_3->addWidget(cyAxisDoubleSpinBox, 1, 1, 1, 1);

        czAxisDoubleSpinBox = new QDoubleSpinBox(centerGroupBox);
        czAxisDoubleSpinBox->setObjectName(QString::fromUtf8("czAxisDoubleSpinBox"));
        czAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        czAxisDoubleSpinBox->setDecimals(8);
        czAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        czAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_3->addWidget(czAxisDoubleSpinBox, 2, 1, 1, 1);


        verticalLayout->addWidget(centerGroupBox);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PlaneEditDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PlaneEditDlg);
        QObject::connect(buttonBox, SIGNAL(rejected()), PlaneEditDlg, SLOT(reject()));

        orientationTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PlaneEditDlg);
    } // setupUi

    void retranslateUi(QDialog *PlaneEditDlg)
    {
        PlaneEditDlg->setWindowTitle(QCoreApplication::translate("PlaneEditDlg", "Plane properties", nullptr));
        label_3->setText(QCoreApplication::translate("PlaneEditDlg", "dip", nullptr));
        label_4->setText(QCoreApplication::translate("PlaneEditDlg", "dip direction", nullptr));
#if QT_CONFIG(tooltip)
        upwardCheckBox->setToolTip(QCoreApplication::translate("PlaneEditDlg", "Whether the plane normal should point upward (Z+) or backward (Z-)", nullptr));
#endif // QT_CONFIG(tooltip)
        upwardCheckBox->setText(QCoreApplication::translate("PlaneEditDlg", "upward", nullptr));
        orientationTabWidget->setTabText(orientationTabWidget->indexOf(dipTab), QCoreApplication::translate("PlaneEditDlg", "Dip / dip direction", nullptr));
        orientationTabWidget->setTabText(orientationTabWidget->indexOf(normTab), QCoreApplication::translate("PlaneEditDlg", "Normal", nullptr));
        dimGroupBox->setTitle(QCoreApplication::translate("PlaneEditDlg", "Dimensions", nullptr));
        label->setText(QCoreApplication::translate("PlaneEditDlg", "width", nullptr));
#if QT_CONFIG(tooltip)
        wDoubleSpinBox->setToolTip(QCoreApplication::translate("PlaneEditDlg", "Plane width", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("PlaneEditDlg", "height", nullptr));
#if QT_CONFIG(tooltip)
        hDoubleSpinBox->setToolTip(QCoreApplication::translate("PlaneEditDlg", "Plane height", nullptr));
#endif // QT_CONFIG(tooltip)
        centerGroupBox->setTitle(QCoreApplication::translate("PlaneEditDlg", "Center", nullptr));
#if QT_CONFIG(tooltip)
        pickCenterToolButton->setToolTip(QCoreApplication::translate("PlaneEditDlg", "Pick the plane center (click again to cancel)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PlaneEditDlg: public Ui_PlaneEditDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANEEDITDLG_H
